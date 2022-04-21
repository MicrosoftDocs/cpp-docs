---
title: "Walkthrough: Compiling a Native C++ Program on the Command Line"
description: "Use the Microsoft C++ compiler from a command prompt."
ms.custom: "conceptual"
ms.date: 03/25/2021
helpviewer_keywords: ["native code [C++]", "Visual C++, native code", "compiling programs [C++]", "command-line applications [C++], native"]
ms.assetid: b200cfd1-0440-498f-90ee-7ecf92492dc0
---
# Walkthrough: Compiling a Native C++ Program on the Command Line

Visual Studio includes a command-line C and C++ compiler. You can use it to create everything from basic console apps to Universal Windows Platform apps, Desktop apps, device drivers, and .NET components.

In this walkthrough, you create a basic, "Hello, World"-style C++ program by using a text editor, and then compile it on the command line. If you'd like to try the Visual Studio IDE instead of using the command line, see [Walkthrough: Working with Projects and Solutions (C++)](../ide/walkthrough-working-with-projects-and-solutions-cpp.md) or [Using the Visual Studio IDE for C++ Desktop Development](../ide/using-the-visual-studio-ide-for-cpp-desktop-development.md).

In this walkthrough, you can use your own C++ program instead of typing the one that's shown. Or, you can use a C++ code sample from another help article.

## Prerequisites

To complete this walkthrough, you must have installed either Visual Studio and the optional **Desktop development with C++** workload, or the command-line Build Tools for Visual Studio.

Visual Studio is an *integrated development environment* (IDE). It supports a full-featured editor, resource managers, debuggers, and compilers for many languages and platforms. Versions available include the free Visual Studio Community edition, and all can support C and C++ development. For information on how to download and install Visual Studio, see [Install C++ support in Visual Studio](vscpp-step-0-installation.md).

The Build Tools for Visual Studio installs only the command-line compilers, tools, and libraries you need to build C and C++ programs. It's perfect for build labs or classroom exercises and installs relatively quickly. To install only the command-line tools, look for Build Tools for Visual Studio on the [Visual Studio Downloads](https://visualstudio.microsoft.com/downloads/#build-tools-for-visual-studio-2022) page.

Before you can build a C or C++ program on the command line, verify that the tools are installed, and you can access them from the command line. Visual C++ has complex requirements for the command-line environment to find the tools, headers, and libraries it uses. **You can't use Visual C++ in a plain command prompt window** without doing some preparation. Fortunately, Visual C++ installs shortcuts for you to launch a developer command prompt that has the environment set up for command line builds. Unfortunately, the names of the developer command prompt shortcuts and where they're located are different in almost every version of Visual C++ and on different versions of Windows. Your first walkthrough task is finding the right one to use.

> [!NOTE]
> A developer command prompt shortcut automatically sets the correct paths for the compiler and tools, and for any required headers and libraries. You must set these environment values yourself if you use a regular **Command Prompt** window. For more information, see [Use the MSVC toolset from the command line](./building-on-the-command-line.md). We recommend you use a developer command prompt shortcut instead of building your own.

### Open a developer command prompt

1. If you have installed Visual Studio 2017 or later on Windows 10 or later, open the Start menu and choose **All apps**. Scroll down and open the **Visual Studio** folder (not the Visual Studio application). Choose **Developer Command Prompt for VS** to open the command prompt window.

   If you have installed Microsoft Visual C++ Build Tools 2015 on Windows 10 or later, open the **Start** menu and choose **All apps**. Scroll down and open the **Visual C++ Build Tools** folder. Choose **Visual C++ 2015 x86 Native Tools Command Prompt** to open the command prompt window.

   You can also use the Windows search function to search for "developer command prompt" and choose one that matches your installed version of Visual Studio. Use the shortcut to open the command prompt window.

1. Next, verify that the Visual C++ developer command prompt is set up correctly. In the command prompt window, enter `cl` and verify that the output looks something like this:

   ```Output
   C:\Program Files (x86)\Microsoft Visual Studio\2017\Enterprise>cl
   Microsoft (R) C/C++ Optimizing Compiler Version 19.10.25017 for x86
   Copyright (C) Microsoft Corporation.  All rights reserved.

   usage: cl [ option... ] filename... [ /link linkoption... ]
   ```

   There may be differences in the current directory or version numbers. These values depend on the version of Visual C++ and any updates installed. If the above output is similar to what you see, then you're ready to build C or C++ programs at the command line.

   > [!NOTE]
   > If you get an error such as "'cl' is not recognized as an internal or external command, operable program or batch file," error C1034, or error LNK1104 when you run the **`cl`** command, then either you are not using a developer command prompt, or something is wrong with your installation of Visual C++. You must fix this issue before you can continue.

   If you can't find the developer command prompt shortcut, or if you get an error message when you enter `cl`, then your Visual C++ installation may have a problem. Try reinstalling the Visual C++ component in Visual Studio, or reinstall the Microsoft Visual C++ Build Tools. Don't go on to the next section until the **`cl`** command works. For more information about installing and troubleshooting Visual C++, see [Install Visual Studio](/visualstudio/install/install-visual-studio).

   > [!NOTE]
   > Depending on the version of Windows on the computer and the system security configuration, you might have to right-click to open the shortcut menu for the developer command prompt shortcut and then choose **Run as administrator** to successfully build and run the program that you create by following this walkthrough.

### Create a Visual C++ source file and compile it on the command line

1. In the developer command prompt window, enter `md c:\hello` to create a directory, and then enter `cd c:\hello` to change to that directory. This directory is where both your source file and the compiled program get created.

1. Enter `notepad hello.cpp` in the command prompt window.

   Choose **Yes** when Notepad prompts you to create a new file. This step opens a blank Notepad window, ready for you to enter your code in a file named hello.cpp.

1. In Notepad, enter the following lines of code:

   ```cpp
   #include <iostream>
   using namespace std;
   int main()
   {
       cout << "Hello, world, from Visual C++!" << endl;
   }
   ```

   This code is a simple program that will write one line of text on the screen and then exit. To minimize errors, copy this code and paste it into Notepad.

1. Save your work! In Notepad, on the **File** menu, choose **Save**.

   Congratulations, you've created a C++ source file, hello.cpp, that is ready to compile.

1. Switch back to the developer command prompt window. Enter `dir` at the command prompt to list the contents of the c:\hello directory. You should see the source file hello.cpp in the directory listing, which looks something like:

   ```Output
   c:\hello>dir
    Volume in drive C has no label.
    Volume Serial Number is CC62-6545

    Directory of c:\hello

   05/24/2016  05:36 PM    <DIR>          .
   05/24/2016  05:36 PM    <DIR>          ..
   05/24/2016  05:37 PM               115 hello.cpp
                  1 File(s)            115 bytes
                  2 Dir(s)  571,343,446,016 bytes free

   ```

   The dates and other details will differ on your computer.

   > [!NOTE]
   > If you don't see your source code file, *`hello.cpp`*, make sure the current working directory in your command prompt is the *`C:\hello`* directory you created. Also make sure that this is the directory where you saved your source file. And make sure that you saved the source code with a *`.cpp`* file name extension, not a *`.txt`* extension. Your source file gets saved in the current directory as a *`.cpp`* file automatically if you open Notepad at the command prompt by using the **`notepad hello.cpp`** command. Notepad's behavior is different if you open it another way: By default, Notepad appends a *`.txt`* extension to new files when you save them. It also defaults to saving files in your *Documents* directory. To save your file with a *`.cpp`* extension in Notepad, choose **File** > **Save As**. In the **Save As** dialog, navigate to your *`C:\hello`* folder in the directory tree view control. Then use the **Save as type** dropdown control to select **All Files (\*.\*)**. Enter *`hello.cpp`* in the **File name** edit control, and then choose **Save** to save the file.

1. At the developer command prompt, enter `cl /EHsc hello.cpp` to compile your program.

   The cl.exe compiler generates an .obj file that contains the compiled code, and then runs the linker to create an executable program named hello.exe. This name appears in the lines of output information that the compiler displays. The output of the compiler should look something like:

   ```Output
   c:\hello>cl /EHsc hello.cpp
   Microsoft (R) C/C++ Optimizing Compiler Version 19.10.25017 for x86
   Copyright (C) Microsoft Corporation.  All rights reserved.

   hello.cpp
   Microsoft (R) Incremental Linker Version 14.10.25017.0
   Copyright (C) Microsoft Corporation.  All rights reserved.

   /out:hello.exe
   hello.obj
   ```

   > [!NOTE]
   > If you get an error such as "'cl' is not recognized as an internal or external command, operable program or batch file," error C1034, or error LNK1104, your developer command prompt is not set up correctly. For information on how to fix this issue, go back to the **Open a developer command prompt** section.

   > [!NOTE]
   > If you get a different compiler or linker error or warning, review your source code to correct any errors, then save it and run the compiler again. For information about specific errors, use the search box to look for the error number.

1. To run the hello.exe program, at the command prompt, enter `hello`.

   The program displays this text and exits:

   ```Output
   Hello, world, from Visual C++!
   ```

   Congratulations, you've compiled and run a C++ program by using the command-line tools.

## Next steps

This "Hello, World" example is about as simple as a C++ program can get. Real world programs usually have header files, more source files, and link to libraries.

You can use the steps in this walkthrough to build your own C++ code instead of typing the sample code shown. These steps also let you build many C++ code sample programs that you find elsewhere. You can put your source code and build your apps in any writeable directory. By default, the Visual Studio IDE creates projects in your user folder, in a *source\\repos* subfolder. Older versions may put projects in a *Documents\\Visual Studio \<version>\\Projects* folder.

To compile a program that has additional source code files, enter them all on the command line, like:

`cl /EHsc file1.cpp file2.cpp file3.cpp`

The `/EHsc` command-line option instructs the compiler to enable standard C++ exception handling behavior. Without it, thrown exceptions can result in undestroyed objects and resource leaks. For more information, see [/EH (Exception Handling Model)](reference/eh-exception-handling-model.md).

When you supply additional source files, the compiler uses the first input file to create the program name. In this case, it outputs a program called file1.exe. To change the name to program1.exe, add an [/out](reference/out-output-file-name.md) linker option:

`cl /EHsc file1.cpp file2.cpp file3.cpp /link /out:program1.exe`

And to catch more programming mistakes automatically, we recommend you compile by using either the [/W3](reference/compiler-option-warning-level.md) or [/W4](reference/compiler-option-warning-level.md) warning level option:

`cl /W4 /EHsc file1.cpp file2.cpp file3.cpp /link /out:program1.exe`

The compiler, cl.exe, has many more options. You can apply them to build, optimize, debug, and analyze your code. For a quick list, enter `cl /?` at the developer command prompt. You can also compile and link separately and apply linker options in more complex build scenarios. For more information on compiler and linker options and usage, see  [C/C++ Building Reference](reference/c-cpp-building-reference.md).

You can use NMAKE and makefiles, MSBuild and project files, or CMake, to configure and build more complex projects on the command line. For more information on using these tools, see [NMAKE Reference](reference/nmake-reference.md), [MSBuild](msbuild-visual-cpp.md), and [CMake projects in Visual Studio](cmake-projects-in-visual-studio.md).

The C and C++ languages are similar, but not the same. The MSVC compiler uses a simple rule to determine which language to use when it compiles your code. By default, the MSVC compiler treats files that end in *`.c`* as C source code, and files that end in *`.cpp`* as C++ source code. To force the compiler to treat all files as C++ independent of file name extension, use the [/TP](reference/tc-tp-tc-tp-specify-source-file-type.md) compiler option.

The MSVC compiler includes a C Runtime Library (CRT) that conforms to the ISO C99 standard, with minor exceptions. Portable code generally compiles and runs as expected. Certain obsolete library functions, and several POSIX function names, are deprecated by the MSVC compiler. The functions are supported, but the preferred names have changed. For more information, see [Security Features in the CRT](../c-runtime-library/security-features-in-the-crt.md) and [Compiler Warning (level 3) C4996](../error-messages/compiler-warnings/compiler-warning-level-3-c4996.md).

## See also

[C++ Language Reference](../cpp/cpp-language-reference.md)<br/>
[Projects and build systems](projects-and-build-systems-cpp.md)<br/>
[MSVC Compiler Options](reference/compiler-options.md)
