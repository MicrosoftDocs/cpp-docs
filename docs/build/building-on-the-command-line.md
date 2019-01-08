---
title: "Use the MSVC toolset from the command line - Visual Studio"
description: "Use the Microsoft C++ compiler toolchain (MSVC) from the command line outside of the Visual Studio IDE."
ms.custom: "conceptual"
ms.date: "12/10/2018"
helpviewer_keywords: ["command-line builds [C++]", "compiling source code [C++], command line", "builds [C++], command-line", "command line [C++], building from", "command line [C++], compilers"]
ms.assetid: 7ca9daed-a003-4162-842d-908f79058365
---
# Use the MSVC toolset from the command line

You can build C and C++ applications on the command line by using tools that are included in Visual Studio. You can also download the compiler toolset as a standalone package from [Build Tools for Visual Studio 2017](https://go.microsoft.com/fwlink/p/?linkid=875721).

## How to use the command-line tools

When you choose one of the C++ workloads in the Visual Studio Installer, it installs the Visual Studio *platform toolset*. A platform toolset has all the C and C++ tools for a specific Visual Studio version, including the C/C++ compilers, linkers, assemblers, and other build tools, as well as the matching libraries. You can use all of these tools at the command line, and they are also used internally by the Visual Studio IDE. There are separate x86-hosted and x64-hosted compilers and tools to build code for x86, x64, ARM and ARM64 targets. Each set of tools for a particular host and target build architecture is stored in its own directory.

The compiler toolsets that are installed depend on your computer processor and the options selected during installation. At a minimum, the 32-bit x86-hosted tools that build 32-bit x86-native code and cross tools that build 64-bit x64-native code are installed. If you have 64-bit Windows, the 64-bit x64-hosted tools that build 64-bit native code and cross tools that build 32-bit native code are also installed. If you choose to install the optional C++ Universal Windows Platform tools, then the 32-bit and 64-bit native tools that build ARM code are also installed. Other workloads may install additional tools.

## Environment variables and developer command prompts

To work correctly, the tools require several specific environment variables to be set. These are used to add them to the path and to set include file, library file, and SDK locations. To make it easy to set these environment variables, the installer creates customized *command files*, or batch files, during installation. You can run one of these command files in a command prompt window to set a specific host and target build architecture, Windows SDK version, target platform, and platform toolset. For convenience, the installer also creates shortcuts in your Start menu that start developer command prompt windows by using these command files, so all the required environment variables are set and ready to use.

The required environment variables are specific to your installation and to the build architecture you choose, and might be changed by product updates or upgrades. Therefore, we strongly recommend that you use one of the installed command prompt shortcuts or command files instead of setting the environment variables in Windows yourself. For more information, see [Set the Path and Environment Variables for Command-Line Builds](setting-the-path-and-environment-variables-for-command-line-builds.md).

## <a name="developer_command_prompt_shortcuts"></a> Developer command prompt shortcuts

The command prompt shortcuts are installed in a version-specific Visual Studio folder in your Start menu. Here's a list of the base command prompt shortcuts and the build architectures they support:

- **Developer Command Prompt** - Sets the environment to use 32-bit, x86-native tools to build 32-bit, x86-native code.
- **x86 Native Tools Command Prompt** - Sets the environment to use 32-bit, x86-native tools to build 32-bit, x86-native code.
- **x64 Native Tools Command Prompt** - Sets the environment to use 64-bit, x64-native tools to build 64-bit, x64-native code.
- **x86_x64 Cross Tools Command Prompt** - Sets the environment to use 32-bit, x86-native tools to build 64-bit, x64-native code.
- **x64_x86 Cross Tools Command Prompt** - Sets the environment to use 64-bit, x64-native tools to build 32-bit, x86-native code.

The actual Start menu folder and shortcut names vary depending on the version of Visual Studio you have installed, and the installation Nickname if you set one. For example, if you have Visual Studio 2017 installed, and you've given it an installation Nickname of *Preview*, the developer command prompt shortcut is named **Developer Command Prompt for VS 2017 (Preview)**, in a folder named **Visual Studio 2017**.

If you've installed the [Build Tools for Visual Studio 2017](https://go.microsoft.com/fwlink/p/?linkid=875721) (which also includes the Visual Studio 2015 Update 3 compiler toolset), only the architecture-specific native or cross tools developer command prompt options are installed, and not the general **Developer Command Prompt** shortcut.

## <a name="developer_command_prompt"></a> To open a developer command prompt window

1. On the desktop, open the Windows **Start** menu, and then scroll to find and open the folder for your version of Visual Studio, for example, **Visual Studio 2017**. In some older versions of Visual Studio, the shortcuts are in a subfolder called **Visual Studio Tools**.

1. In the folder, choose the **Developer Command Prompt** for your version of Visual Studio. This shortcut starts a developer command prompt window that uses the default build architecture of 32-bit, x86-native tools to build 32-bit, x86-native code. If you prefer a non-default build architecture, choose one of the native or cross tools command prompts to specify the host and target architecture.

An even faster way to open a developer command prompt window is to enter *developer command prompt* in the desktop search box, then choose the desired result.

## <a name="developer_command_file_locations"></a> Developer command file locations

If you prefer to set the build architecture environment in an existing command prompt window, you can use one of the command files (batch files) created by the installer to set the required environment. We only recommend you do this in a new command prompt window, and we do not recommend you later switch environments in the same command window. The location of these files depends on the version of Visual Studio you have installed, and on location and naming choices you made during installation. For Visual Studio 2017, the typical installation location on a 64-bit computer is in \Program Files (x86)\Microsoft Visual Studio\2017\\*edition*, where *edition* may be Community, Professional, Enterprise, BuildTools, or another name you supplied. For Visual Studio 2015, the typical installation location is in \Program Files (x86)\Microsoft Visual Studio 14.0.

The primary developer command prompt command file, VsDevCmd.bat, is located in the Common7\Tools subdirectory of the installation directory. When no parameters are specified, this sets the environment and the host and target build architecture to use the 32-bit x86-native tools to build 32-bit x86 code.

Additional command files are available to set up specific build architectures, depending on your processor architecture and the Visual Studio workloads and options you have installed. In Visual Studio 2017, these are located in the VC\Auxiliary\Build subdirectory of the Visual Studio installation directory. In Visual Studio 2015, these are located in the VC, VC\bin, or VC\bin\\*architectures* subdirectories of the installation directory, where *architectures* is one of the native or cross-compiler options. These command files set default parameters and call VsDevCmd.bat to set up the specified build architecture environment. A typical installation may include these command files:

|Command File|Host and Target architectures|
|---|---|
|**vcvars32.bat**| Use the 32-bit x86-native tools to build 32-bit x86 code.|
|**vcvars64.bat**| Use the 64-bit x64-native tools to build 64-bit x64 code.|
|**vcvarsx86_amd64.bat**| Use the 32-bit x86-native cross tools to build 64-bit x64 code.|
|**vcvarsamd64_x86.bat**| Use the 64-bit x64-native cross tools to build 32-bit x86 code.|
|**vcvarsx86_arm.bat**| Use the 32-bit x86-native cross tools to build ARM code.|
|**vcvarsamd64_arm.bat**| Use the 64-bit x64-native cross tools to build ARM code.|
|**vcvarsall.bat**| Use parameters to specify the host and target architectures, as well as SDK and platform choices. For a list of supported options, call by using a **/help** parameter.|

> [!CAUTION]
> The vcvarsall.bat file and other Visual Studio command files can vary from computer to computer. Do not replace a missing or damaged vcvarsall.bat file by using a file from another computer. Rerun the Visual Studio installer to replace the missing file.
>
> The vcvarsall.bat file also varies from version to version. If the current version of Visual Studio is installed on a computer that also has an earlier version of Visual Studio, do not run vcvarsall.bat or another Visual Studio command file from different versions in the same command prompt window.

## Use the developer tools in an existing command window

The simplest way to specify a particular build architecture in an existing command window is to use the vcvarsall.bat file. You can use vcvarsall.bat to set environment variables to configure the command line for native 32-bit or 64-bit compilation, or for cross-compilation to x86, x64, or ARM processors; to target Microsoft Store, Universal Windows Platform, or Windows Desktop platforms; to specify which Windows SDK to use; and to specify the platform toolset version. If no arguments are provided, vcvarsall.bat configures the environment variables for using the current 32-bit native compiler for x86 Windows Desktop targets. However, you can use it to configure any of the native or cross compiler tools. If you specify a compiler configuration that is not installed or is not available on your build computer architecture, an error message is displayed.

### vcvarsall syntax

> **vcvarsall.bat** [*architecture*] [*platform_type*] [*winsdk_version*] [**-vcvars_ver=**_vcversion_]

*architecture*<br/>
This optional argument specifies the host and target architecture to use. If *architecture* is not specified, the default build environment is used. These arguments are supported:

|*architecture*|Compiler|Host computer architecture|Build output (target) architecture|
|----------------------------|--------------|----------------------------------|-------------------------------|
|**x86**|x86 32-bit native|x86, x64|x86|
|**x86\_amd64** or **x86\_x64**|x64 on x86 cross|x86, x64|x64|
|**x86_arm**|ARM on x86 cross|x86, x64|ARM|
|**x86_arm64**|ARM64 on x86 cross|x86, x64|ARM64|
|**amd64** or **x64**|x64 64-bit native|x64|x64|
|**amd64\_x86** or **x64\_x86**|x86 on x64 cross|x64|x86|
|**amd64\_arm** or **x64\_arm**|ARM on x64 cross|x64|ARM|
|**amd64\_arm64** or **x64\_arm64**|ARM64 on x64 cross|x64|ARM64|

*platform_type*<br/>
This optional argument allows you to specify **store** or **uwp** as the platform type. By default, the environment is set to build desktop or console apps.

*winsdk_version*<br/>
Optionally specifies the version of the Windows SDK to use. By default, the latest installed Windows SDK is used. To specify the Windows SDK version, you can use a full Windows 10 SDK number such as **10.0.10240.0**, or specify **8.1** to use the Windows 8.1 SDK.

*vcversion*<br/>
Optionally specifies the Visual Studio compiler toolset to use. By default, the environment is set to use the current Visual Studio 2017 compiler toolset. Use **-vcvars_ver=14.0** to specify the Visual Studio 2015 compiler toolset.

<a name="vcvarsall"></a>
#### To set up the build environment in an existing command prompt window

1. At the command prompt, use the CD command to change to the Visual Studio installation directory. Then, use CD again to change to the subdirectory that contains the configuration-specific command files. For Visual Studio 2017, this is the VC\Auxiliary\Build subdirectory. For Visual Studio 2015, use the VC subdirectory.

1. Enter the command for your preferred developer environment. For example, to build ARM code for UWP on a 64-bit platform by using the latest Windows SDK and the Visual Studio 2017 RTM compiler toolset, use this command line:

   `vcvarsall.bat amd64_arm uwp -vcvars_ver=14.10`

## Create your own command prompt shortcut

If you open the Properties dialog for one of the existing developer command prompt shortcuts, you can see the command target used. For example, the target for the **x64 Native Tools Command Prompt for VS 2017** shortcut is something similar to:

`%comspec% /k "C:\Program Files (x86)\Microsoft Visual Studio\2017\Community\VC\Auxiliary\Build\vcvars64.bat"`

The architecture-specific batch files set the *architecture* parameter and call vcvarsall.bat. You can pass the same additional options to these batch files as you would pass to vcvarsall.bat, or you can just call vcvarsall.bat directly. To specify parameters for your own command shortcut, add them to the end of the command in double-quotes. For example, to set up a shortcut to build ARM code for UWP on a 64-bit platform by using the latest Windows SDK and the Visual Studio 2017 RTM compiler toolset, use something like this command target in your shortcut:

`%comspec% /k "C:\Program Files (x86)\Microsoft Visual Studio\2017\Community\VC\Auxiliary\Build\vcvarsall.bat amd64_arm uwp -vcvars_ver=14.10"`

You must adjust the path to reflect your Visual Studio installation directory.

## Command line tools

To build a C/C++ project on the command line, Visual Studio provides these command-line tools:

[CL](reference/compiling-a-c-cpp-program.md)<br/>
Use the compiler (cl.exe) to compile and link source code files into apps, libraries, and DLLs.

[Link](reference/linking.md)<br/>
Use the linker (link.exe) to link compiled object files and libraries into apps and DLLs.

[MSBuild](msbuild-visual-cpp.md)<br/>
Use MSBuild (msbuild.exe) and a project file (.vcxproj) to configure a build and invoke the toolset indirectly. This is equivalent to running the **Build** project or **Build Solution** command in the Visual Studio IDE. Running MSBuild from the command line is an advanced scenario and generally not recommended.

[DEVENV](/visualstudio/ide/reference/devenv-command-line-switches)<br/>
Use DEVENV (devenv.exe) combined with a command-line switch—for example, **/Build** or **/Clean**—to perform certain build commands without displaying the Visual Studio IDE. In general this is preferred over using MSBuild directly because you can let Visual Studio handle the complexities of MSBuild.

[NMAKE](reference/nmake-reference.md)<br/>
Use NMAKE (nmake.exe) on Windows to build C++ projects based on a traditional makefile.

When you build on the command line, the F1 command is not available for instant help. Instead, you can use a search engine to get information about warnings, errors, and messages, or you can use the offline help files. To use the search in [docs.microsoft.com](https://docs.microsoft.com/cpp/), enter your search string in the search box at the top of the page.

## In This Section

The articles in this section of the documentation show how to build apps on the command line, describe how to customize the command-line build environment to use 64-bit toolsets and target x86, x64, and ARM platforms, and demonstrate how to use the command-line build tools MSBuild and NMAKE.

[Walkthrough: Compiling a Native C++ Program on the Command Line](walkthrough-compiling-a-native-cpp-program-on-the-command-line.md)<br/>
Gives an example that shows how to create and compile a simple C++ program on the command line.

[Walkthrough: Compile a C Program on the Command Line](walkthrough-compile-a-c-program-on-the-command-line.md)<br/>
Describes how to compile a program written in the C programming language.

[Walkthrough: Compiling a C++/CLI Program on the Command Line](walkthrough-compiling-a-cpp-cli-program-on-the-command-line.md)<br/>
Describes how to create and compile a C++/CLI program that uses the .NET Framework.

[Walkthrough: Compiling a C++/CX Program on the Command Line](walkthrough-compiling-a-cpp-cx-program-on-the-command-line.md)<br/>
Describes how to create and compile a C++/CX program that uses the Windows Runtime.

[Set the Path and Environment Variables for Command-Line Builds](setting-the-path-and-environment-variables-for-command-line-builds.md)<br/>
Describes how to start a command prompt window that has the required environment variables set for command-line builds that target x86, x64, and ARM platforms by using a 32-bit or 64-bit toolset.

[NMAKE Reference](reference/nmake-reference.md)<br/>
Provides links to articles that describe the Microsoft Program Maintenance Utility (NMAKE.EXE).

[MSBuild on the command line - C++](msbuild-visual-cpp.md)<br/>
Provides links to articles that discuss how to use msbuild.exe from the command line.

## Related Sections

[/MD, /MT, /LD (Use Run-Time Library)](reference/md-mt-ld-use-run-time-library.md)<br/>
Describes how to use these compiler options to use a Debug or Release run-time library.

[C/C++ Compiler Options](reference/compiler-options.md)<br/>
Provides links to articles that discuss the C and C++ compiler options and CL.exe.

[MSVC Linker Options](reference/linker-options.md)<br/>
Provides links to articles that discuss the linker options and LINK.exe.

[Additional MSVC Build Tools](reference/c-cpp-build-tools.md)<br/>
Provides links to the C/C++ build tools that are included in Visual Studio.

## See also

[Building C/C++ Projects in Visual Studio](building-c-cpp-programs.md)