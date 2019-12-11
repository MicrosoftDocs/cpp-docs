---
title: "C++ program termination"
ms.date: "12/10/2019"
helpviewer_keywords: ["terminating execution", "quitting applications", "exiting applications", "programs [C++], terminating"]
ms.assetid: fa0ba9de-b5f1-4e7b-aa65-e7932068b48c
---
# C++ program termination

In C++, you can exit a program in these ways:

- Call the [exit](exit-function.md) function.
- Call the [abort](abort-function.md) function.
- Execute a [return](return-statement-cpp.md) statement from `main`.

## exit function

The [exit](../c-runtime-library/reference/exit-exit-exit.md) function, declared in \<stdlib.h>, terminates a C++ program. The value supplied as an argument to `exit` is returned to the operating system as the program's return code or exit code. By convention, a return code of zero means that the program completed successfully. You can use the constants EXIT_FAILURE and EXIT_SUCCESS, also defined in \<stdlib.h>, to indicate success or failure of your program.

Issuing a **return** statement from the `main` function is equivalent to calling the `exit` function with the return value as its argument.

## abort function

The [abort](../c-runtime-library/reference/abort.md) function, also declared in the standard include file \<stdlib.h>, terminates a C++ program. The difference between `exit` and `abort` is that `exit` allows the C++ run-time termination processing to take place (global object destructors will be called), whereas `abort` terminates the program immediately. The `abort` function bypasses the normal destruction process for initialized global static objects. It also bypasses any special processing that was specified using the [atexit](../c-runtime-library/reference/atexit.md) function.

## atexit function

Use the [atexit](../c-runtime-library/reference/atexit.md) function to specify actions that execute prior to program termination. No global static objects initialized prior to the call to **atexit** are destroyed prior to execution of the exit-processing function.

## return statement in main

Issuing a [return](return-statement-cpp.md) statement from `main` is functionally equivalent to calling the `exit` function. Consider the following example:

```cpp
// return_statement.cpp
#include <stdlib.h>
int main()
{
    exit( 3 );
    return 3;
}
```

The `exit` and **return** statements in the preceding example are functionally identical. However, C++ requires that functions that have return types other than **void** return a value. The **return** statement allows you to return a value from `main`.

## Destruction of static objects

When you call `exit` or execute a **return** statement from `main`, static objects are destroyed in the reverse order of their initialization (after the call to `atexit` if one exists). The following example shows how such initialization and cleanup works.

### Example

In the following example, the static objects `sd1` and `sd2` are created and initialized before entry to `main`. After this program terminates using the **return** statement, first `sd2` is destroyed and then `sd1`. The destructor for the `ShowData` class closes the files associated with these static objects.

```cpp
// using_exit_or_return1.cpp
#include <stdio.h>
class ShowData {
public:
   // Constructor opens a file.
   ShowData( const char *szDev ) {
   errno_t err;
      err = fopen_s(&OutputDev, szDev, "w" );
   }

   // Destructor closes the file.
   ~ShowData() { fclose( OutputDev ); }

   // Disp function shows a string on the output device.
   void Disp( char *szData ) {
      fputs( szData, OutputDev );
   }
private:
   FILE *OutputDev;
};

//  Define a static object of type ShowData. The output device
//   selected is "CON" -- the standard output device.
ShowData sd1 = "CON";

//  Define another static object of type ShowData. The output
//   is directed to a file called "HELLO.DAT"
ShowData sd2 = "hello.dat";

int main() {
   sd1.Disp( "hello to default device\n" );
   sd2.Disp( "hello to file hello.dat\n" );
}
```

Another way to write this code is to declare the `ShowData` objects with block scope, allowing them to be destroyed when they go out of scope:

```cpp
int main() {
   ShowData sd1, sd2( "hello.dat" );

   sd1.Disp( "hello to default device\n" );
   sd2.Disp( "hello to file hello.dat\n" );
}
```


## See also

[main: Program Startup](main-program-startup.md)