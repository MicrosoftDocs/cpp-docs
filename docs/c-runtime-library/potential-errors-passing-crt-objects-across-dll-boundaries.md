---
title: "Potential Errors Passing CRT Objects Across DLL Boundaries"
description: "An overview of potential problems you may come across when passing Microsoft C runtime objects across a dynamic link library (DLL) boundary."
ms.date: 06/29/2022
ms.topic: "conceptual"
helpviewer_keywords: ["DLL conflicts [C++]"]
ms.assetid: c217ffd2-5d9a-4678-a1df-62a637a96460
---
# Potential errors passing CRT objects across DLL boundaries

Your code may have errors when you pass C Runtime (CRT) objects such as file handles, locales, and environment variables into or out of a DLL. Function calls across the DLL boundary can cause unexpected behavior if the DLL and any files that call into the DLL use different copies of the CRT libraries.

A related problem can occur when you allocate memory (either explicitly with `new` or `malloc`, or implicitly with `strdup`, `strstreambuf::str`, and so on) and then pass a pointer across a DLL boundary where it's freed. Such pointers can cause a memory access violation, or heap corruption, if the DLL and its consumers are using different copies of the CRT libraries.

Another symptom of this problem is an error in the output window during debugging such as `HEAP[]: Invalid Address specified to RtlValidateHeap(#,#)`

## Causes

Each copy of the CRT library has a separate and distinct state, kept in thread local storage by your app or DLL.

CRT objects such as file handles, environment variables, and locales are only valid for the copy of the CRT in the app or DLL where these objects were allocated or set. When a DLL and its clients use different copies of the CRT library, you can't expect these CRT objects to be used correctly when passed across the DLL boundary.

It's especially true of CRT versions before the Universal CRT in Visual Studio 2015 and later. There was a version-specific CRT library for every version of Visual Studio built with Visual Studio 2013 or earlier. Internal implementation details of the CRT, such as data structures and naming conventions, were different in each version. Dynamically linking code that was compiled for one version of the CRT to a different version of the CRT DLL has never been supported. Occasionally it would work, but because of luck rather than design.

Each copy of the CRT library has its own heap manager. It can cause heap corruption if you allocate memory in one CRT library and pass the pointer across a DLL boundary to be freed by a different copy of the CRT library. If your DLL passes CRT objects across the DLL boundary, or allocates memory that's freed outside the DLL, clients of the DLL must use the same copy of the CRT library as the DLL.

The DLL and its clients normally use the same copy of the CRT library only if both are linked at load time to the same version of the CRT DLL. Because the DLL version of the Universal CRT library used by Visual Studio 2015 and later is now a centrally deployed Windows component (`ucrtbase.dll`), it's the same for apps built with Visual Studio 2015 and later versions. However, even when the CRT code is identical, you can't give memory allocated in one heap to a component that uses a different heap.

## Example: Pass file handle across DLL boundary

### Description

This example passes a file handle across a DLL boundary.

The DLL and .exe files are built with `/MD`, so that they share a single copy of the CRT.

If you rebuild with `/MT` so that they use separate copies of the CRT, running the resulting `test1Main.exe` results in an access violation.

DLL source file `test1Dll.cpp`:

```cpp
// test1Dll.cpp
// compile with: cl /EHsc /W4 /MD /LD test1Dll.cpp
#include <stdio.h>
__declspec(dllexport) void writeFile(FILE *stream)
{
   char   s[] = "this is a string\n";
   fprintf( stream, "%s", s );
   fclose( stream );
}
```

Executable source file `test1Main.cpp`:

```cpp
// test1Main.cpp
// compile with: cl /EHsc /W4 /MD test1Main.cpp test1Dll.lib
#include <stdio.h>
#include <process.h>
void writeFile(FILE *stream);

int main(void)
{
   FILE  * stream;
   errno_t err = fopen_s( &stream, "fprintf.out", "w" );
   writeFile(stream);
   system( "type fprintf.out" );
}
```

```Output
this is a string
```

## Example: Pass environment variables across DLL boundary

### Description

This example passes environment variables across a DLL boundary.

DLL source file `test2Dll.cpp`:

```cpp
// test2Dll.cpp
// compile with: cl /EHsc /W4 /MT /LD test2Dll.cpp
#include <stdio.h>
#include <stdlib.h>

__declspec(dllexport) void readEnv()
{
   char *libvar;
   size_t libvarsize;

   /* Get the value of the MYLIB environment variable. */
   _dupenv_s( &libvar, &libvarsize, "MYLIB" );

   if( libvar != NULL )
      printf( "New MYLIB variable is: %s\n", libvar);
   else
      printf( "MYLIB has not been set.\n");
   free( libvar );
}
```

Executable source file `test2Main.cpp`:

```cpp
// test2Main.cpp
// compile with: cl /EHsc /W4 /MT test2Main.cpp test2dll.lib
#include <stdlib.h>
#include <stdio.h>

void readEnv();

int main( void )
{
   _putenv( "MYLIB=c:\\mylib;c:\\yourlib" );
   readEnv();
}
```

```Output
MYLIB has not been set.
```

If you build both the DLL and EXE files by using `/MD`, so that only one copy of the CRT is used, the program runs successfully and produces the following output:

```Output
New MYLIB variable is: c:\mylib;c:\yourlib
```

## See also

[C runtime (CRT) and C++ Standard Library (STL) `.lib` files](./crt-library-features.md)
