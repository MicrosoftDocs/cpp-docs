---
title: "Linker Tools Error LNK2001"
ms.date: "05/17/2017"
f1_keywords: ["LNK2001"]
helpviewer_keywords: ["LNK2001"]
ms.assetid: dc1cf267-c984-486c-abd2-fd07c799f7ef
---
# Linker Tools Error LNK2001

> unresolved external symbol "*symbol*"

The compiled code makes a reference or call to *symbol*. The symbol isn't defined in any libraries or object files searched by the linker.

This error message is followed by fatal error [LNK1120](../../error-messages/tool-errors/linker-tools-error-lnk1120.md). To fix error LNK1120, first fix all LNK2001 and LNK2019 errors.

There are many ways to get LNK2001 errors. All of them involve a reference to a function or variable that the linker can't *resolve*, or find a definition for. The compiler can identify when your code doesn't *declare* a symbol, but not when it doesn't *define* one. That's because the definition may be in a different source file or library. If code refers to a symbol, but it's never defined, the linker generates an error.

### Coding issues

This error can be caused by:

- Mismatched case in your source code or module-definition (.def) file. For example, if you name a variable `var1` in one C++ source file and try to access it as `VAR1` in another, this error is generated. To fix this issue, use consistently spelled and cased names.

- A project that uses [function inlining](../../error-messages/tool-errors/function-inlining-problems.md). That's when you define the functions in a source file, rather than in a header file. Inlined functions can't be seen outside the source file that defines them. To fix this issue, define the inlined functions in the headers where they're declared.

- Calling a C function from a C++ program without using an `extern "C"` declaration for the C function. The compiler uses different internal symbol naming conventions for C and C++ code. The internal symbol name is what the linker looks for when resolving symbols. To fix this issue, use an `extern "C"` wrapper around all declarations of C functions used in your C++ code, which causes the compiler to use the C internal naming convention for those symbols. Compiler options [/Tp](../../build/reference/tc-tp-tc-tp-specify-source-file-type.md) and [/Tc](../../build/reference/tc-tp-tc-tp-specify-source-file-type.md) cause the compiler to compile files as C++ or C, respectively, no matter what the filename extension is. These options can cause internal function names different from what you expect.

- An attempt to reference functions or data that don't have external linkage. In C++, inline functions and `const` data have internal linkage unless explicitly specified as `extern`. To fix this issue, use explicit `extern` declarations on symbols referred to outside the defining source file.

- A [missing function body or variable](../../error-messages/tool-errors/missing-function-body-or-variable.md) definition. This error is common when you declare, but don't define, variables, functions, or classes in your code. The compiler only needs a function prototype or `extern` variable declaration to generate an object file without error, but the linker can't resolve a call to the function or a reference to the variable because there's no function code or variable space reserved. To fix this issue, make sure to define every referenced function and variable in a source file or library you link.

- A function call that uses return and parameter types or calling conventions that don't match the ones in the function definition. In C++ object files, [Name decoration](../../error-messages/tool-errors/name-decoration.md) encodes the calling convention, class or namespace scope, and return and parameter types of a function. The encoded string becomes part of the final decorated function name. This name is used by the linker to resolve, or match, calls to the function from other object files. To fix this issue, make sure the function declaration, definition, and calls all use the same scopes, types, and calling conventions.

- C++ code you call, when you include a function prototype in a class definition, but don't [include the implementation](../../error-messages/tool-errors/missing-function-body-or-variable.md) of the function. To fix this issue, be sure to provide a definition for all class members you call.

- An attempt to call a pure virtual function from an abstract base class. A pure virtual function has no base class implementation. To fix this issue, make sure all called virtual functions are implemented.

- Trying to use a variable declared within a function ([a local variable](../../error-messages/tool-errors/automatic-function-scope-variables.md)) outside the scope of that function. To fix this issue, remove the reference to the variable that isn't in scope, or move the variable to a higher scope.

- When you build a Release version of an ATL project, producing a message that CRT startup code is required. To fix this issue, do one of the following,

  - Remove `_ATL_MIN_CRT` from the list of preprocessor defines to allow CRT startup code to be included. For more information, see [General property page (Project)](../../build/reference/general-property-page-project.md).

  - If possible, remove calls to CRT functions that require CRT startup code. Instead, use their Win32 equivalents. For example, use `lstrcmp` instead of `strcmp`. Known functions that require CRT startup code are some of the string and floating point functions.

### Compilation and link issues

This error can occur:

- When the project is missing a reference to a library (.LIB) or object (.OBJ) file. To fix this issue, add a reference to the required library or object file to your project. For more information, see [lib Files as linker input](../../build/reference/dot-lib-files-as-linker-input.md).

- If you use the [/NODEFAULTLIB](../../build/reference/nodefaultlib-ignore-libraries.md) or [/Zl](../../build/reference/zl-omit-default-library-name.md) options. When you specify these options, libraries that contain required code aren't linked into the project unless you've explicitly included them. To fix this issue, explicitly include all the libraries you use on the link command line. If you see many missing CRT or Standard Library function names when you use these options, explicitly include the CRT and Standard Library DLLs or library files in the link.

- If you compile using the **/clr** option. There may be a missing reference to `.cctor`. For more information on how to fix this issue, see [Initialization of mixed assemblies](../../dotnet/initialization-of-mixed-assemblies.md).

- If you link to the release mode libraries when building a debug version of an application. Similarly, if you use options **/MTd** or **/MDd** or define `_DEBUG` and then link to the release libraries, you should expect many potential unresolved externals, among other problems. Linking a release mode build with the debug libraries also causes similar problems. To fix this issue, make sure you use the debug libraries in your debug builds, and retail libraries in your retail builds.

- If your code refers to a symbol from one library version, but you link a different version of the library. Generally, you can't mix object files or libraries that are built for different versions of the compiler. The libraries that ship in a new version may contain symbols that can't be found in the libraries included with previous versions, and vice-versa. To fix this issue, build all the object files and libraries with the same version of the compiler before linking them together.

- If library paths are out of date. The **Tools > Options > Projects > VC++ Directories** dialog, under the **Library files** selection, allows you to change the library search order. The Linker folder in the project's Property Pages dialog box may also contain paths that could be out of date.

- When a new Windows SDK is installed (perhaps to a different location). The library search order must be updated to point to the new location. Normally, you should put the path to new SDK include and lib directories in front of the default Visual C++ location. Also, a project containing embedded paths may still point to old paths that are valid, but out of date. Update the paths for new functionality added by the new version that's installed to a different location.

- If you build at the command line, and have created your own environment variables. Verify that the paths to tools, libraries, and header files go to a consistent version. For more information, see [Set the path and environment variables for command-line builds](../../build/setting-the-path-and-environment-variables-for-command-line-builds.md)

### Consistency issues

There's currently no standard for [C++ naming](../../error-messages/tool-errors/name-decoration.md) between compiler vendors, or even between different versions of a compiler. Linking object files compiled with other compilers may not produce the same naming scheme, and can cause error LNK2001.

[Mixing inline and non-inline compile options](../../error-messages/tool-errors/function-inlining-problems.md) on different modules can cause LNK2001. If a C++ library is created with function inlining turned on (**/Ob1** or **/Ob2**) but the corresponding header file describing the functions has inlining turned off (no `inline` keyword), this error occurs. To fix this issue, define the functions `inline` in the header file you include in other source files.

If you use the `#pragma inline_depth` compiler directive, make sure you've set a [value of 2 or greater](../../error-messages/tool-errors/function-inlining-problems.md), and make sure you also use the [/Ob1](../../build/reference/ob-inline-function-expansion.md) or [/Ob2](../../build/reference/ob-inline-function-expansion.md) compiler option.

This error can occur if you omit the LINK option /NOENTRY when you create a resource-only DLL. To fix this issue, add the /NOENTRY option to the link command.

This error can occur if you use incorrect /SUBSYSTEM or /ENTRY settings in your project. For example, if you write a console application and specify /SUBSYSTEM:WINDOWS, an unresolved external error is generated for `WinMain`. To fix this issue, make sure you match the options to the project type. For more information on these options and entry points, see the [/SUBSYSTEM](../../build/reference/subsystem-specify-subsystem.md) and [/ENTRY](../../build/reference/entry-entry-point-symbol.md) linker options.

### Exported symbol issues

This error occurs when an export listed in a .def file isn't found. It could be because the export doesn't exist, is spelled incorrectly, or uses C++ decorated names. A .def file doesn't take decorated names. To fix this issue, remove unneeded exports, and use `extern "C"` declarations for exported symbols.

## What is an unresolved external symbol?

A *symbol* is the name for a function or global variable used internally by a compiled object file or library. A symbol is *defined* in the object file where storage is allocated for a global variable, or for a function, where the compiled code for the function body is placed. An *external symbol* is a symbol that's *referenced*, that is, used or called in one object file, but defined in a different library or object file. An *exported symbol* is one that's made publicly available by the object file or library that defines it. The linker must *resolve*, or find the matching definition for, every external symbol referenced by an object file when it's linked into an application or DLL. The linker generates an error when it can't resolve an external symbol by finding a matching exported symbol in any of the linked files.

## Use the decorated name to find the error

The C++ compiler and linker use [Name Decoration](../../error-messages/tool-errors/name-decoration.md), also known as *name-mangling*, to encode extra information about the type of a variable or the return type, parameter types, scope, and calling convention of a function in the symbol name. This decorated name is the symbol name the linker searches for to resolve external symbols.

Because the extra information becomes part of the symbol name, a link error can result if the declaration of a function or variable doesn't exactly match the definition of the function or variable. This can happen even if the same header file is used in both the calling code and the defining code, if different compiler flags are used when compiling the source files. For example, you can get this error if your code is compiled to use the `__vectorcall` calling convention, but you link to a library that expects clients to call it using the default `__cdecl` or `__fastcall` calling convention. In this case, the symbols don't match because the calling conventions are different.

To help you find the cause of this kind of error, the linker error message shows you both the "friendly name," the name used in source code, and the decorated name (in parentheses) for the unresolved external symbol. You don't need to know how to translate the decorated name to be able to compare it with other decorated names. You can use command line tools that are included with the compiler to compare the expected symbol name and the actual symbol name:

- The [/EXPORTS](../../build/reference/dash-exports.md) and [/SYMBOLS](../../build/reference/symbols.md) options of the DUMPBIN command line tool can help you discover which symbols are defined in your .dll and object or library files. You can use this to verify that the exported decorated names match the decorated names the linker searches for.

In some cases, the linker can only report the decorated name for a symbol. You can use the UNDNAME command line tool to get the undecorated form of a decorated name.

## Additional resources

For more information about possible causes and solutions for LNK2001, see the Stack Overflow question [What is an undefined reference/unresolved external symbol error and how do I fix it?](https://stackoverflow.com/q/12573816/2002113).

