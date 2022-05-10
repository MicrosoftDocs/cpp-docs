---
title: "Walkthrough: Compile a C program on the command line"
description: "Walkthrough that shows how to create a Hello World C program."
ms.custom: "conceptual"
ms.date: 05/09/2022
helpviewer_keywords: ["command-line applications [C++], C programs", "Visual C, compiling", "compiling programs [C++]", "C program compiling [C++]"]
ms.assetid: 7e74cc2d-54b1-49de-b7ad-d3ae6b39ab8d
---
# Walkthrough: Compile a C program on the command line

The Visual Studio build tools include a C compiler that you can use to create everything from basic console programs to full Windows Desktop applications, mobile apps, and more. Microsoft C/C++ (MSVC) is a C and C++ compiler that, in its latest versions, conforms to some of the latest C language standards, including C11 and C17.

This walkthrough shows how to create a basic, "Hello, World"-style C program by using a text editor, and then compile it on the command line. If you'd rather work in C++ on the command line, see [Walkthrough: Compiling a Native C++ Program on the Command Line](walkthrough-compiling-a-native-cpp-program-on-the-command-line.md). If you'd like to try the Visual Studio IDE instead of using the command line, see [Walkthrough: Working with Projects and Solutions (C++)](../ide/walkthrough-working-with-projects-and-solutions-cpp.md) or [Using the Visual Studio IDE for C++ Desktop Development](../ide/using-the-visual-studio-ide-for-cpp-desktop-development.md).

## Prerequisites

To complete this walkthrough, you must have installed either Visual Studio or the Build Tools for Visual Studio and the optional Desktop development with C++ workload.

Visual Studio is a powerful integrated development environment that supports a full-featured editor, resource managers, debuggers, and compilers for many languages and platforms. For information on these features and how to download and install Visual Studio, including the free Visual Studio Community edition, see [Install Visual Studio](/visualstudio/install/install-visual-studio).

The Build Tools for Visual Studio version of Visual Studio installs only the command-line toolset, the compilers, tools, and libraries you need to build C and C++ programs. It's perfect for build labs or classroom exercises and installs relatively quickly. To install only the command-line toolset, download Build Tools for Visual Studio from the [Visual Studio downloads](https://visualstudio.microsoft.com/downloads/#build-tools-for-visual-studio-2022) page and run the installer. In the Visual Studio installer, select the **Desktop development with C++** workload (in older versions of Visual Studio, select the **C++ build tools** workload), and choose **Install**.

When you've installed the tools, there's another tool you'll use to build a C or C++ program on the command line. MSVC has complex requirements for the command-line environment to find the tools, headers, and libraries it uses. **You can't use MSVC in a plain command prompt window** without some preparation. You need a *developer command prompt* window, which is a regular command prompt window that has all the required environment variables set. Fortunately, Visual Studio installs shortcuts for you to launch developer command prompts that have the environment set up for command line builds. Unfortunately, the names of the developer command prompt shortcuts and where they're located are different in almost every version of Visual Studio and on different versions of Windows. Your first walkthrough task is to find the right shortcut to use.

> [!NOTE]
> A developer command prompt shortcut automatically sets the correct paths for the compiler and tools, and for any required headers and libraries. Some of these values are different for each build configuration. You must set these environment values yourself if you don't use one of the shortcuts. For more information, see [Use the MSVC toolset from the command line](./building-on-the-command-line.md). Because the build environment is complex, we strongly recommend you use a developer command prompt shortcut instead of building your own.

These instructions vary depending on which version of Visual Studio you're using. To see the documentation for your preferred version of Visual Studio, use the **Version** selector control. It's found at the top of the table of contents on this page.

::: moniker range="msvc-170"

## Open a developer command prompt in Visual Studio 2022

If you've installed Visual Studio 2022 on Windows 10 or later, open the Start menu, and choose **All apps**. Then, scroll down and open the **Visual Studio 2022** folder (not the Visual Studio 2022 app). Choose **Developer Command Prompt for VS 2022** to open the command prompt window.

::: moniker-end

::: moniker range="msvc-160"

## Open a developer command prompt in Visual Studio 2019

If you've installed Visual Studio 2019 on Windows 10 or later, open the Start menu, and choose **All apps**. Then, scroll down and open the **Visual Studio 2019** folder (not the Visual Studio 2019 app). Choose **Developer Command Prompt for VS 2019** to open the command prompt window.

::: moniker-end

::: moniker range="msvc-150"

## Open a developer command prompt in Visual Studio 2017

If you've installed Visual Studio 2017 on Windows 10 or later, open the Start menu, and choose **All apps**. Then, scroll down and open the **Visual Studio 2017** folder (not the Visual Studio 2017 app). Choose **Developer Command Prompt for VS 2017** to open the command prompt window.

::: moniker-end

::: moniker range="msvc-140"

## Open a developer command prompt in Visual Studio 2015

If you've installed Microsoft Visual C++ Build Tools 2015 on Windows 10 or later, open the Start menu, and choose **All apps**. Then, scroll down and open the **Visual C++ Build Tools** folder. Choose **Visual C++ 2015 x86 Native Tools Command Prompt** to open the command prompt window.

::: moniker-end

If you're using a different version of Windows, look in your Start menu or Start page for a Visual Studio tools folder that contains a developer command prompt shortcut. You can also use the Windows search function to search for "developer command prompt" and choose one that matches your installed version of Visual Studio. Use the shortcut to open the command prompt window.

Next, verify that the developer command prompt is set up correctly. In the command prompt window, enter `cl` (or `CL`, case doesn't matter for the compiler name, but it does matter for compiler options). The output should look something like this:

```Output
C:\Program Files (x86)\Microsoft Visual Studio\2017\Enterprise>cl
Microsoft (R) C/C++ Optimizing Compiler Version 19.10.25017 for x86
Copyright (C) Microsoft Corporation.  All rights reserved.

usage: cl [ option... ] filename... [ /link linkoption... ]
```

There may be differences in the current directory or version numbers, depending on the version of Visual Studio and any updates installed. If the above output is similar to what you see, then you're ready to build C or C++ programs at the command line.

> [!NOTE]
> If you get an error such as "'cl' is not recognized as an internal or external command, operable program or batch file," error C1034, or error LNK1104 when you run the **cl** command, then either you are not using a developer command prompt, or something is wrong with your installation of Visual Studio. You must fix this issue before you can continue.

If you can't find the developer command prompt shortcut, or if you get an error message when you enter `cl`, then your Visual Studio installation may have a problem. If you're using Visual Studio 2017 or later, try reinstalling the **Desktop development with C++** workload in the Visual Studio installer. For details, see [Install C++ support in Visual Studio](vscpp-step-0-installation.md). Or, reinstall the Build Tools from the [Visual Studio downloads](https://visualstudio.microsoft.com/downloads/) page. Don't go on to the next section until the `cl` command works. For more information about installing and troubleshooting Visual Studio, see [Install Visual Studio](/visualstudio/install/install-visual-studio).

> [!NOTE]
> Depending on the version of Windows on the computer and the system security configuration, you might have to right-click to open the shortcut menu for the developer command prompt shortcut and then choose **Run as Administrator** to successfully build and run the program that you create by following this walkthrough.

## Create a C source file and compile it on the command line

1. In the developer command prompt window, enter `cd c:\` to change the current working directory to the root of your C: drive. Next, enter `md c:\hello` to create a directory, and then enter `cd c:\hello` to change to that directory. This directory will hold your source file and the compiled program.

1. Enter `notepad hello.c` at the developer command prompt. In the Notepad alert dialog that pops up, choose **Yes** to create a new *`hello.c`* file in your working directory.

1. In Notepad, enter the following lines of code:

    ```C
    #include <stdio.h>

    int main()
    {
        printf("Hello, World! This is a native C program compiled on the command line.\n");
        return 0;
    }
    ```

1. On the Notepad menu bar, choose **File** > **Save** to save *`hello.c`* in your working directory.

1. Switch back to the developer command prompt window. Enter `dir` at the command prompt to list the contents of the *`c:\hello`* directory. You should see the source file *`hello.c`* in the directory listing, which looks something like:

    ```Output
    C:\hello>dir
     Volume in drive C has no label.
     Volume Serial Number is CC62-6545

     Directory of C:\hello

    10/02/2017  03:46 PM    <DIR>          .
    10/02/2017  03:46 PM    <DIR>          ..
    10/02/2017  03:36 PM               143 hello.c
                   1 File(s)            143 bytes
                   2 Dir(s)  514,900,566,016 bytes free

    ```

   The dates and other details will differ on your computer. If you don't see your source code file, *`hello.c`*, make sure you've changed to the *`c:\hello`* directory you created, and in Notepad, make sure that you saved your source file in this directory. Also make sure that you saved the source code with a *`.c`* file name extension, not a *`.txt`* extension.

1. To compile your program, enter `cl hello.c` at the developer command prompt.

   You can see the executable program name, hello.exe, in the lines of output information that the compiler displays:

    ```Output
    c:\hello>cl hello.c
    Microsoft (R) C/C++ Optimizing Compiler Version 19.10.25017 for x86
    Copyright (C) Microsoft Corporation.  All rights reserved.

    hello.c
    Microsoft (R) Incremental Linker Version 14.10.25017.0
    Copyright (C) Microsoft Corporation.  All rights reserved.

    /out:hello.exe
    hello.obj
    ```

   > [!NOTE]
   > If you get an error such as "'cl' is not recognized as an internal or external command, operable program or batch file," error C1034, or error LNK1104, your developer command prompt is not set up correctly. For information on how to fix this issue, go back to the **Open a developer command prompt** section.
   >
   > If you get a different compiler or linker error or warning, review your source code to correct any errors, then save it and run the compiler again. For information about specific errors, use the search box at the top of this page to look for the error number.

1. To run your program, enter `hello` at the command prompt.

   The program displays this text and then exits:

    ```Output
    Hello, World! This is a native C program compiled on the command line.
    ```

   Congratulations, you've compiled and run a C program by using the command line.

## Next steps

This "Hello, World" example is about as basic as a C program can get. Real world programs have header files and more source files, link in libraries, and do useful work.

You can use the steps in this walkthrough to build your own C code instead of typing the sample code shown. You can also build many C code sample programs that you find elsewhere. To compile a program that has more source code files, enter them all on the command line:

`cl file1.c file2.c file3.c`

The compiler outputs a program called *`file1.exe`*. To change the name to *`program1.exe`*, add an [/out](reference/out-output-file-name.md) linker option:

`cl file1.c file2.c file3.c /link /out:program1.exe`

And to catch more programming mistakes automatically, we recommend you compile by using either the [/W3](reference/compiler-option-warning-level.md) or [/W4](reference/compiler-option-warning-level.md) warning level option:

`cl /W4 file1.c file2.c file3.c /link /out:program1.exe`

The compiler, cl.exe, has many more options you can apply to build, optimize, debug, and analyze your code. For a quick list, enter `cl /?` at the developer command prompt. You can also compile and link separately and apply linker options in more complex build scenarios. For more information on compiler and linker options and usage, see  [C/C++ Building Reference](reference/c-cpp-building-reference.md).

You can use NMAKE and makefiles, or MSBuild and project files to configure and build more complex projects on the command line. For more information on using these tools, see [NMAKE Reference](reference/nmake-reference.md) and [MSBuild](msbuild-visual-cpp.md).

The C and C++ languages are similar, but not the same. The Microsoft C/C++ compiler (MSVC) uses a basic rule to determine which language to use when it compiles your code. By default, the MSVC compiler treats all files that end in *`.c`* as C source code, and all files that end in *`.cpp`* as C++ source code. To force the compiler to treat all files as C no matter the file name extension, use the [/TC](reference/tc-tp-tc-tp-specify-source-file-type.md) compiler option.

By default, MSVC is compatible with the ANSI C89 and ISO C99 standards, but not strictly conforming. In most cases, portable C code will compile and run as expected. The compiler provides optional support for the changes in ISO C11/C17. To compile with C11/C17 support, use the compiler flag **`/std:c11`** or **`/std:c17`**. C11/C17 support requires Windows SDK 10.0.20201.0 or later. Windows SDK 10.0.22000.0 or later is recommended. You can download the latest SDK from the [Windows SDK](https://developer.microsoft.com/windows/downloads/windows-sdk/) page. For more information, and instructions on how to install and use this SDK for C development, see [Install C11 and C17 support in Visual Studio](../overview/install-c17-support.md).

Certain library functions and POSIX function names are deprecated by MSVC. The functions are supported, but the preferred names have changed. For more information, see [Security Features in the CRT](../c-runtime-library/security-features-in-the-crt.md) and [Compiler Warning (level 3) C4996](../error-messages/compiler-warnings/compiler-warning-level-3-c4996.md).

## See also

[Walkthrough: Creating a Standard C++ Program (C++)](../windows/walkthrough-creating-a-standard-cpp-program-cpp.md)\
[C Language Reference](../c-language/c-language-reference.md)\
[Projects and build systems](projects-and-build-systems-cpp.md)\
[Compatibility](../c-runtime-library/compatibility.md)
