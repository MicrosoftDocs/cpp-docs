---
title: "Walkthrough: Compiling a C++/CX Program on the Command Line | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-tools"]
ms.topic: "conceptual"
dev_langs: ["C++"]
ms.assetid: 626f5544-69ed-4736-83a9-f11389b371b2
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Walkthrough: Compiling a C++/CX Program on the Command Line
You can create Visual C++ programs that target the Windows Runtime and build them on the command line. Visual C++ supports Visual C++ component extensions (C++/CX), which has additional types and operators to target the Windows Runtime programming model. You can use C++/CX to build apps for Universal Windows Platform (UWP), Windows Phone 8.1, and Windows desktop. For more information, see [A Tour of C++/CX](https://msdn.microsoft.com/magazine/dn166929.aspx) and [Component Extensions for Runtime Platforms](../windows/component-extensions-for-runtime-platforms.md).  
  
 In this walkthrough, you use a text editor to create a basic C++/CX program, and then compile it on the command line. (You can use your own C++/CX program instead of typing the one that's shown, or you can use a C++/CX code sample from another help article. This technique is useful for building and testing small modules that contain no UI elements.)  
  
> [!NOTE]
>  You can also use the Visual Studio IDE to compile C++/CX programs. Because the IDE includes design, debugging, emulation, and deployment support that isn't available on the command line, we recommend that you use the IDE to build Universal Windows Platform (UWP) apps. For more information, see [Create a UWP app in C++](/windows/uwp/get-started/create-a-basic-windows-10-app-in-cpp).  
  
## Prerequisites  
 You must understand the fundamentals of the C++ language.  
  
## Compiling a C++/CX Program  
 To enable compilation for C++/CX, you must use the [/ZW](../build/reference/zw-windows-runtime-compilation.md) compiler option. The Visual C++ compiler generates an .exe file that targets the Windows Runtime, and links to the required libraries.  
  
#### To compile a C++/CX application on the command line  
  
1.  Open a **Developer Command Prompt** window. (On the **Start** window, open **Apps**. Open the **Visual Studio Tools** folder under your version of Visual Studio, and then choose the **Developer Command Prompt** shortcut.) For more information about how to open a Developer Command Prompt window, see [Build C/C++ code on the command line](../build/building-on-the-command-line.md).  
  
     Administrator credentials may be required to successfully compile the code, depending on the computer's operating system and configuration. To run the Command Prompt window as an administrator, open the shortcut menu for **Developer Command Prompt** and then choose **Run as administrator**.  
  
2.  At the command prompt, enter **notepad basiccx.cpp**.  
  
     Choose **Yes** when you are prompted to create a file.  
  
3.  In Notepad, enter these lines:  
  
    ```cpp  
    using namespace Platform;  
  
    int main(Platform::Array<Platform::String^>^ args)  
    {  
        Platform::Details::Console::WriteLine("This is a C++/CX program.");  
    }  
  
    ```  
  
4.  On the menu bar, choose **File**, **Save**.  
  
     You have created a Visual C++ source file that uses the Windows Runtime [Platform namespace](../cppcx/platform-namespace-c-cx.md) namespace.  
  
5.  At the command prompt, enter **cl /EHsc /ZW basiccx.cpp /link /SUBSYSTEM:CONSOLE**. The cl.exe compiler compiles the source code into an .obj file, and then runs the linker to generate an executable program named basiccx.exe. (The [/EHsc](../build/reference/eh-exception-handling-model.md) compiler option specifies the C++ exception-handling model, and the [/link](../build/reference/link-pass-options-to-linker.md) flag specifies a console application.)  
  
6.  To run the basiccx.exe program, at the command prompt, enter **basiccx**.  
  
     The program displays this text and exits:  
  
    ```Output  
    This is a C++/CX program.  
    ```  
  
## See Also  
 [C++ Language Reference](../cpp/cpp-language-reference.md)   
 [Building C/C++ Programs](../build/building-c-cpp-programs.md)   
 [Compiler Options](../build/reference/compiler-options.md)