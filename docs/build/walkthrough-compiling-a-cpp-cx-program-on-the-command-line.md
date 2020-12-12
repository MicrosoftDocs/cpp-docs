---
description: "Learn more about: Walkthrough: Compiling a C++/CX Program on the Command Line"
title: "Walkthrough: Compiling a C++/CX Program on the Command Line"
ms.date: "04/23/2019"
ms.assetid: 626f5544-69ed-4736-83a9-f11389b371b2
---
# Walkthrough: Compiling a C++/CX Program on the Command Line

> [!NOTE]
> For new UWP apps and components, we recommend that you use [C++/WinRT](/windows/uwp/cpp-and-winrt-apis/), a standard C++17 language projection for Windows Runtime APIs. C++/WinRT is available in the Windows 10 SDK from version 1803 onward. C++/WinRT is implemented entirely in header files, and is designed to provide you with first-class access to the modern Windows API.

The Microsoft C++ compiler (MSVC) supports C++ component extensions (C++/CX), which has additional types and operators to target the Windows Runtime programming model. You can use C++/CX to build apps for Universal Windows Platform (UWP), and Windows desktop. For more information, see [A Tour of C++/CX](/archive/msdn-magazine/2013/april/component-extensions-a-tour-of-c-cx) and [Component Extensions for Runtime Platforms](../extensions/component-extensions-for-runtime-platforms.md).

In this walkthrough, you use a text editor to create a basic C++/CX program, and then compile it on the command line. (You can use your own C++/CX program instead of typing the one that's shown, or you can use a C++/CX code sample from another help article. This technique is useful for building and testing small modules that have no UI elements.)

> [!NOTE]
> You can also use the Visual Studio IDE to compile C++/CX programs. Because the IDE includes design, debugging, emulation, and deployment support that isn't available on the command line, we recommend that you use the IDE to build Universal Windows Platform (UWP) apps. For more information, see [Create a UWP app in C++](/windows/uwp/get-started/create-a-basic-windows-10-app-in-cpp).

## Prerequisites

You understand the fundamentals of the C++ language.

## Compiling a C++/CX Program

To enable compilation for C++/CX, you must use the [/ZW](reference/zw-windows-runtime-compilation.md) compiler option. The MSVC compiler generates an .exe file that targets the Windows Runtime, and links to the required libraries.

#### To compile a C++/CX application on the command line

1. Open a **Developer Command Prompt** window. (On the **Start** window, open **Apps**. Open the **Visual Studio Tools** folder under your version of Visual Studio, and then choose the **Developer Command Prompt** shortcut.) For more information about how to open a Developer Command Prompt window, see [Use the MSVC toolset from the command line](building-on-the-command-line.md).

   Administrator credentials may be required to successfully compile the code, depending on the computer's operating system and configuration. To run the Command Prompt window as an administrator, open the shortcut menu for **Developer Command Prompt** and then choose **Run as administrator**.

1. At the command prompt, enter **notepad basiccx.cpp**.

   Choose **Yes** when you're prompted to create a file.

1. In Notepad, enter these lines:

    ```cpp
    using namespace Platform;

    int main(Platform::Array<Platform::String^>^ args)
    {
        Platform::Details::Console::WriteLine("This is a C++/CX program.");
    }
    ```

1. On the menu bar, choose **File** > **Save**.

   You've created a C++ source file that uses the Windows Runtime [Platform namespace](../cppcx/platform-namespace-c-cx.md) namespace.

1. At the command prompt, enter **cl /EHsc /ZW basiccx.cpp /link /SUBSYSTEM:CONSOLE**. The cl.exe compiler compiles the source code into an .obj file, and then runs the linker to generate an executable program named basiccx.exe. (The [/EHsc](reference/eh-exception-handling-model.md) compiler option specifies the C++ exception-handling model, and the [/link](reference/link-pass-options-to-linker.md) flag specifies a console application.)

1. To run the basiccx.exe program, at the command prompt, enter **basiccx**.

   The program displays this text and exits:

    ```Output
    This is a C++/CX program.
    ```

## See also

[Projects and build systems](projects-and-build-systems-cpp.md)<br/>
[MSVC Compiler Options](reference/compiler-options.md)
