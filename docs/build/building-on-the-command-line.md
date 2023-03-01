---
title: "Use the Microsoft C++ toolset from the command line"
description: "Use the Microsoft C++ (MSVC) compiler toolset from the command line outside of the Visual Studio IDE."
ms.custom: "conceptual"
ms.date: 04/07/2022
helpviewer_keywords: ["command-line builds [C++]", "compiling source code [C++], command line", "builds [C++], command-line", "command line [C++], building from", "command line [C++], compilers"]
ms.assetid: 7ca9daed-a003-4162-842d-908f79058365
---
# Use the Microsoft C++ toolset from the command line

You can build C and C++ applications on the command line by using tools that are included in Visual Studio. The Microsoft C++ (MSVC) compiler toolset is also downloadable as a standalone package. You don't need to install the Visual Studio IDE if you don't plan to use it.

> [!NOTE]
> This article is about how to set up an environment to use the individual compilers, linkers, librarian, and other basic tools. The native project build system in Visual Studio, based on MSBuild, doesn't use the environment as described in this article. For more information on how to use MSBuild from the command line, see [MSBuild on the command line - C++](msbuild-visual-cpp.md).

## Download and install the tools

::: moniker range=">=msvc-160"

If you've installed Visual Studio and a C++ workload, you have all the command-line tools. For information on how to install C++ and Visual Studio, see [Install C++ support in Visual Studio](vscpp-step-0-installation.md). If you only want the command-line toolset, download the [Build Tools for Visual Studio](https://visualstudio.microsoft.com/downloads/#build-tools-for-visual-studio-2022). When you run the downloaded executable, it updates and runs the Visual Studio Installer. To install only the tools you need for C++ development, select the **Desktop development with C++** workload. You can select optional libraries and toolsets to include under **Installation details**. To build code by using the Visual Studio 2015, 2017, or 2019 toolsets, select the optional MSVC v140, v141, or v142 build tools. When you're satisfied with your selections, choose **Install**.

::: moniker-end
::: moniker range="<=msvc-150"

If you've installed Visual Studio and a C++ workload, you have all the command-line tools. For information on how to install C++ and Visual Studio, see [Install C++ support in Visual Studio](vscpp-step-0-installation.md). If you only want the command-line toolset, download the [Build Tools for Visual Studio 2017](https://my.visualstudio.com/Downloads?q=2017). When you run the downloaded executable, it updates and runs the Visual Studio Installer. To install only the tools you need for C++ development, select the **Visual C++ build tools** workload. You can select optional libraries and toolsets to include under **Installation details**. To build code by using the Visual Studio 2015 toolset, select the optional MSVC v140 build tools. When you're satisfied with your selections, choose **Install**.

::: moniker-end

## How to use the command-line tools

When you choose one of the C++ workloads in the Visual Studio Installer, it installs the Visual Studio *platform toolset*. A platform toolset has all the C and C++ tools for a specific Visual Studio version. The tools include the C/C++ compilers, linkers, assemblers, and other build tools, and matching libraries and header files. You can use all of these tools at the command line. They're also used internally by the Visual Studio IDE. There are separate x86-hosted and x64-hosted compilers and tools to build code for x86, x64, ARM, and ARM64 targets. Each set of tools for a particular host and target build architecture is stored in its own directory.

To work correctly, the tools require several specific environment variables to be set. These variables are used to add the tools to the path, and to set the locations of include files, library files, and SDKs. To make it easy to set these environment variables, the installer creates customized *command files*, or batch files, during installation. You can run one of these command files to set a specific host and target build architecture, Windows SDK version, and platform toolset. For convenience, the installer also creates shortcuts in your Start menu. The shortcuts open developer command prompt windows by using these command files for specific combinations of host and target. These shortcuts ensure all the required environment variables are set and ready to use.

The required environment variables are specific to your installation and to the build architecture you choose. They also might be changed by product updates or upgrades. This variability is one reason why we recommend you use an installed command prompt shortcut or command file, instead of setting the environment variables yourself.

The toolsets, command files, and shortcuts installed depend on your computer processor and the options you selected during installation. The x86-hosted tools and cross tools that build x86 and x64 code are always installed. If you have 64-bit Windows, the x64-hosted tools and cross tools that build x86 and x64 code are also installed. If you choose the optional C++ Universal Windows Platform tools, then the x86 and x64 tools that build ARM and ARM64 code also get installed. Other workloads may install these and other tools.

## <a name="path_and_environment"></a> Path and environment variables for command-line builds

The MSVC command-line tools use the `PATH`, `TMP`, `INCLUDE`, `LIB`, and `LIBPATH` environment variables, and also use other environment variables specific to your installed tools, platforms, and SDKs. Even a simple Visual Studio installation may set twenty or more environment variables. This complexity is why we strongly recommend that you use a [developer command prompt shortcut](#developer_command_prompt_shortcuts) or one of the [customized command files](#developer_command_file_locations). We don't recommend you set these variables in the Windows environment yourself.

To see which environment variables are set by a developer command prompt shortcut, you can use the `SET` command. Open a plain command prompt window and capture the output of the `SET` command for a baseline. Open a developer command prompt window and capture the output of the `SET` command for comparison. Use a diff tool such as the one built into Visual Studio to highlight the environment variables set by the developer command prompt. For more information about the compiler and linker environment variables, see [CL environment variables](reference/cl-environment-variables.md).

## <a name="developer_command_prompt_shortcuts"></a> Developer command prompt shortcuts

The command prompt shortcuts are installed in a version-specific Visual Studio folder in your Windows Start menu. Here's a list of the base command prompt shortcuts and the build architectures they support:

- **Developer Command Prompt** - Sets the environment to use 32-bit, x86-native tools to build 32-bit, x86-native code.
- **x86 Native Tools Command Prompt** - Sets the environment to use 32-bit, x86-native tools to build 32-bit, x86-native code.
- **x64 Native Tools Command Prompt** - Sets the environment to use 64-bit, x64-native tools to build 64-bit, x64-native code.
- **x86_x64 Cross Tools Command Prompt** - Sets the environment to use 32-bit, x86-native tools to build 64-bit, x64-native code.
- **x64_x86 Cross Tools Command Prompt** - Sets the environment to use 64-bit, x64-native tools to build 32-bit, x86-native code.

::: moniker range=">= msvc-160"

The Start menu folder and shortcut names vary depending on the installed version of Visual Studio. If you set one, they also depend on the installation **Nickname**. For example, suppose you installed Visual Studio 2022, and you gave it a nickname of *Latest*. The developer command prompt shortcut is named **Developer Command Prompt for VS 2022 (Latest)**, in a folder named **Visual Studio 2022**.

::: moniker-end
::: moniker range="msvc-150"

The Start menu folder and shortcut names vary depending on the installed version of Visual Studio. If you set one, they also depend on the installation **Nickname**. For example, suppose you installed Visual Studio 2017, and you gave it a nickname of *Latest*. The developer command prompt shortcut is named **Developer Command Prompt for VS 2017 (Latest)**, in a folder named **Visual Studio 2017**.

::: moniker-end
::: moniker range="< msvc-150"

The Start menu folder and shortcut names vary depending on the installed version of Visual Studio. For example, suppose you installed Visual Studio 2015. The developer command prompt shortcut is named **Developer Command Prompt for VS 2015**.

::: moniker-end

> [!NOTE]
> Several command-line tools or tool options may require Administrator permission. If you have permission issues when you use them, we recommend that you open the developer command prompt window by using the **Run as Administrator** option. Right-click to open the shortcut menu for the command prompt window, then choose **More**, **Run as administrator**.

### <a name="developer_command_prompt"></a> To open a developer command prompt window

1. On the desktop, open the Windows **Start** menu. In Windows 11, choose the **All apps** button to open the list of installed apps. In Windows 10, the list is open to the left. Scroll down the list to find and open the folder (not the app) for your version of Visual Studio, for example, **Visual Studio 2022**.

1. In the folder, choose the **Developer Command Prompt** for your version of Visual Studio. This shortcut starts a developer command prompt window that uses the default build architecture of 32-bit, x86-native tools to build 32-bit, x86-native code. If you prefer a non-default build architecture, choose one of the native or cross tools command prompts to specify the host and target architecture.

For an even faster way to open a developer command prompt, enter *developer command prompt* in the desktop search box. Then choose the result you want.

> [!NOTE]
> By default, the current working directory in a developer command prompt is the root of your Visual Studio installation in the Program Files directory. This isn't an appropriate location for your code and projects. Change the current working directory to another location before you create a project. The IDE creates projects in your user directory, typically in *%USERPROFILE%\\source\\repos*.

## <a name="developer_command_file_locations"></a> Developer command file locations

If you prefer to set the build environment in an existing command prompt window, you can use one of the command files created by the installer. We recommend you set the environment in a new command prompt window. We don't recommend you later switch environments in the same command window.

::: moniker range=">= msvc-170"

The command file location depends on the version of Visual Studio you installed, and on choices you made during installation. For Visual Studio 2019, the typical installation location on a 64-bit system is in *`\Program Files\Microsoft Visual Studio\2022\<edition>`*. The *`<edition>`* may be Community, Professional, Enterprise, BuildTools, or another nickname you supplied.

::: moniker-end
::: moniker range="= msvc-160"

The command file location depends on the version of Visual Studio you installed, and on choices you made during installation. For Visual Studio 2019, the typical installation location on a 64-bit system is in *`\Program Files (x86)\Microsoft Visual Studio\2019\<edition>`*. The *`<edition>`* may be Community, Professional, Enterprise, BuildTools, or another nickname you supplied.

::: moniker-end
::: moniker range="= msvc-150"

The command file location depends on the version of Visual Studio you installed, and on choices you made during installation. For Visual Studio 2017, the typical installation location on a 64-bit system is in *`\Program Files (x86)\Microsoft Visual Studio\2017\<edition>`*. The *`<edition>`* may be Community, Professional, Enterprise, BuildTools, or another nickname you supplied.

::: moniker-end
::: moniker range="< msvc-150"

The command file location depends on the Visual Studio version, and the installation directory. For Visual Studio 2015, the typical installation location on a 64-bit system is in *`\Program Files (x86)\Microsoft Visual Studio 14.0`*.

::: moniker-end

The primary developer command prompt command file, *`VsDevCmd.bat`*, is located in the *`Common7\Tools`* subdirectory. When no parameters are specified, it sets the environment to use the x86-native tools to build 32-bit x86 code.

::: moniker range=">= msvc-150"

More command files are available to set up specific build architectures. The command files available depend on the Visual Studio workloads and options you've installed. In Visual Studio 2017 and Visual Studio 2019, you'll find them in the VC\\Auxiliary\\Build subdirectory.

::: moniker-end
::: moniker range="< msvc-150"

More command files are available to set up specific build architectures. The command files available depend on the Visual Studio workloads and options you've installed. In Visual Studio 2015, they're located in the VC, VC\\bin, or VC\\bin\\*architecture* subdirectories, where *architecture* is one of the native or cross-compiler options.

::: moniker-end

These command files set default parameters and call *`VsDevCmd.bat`* to set up the specified build architecture environment. A typical installation may include these command files:

| Command File | Host and Target architectures |
|--|--|
| *`vcvars32.bat`* | Use the 32-bit x86-native tools to build 32-bit x86 code. |
| *`vcvars64.bat`* | Use the 64-bit x64-native tools to build 64-bit x64 code. |
| *`vcvarsx86_amd64.bat`* | Use the 32-bit x86-native cross tools to build 64-bit x64 code. |
| *`vcvarsamd64_x86.bat`* | Use the 64-bit x64-native cross tools to build 32-bit x86 code. |
| *`vcvarsx86_arm.bat`* | Use the 32-bit x86-native cross tools to build ARM code. |
| *`vcvarsamd64_arm.bat`* | Use the 64-bit x64-native cross tools to build ARM code. |
| *`vcvarsx86_arm64.bat`* | Use the 32-bit x86-native cross tools to build ARM64 code. |
| *`vcvarsamd64_arm64.bat`* | Use the 64-bit x64-native cross tools to build ARM64 code. |
| *`vcvarsall.bat`* | Use parameters to specify the host and target architectures, Windows SDK, and platform choices. For a list of supported options, call by using a `/help` parameter. |

> [!CAUTION]
> The *`vcvarsall.bat`* file and other Visual Studio command files can vary from computer to computer. Do not replace a missing or damaged *`vcvarsall.bat`* file by using a file from another computer. Rerun the Visual Studio installer to replace the missing file.
>
> The *`vcvarsall.bat`* file also varies from version to version. If the current version of Visual Studio is installed on a computer that also has an earlier version of Visual Studio, do not run *`vcvarsall.bat`* or another Visual Studio command file from different versions in the same command prompt window.

## Use the developer tools in an existing command window

The simplest way to specify a particular build architecture in an existing command window is to use the *`vcvarsall.bat`* file. Use *`vcvarsall.bat`* to set environment variables to configure the command line for native 32-bit or 64-bit compilation. Arguments let you specify cross-compilation to x86, x64, ARM, or ARM64 processors. You can target Microsoft Store, Universal Windows Platform, or Windows Desktop platforms. You can even specify which Windows SDK to use, and select the platform toolset version.

When used with no arguments, *`vcvarsall.bat`* configures the environment variables to use the current x86-native compiler for 32-bit Windows Desktop targets. You can add arguments to configure the environment to use any of the native or cross compiler tools. *`vcvarsall.bat`* displays an error message if you specify a configuration that's not installed, or not available on your computer.

### `vcvarsall` syntax

> **`vcvarsall.bat`** [*`architecture`*] [*`platform_type`*] [*`winsdk_version`*] [**`-vcvars_ver=`***`vcversion`*] [*`spectre_mode`*]

*`architecture`*<br/>
This optional argument specifies the host and target architecture to use. If *architecture* isn't specified, the default build environment is used. These arguments are supported:

| *`architecture`* | Compiler | Host computer architecture | Build output (target) architecture |
|--|--|--|--|
| `x86` | x86 32-bit native | x86, x64 | x86 |
| `x86_amd64` or `x86_x64` | x64 on x86 cross | x86, x64 | x64 |
| `x86_arm` | ARM on x86 cross | x86, x64 | ARM |
| `x86_arm64` | ARM64 on x86 cross | x86, x64 | ARM64 |
| `amd64` or `x64` | x64 64-bit native | x64 | x64 |
| `amd64_x86` or `x64_x86` | x86 on x64 cross | x64 | x86 |
| `amd64_arm` or `x64_arm` | ARM on x64 cross | x64 | ARM |
| `amd64_arm64` or `x64_arm64` | ARM64 on x64 cross | x64 | ARM64 |

*`platform_type`*<br/>
This optional argument allows you to specify **`store`** or **`uwp`** as the platform type. By default, the environment is set to build desktop or console apps.

*`winsdk_version`*<br/>
Optionally specifies the version of the Windows SDK to use. By default, the latest installed Windows SDK is used. To specify the Windows SDK version, you can use a full Windows SDK number such as **`10.0.10240.0`**, or specify **`8.1`** to use the Windows 8.1 SDK.

*`vcversion`*<br/>
Optionally specifies the Visual Studio compiler toolset to use. By default, the environment is set to use the current Visual Studio compiler toolset.

::: moniker range=">= msvc-160"

Use **-vcvars_ver=14.2x.yyyyy** to specify a specific version of the Visual Studio 2019 compiler toolset.

Use **-vcvars_ver=14.29** to specify the latest version of the Visual Studio 2019 compiler toolset.

::: moniker-end
::: moniker range="= msvc-150"

Use **-vcvars_ver=14.16** to specify the latest version of the Visual Studio 2017 compiler toolset.

Use **-vcvars_ver=14.1x.yyyyy** to specify a specific version of the Visual Studio 2017 compiler toolset.

::: moniker-end

Use **-vcvars_ver=14.0** to specify the Visual Studio 2015 compiler toolset.

*`spectre_mode`*\
Leave this parameter out to use libraries without Spectre mitigations. Use the value **`spectre`** to use libraries with Spectre mitigations.

#### <a name="vcvarsall"></a> To set up the build environment in an existing command prompt window

1. At the command prompt, use the CD command to change to the Visual Studio installation directory. Then, use CD again to change to the subdirectory that contains the configuration-specific command files. For Visual Studio 2019 and Visual Studio 2017, use the *VC\\Auxiliary\\Build* subdirectory. For Visual Studio 2015, use the *VC* subdirectory.

1. Enter the command for your preferred developer environment. For example, to build ARM code for UWP on a 64-bit platform, using the latest Windows SDK and Visual Studio compiler toolset, use this command line:

   `vcvarsall.bat amd64_arm uwp`

## Create your own command prompt shortcut

::: moniker range=">= msvc-160"

Open the Properties dialog for a developer command prompt shortcut to see the command target used. For example, the target for the **x64 Native Tools Command Prompt for VS 2019** shortcut is something similar to:

`%comspec% /k "C:\Program Files (x86)\Microsoft Visual Studio\2019\Community\VC\Auxiliary\Build\vcvars64.bat"`

::: moniker-end
::: moniker range="= msvc-150"

Open the Properties dialog for a developer command prompt shortcut to see the command target used. For example, the target for the **x64 Native Tools Command Prompt for VS 2017** shortcut is something similar to:

`%comspec% /k "C:\Program Files (x86)\Microsoft Visual Studio\2017\Community\VC\Auxiliary\Build\vcvars64.bat"`

::: moniker-end
::: moniker range="< msvc-150"

Open the Properties dialog for a developer command prompt shortcut to see the command target used. For example, the target for the **VS2015 x64 Native Tools Command Prompt** shortcut is something similar to:

`%comspec% /k "C:\Program Files (x86)\Microsoft Visual Studio 14.0\VC\vcvarsall.bat" amd64`

::: moniker-end

The architecture-specific batch files set the *`architecture`* parameter and call *`vcvarsall.bat`*. You can pass the same options to these batch files as you would pass to *`vcvarsall.bat`*, or you can just call *`vcvarsall.bat`* directly. To specify parameters for your own command shortcut, add them to the end of the command in double-quotes. For example, here's a shortcut to build ARM code for UWP on a 64-bit platform, using the latest Windows SDK. To use an earlier compiler toolset, specify the version number. Use something like this command target in your shortcut:

::: moniker range=">= msvc-160"

`%comspec% /k "C:\Program Files (x86)\Microsoft Visual Studio\2019\Community\VC\Auxiliary\Build\vcvarsall.bat" amd64_arm uwp -vcvars_ver=14.29`

::: moniker-end
::: moniker range="= msvc-150"

`%comspec% /k "C:\Program Files (x86)\Microsoft Visual Studio\2017\Community\VC\Auxiliary\Build\vcvarsall.bat" amd64_arm uwp -vcvars_ver=14.19`

::: moniker-end
::: moniker range="< msvc-150"

`%comspec% /k "C:\Program Files (x86)\Microsoft Visual Studio 14.0\VC\vcvarsall.bat" amd64 -vcvars_ver=14.0`

::: moniker-end

Adjust the path to reflect your Visual Studio installation directory. The vcvarsall.bat file has additional information about specific version numbers.

## Command-line tools

To build a C/C++ project at a command prompt, Visual Studio provides these command-line tools:

[`CL`](reference/compiling-a-c-cpp-program.md)<br/>
Use the compiler (cl.exe) to compile and link source code files into apps, libraries, and DLLs.

[`Link`](reference/linking.md)<br/>
Use the linker (link.exe) to link compiled object files and libraries into apps and DLLs.

When you build on the command line, the F1 command isn't available for instant help. Instead, you can use a search engine to get information about warnings, errors, and messages. You can also download and use the offline help files. To use the search in Microsoft Learn, enter your query in the search box at the top of any article.

## Command-line project management tools

By default, the Visual Studio IDE uses native project build systems based on MSBuild. You can invoke MSBuild directly to build projects without using the IDE. You can also use the `devenv` command to use Visual Studio to build projects and solutions. Visual Studio also supports build systems based on CMake or NMake.

[`MSBuild`](msbuild-visual-cpp.md)\
Use MSBuild (msbuild.exe) and a project file (.vcxproj) to configure a build and invoke the toolset without loading the Visual Studio IDE. It's equivalent to running the **Build** project or **Build Solution** command in the Visual Studio IDE. MSBuild has advantages over the IDE when you build at the command line. You don't have to install the full IDE on all your build servers and build pipelines. You avoid the extra overhead of the IDE. MSBuild runs in containerized build environments, and supports a [binary logger](https://msbuildlog.com/).

[`DEVENV`](/visualstudio/ide/reference/devenv-command-line-switches)\
Use DEVENV (devenv.exe) combined with a command-line switch such as **`/Build`** or **`/Clean`** to execute certain build commands without displaying the Visual Studio IDE.

[`CMake`](../build/cmake-projects-in-visual-studio.md)\
CMake (cmake.exe) is a cross-platform, open-source tool for defining build processes that run on multiple platforms. CMake can configure and control native build tools for its supported platforms, such as MSBuild and Make. For more information about CMake, see the [CMake documentation](https://cmake.org/cmake/help/latest/index.html#).

[`NMAKE`](reference/nmake-reference.md)\
Use NMAKE (nmake.exe) to build C++ projects by using a traditional makefile.

> [!NOTE]
> Starting in Visual Studio 2019 version 16.5, MSBuild and DEVENV don't use the command-line environment to control the toolset and libraries used.

## In this section

These articles show how to build apps on the command line, and describe how to customize the command-line build environment. Some show how to use 64-bit toolsets, and target x86, x64, ARM, and ARM64 platforms. They also describe use of the command-line build tools MSBuild and NMAKE.

[Walkthrough: Compiling a native C++ program on the command line](walkthrough-compiling-a-native-cpp-program-on-the-command-line.md)<br/>
Gives an example that shows how to create and compile a C++ program on the command line.

[Walkthrough: Compile a C program on the command line](walkthrough-compile-a-c-program-on-the-command-line.md)<br/>
Describes how to compile a program written in the C programming language.

[Walkthrough: Compiling a C++/CLI program on the command line](walkthrough-compiling-a-cpp-cli-program-on-the-command-line.md)<br/>
Describes how to create and compile a C++/CLI program that uses the .NET Framework.

[Walkthrough: Compiling a C++/CX program on the command line](walkthrough-compiling-a-cpp-cx-program-on-the-command-line.md)<br/>
Describes how to create and compile a C++/CX program that uses the Windows Runtime.

[NMAKE reference](reference/nmake-reference.md)<br/>
Provides links to articles that describe the Microsoft Program Maintenance Utility (NMAKE.EXE).

[MSBuild on the command line - C++](msbuild-visual-cpp.md)<br/>
Provides links to articles that discuss how to use msbuild.exe from the command line.

## Related sections

[/MD, /MT, /LD (Use run-time library)](reference/md-mt-ld-use-run-time-library.md)<br/>
Describes how to use these compiler options to use a Debug or Release run-time library.

[C/C++ compiler options](reference/compiler-options.md)<br/>
Provides links to articles that discuss the C and C++ compiler options and CL.exe.

[MSVC linker options](reference/linker-options.md)<br/>
Provides links to articles that discuss the linker options and LINK.exe.

[Additional MSVC build tools](reference/c-cpp-build-tools.md)<br/>
Provides links to the C/C++ build tools that are included in Visual Studio.

## See also

[Projects and build systems](projects-and-build-systems-cpp.md)
