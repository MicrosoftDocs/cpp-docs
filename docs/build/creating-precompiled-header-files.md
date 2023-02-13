---
description: "Learn more about: Precompiled header files"
title: "Precompiled Header Files"
ms.date: 06/29/2022
helpviewer_keywords: ["precompiled header files, creating", "PCH files, creating", "cl.exe compiler, precompiling code", ".pch files, creating"]
---
# Precompiled header files

When you create a new project in Visual Studio, a *precompiled header file* named *`pch.h`* is added to the project. (In Visual Studio 2017 and earlier, the file was called *`stdafx.h`*.) The purpose of the file is to speed up the build process. Any stable header files, for example Standard Library headers such as `<vector>`, should be included here. The precompiled header is compiled only when it, or any files it includes, are modified. If you only make changes in your project source code, the build will skip compilation for the precompiled header.

The compiler options for precompiled headers are [`/Y`](reference/y-precompiled-headers.md). In the project property pages, the options are located under **Configuration Properties** > **C/C++** > **Precompiled Headers**. You can choose to not use precompiled headers, and you can specify the header file name and the name and path of the output file.

## Custom precompiled code

For large projects that take significant time to build, you may want to consider creating custom precompiled files. The Microsoft C and C++ compilers provide options for precompiling any C or C++ code, including inline code. Using this performance feature, you can compile a stable body of code, store the compiled state of the code in a file, and, during subsequent compilations, combine the precompiled code with code that's still under development. Each later compilation is faster because the stable code doesn't need to be recompiled.

## When to precompile source code

Precompiled code is useful during the development cycle to reduce compilation time, especially if:

- You always use a large body of code that changes infrequently.

- Your program comprises multiple modules, all of which use a standard set of include files and the same compilation options. In this case, all include files can be precompiled into one precompiled header. For more information about newer ways to handle include files, see [Compare header units, modules, and precompiled headers](compare-inclusion-methods.md).

The first compilation (the one that creates the precompiled header file) takes a bit longer than subsequent compilations. Subsequent compilations can proceed more quickly by including the precompiled code.

You can precompile both C and C++ programs. In C++ programming, it's common practice to separate class interface information into header files. These header files can later be included in programs that use the class. By precompiling these headers, you can reduce the time a program takes to compile.

> [!NOTE]
> Although you can use only one precompiled header (*`.pch`*) file per source file, you can use multiple *`.pch`* files in a project.

## Two choices for precompiling code

You can precompile any C or C++ code; you're not limited to precompiling only header files.

Precompiling requires planning, but it offers much faster compilations if you precompile source code other than simple header files.

Precompile code when you know that your source files use common sets of header files, or when you want to include source code in your precompilation.

The precompiled-header options are [`/Yc` (Create Precompiled Header File)](reference/yc-create-precompiled-header-file.md) and [`/Yu` (Use Precompiled Header File)](reference/yu-use-precompiled-header-file.md). Use **`/Yc`** to create a precompiled header. When used with the optional [`hdrstop`](../preprocessor/hdrstop.md) pragma, **`/Yc`** lets you precompile both header files and source code. Select **`/Yu`** to use an existing precompiled header in the existing compilation. You can also use **`/Fp`** with the **`/Yc`** and **`/Yu`** options to provide an alternative name for the precompiled header.

The compiler option reference articles for **`/Yu`** and **`/Yc`** discuss how to access this functionality in the development environment.

## Precompiled header consistency rules

Because PCH files contain information about the machine environment and memory address information about the program, you should only use a PCH file on the machine where it was created.

## Consistency rules for per-file use of precompiled headers

The [`/Yu`](reference/yu-use-precompiled-header-file.md) compiler option lets you specify which PCH file to use.

When you use a PCH file, the compiler assumes the same compilation environment that was in effect when you created the PCH file, unless you specify otherwise. The compilation environment includes the compiler options, pragmas, and so on. If the compiler detects an inconsistency, it issues a warning and identifies the inconsistency where possible. Such warnings don't necessarily indicate a problem with the PCH file; they simply warn you of possible conflicts. Consistency requirements for PCH files are described in the following sections.

### Compiler option consistency

The following compiler options can trigger an inconsistency warning when using a PCH file:

- Macros created using the Preprocessor (**`/D`**) option must be the same between the compilation that created the PCH file and the current compilation. The state of defined constants isn't checked, but unpredictable results can occur if these macros change.

- PCH files don't work with the **`/E`** and **`/EP`** options.

- PCH files must be created using either the Generate Browse Info (**`/FR`**) option or the Exclude Local Variables (**`/Fr`**) option before subsequent compilations that use the PCH file can use these options.

### C 7.0-compatible (`/Z7`)

If this option is in effect when the PCH file is created, later compilations that use the PCH file can use the debugging information.

If the C 7.0-Compatible (**`/Z7`**) option isn't in effect when the PCH file is created, later compilations that use the PCH file and **`/Z7`** trigger a warning. The debugging information is placed in the current *`.obj`* file, and local symbols defined in the PCH file aren't available to the debugger.

### Include path consistency

A PCH file doesn't contain information about the header include path that was in effect when it was created. When you use a PCH file, the compiler always uses the header include path specified in the current compilation.

### Source file consistency

When you specify the Use Precompiled Header File (**`/Yu`**) option, the compiler ignores all preprocessor directives (including pragmas) that appear in the source code that will be precompiled. The compilation specified by such preprocessor directives must be the same as the compilation used for the Create Precompiled Header File (**`/Yc`**) option.

### Pragma consistency

Pragmas processed during the creation of a PCH file usually affect the file with which the PCH file is later used. The `comment` and `message` pragmas don't affect the remainder of the compilation.

These pragmas affect only the code within the PCH file; they don't affect code that later uses the PCH file:

:::row:::
   :::column span="":::
      `comment`\
      `linesize`
   :::column-end:::
   :::column span="":::
      `message`\
      `page`
   :::column-end:::
   :::column span="":::
      `pagesize`\
      `skip`
   :::column-end:::
   :::column span="":::
      `subtitle`\
      `title`
   :::column-end:::
:::row-end:::

These pragmas are retained as part of a precompiled header, and affect the remainder of a compilation that uses the precompiled header:

:::row:::
   :::column span="":::
      `alloc_text`\
      `auto_inline`\
      `check_stack`\
      `code_seg`\
      `data_seg`
   :::column-end:::
   :::column span="":::
      `function`\
      `include_alias`\
      `init_seg`\
      `inline_depth`
   :::column-end:::
   :::column span="":::
      `inline_recursion`\
      `intrinsic`\
      `optimize`\
      `pack`
   :::column-end:::
   :::column span="":::
      `pointers_to_members`\
      `setlocale`\
      `vtordisp`\
      `warning`
   :::column-end:::
:::row-end:::

## Consistency rules for /Yc and /Yu

When you use a precompiled header created using **`/Yc`** or **`/Yu`**, the compiler compares the current compilation environment to the one that existed when you created the PCH file. Be sure to specify an environment consistent with the previous one (using consistent compiler options, pragmas, and so on) for the current compilation. If the compiler detects an inconsistency, it issues a warning and identifies the inconsistency where possible. Such warnings don't necessarily indicate a problem with the PCH file; they simply warn you of possible conflicts. The following sections explain the consistency requirements for precompiled headers.

### Compiler option consistency

This table lists compiler options that might trigger an inconsistency warning when using a precompiled header:

| Option | Name | Rule |
|--|--|--|
| **`/D `**| Define constants and macros | Must be the same between the compilation that created the precompiled header and the current compilation. The state of defined constants isn't checked. However, unpredictable results can occur if your files depend on the values of the changed constants. |
| **`/E`** or **`/EP`** | Copy preprocessor output to standard output | Precompiled headers don't work with the **`/E`** or **`/EP`** option. |
| **`/Fr`** or **`/FR`** | Generate Microsoft Source Browser information | For the **`/Fr`** and **`/FR`** options to be valid with the **`/Yu`** option, they must also have been in effect when the precompiled header was created. Subsequent compilations that use the precompiled header also generate Source Browser information. Browser information is placed in a single *`.sbr`* file and is referenced by other files in the same manner as CodeView information. You can't override the placement of Source Browser information. |
| **`/GA`**, **`/GD`**, **`/GE`**, **`/Gw`**, or **`/GW`** | Windows protocol options | Must be the same between the compilation that created the precompiled header and the current compilation. The compiler emits a warning if these options differ. |
| **`/Zi`** | Generate complete debugging information | If this option is in effect when the precompiled header is created, subsequent compilations that use the precompilation can use that debugging information. If **`/Zi`** isn't in effect when the precompiled header is created, subsequent compilations that use the precompilation and the **`/Zi`** option trigger a warning. The debugging information is placed in the current object file, and local symbols defined in the precompiled header aren't available to the debugger. |

> [!NOTE]
> The precompiled header facility is intended for use only in C and C++ source files.

## Using precompiled headers in a project

Previous sections present an overview of precompiled headers: /Yc and /Yu, the /Fp option, and the [hdrstop](../preprocessor/hdrstop.md) pragma. This section describes a method for using the manual precompiled-header options in a project; it ends with an example makefile and the code that it manages.

For another approach to using the manual precompiled-header options in a project, study one of the makefiles located in the *`MFC\SRC`* directory that's created during the default setup of Visual Studio. These makefiles take a similar approach to the one presented in this section. They make greater use of Microsoft Program Maintenance Utility (NMAKE) macros, and offer greater control of the build process.

## PCH files in the build process

The code base of a software project is often contained in multiple C or C++ source files, object files, libraries, and header files. Typically, a makefile coordinates the combination of these elements into an executable file. The following figure shows the structure of a makefile that uses a precompiled header file. The NMAKE macro names and the file names in this diagram are consistent with the example code found in [Sample makefile for PCH](#sample-makefile-for-pch) and [Example code for PCH](#example-code-for-pch).

The figure uses three diagrammatic devices to show the flow of the build process. Named rectangles represent each file or macro; the three macros represent one or more files. Shaded areas represent each compile or link action. Arrows show which files and macros are combined during the compilation or linking process.

![Diagram showing example inputs and outputs of a makefile that uses a precompiled header file.](media/vc30ow1.gif)\
Structure of a makefile that uses a precompiled header file

Beginning at the top of the diagram, both `STABLEHDRS` and `BOUNDRY` are NMAKE macros in which you list files not likely to need recompilation. These files are compiled by the command string

`CL /c /W3 /Yc$(BOUNDRY) applib.cpp myapp.cpp`

only if the precompiled header file (*`STABLE.pch`*) doesn't exist or if you make changes to the files listed in the two macros. In either case, the precompiled header file will contain code only from the files listed in the `STABLEHDRS` macro. List the last file you want precompiled in the `BOUNDRY` macro.

The files you list in these macros can be either header files or C or C++ source files. (A single PCH file can't be used with both C and C++ sources.) You can use the **`hdrstop`** macro to stop precompilation at some point within the `BOUNDRY` file. For more information, see [`hdrstop`](../preprocessor/hdrstop.md).

Next in the diagram, *`APPLIB.obj`* represents the support code used in your final application. It's created from *`APPLIB.cpp`*, the files listed in the `UNSTABLEHDRS` macro, and precompiled code from the precompiled header.

*`MYAPP.obj`* represents your final application. It's created from *`MYAPP.cpp`*, the files listed in the `UNSTABLEHDRS` macro, and precompiled code from the precompiled header.

Finally, the executable file (*`MYAPP.EXE`*) is created by linking the files listed in the `OBJS` macro (*`APPLIB.obj`* and *`MYAPP.obj`*).

## Sample makefile for PCH

The following makefile uses macros and an `!IF`, `!ELSE`, `!ENDIF` flow-of-control command structure to simplify its adaptation to your project.

```NMAKE
# Makefile : Illustrates the effective use of precompiled
#            headers in a project
# Usage:     NMAKE option
# option:    DEBUG=[0|1]
#            (DEBUG not defined is equivalent to DEBUG=0)
#
OBJS = myapp.obj applib.obj
# List all stable header files in the STABLEHDRS macro.
STABLEHDRS = stable.h another.h
# List the final header file to be precompiled here:
BOUNDRY = stable.h
# List header files under development here:
UNSTABLEHDRS = unstable.h
# List all compiler options common to both debug and final
# versions of your code here:
CLFLAGS = /c /W3
# List all linker options common to both debug and final
# versions of your code here:
LINKFLAGS = /nologo
!IF "$(DEBUG)" == "1"
CLFLAGS   = /D_DEBUG $(CLFLAGS) /Od /Zi
LINKFLAGS = $(LINKFLAGS) /COD
LIBS      = slibce
!ELSE
CLFLAGS   = $(CLFLAGS) /Oselg /Gs
LINKFLAGS = $(LINKFLAGS)
LIBS      = slibce
!ENDIF
myapp.exe: $(OBJS)
    link $(LINKFLAGS) @<<
$(OBJS), myapp, NUL, $(LIBS), NUL;
<<
# Compile myapp
myapp.obj  : myapp.cpp $(UNSTABLEHDRS)  stable.pch
    $(CPP) $(CLFLAGS) /Yu$(BOUNDRY)    myapp.cpp
# Compile applib
applib.obj : applib.cpp $(UNSTABLEHDRS) stable.pch
    $(CPP) $(CLFLAGS) /Yu$(BOUNDRY)    applib.cpp
# Compile headers
stable.pch : $(STABLEHDRS)
    $(CPP) $(CLFLAGS) /Yc$(BOUNDRY)    applib.cpp myapp.cpp
```

Aside from the `STABLEHDRS`, `BOUNDRY`, and `UNSTABLEHDRS` macros shown in the figure "Structure of a Makefile That Uses a Precompiled Header File" in [PCH files in the build process](#pch-files-in-the-build-process), this makefile provides a `CLFLAGS` macro and a `LINKFLAGS` macro. You must use these macros to list compiler and linker options that apply whether you build a debug or final version of the application's executable file. There's also a `LIBS` macro where you list the libraries your project requires.

The makefile also uses `!IF`, `!ELSE`, `!ENDIF` to detect whether you define a `DEBUG` symbol on the NMAKE command line:

```NMAKE
NMAKE DEBUG=[1|0]
```

This feature makes it possible for you to use the same makefile during development and for the final versions of your program. Use `DEBUG=0` for the final versions. The following command lines are equivalent:

```NMAKE
NMAKE
NMAKE DEBUG=0
```

For more information on makefiles, see [NMAKE reference](reference/nmake-reference.md). Also see [MSVC compiler options](reference/compiler-options.md) and the [MSVC linker options](reference/linker-options.md).

## Example code for PCH

The following source files are used in the makefile described in [PCH files in the build process](#pch-files-in-the-build-process) and [Sample makefile for PCH](#sample-makefile-for-pch). The comments contain important information.

Source file `ANOTHER.H`:

```cpp
// ANOTHER.H : Contains the interface to code that is not
//             likely to change.
//
#ifndef __ANOTHER_H
#define __ANOTHER_H
#include<iostream>
void savemoretime( void );
#endif // __ANOTHER_H
```

Source file `STABLE.H`:

```cpp
// STABLE.H : Contains the interface to code that is not likely
//            to change. List code that is likely to change
//            in the makefile's STABLEHDRS macro.
//
#ifndef __STABLE_H
#define __STABLE_H
#include<iostream>
void savetime( void );
#endif // __STABLE_H
```

Source file `UNSTABLE.H`:

```cpp
// UNSTABLE.H : Contains the interface to code that is
//              likely to change. As the code in a header
//              file becomes stable, remove the header file
//              from the makefile's UNSTABLEHDR macro and list
//              it in the STABLEHDRS macro.
//
#ifndef __UNSTABLE_H
#define __UNSTABLE_H
#include<iostream>
void notstable( void );
#endif // __UNSTABLE_H
```

Source file `APPLIB.CPP`:

```cpp
// APPLIB.CPP : This file contains the code that implements
//              the interface code declared in the header
//              files STABLE.H, ANOTHER.H, and UNSTABLE.H.
//
#include"another.h"
#include"stable.h"
#include"unstable.h"
using namespace std;
// The following code represents code that is deemed stable and
// not likely to change. The associated interface code is
// precompiled. In this example, the header files STABLE.H and
// ANOTHER.H are precompiled.
void savetime( void )
    { cout << "Why recompile stable code?\n"; }
void savemoretime( void )
    { cout << "Why, indeed?\n\n"; }
// The following code represents code that is still under
// development. The associated header file is not precompiled.
void notstable( void )
    { cout << "Unstable code requires"
            << " frequent recompilation.\n";
    }
```

Source file `MYAPP.CPP`:

```cpp
// MYAPP.CPP : Sample application
//             All precompiled code other than the file listed
//             in the makefile's BOUNDRY macro (stable.h in
//             this example) must be included before the file
//             listed in the BOUNDRY macro. Unstable code must
//             be included after the precompiled code.
//
#include"another.h"
#include"stable.h"
#include"unstable.h"
int main( void )
{
    savetime();
    savemoretime();
    notstable();
}
```

## See also

[Compare header units, modules, and precompiled headers](compare-inclusion-methods.md)\
[C/C++ building reference](reference/c-cpp-building-reference.md)\
[MSVC compiler options](reference/compiler-options.md)
[Overview of modules in C++](../cpp/modules-cpp.md)\
[Tutorial: Import the C++ standard library using modules](../cpp/tutorial-import-stl-named-module.md)\
[Walkthrough: Build and import header units in your Visual C++ projects](walkthrough-header-units.md)\
[Walkthrough: Import STL libraries as header units](walkthrough-import-stl-header-units.md#approach1)
