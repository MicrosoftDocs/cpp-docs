---
title: "Clang/LLVM support in Visual Studio projects"
description: "Learn more about: Clang/LLVM support in Visual Studio projects"
ms.date: 12/11/2025
ms.description: "Configure a Visual Studio MSBuild project to use the Clang/LLVM toolchain."
helpviewer_keywords: ["Clang support for C++ MSBuild projects"]
---
# Clang/LLVM support in Visual Studio projects

::: moniker range="<=msvc-150"

Clang/LLVM support for both CMake and MSBuild projects is available in Visual Studio 2019 and Visual Studio 2022.

::: moniker-end
::: moniker range=">=msvc-160"

You can use Visual Studio 2019 version 16.2 and later with Clang/LLVM to edit, build, and debug C++ Visual Studio projects (MSBuild) that target Windows or Linux.

::: moniker-end

::: moniker range="=msvc-160"
## Install

For the best IDE support in Visual Studio, we recommend using the latest Clang compiler tools for Windows. If you don't already have the tools, you can install them by opening the Visual Studio Installer and choosing **C++ Clang tools for Windows** under **Desktop development with C++** optional components. You may prefer to use an existing Clang installation on your machine; if so, choose **C++ Clang-cl for v142 build tools** or **C++ Clang-cl for v143 build tools**.
::: moniker-end
::: moniker range=">=msvc-170"
## Install

For the best IDE support in Visual Studio, we recommend using the latest Clang compiler tools for Windows. If you don't already have the tools, you can install them by opening the Visual Studio Installer and choosing **C++ Clang tools for Windows** under **Desktop development with C++** optional components. You may prefer to use an existing Clang installation on your machine; if so, choose **MSBuild support for LLVM (clang-cl) toolset**.
::: moniker-end

::: moniker range=">=msvc-160"
The Microsoft C++ Standard Library requires at least Clang 8.0.0.
::: moniker-end

::: moniker range="=msvc-160"
:::image type="complex" source="media/clang-install-vs2019.png" alt-text="Screenshot of the Visual Studio 2019 installer":::
The Individual components tab is selected in the installer. C++ Clang Compiler for Windows is selected. C++ Clang-cl for v142 build tools (x64/x86) is also selected.
:::image-end:::

::: moniker-end
::: moniker range=">=msvc-170"
:::image type="complex" source="media/clang-install-vs2022.png" alt-text="Screenshot of the Visual Studio 2022 installer."
The Individual components tab is selected in the installer. C++ Clang Compiler for Windows is selected. MSBuild support for LLVM (clang-cl) toolset is also selected.
::: image-end :::

::: moniker-end

::: moniker range=">=msvc-160"
Later versions of Visual Studio provide newer versions of the Clang toolset. The bundled version of Clang gets updated automatically to stay current with updates in the Microsoft implementation of the Standard Library. For example, Visual Studio 2019 version 16.11 includes Clang v12.

The LLVM experience in Visual Studio delivers seamless build support, project system integration, and design-time features that work with your choice of LLVM distributions. For acquisition convenience, we provide an optional LLVM binary distribution with Visual Studio. This LLVM toolset is provided as-is, sourced directly from the [LLVM Foundation’s release page](https://github.com/llvm/llvm-project/releases) without modifications by Microsoft. The installed binaries are digitally signed with a third-party Microsoft code signing certificate to mark their third-party status and to confirm that they were obtained from the LLVM Foundation’s release page.

LLVM updates in Visual Studio are typically aligned with major LLVM releases ahead of a Visual Studio general release. However, if the community or partners report security or critical blocking issues that addressed in a minor LLVM release, we prioritize updating the bundled LLVM toolset to a newer minor version containing the fix. Visual Studio’s build and project system supports using your own custom LLVM installation if needed.

## Configure a Windows project to use Clang tools

To configure a Visual Studio project to use Clang, right-click on the project node in **Solution Explorer** and choose **Properties**. Typically, you should first choose **All configurations** at the top of the dialog. Then, under **General** > **Platform Toolset**, choose **LLVM (clang-cl)** and then **OK**.

:::image type="complex" source="media/llvm-msbuild-prop-page.png" alt-text="Screenshot of the Visual Studio project Property Pages dialog box.":::
The project properties page is open to the Configuration Properties > General page. The Platform Toolset dropdown is selected, on which LLVM (clang-cl) is selected.
:::image-end:::

If you're using the Clang tools that are bundled with Visual Studio, no extra steps are required. For Windows projects, Visual Studio by default invokes Clang in [clang-cl](https://llvm.org/devmtg/2014-04/PDFs/Talks/clang-cl.pdf) mode. It links with the Microsoft implementation of the Standard Library. By default, **clang-cl.exe** is located in *`%VCINSTALLDIR%\Tools\Llvm\bin\`* and *`%VCINSTALLDIR%\Tools\Llvm\x64\bin\`*.

If you're using a custom Clang installation, you can change the value of the `LLVMInstallDir` property. For more information, see [Set a custom LLVM location](#custom_llvm_location).

## Configure a Linux project to use Clang tools

For Linux projects, Visual Studio uses the Clang GCC-compatible frontend. The project properties and nearly all compiler flags are identical

To configure a Visual Studio Linux project to use Clang:

1. Right-click on the project node in **Solution Explorer** and choose **Properties**.
1. Typically, you should first choose **All configurations** at the top of the dialog.
1. Under **General** > **Platform Toolset**, choose **Clang for Windows Subsystem for Linux** if you're using Windows Subsystem for Linux (WSL). Choose **Clang for Remote Linux** if you're using a remote machine or VM.
1. Press **OK**.

:::image type="complex" source="media/clang-msbuild-prop-page.png" alt-text="Screenshot of the Visual Studio 2019 project Property Pages dialog box":::
The project properties page is open to the Configuration Properties > General page. Platform Toolset is selected and from the list of options, LLVM (clang- c l) is selected."
:::image-end:::

On Linux, Visual Studio by default uses the first Clang location that it finds in the PATH environment property. If you're using a custom Clang installation, then either change the value of the `LLVMInstallDir` property or else enter the path under **Project** > **Properties** > **Configuration Properties** > **VC++ DIrectories** > **Executable Directories**. For more information, see [Set a custom LLVM location](#custom_llvm_location).

## <a name="custom_llvm_location"></a> Set a custom LLVM location and toolset

To set a custom path to LLVM and set a custom LLVM toolset version for one or more projects, create a *Directory.build.props* file. Then, add that file to the root folder of any project. You can add it to the root solution folder to apply it to all projects in the solution. The file should look like this example (but use your actual LLVM path and version number):

```xml
<Project>
  <PropertyGroup>
    <LLVMInstallDir>C:\MyLLVMRootDir</LLVMInstallDir>
    <LLVMToolsVersion>15.0.0</LLVMToolsVersion>
  </PropertyGroup>
</Project>
```

## <a name="custom_llvm_toolset"></a> Set a custom LLVM toolset version in the IDE

Starting in Visual Studio 2019 version 16.9, you can set a custom toolset version for LLVM in Visual Studio. To set this property in a project:

1. Open the project's **Property Pages** dialog box. For more information, see [Set C++ compiler and build properties](./working-with-project-properties.md).

1. Select the **Configuration Properties** > **General** property page.

1. Modify the **Platform Toolset** property to *LLVM (clang-cl)*, if it isn't already set. Choose **Apply** to save your changes.

1. Select the **Configuration Properties** > **Advanced** property page.

1. Modify the **LLVM Toolset Version** property to your preferred version, and then choose **OK** to save your changes.

The **LLVM Toolset Version** property only appears when the LLVM platform toolset is selected.

When you add a `Directory.build.props` file to a project or solution, the settings appear as the default in the project Property Pages dialog. However, changes to these properties in Visual Studio override the settings in the `Directory.build.props` file.

## Set properties, edit, build, and debug

After you set up a Clang configuration, right-click again on the project node and choose **Reload project**. You can now build and debug the project using the Clang tools. Visual Studio detects that you're using the Clang compiler and provides IntelliSense, highlighting, navigation, and other editing features. Errors and warnings are displayed in the **Output Window**. The project property pages for a Clang configuration are similar to the ones for MSVC. However, some compiler-dependent features such as Edit and Continue aren't available for Clang configurations. You can set a Clang compiler or linker option that isn't available in the property pages. Add it manually in the property pages under **Configuration Properties** > **C/C++ (or Linker)** > **Command Line** > **Additional Options**.

When debugging, you can use breakpoints, memory and data visualization, and most other debugging features.  

:::image type="complex" source="media/clang-debug-msbuild.png" alt-text="Screenshot of Visual Studio debugging a sample app":::
The portion of the app that's visible creates a string vector and adds some strings to it. Execution stopped on a breakpoint for the code v.push_back("Clang/LLVM");.
:::image-end:::

::: moniker-end
