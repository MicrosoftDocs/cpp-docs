---
title: "main function and command-line arguments (C++)"
description: "The main function is the entry point for a C++ program."
ms.date: "01/15/2019"
ms.assetid: c6568ee6-40ab-4ae8-aa44-c99e232f64ac
no-loc: [main, wmain, inline, static, _tmain, void, exit, argc, argv, envp, CreateProcess, GetModuleFileName, char, wchar_t, extern]
---
# main function and command-line arguments

All C++ programs must have a `main` function. If you try to compile a C++ *.exe* project without a main function, the compiler will raise an error. (Dynamic-link libraries and static libraries don't have a `main` function.) The `main` function is where your source code begins execution, but before a program enters the `main` function, all static class members without explicit initializers are set to zero. In Microsoft C++, global static objects are also initialized before entry to `main`. Several restrictions apply to the `main` function that do not apply to any other C++ functions. The `main` function:

- Cannot be overloaded (see [Function Overloading](function-overloading.md)).
- Cannot be declared as **inline**.
- Cannot be declared as **static**.
- Cannot have its address taken.
- Cannot be called.

The main function doesn't have a declaration, because it's built into the language. If it did, the declaration syntax for `main` would look like this:

```cpp
int main();
int main(int argc, char *argv[], char *envp[]);
```

**Microsoft Specific**

If your source files use Unicode wide characters, you can use `wmain`, which is the wide-character version of `main`. The declaration syntax for `wmain` is as follows:

```cpp
int wmain( );
int wmain(int argc, wchar_t *argv[], wchar_t *envp[]);
```

You can also use `_tmain`, which is defined in tchar.h. `_tmain` resolves to `main` unless _UNICODE is defined. In that case, `_tmain` resolves to `wmain`.

If no return value is specified, the compiler supplies a return value of zero. Alternatively, the `main` and `wmain` functions can be declared as returning **void** (no return value). If you declare `main` or `wmain` as returning **void**, you cannot return an exit code to the parent process or operating system by using a [return](../cpp/return-statement-in-program-termination-cpp.md) statement. To return an exit code when `main` or `wmain` is declared as **void**, you must use the [exit](../cpp/exit-function.md) function.

**END Microsoft Specific**

## Command line arguments

The arguments for `main` or `wmain` allow convenient command-line parsing of arguments and, optionally, access to environment variables. The types for `argc` and `argv` are defined by the language. The names `argc`, `argv`, and `envp` are traditional, but you can name them whatever you like.

```cpp
int main( int argc, char* argv[], char* envp[]);
int wmain( int argc, wchar_t* argv[], wchar_t* envp[]);
```

The argument definitions are as follows:

*argc*<br/>
An integer that contains the count of arguments that follow in *argv*. The *argc* parameter is always greater than or equal to 1.

*argv*<br/>
An array of null-terminated strings representing command-line arguments entered by the user of the program. By convention, `argv[0]` is the command with which the program is invoked, `argv[1]` is the first command-line argument, and so on, until `argv[argc]`, which is always NULL. See [Customizing Command Line Processing](../cpp/customizing-cpp-command-line-processing.md) for information on suppressing command-line processing.

The first command-line argument is always `argv[1]` and the last one is `argv[argc - 1]`.

> [!NOTE]
> By convention, `argv[0]` is the command with which the program is invoked. However, it is possible to spawn a process using [CreateProcess](/windows/win32/api/libloaderapi/nf-libloaderapi-getmodulefilenamew) and if you use both the first and second arguments (*lpApplicationName* and *lpCommandLine*), `argv[0]` may not be the executable name; use [GetModuleFileName](/windows/win32/api/libloaderapi/nf-libloaderapi-getmodulefilenamew) to retrieve the executable name, and its fully-qualified path.

**Microsoft Specific**

*envp*<br/>
The *envp* array, which is a common extension in many UNIX systems, is used in Microsoft C++. It is an array of strings representing the variables set in the user's environment. This array is terminated by a NULL entry. It can be declared as an array of pointers to **char** (`char *envp[]`) or as a pointer to pointers to **char** (`char **envp`). If your program uses `wmain` instead of `main`, use the **wchar_t** data type instead of **char**. The environment block passed to `main` and `wmain` is a "frozen" copy of the current environment. If you subsequently change the environment via a call to `putenv` or `_wputenv`, the current environment (as returned by `getenv` or `_wgetenv` and the `_environ` or  `_wenviron` variable) will change, but the block pointed to by envp will not change. See [Customizing Command Line Processing](../cpp/customizing-cpp-command-line-processing.md) for information on suppressing environment processing. This argument is ANSI compatible in C, but not in C++.

**END Microsoft Specific**

### Example

The following example shows how to use the *argc*, *argv*, and *envp* arguments to `main`:

```cpp
// argument_definitions.cpp
// compile with: /EHsc
#include <iostream>
#include <string.h>

using namespace std;
int main( int argc, char *argv[], char *envp[] ) {
    int iNumberLines = 0;    // Default is no line numbers.

    // If /n is passed to the .exe, display numbered listing
    // of environment variables.

    if ( (argc == 2) && _stricmp( argv[1], "/n" ) == 0 )
         iNumberLines = 1;

    // Walk through list of strings until a NULL is encountered.
    for( int i = 0; envp[i] != NULL; ++i ) {
        if( iNumberLines )
            cout << i << ": " << envp[i] << "\n";
    }
}
```

## Parsing C++ command-Line arguments

**Microsoft Specific**

Microsoft C/C++ startup code uses the following rules when interpreting arguments given on the operating system command line:

- Arguments are delimited by white space, which is either a space or a tab.

- The caret character (^) is not recognized as an escape character or delimiter. The character is handled completely by the command-line parser in the operating system before being passed to the `argv` array in the program.

- A string surrounded by double quotation marks ("*string*") is interpreted as a single argument, regardless of white space contained within. A quoted string can be embedded in an argument.

- A double quotation mark preceded by a backslash (\\") is interpreted as a literal double quotation mark character (").

- Backslashes are interpreted literally, unless they immediately precede a double quotation mark.

- If an even number of backslashes is followed by a double quotation mark, one backslash is placed in the `argv` array for every pair of backslashes, and the double quotation mark is interpreted as a string delimiter.

- If an odd number of backslashes is followed by a double quotation mark, one backslash is placed in the `argv` array for every pair of backslashes, and the double quotation mark is "escaped" by the remaining backslash, causing a literal double quotation mark (") to be placed in `argv`.

### Example

The following program demonstrates how command-line arguments are passed:

```cpp
// command_line_arguments.cpp
// compile with: /EHsc
#include <iostream>

using namespace std;
int main( int argc,      // Number of strings in array argv
          char *argv[],   // Array of command-line argument strings
          char *envp[] )  // Array of environment variable strings
{
    int count;

    // Display each command-line argument.
    cout << "\nCommand-line arguments:\n";
    for( count = 0; count < argc; count++ )
         cout << "  argv[" << count << "]   "
                << argv[count] << "\n";
}
```

The following table shows example input and expected output, demonstrating the rules in the preceding list.

### Results of parsing command lines

|Command-Line Input|argv[1]|argv[2]|argv[3]|
|-------------------------|---------------|---------------|---------------|
|`"abc" d e`|`abc`|`d`|`e`|
|`a\\b d"e f"g h`|`a\\b`|`de fg`|`h`|
|`a\\\"b c d`|`a\"b`|`c`|`d`|
|`a\\\\"b c" d e`|`a\\b c`|`d`|`e`|

**END Microsoft Specific**

## Wildcard expansion

**Microsoft Specific**

You can use wildcards — the question mark (?) and asterisk (*) — to specify filename and path arguments on the command-line.

Command-line arguments are handled by a routine called `_setargv` (or `_wsetargv` in the wide-character environment), which by default does not expand wildcards into separate strings in the `argv` string array. For more information on enabling wildcard expansion, refer to [Expanding Wildcard Arguments](../c-language/expanding-wildcard-arguments.md).

**END Microsoft Specific**

## Customizing C++ command-line processing

**Microsoft Specific**

If your program does not take command-line arguments, you can save a small amount of space by suppressing use of the library routine that performs command-line processing. This routine is called `_setargv` and is described in [Wildcard Expansion](../cpp/wildcard-expansion.md). To suppress its use, define a routine that does nothing in the file containing the `main` function, and name it `_setargv`. The call to `_setargv` is then satisfied by your definition of `_setargv`, and the library version is not loaded.

Similarly, if you never access the environment table through the `envp` argument, you can provide your own empty routine to be used in place of `_setenvp`, the environment-processing routine. Just as with the `_setargv` function, `_setenvp` must be declared as **extern "C"**.

Your program might make calls to the `spawn` or `exec` family of routines in the C run-time library. If it does, you shouldn't suppress the environment-processing routine, since this routine is used to pass an environment from the parent process to the child process.

**END Microsoft Specific**

## See also

[Basic Concepts](../cpp/basic-concepts-cpp.md)
