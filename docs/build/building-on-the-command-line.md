---
title: "Build C/C++ Code on the Command Line | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-tools"]
ms.tgt_pltfrm: ""
ms.topic: "get-started-article"
dev_langs: ["C++"]
helpviewer_keywords: ["command-line builds [C++]", "compiling source code [C++], command line", "builds [C++], command-line", "command line [C++], building from", "command line [C++], compilers"]
ms.assetid: 7ca9daed-a003-4162-842d-908f79058365
caps.latest.revision: 22
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
ms.workload: ["cplusplus"]
---
# Build C/C++ code on the command line

You can build C and C++ applications on the command line by using tools that are included in [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)].

When you choose one of the C++ workloads in the [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] Installer, it installs a toolset that includes the C/C++ compilers, linkers, and other build tools. These tools are used by the [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] IDE, and they can also be used at the command line. There are separate x86-hosted and x64-hosted compilers and tools to build code for x86, x64, and ARM targets. Each set of tools for a particular host and target build architecture is stored in its own directory. To work correctly, these tools require several specific environment variables to add them to the path and to set include file, library file, and SDK locations. To make it easy to set these environment variables, the installer creates customized command files, also known as batch files, during installation. You can run one of these command files in a command prompt window to set a specific build architecture. For convenience, the installer also creates shortcuts in your Start menu (or Start page on Windows 8.x) that start developer command prompt windows by using these command files, so all the required environment variables are set and ready to use. 

The required environment variables are specific to your installation and to the build architecture you choose, and might be changed by product updates or upgrades. Therefore, we strongly recommend that you use one of the installed command prompt shortcuts or command files instead of setting the environment variables in Windows yourself. For more information, see [Set the Path and Environment Variables for Command-Line Builds](../build/setting-the-path-and-environment-variables-for-command-line-builds.md).  

The command-line toolsets, command files, and command prompt shortcuts that are installed depend on your computer processor and the options selected during installation. At a minimum, the 32-bit x86-hosted tools that build 32-bit x86-native code and cross tools that build 64-bit x64-native code are installed. If you have 64-bit Windows, the 64-bit x64-hosted tools that build 64-bit native code and cross tools that build 32-bit native code are also installed. If you choose to install the optional C++ Universal Windows Platform tools, then the 32-bit and 64-bit native tools that build ARM code are also installed. Other workloads may install additional tools.

<a name="developer_command_prompt_shortcuts"></a>
## Developer command prompt shortcuts

The command prompt shortcuts are installed in a version-specific [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] folder in your Start menu. Here's a list of the base command prompt shortcuts and the build architectures they support:

- **Developer Command Prompt** Sets the environment to use 32-bit, x86-native tools to build 32-bit, x86-native code.  
- **x86 Native Tools Command Prompt** Sets the environment to use 32-bit, x86-native tools to build 32-bit, x86-native code.  
- **x64 Native Tools Command Prompt** Sets the environment to use 64-bit, x64-native tools to build 64-bit, x64-native code.  
- **x86_x64 Cross Tools Command Prompt** Sets the environment to use 32-bit, x86-native tools to build 64-bit, x64-native code.  
- **x64_x86 Cross Tools Command Prompt** Sets the environment to use 64-bit, x64-native tools to build 32-bit, x86-native code.  

The actual Start menu folder and shortcut names vary depending on the version of [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] you have installed, and the installation Nickname if you set one. For example, if you have Visual Studio 2017 installed, and you've given it an installation Nickname of 15.3, the developer command prompt shortcut is named **Developer Command Prompt for VS 2017 (15.3)**, in a folder named **Visual Studio 2017**. 

If you've installed the [Build Tools for Visual Studio 2017](https://go.microsoft.com/fwlink/p/?linkid=840931) or [Visual C++ 2015 Build Tools](http://landinghub.visualstudio.com/visual-cpp-build-tools) edition, there may only be specific native or cross tools developer command prompt options. 

<a name="developer_command_prompt"></a>
## To open a developer command prompt window  
  
1.  On the desktop, open the Windows **Start** menu, and then scroll to find and open the folder for your version of Visual Studio, for example, **Visual Studio 2017**. In some older versions of Visual Studio, the shortcuts are in a subfolder called **Visual Studio Tools**.  
  
2.  In the folder, choose the **Developer Command Prompt** for your version of Visual Studio. This shortcut starts a developer command prompt window that uses the default build architecture of 32-bit, x86-native tools to build 32-bit, x86-native code. If you prefer a non-default build architecture, choose one of the native or cross tools command prompts to specify the host and target architecture. 

An even faster way to open a developer command prompt window is to enter *developer command prompt* in the desktop search box, then choose the desired result.

<a name="developer_command_files"></a>
## Developer command files and locations

If you prefer to set the build architecture environment in an existing command prompt window, you can use one of the command files created by the installer. The location of these files depends on the version of [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] you have installed, and on location and naming choices you made during installation. For Visual Studio 2017, the typical installation location on a 64-bit computer is in \Program Files (x86)\Microsoft Visual Studio\2017\\*edition*, where *edition* may be Community, Professional, Enterprise, BuildTools, or another name you supplied. For Visual Studio 2015, the typical installation location is in \Program Files (x86)\Microsoft Visual Studio 14.0. 

The primary developer command prompt command file, VsDevCmd.bat, is located in the Common7\Tools subdirectory of the installation directory. When no parameters are specified, this sets the environment and build architecture to use the 32-bit x86-native tools to build 32-bit x86 code.

Additional command files are available to set up specific build architectures, depending on your processor architecture and the [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] workloads and options you have installed. In Visual Studio 2017, these are located in the VC\Auxiliary\Build subdirectory of the [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] installation directory. In Visual Studio 2015, these are located in the VC, VC\bin, or VC\bin\\*architectures* subdirectories of the installation directory, where *architectures* is one of the native or cross compiler options. These command files set parameters and call VsDevCmd.bat to set up the specified build architecture environment. A typical installation may include these command files:

- **vcvars32.bat** Use the 32-bit x86-native tools to build 32-bit x86 code.  
- **vcvars64.bat** Use the 64-bit x64-native tools to build 64-bit x64 code.  
- **vcvarsx86_amd64.bat** Use the 32-bit x86-native cross tools to build 64-bit x64 code.  
- **vcvarsamd64_x86.bat** Use the 64-bit x64-native cross tools to build 32-bit x86 code.  
- **vcvarsx86_arm.bat** Use the 32-bit x86-native cross tools to build ARM code.  
- **vcvarsamd64_arm.bat** Use the 64-bit x64-native cross tools to build ARM code.  
- **vcvarsall.bat** Use parameters to specify the host and target architectures, as well as SDK and platform choices. Call by using a `/help` parameter for a list of options.  

> [!CAUTION]
>  The vcvarsall.bat file and other command files can vary from computer to computer. Do not replace a missing or damaged vcvarsall.bat file by using a file from another computer. Rerun the [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] installer to replace the missing file.  
>   
> The vcvarsall.bat file also varies from version to version. If the current version of Visual C++ is installed on a computer that also has an earlier version of Visual C++, do not run vcvarsall.bat or another command file from different versions in the same command prompt window.  
 
The simplest way to specify a particular build architecture in an existing command window is to use the vcvarsall.bat file. You can use vcvarsall.bat to set environment variables to configure the command line for native 32-bit or 64-bit compilation, or for cross-compilation to x86, x64, or ARM processors; to target Windows Store, Universal Windows Platform, or Windows Desktop platforms; to specify which Windows SDK to use; and to specify the platform toolset version. If no arguments are provided, vcvarsall.bat configures the environment variables for using the current 32-bit native compiler for x86 Windows Desktop targets. However, you can use it to configure any of the native or cross compiler tools. If you specify a compiler configuration that is not installed or is not available on your build computer architecture, an error message is displayed. This table shows the supported architecture arguments:  
  
|Vcvarsall.bat architecture argument|Compiler|Host computer architecture|Build output architecture|  
|----------------------------|--------------|----------------------------------|-------------------------------|  
|x86|x86 32-bit native|x86, x64|x86|  
|x86\_amd64 or x86\_x64|x64 on x86 cross|x86, x64|x64|  
|x86_arm|ARM on x86 cross|x86, x64|ARM|  
|amd64 or x64|x64 64-bit native|x64|x64|  
|amd64\_x86 or x64\_x86|x86 on x64 cross|x64|x86|  
|amd64\_arm or x64\_arm|ARM on x64 cross|x64|ARM|  
  
You can use the **store** or **uwp** options to specify the platform type, or neither to specify a desktop app. To specify the Windows SDK version, you can use a full Windows 10 SDK number such as 10.0.10240.0, or specify 8.1 to use the Windows 8.1 SDK. Use 14.0 to specify the Visual Studio 2015 compiler toolset; by default, the environment is set to use the Visual Studio 2017 compiler toolset.

<a name="vcvarsall"></a>
## To set up the build environment in an existing command prompt window  
  
1.  At the command prompt, use the CD command to change to the Visual Studio installation directory. Then, use CD again to change to the subdirectory that contains the configuration-specific command files. For Visual Studio 2017, this is the VC\Auxiliary\Build subdirectory. For Visual Studio 2015, use the VC subdirectory.  
  
1.  To configure this command prompt window to use 32-bit tools to build code for x86 platforms, at the command prompt, enter:  
  
     `vcvarsall`  

1.  To configure this command prompt window to use 32-bit tools to build code for x64 platforms, at the command prompt, enter:  
  
     `vcvarsall x86_amd64`  
  
1.  To configure this command prompt window to use 32-bit tools to build code for ARM platforms, at the command prompt, enter:  
  
     `vcvarsall x86_arm`  
  
1.  To configure this command prompt window to use 64-bit tools to build code for x64 platforms, at the command prompt, enter:  
  
     `vcvarsall amd64`  
  
1.  To configure this command prompt window to use 64-bit tools to build code for x86 platforms, at the command prompt, enter:  
  
     `vcvarsall amd64_x86`  
  
1.  To configure this command prompt window to use 64-bit tools to build code for ARM platforms, at the command prompt, enter:  
  
     `vcvarsall amd64_arm`  

The command file sets the required environment variables for the paths to the build tools, libraries, and headers. You can now use this command prompt window to run the command-line compiler and tools.  
  
If you are using [DEVENV](/visualstudio/ide/reference/devenv-command-line-switches) for command-line builds, the environment set by vcvarsall.bat or other command files does not affect your builds, unless you also specify the **/useenv** option.  

## Command line tools
  
To build a C/C++ project on the command line, you can use these Visual C++ command-line tools:  
  
[CL](../build/reference/compiling-a-c-cpp-program.md)  
Use the compiler (cl.exe) to compile and link source code files into apps, libraries, and DLLs.  
  
[Link](../build/reference/linking.md)  
Use the linker (link.exe) to link compiled object files and libraries into apps and DLLs.  
  
[MSBuild (Visual C++)](../build/msbuild-visual-cpp.md)  
Use MSBuild (msbuild.exe) to build Visual C++ projects and [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] solutions. This is equivalent to running the **Build** project or **Build Solution** command in the [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] IDE.  
  
[DEVENV](/visualstudio/ide/reference/devenv-command-line-switches)  
Use DEVENV (devenv.exe) combined with a command-line switch—for example, **/Build** or **/Clean**—to perform certain build commands without displaying the [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] IDE.  
  
[NMAKE](../build/nmake-reference.md)  
Use NMAKE (nmake.exe) to automate tasks that build Visual C++ projects by using a traditional makefile.  
  
When you build on the command line, you can get information about warnings, errors, and messages. Start [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] and then on the menu bar, choose **Help**, **Search**.  
  
## In This Section  

The articles in this section of the documentation show how to build apps on the command line, describe how to customize the command-line build environment to use 64-bit toolsets and target x86, x64, and ARM platforms, and demonstrate how to use the command-line build tools MSBuild and NMAKE.  
  
[Walkthrough: Compiling a Native C++ Program on the Command Line](../build/walkthrough-compiling-a-native-cpp-program-on-the-command-line.md)  
Gives an example that shows how to create and compile a simple C++ program on the command line.  
  
[Walkthrough: Compile a C Program on the Command Line](../build/walkthrough-compile-a-c-program-on-the-command-line.md)  
Describes how to compile a program written in the C programming language.  
  
[Walkthrough: Compiling a C++/CLI Program on the Command Line](../build/walkthrough-compiling-a-cpp-cli-program-on-the-command-line.md)  
Describes how to create and compile a C++/CLI program that uses the .NET Framework.  
  
[Walkthrough: Compiling a C++/CX Program on the Command Line](../build/walkthrough-compiling-a-cpp-cx-program-on-the-command-line.md)  
Describes how to create and compile a C++/CX program that uses the Windows Runtime.  
  
[Set the Path and Environment Variables for Command-Line Builds](../build/setting-the-path-and-environment-variables-for-command-line-builds.md)  
Describes how to start a command prompt window that has the required environment variables set for command-line builds that target x86, x64, and ARM platforms by using a 32-bit or 64-bit toolset.  
  
[NMAKE Reference](../build/nmake-reference.md)  
Provides links to articles that describe the Microsoft Program Maintenance Utility (NMAKE.EXE).  
  
[MSBuild (Visual C++)](../build/msbuild-visual-cpp.md)  
Provides links to articles that discuss how to use MSBuild.EXE.  
  
## Related Sections  

[/MD, /MT, /LD (Use Run-Time Library)](../build/reference/md-mt-ld-use-run-time-library.md)  
Describes how to use these compiler options to use a Debug or Release run-time library.  
  
[C/C++ Compiler Options](../build/reference/compiler-options.md)  
Provides links to articles that discuss the C and C++ compiler options and CL.exe.  
  
[Linker Options](../build/reference/linker-options.md)  
Provides links to articles that discuss the linker options and LINK.exe.  
  
[C/C++ Build Tools](../build/reference/c-cpp-build-tools.md)  
Provides links to the C/C++ build tools that are included in [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)].  
  
## See Also  

[Building C/C++ Programs](../build/building-c-cpp-programs.md)