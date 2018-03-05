---
title: "Potential Errors Passing CRT Objects Across DLL Boundaries | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-standard-libraries"]
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: ["C++"]
helpviewer_keywords: ["DLL conflicts [C++]"]
ms.assetid: c217ffd2-5d9a-4678-a1df-62a637a96460
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
ms.workload: ["cplusplus"]
---
# Potential Errors Passing CRT Objects Across DLL Boundaries
When you pass C Run-time (CRT) objects such as file handles, locales, and environment variables into or out of a DLL (function calls across the DLL boundary), unexpected behavior can occur if the DLL, as well as the files calling into the DLL, use different copies of the CRT libraries.  
  
 A related problem can occur when you allocate memory (either explicitly with `new` or `malloc`, or implicitly with `strdup`, `strstreambuf::str`, and so on) and then pass a pointer across a DLL boundary to be freed. This can cause a memory access violation or heap corruption if the DLL and its users use different copies of the CRT libraries.  
  
 Another symptom of this problem can be an error in the output window during debugging such as:  
  
 HEAP[]: Invalid Address specified to RtlValidateHeap(#,#)  
  
## Causes  
 Each copy of the CRT library has a separate and distinct state, kept in thread local storage by your app or DLL. As such, CRT objects such as file handles, environment variables, and locales are only valid for the copy of the CRT in the app or DLL where these objects are allocated or set. When a DLL and its app clients use different copies of the CRT library, you cannot pass these CRT objects across the DLL boundary and expect them to be picked up correctly on the other side. This is particularly true of CRT versions before the Universal CRT in Visual Studio 2015 and later. There was a version-specific CRT library for every version of Visual Studio built with Visual C++ 2013 or earlier. Internal implementation details of the CRT, for example, its data structures and naming conventions, were different in each version. Dynamically linking code compiled for one version of the CRT to a different version of the CRT DLL has never been supported, though occasionally it would work, more by luck than by design.  
  
 Also, because each copy of the CRT library has its own heap manager, allocating memory in one CRT library and passing the pointer across a DLL boundary to be freed by a different copy of the CRT library is a potential cause for heap corruption. If you design your DLL so that it passes CRT objects across the boundary or allocates memory and expects it to be freed outside the DLL, you restrict the app clients of the DLL to use the same copy of the CRT library as the DLL. The DLL and its clients normally use the same copy of the CRT library only if both are linked at load time to the same version of the CRT DLL. Because the DLL version of the Universal CRT library used by Visual Studio 2015 and later on Windows 10 is now a centrally deployed Windows component, ucrtbase.dll, it is the same for apps built with Visual Studio 2015 and later versions. However, even when the CRT code is identical, you can't hand off memory allocated in one heap to a component that uses a different heap.  
  
## Example  
  
### Description  
 This example passes a file handle across a DLL boundary.  
  
 The DLL and .exe file are built with /MD, so they share a single copy of the CRT.  
  
 If you rebuild with /MT so that they use separate copies of the CRT, running the resulting test1Main.exe results in an access violation.  
  
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
  
## Example  
  
### Description  
 This example passes environment variables across a DLL boundary.  
  
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
  
 If both the DLL and .exe file are built with /MD so that only one copy of the CRT is used, the program runs successfully and produces the following output:  
  
```  
New MYLIB variable is: c:\mylib;c:\yourlib  
```  
  
## See Also  
 [CRT Library Features](../c-runtime-library/crt-library-features.md)