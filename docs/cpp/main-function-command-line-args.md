---
title: "`main` function and command-line arguments (C++)"
description: "The `main` function is the entry point for a C++ program."
ms.date: 12/16/2020
no-loc: [main, wmain, inline, static, _tmain, void, exit, argc, argv, envp, CreateProcess, GetModuleFileName, char, wchar_t, extern]
---
# `main` function and command-line arguments

All C++ programs must have a `main` function. If you try to compile a C++ program without a `main` function, the compiler raises an error. (Dynamic-link libraries and static libraries don't have a `main` function.) The `main` function is where your source code begins execution, but before a program enters the `main` function, all static class members without explicit initializers are set to zero. In Microsoft C++, global static objects are also initialized before entry to `main`. Several restrictions apply to the `main` function that don't apply to any other C++ functions. The `main` function:

- Can't be overloaded (see [Function overloading](./function-overloading.md)).
- Can't be declared as **`inline`**.
- Can't be declared as **`static`**.
- Can't have its address taken.
- Can't be called from your program.

## The `main` function signature

The `main` function doesn't have a declaration, because it's built into the language. If it did, the declaration syntax for `main` would look like this:

```cpp
int main();
int main(int argc, char *argv[]);
```

If no return value is specified in `main`, the compiler supplies a return value of zero.

## Standard command-line arguments

The arguments for `main` allow convenient command-line parsing of arguments. The types for `argc` and `argv` are defined by the language. The names `argc` and `argv` are traditional, but you can name them whatever you like.

The argument definitions are as follows:

*`argc`*\
An integer that contains the count of arguments that follow in *argv*. The *argc* parameter is always greater than or equal to 1.

*`argv`*\
An array of null-terminated strings representing command-line arguments entered by the user of the program. By convention, `argv[0]` is the command with which the program is invoked. `argv[1]` is the first command-line argument. The last argument from the command line is `argv[argc - 1]`, and `argv[argc]` is always NULL.

For information on how to suppress command-line processing, see [Customize C++ command-line processing](#customize).

> [!NOTE]
> By convention, `argv[0]` is the filename of the program. However, on Windows it's possible to spawn a process by using [`CreateProcess`](/windows/win32/api/libloaderapi/nf-libloaderapi-getmodulefilenamew). If you use both the first and second arguments (*`lpApplicationName`* and *`lpCommandLine`*), `argv[0]` may not be the executable name. You can use [`GetModuleFileName`](/windows/win32/api/libloaderapi/nf-libloaderapi-getmodulefilenamew) to retrieve the executable name, and its fully-qualified path.

## Microsoft-specific extensions

The following sections describe Microsoft-specific behavior.

## The `wmain` function and `_tmain` macro

If you design your source code to use Unicode wide characters, you can use the Microsoft-specific `wmain` entry point, which is the wide-character version of `main`. Here's the effective declaration syntax for `wmain`:

```cpp
int wmain();
int wmain(int argc, wchar_t *argv[]);
```

You can also use the Microsoft-specific `_tmain`, which is a preprocessor macro defined in *`tchar.h`*. `_tmain` resolves to `main` unless `_UNICODE` is defined. In that case, `_tmain` resolves to `wmain`. The `_tmain` macro and other macros that begin with `_t` are useful for code that must build separate versions for both narrow and wide character sets. For more information, see [Using generic-text mappings](../c-runtime-library/using-generic-text-mappings.md).

## Returning `void` from main

As a Microsoft extension, the `main` and `wmain` functions can be declared as returning **`void`** (no return value). This extension is also available in some other compilers, but its use isn't recommended. It's available for symmetry when `main` doesn't return a value.

If you declare `main` or `wmain` as returning **`void`**, you can't return an exit code to the parent process or the operating system by using a [`return`](./program-termination.md) statement. To return an exit code when `main` or `wmain` is declared as **`void`**, you must use the [`exit`](./program-termination.md) function.

## The `envp` command-line argument

The `main` or `wmain` signatures allow an optional Microsoft-specific extension for access to environment variables. This extension is also common in other compilers for Windows and UNIX systems. The name *`envp`* is traditional, but you can name the environment parameter whatever you like. Here are the effective declarations for the argument lists that include the environment parameter:

```cpp
int main(int argc, char* argv[], char* envp[]);
int wmain(int argc, wchar_t* argv[], wchar_t* envp[]);
```

*`envp`*\
The optional *`envp`* parameter is an array of strings representing the variables set in the user's environment. This array is terminated by a NULL entry. It can be declared as an array of pointers to **`char`** (`char *envp[]`) or as a pointer to pointers to **`char`** (`char **envp`). If your program uses `wmain` instead of `main`, use the **`wchar_t`** data type instead of **`char`**.

The environment block passed to `main` and `wmain` is a "frozen" copy of the current environment. If you later change the environment by making a call to `putenv` or `_wputenv`, the current environment (as returned by `getenv` or `_wgetenv` and the `_environ` or  `_wenviron` variable) will change, but the block pointed to by *`envp`* won't change. For more information on how to suppress environment processing, see [Customize C++ command-line processing](#customize). The *`envp`* argument is compatible with the C89 standard, but not with C++ standards.

### Example arguments to `main`

The following example shows how to use the *`argc`*, *`argv`*, and *`envp`* arguments to `main`:

```cpp
// argument_definitions.cpp
// compile with: /EHsc
#include <iostream>
#include <string.h>

using namespace std;
int main( int argc, char *argv[], char *envp[] )
{
    bool numberLines = false;    // Default is no line numbers.

    // If /n is passed to the .exe, display numbered listing
    // of environment variables.
    if ( (argc == 2) && _stricmp( argv[1], "/n" ) == 0 )
         numberLines = true;

    // Walk through list of strings until a NULL is encountered.
    for ( int i = 0; envp[i] != NULL; ++i )
    {
        if ( numberLines )
            cout << i << ": "; // Prefix with numbers if /n specified
        cout << envp[i] << "\n";
    }
}
```

## Parsing C++ command-line arguments

The command line parsing rules used by Microsoft C/C++ code are Microsoft-specific. The runtime startup code uses these rules when interpreting arguments given on the operating system command line:

- Arguments are delimited by white space, which is either a space or a tab.

- The first argument (`argv[0]`) is treated specially. It represents the program name. Because it must be a valid pathname, parts surrounded by double quote marks (**`"`**) are allowed. The double quote marks aren't included in the `argv[0]` output. The parts surrounded by double quote marks prevent interpretation of a space or tab character as the end of the argument. The later rules in this list don't apply.

- A string surrounded by double quote marks is interpreted as a single argument, which may contain white-space characters. A quoted string can be embedded in an argument. The caret (**`^`**) isn't recognized as an escape character or delimiter. Within a quoted string, a pair of double quote marks is interpreted as a single escaped double quote mark. If the command line ends before a closing double quote mark is found, then all the characters read so far are output as the last argument.

- A double quote mark preceded by a backslash (**`\"`**) is interpreted as a literal double quote mark (**`"`**).

- Backslashes are interpreted literally, unless they immediately precede a double quote mark.

- If an even number of backslashes is followed by a double quote mark, then one backslash (**`\`**) is placed in the `argv` array for every pair of backslashes (**`\\`**), and the double quote mark (**`"`**) is interpreted as a string delimiter.

- If an odd number of backslashes is followed by a double quote mark, then one backslash (**`\`**) is placed in the `argv` array for every pair of backslashes (**`\\`**). The double quote mark is interpreted as an escape sequence by the remaining backslash, causing a literal double quote mark (**`"`**) to be placed in `argv`.

### Example of command-line argument parsing

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

### Results of parsing command lines

The following table shows example input and expected output, demonstrating the rules in the preceding list.

| Command-line input | argv[1] | argv[2] | argv[3] |
|--|--|--|--|
| `"abc" d e` | `abc` | `d` | `e` |
| `a\\b d"e f"g h` | `a\\b` | `de fg` | `h` |
| `a\\\"b c d` | `a\"b` | `c` | `d` |
| `a\\\\"b c" d e` | `a\\b c` | `d` | `e` |
| `a"b"" c d` | `ab" c d` |  |  |

## Wildcard expansion

The Microsoft compiler optionally allows you to use *wildcard* characters, the question mark (**`?`**) and asterisk (**`*`**), to specify filename and path arguments on the command line.

Command-line arguments are handled by an internal routine in the runtime startup code, which by default doesn't expand wildcards into separate strings in the `argv` string array. You can enable wildcard expansion by including the *`setargv.obj`* file (*`wsetargv.obj`* file for `wmain`) in your **`/link`** compiler options or your **`LINK`** command line.

For more information on runtime startup linker options, see [Link options](../c-runtime-library/link-options.md).

## <a name="customize"/> Customize C++ command-line processing

If your program doesn't take command-line arguments, you can suppress the command-line processing routine to save a small amount of space. To suppress its use, include the *`noarg.obj`* file (for both `main` and `wmain`) in your **`/link`** compiler options or your **`LINK`** command line.

Similarly, if you never access the environment table through the *`envp`* argument, you can suppress the internal environment-processing routine. To suppress its use, include the *`noenv.obj`* file (for both `main` and `wmain`) in your **`/link`** compiler options or your **`LINK`** command line.

Your program might make calls to the `spawn` or `exec` family of routines in the C runtime library. If it does, you shouldn't suppress the environment-processing routine, since it's used to pass an environment from the parent process to the child process.

## See also

[Basic concepts](../cpp/basic-concepts-cpp.md)
