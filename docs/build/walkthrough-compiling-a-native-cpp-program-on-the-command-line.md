---
title: "Walkthrough: Compiling a Native C++ Program on the Command Line | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "get-started-article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "native code [C++]"
  - "Visual C++, native code"
  - "compiling programs [C++]"
  - "command-line applications [C++], native"
ms.assetid: b200cfd1-0440-498f-90ee-7ecf92492dc0
caps.latest.revision: 63
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
translation.priority.ht: 
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "ru-ru"
  - "zh-cn"
  - "zh-tw"
translation.priority.mt: 
  - "cs-cz"
  - "pl-pl"
  - "pt-br"
  - "tr-tr"
---
# Walkthrough: Compiling a Native C++ Program on the Command Line
Visual C++ includes a command-line C++ compiler that you can use to create everything from basic console apps to Universal Windows apps, Windows Store apps, and .NET components.  
  
 In this walkthrough, you create a basic, "Hello, World"-style C++ program by using a text editor, and then compile it on the command line. If you'd like to try the Visual Studio IDE instead of using the command line, see [Walkthrough: Working with Projects and Solutions (C++)](../ide/walkthrough-working-with-projects-and-solutions-cpp.md) or [Using the Visual Studio IDE for C++ Desktop Development](../ide/using-the-visual-studio-ide-for-cpp-desktop-development.md).  
  
 In this walkthrough, you can use your own Visual C++ program instead of typing the one that's shown, or you can use a Visual C++ code sample from another help article.  
  
## Prerequisites  
 To complete this walkthrough, you must have installed either Visual Studio and the optional Visual C++ components, or the Microsoft Visual C++ Build Tools.  
  
 Visual Studio is a powerful integrated development environment that supports a full-featured editor, resource managers, debuggers, and compilers for many languages and platforms. For information on these features and  how to download and install Visual Studio, including the free Visual Studio Community edition, see [VisualStudio.com](https://www.visualstudio.com/).  
  
 The Microsoft Visual C++ Build Tools installs only the command-line compiler, tools, and libraries you need to build C and C++ programs. It's perfect for build labs or classroom exercises and installs relatively quickly. To install only the command-line tools, download and install [Microsoft Visual C++ Build Tools 2015](http://go.microsoft.com/fwlink/?LinkId=691126).  
  
 Before you can build a C or C++ program on the command line, you must verify that the tools are installed, and that you can access them from the command line. Visual C++ has complex requirements for the command-line environment in order to find the tools, headers, and libraries it uses. **You can't use Visual C++ in a plain command prompt window**. Fortunately, Visual C++ installs shortcuts for you to launch a developer command prompt that has the environment set up for command line builds. Unfortunately, the names of the developer command prompt shortcuts and where they are located are different in almost every version of Visual C++ and on different versions of Windows. Your first walkthrough task is finding the right one to use.  
  
> [!NOTE]
>  A developer command prompt shortcut automatically sets the correct paths for the compiler and tools, and for any required headers and libraries. You must set these environment values yourself if you use a regular Command Prompt window. For more information, see [Setting the Path and Environment Variables for Command-Line Builds](../build/setting-the-path-and-environment-variables-for-command-line-builds.md). We recommend you use a developer command prompt shortcut instead of building your own.  
  
### Open a developer command prompt  
  
1.  If you have installed Visual Studio 2015 on Windows 10, open the Start menu and choose **All apps**. Scroll down and open the **Visual Studio 2015** folder (not the Visual Studio 2015 app). Choose **Developer Command Prompt for VS2015** to open the command prompt window.  
  
     If you have installed Microsoft Visual C++ Build Tools 2015 on Windows 10, open the **Start** menu and choose **All apps**. Scroll down and open the **Visual C++ Build Tools** folder. Choose **Visual C++ 2015 x86 Native Tools Command Prompt** to open the command prompt window.  
  
     If you are using a different version of Visual Studio or are running a different version of Windows, look in your Start menu or Start page for a Visual Studio tools folder that contains a developer command prompt shortcut. You can also use the Windows search function to search for "developer command prompt" and choose one that matches your installed version of Visual Studio. Use the shortcut to open the command prompt window.  
  
2.  Next, verify that the Visual C++ developer command prompt is set up correctly. In the command prompt window, enter `cl` and verify that the output looks something like this:  
  
    ```Output  
    C:\Program Files (x86)\Microsoft Visual Studio 14.0>cl  
    Microsoft (R) C/C++ Optimizing Compiler Version 19.00.23918 for x86  
    Copyright (C) Microsoft Corporation.  All rights reserved.  
  
    usage: cl [ option... ] filename... [ /link linkoption... ]  
    ```  
  
     There may be differences in the current directory or version numbers, depending on the version of Visual C++ and any updates installed. If this is similar to what you see, then you are ready to build C or C++ programs at the command line.  
  
    > [!NOTE]
    >  If you get an error such as "'cl' is not recognized as an internal or external command, operable program or batch file," error C1034, or error LNK1104 when you run the **cl** command, then either you are not using a developer command prompt, or something is wrong with your installation of Visual C++. You must fix this issue before you can continue.  
  
     If you can't find the developer command prompt shortcut, or if you get an error message when you enter `cl`, then your Visual C++ installation may have a problem. Try reinstalling the Visual C++ component in Visual Studio, or reinstall the Microsoft Visual C++ Build Tools. Don't go on to the next section until this works. For more information about installing and troubleshooting Visual C++, see [Install Visual Studio](/visualstudio/install/install-visual-studio).  
  
    > [!NOTE]
    >  Depending on the version of Windows on the computer and the system security configuration, you might have to right-click to open the shortcut menu for the developer command prompt shortcut and then choose **Run as Administrator** to successfully build and run the program that you create by following this walkthrough.  
  
### Create a Visual C++ source file and compile it on the command line  
  
1.  In the developer command prompt window, enter **md c:\hello** to create a directory, and then enter **cd c:\hello** to change to that directory. This is the directory that your source file and the compiled program are created in.  
  
2.  Enter **notepad hello.cpp** in the command prompt window.  
  
     Choose **Yes** when Notepad prompts you to create a file. This opens a blank Notepad window, ready for you to enter your code in a file named hello.cpp.  
  
3.  In Notepad, enter the following lines of code:  
  
    ```cpp  
    #include <iostream>  
    using namespace std;  
    void main()  
    {  
        cout << "Hello, world, from Visual C++!" << endl;  
    }  
    ```  
  
     This is a very simple program that will write one line of text on the screen and then exit. To minimize errors, copy this code and paste it into Notepad.  
  
4.  Save your work! In Notepad, on the **File** menu, choose **Save**.  
  
     Congratulations, you have created a Visual C++ source file, hello.cpp, that is ready to compile.  
  
5.  Switch back to the developer command prompt window. Enter **dir** at the command prompt to list the contents of the c:\hello directory. You should see the source file hello.cpp in the directory listing, which looks something like this:  
  
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
  
     The dates and other details will differ on your computer. If you don't see your source code file, hello.cpp, make sure you've changed to the c:\hello directory you created, and in Notepad, make sure that you saved your source file in this directory. Also make sure that you saved the source code with a .cpp file name extension, not a .txt extension.  
  
6.  At the developer command prompt, enter `cl /EHsc hello.cpp` to compile your program.  
  
     The cl.exe compiler generates an .obj file that contains the compiled code, and then runs the linker to create an executable program named hello.exe. This name appears in the lines of output information that the compiler displays. The output of the compiler should look something like this:  
  
    ```Output  
    c:\hello>cl /EHsc hello.cpp  
    Microsoft (R) C/C++ Optimizing Compiler Version 19.00.23918 for x86  
    Copyright (C) Microsoft Corporation.  All rights reserved.  
  
    hello.cpp  
    Microsoft (R) Incremental Linker Version 14.00.23918.0  
    Copyright (C) Microsoft Corporation.  All rights reserved.  
  
    /out:hello.exe  
    hello.obj  
    ```  
  
    > [!NOTE]
    >  If you get an error such as "'cl' is not recognized as an internal or external command, operable program or batch file," error C1034, or error LNK1104, your developer command prompt is not set up correctly. For information on how to fix this issue, go back to the **Open a developer command prompt** section.  
  
    > [!NOTE]
    >  If you get a different compiler or linker error or warning, review your source code to correct any errors, then save it and run the compiler again. For information about specific errors, use the search box on this MSDN page to look for the error number.  
  
7.  To run the hello.exe program, at the command prompt, enter `hello`.  
  
     The program displays this text and exits:  
  
    ```Output  
    Hello, world, from Visual C++!  
    ```  
  
     Congratulations, you've just compiled and run a C++ program by using the command-line tools.  
  
## Next Steps  
 This "Hello, World" example is about as simple as a C++ program can get. Real world programs have header files and more source files, link in libraries, and do useful work.  
  
 You can use the steps in this walkthrough to build your own C++ code instead of typing the sample code shown. You can also build many C++ code sample programs that you find elsewhere. You can put your source code and build your apps in any writeable directory. By default, the Visual Studio IDE creates projects in your Documents folder, in a Projects subfolder of a Visual Studio folder named for your version of Visual Studio.  
  
 To compile a program that has multiple source code files, enter them all on the command line, like this:  
  
 `cl /EHsc file1.cpp file2.cpp file3.cpp`  
  
 The **/EHsc** command-line option instructs the compiler to enable C++ exception handling. For more information, see [/EH (Exception Handling Model)](../build/reference/eh-exception-handling-model.md).  
  
 When you supply multiple source files like this, the compiler uses the first input file to create the program name. In this case, it outputs a program called file1.exe. To change the name to program1.exe, add an [/out](../build/reference/out-output-file-name.md) linker option:  
  
 `cl /EHsc file1.cpp file2.cpp file3.cpp /link /out:program1.exe`  
  
 And to catch more programming mistakes automatically, we recommend you compile by using either the [/W3](../build/reference/compiler-option-warning-level.md) or [/W4](../build/reference/compiler-option-warning-level.md) warning level option:  
  
 `cl /W4 /EHsc file1.cpp file2.cpp file3.cpp /link /out:program1.exe`  
  
 The compiler, cl.exe, has many more options you can apply to build, optimize, debug, and analyze your code. For a quick list, enter **cl /?** at the developer command prompt. You can also compile and link separately and apply linker options in more complex build scenarios. For more information on compiler and linker options and usage, see  [C/C++ Building Reference](../build/reference/c-cpp-building-reference.md).  
  
 You can use NMAKE and makefiles, or MSBuild and project files to configure and build more complex projects on the command line. For more information on using these tools, see [NMAKE Reference](../build/nmake-reference.md) and [MSBuild](../build/msbuild-visual-cpp.md).  
  
 The C and C++ languages are similar, but not the same. The Visual C++ compiler uses a simple rule to determine which language to use when it compiles your code. By default, the Visual C++ compiler treats all files that end in .c as C source code, and all files that end in .cpp as C++ source code. To force the compiler to treat all files as C++ regardless of file name extension, use the [/TC](../build/reference/tc-tp-tc-tp-specify-source-file-type.md) compiler option.  
  
 The Visual C++ compiler includes a C Runtime Library (CRT) that is generally compatible with the ISO C99 standard, but not strictly compliant. In most cases, portable code will compile and run as expected. Visual C++ does not support some of the CRT changes in ISO C11. Certain library functions and POSIX function names are deprecated by the Visual C++ compiler. The functions are supported, but the preferred names have changed. For more information, see [Security Features in the CRT](../c-runtime-library/security-features-in-the-crt.md) and [Compiler Warning (level 3) C4996](../error-messages/compiler-warnings/compiler-warning-level-3-c4996.md).  
  
## See Also  
 [Visual C++ Guided Tour](http://msdn.microsoft.com/en-us/499cb66f-7df1-45d6-8b6b-33d94fd1f17c)   
 [C++ Language Reference](../cpp/cpp-language-reference.md)   
 [Building C/C++ Programs](../build/building-c-cpp-programs.md)   
 [Compiler Options](../build/reference/compiler-options.md)