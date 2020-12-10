---
description: "Learn more about: Walkthrough: Compiling a C++/CLI Program on the Command Line"
title: "Walkthrough: Compiling a C++/CLI Program on the Command Line"
ms.date: "04/23/2019"
ms.assetid: cef41c88-faf9-439d-8423-25aa3f5674dd
---
# Walkthrough: Compiling a C++/CLI Program on the Command Line

You can create Visual C++ programs that target the Common Language Runtime (CLR) and use the .NET Framework, and build them on the command line. Visual C++ supports the C++/CLI programming language, which has additional types and operators to target the .NET programming model. For general information about the C++/CLI language, see [.NET Programming with C++/CLI (Visual C++)](../dotnet/dotnet-programming-with-cpp-cli-visual-cpp.md).

In this walkthrough, you use a text editor to create a basic C++/CLI program, and then compile it on the command line. (You can use your own C++/CLI program instead of typing the one that's shown, or you can use a C++/CLI code sample from another help article. This technique is useful for building and testing small modules that have no UI elements.)

## Prerequisites

You understand the fundamentals of the C++ language.

## Compiling a C++/CLI Program

The following steps show how to compile a C++/CLI console application that uses .NET Framework classes.

To enable compilation for C++/CLI, you must use the [/clr](reference/clr-common-language-runtime-compilation.md) compiler option. The MSVC compiler generates an .exe file that contains MSIL code—or mixed MSIL and native code—and links to the required .NET Framework libraries.

### To compile a C++/CLI application on the command line

1. Open a **Developer Command Prompt** window. For specific instructions, see [To open a developer command prompt window](building-on-the-command-line.md#developer_command_prompt).

   Administrator credentials may be required to successfully compile the code, depending on the computer's operating system and configuration. To run the command prompt window as an administrator, right-click to open the shortcut menu for the command prompt and then choose **More** > **Run as administrator**.

1. At the command prompt, enter `notepad basicclr.cpp`.

   Choose **Yes** when you're prompted to create a file.

1. In Notepad, enter these lines:

   ```cpp
   int main()
   {
       System::Console::WriteLine("This is a C++/CLI program.");
   }
   ```

1. On the menu bar, choose **File** > **Save**.

   You've created a Visual C++ source file that uses a .NET Framework class (<xref:System.Console>) in the <xref:System> namespace.

1. At the command prompt, enter `cl /clr basicclr.cpp`. The cl.exe compiler compiles the source code into an .obj file that contains MSIL, and then runs the linker to generate an executable program named basicclr.exe.

1. To run the basicclr.exe program, at the command prompt, enter `basicclr`.

   The program displays this text and exits:

   ```Output
   This is a C++/CLI program.
   ```

## See also

[C++ Language Reference](../cpp/cpp-language-reference.md)<br/>
[Projects and build systems](projects-and-build-systems-cpp.md)<br/>
[MSVC Compiler Options](reference/compiler-options.md)
