---
title: "C++ program termination"
description: "Learn about the standard ways to exit a C++-language program."
ms.date: 07/07/2022
helpviewer_keywords: ["terminating execution", "quitting applications", "exiting applications", "programs [C++], terminating"]
---
# C++ program termination

In C++, you can exit a program in these ways:

- Call the [`exit`](../c-runtime-library/reference/exit-exit-exit.md) function.
- Call the [`abort`](../c-runtime-library/reference/abort.md) function.
- Execute a [`return`](return-statement-cpp.md) statement from `main`.

## `exit` function

The [`exit`](../c-runtime-library/reference/exit-exit-exit.md) function, declared in \<stdlib.h>, terminates a C++ program. The value supplied as an argument to `exit` is returned to the operating system as the program's return code or exit code. By convention, a return code of zero means that the program completed successfully. You can use the constants `EXIT_FAILURE` and `EXIT_SUCCESS`, also defined in \<stdlib.h>, to indicate success or failure of your program.

## `abort` function

The [`abort`](../c-runtime-library/reference/abort.md) function, also declared in the standard include file \<stdlib.h>, terminates a C++ program. The difference between `exit` and `abort` is that `exit` allows the C++ runtime termination processing to take place (global object destructors get called). `abort` terminates the program immediately. The `abort` function bypasses the normal destruction process for initialized global static objects. It also bypasses any special processing that was specified using the [`atexit`](../c-runtime-library/reference/atexit.md) function.

**Microsoft-specific**: For Windows compatibility reasons, the Microsoft implementation of `abort` may allow DLL termination code to run in certain circumstances. For more information, see [`abort`](../c-runtime-library/reference/abort.md).

## `atexit` function

Use the [`atexit`](../c-runtime-library/reference/atexit.md) function to specify actions that execute before the program terminates. No global static objects initialized before the call to `atexit` are destroyed before execution of the exit-processing function.

## `return` statement in `main`

The **`return`** statement allows you to specify a return value from `main`. A [`return`](return-statement-cpp.md) statement in `main` first acts like any other `return` statement. Any automatic variables are destroyed. Then, `main` invokes `exit` with the return value as a parameter. Consider the following example:

```cpp
// return_statement.cpp
#include <stdlib.h>
struct S 
{
    int value;
};
int main()
{
    S s{ 3 };

    exit( 3 );
    // or
    return 3;
}
```

The `exit` and **`return`** statements in the preceding example have similar behavior. Both terminate the program and return a value of 3 to the operating system. The difference is that `exit` doesn't destroy the automatic variable `s`, while the `return` statement does.

Normally, C++ requires that functions that have return types other than **`void`** return a value. The `main` function is an exception; it can end without a **`return`** statement. In that case, it returns an implementation-specific value to the invoking process. (By default, MSVC returns 0.)

## Destruction of thread and static objects

When you call `exit` directly (or when it's called after a **`return`** statement from `main`), thread objects associated with the current thread are destroyed. Next, static objects are destroyed in the reverse order of their initialization (after calls to functions specified to `atexit`, if any). The following example shows how such initialization and cleanup works.

### Example

In the following example, the static objects `sd1` and `sd2` are created and initialized before entry to `main`. After this program terminates using the **`return`** statement, first `sd2` is destroyed and then `sd1`. The destructor for the `ShowData` class closes the files associated with these static objects.

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

Another way to write this code is to declare the `ShowData` objects with block scope, which implicitly destroys them when they go out of scope:

```cpp
int main() {
   ShowData sd1( "CON" ), sd2( "hello.dat" );

   sd1.Disp( "hello to default device\n" );
   sd2.Disp( "hello to file hello.dat\n" );
}
```

## See also

[`main` function and command-line arguments](main-function-command-line-args.md)
