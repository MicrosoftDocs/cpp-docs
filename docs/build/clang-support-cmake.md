---
description: "Learn more about: Clang/LLVM support in Visual Studio CMake projects"
title: "Clang/LLVM support in Visual Studio CMake projects"
ms.date: "07/01/2019"
ms.description: "Configure a CMake project in Visual Studio to use the Clang/LLVM toolchain."
helpviewer_keywords: ["Clang support for C++ CMake projects"]
---
# Clang/LLVM support in Visual Studio CMake projects

::: moniker range="<=msvc-150"

Clang support is available starting in Visual Studio 2019.

::: moniker-end
::: moniker range=">=msvc-160"

You can use Visual Studio with Clang to edit and debug C++ CMake projects that target Windows or Linux.

**Windows**: Starting in Visual Studio 2019 version 16.1, Visual Studio includes support for editing, building, and debugging with Clang/LLVM in CMake projects targeting Windows.

**Linux**: For Linux CMake projects, no special Visual Studio support is required. You can install Clang using your distro's package manager, and add the appropriate commands in the CMakeLists.txt file.

## Install
::: moniker-end
::: moniker range="msvc-160"

For the best IDE support in Visual Studio, we recommend using the latest Clang compiler tools for Windows. If you don't already have those, you can install them by opening the Visual Studio Installer and choosing **C++ Clang compiler for Windows** under **Desktop development with C++** optional components. You may prefer to use an existing Clang installation on your machine; if so, choose the **C++ Clang-cl for v142 build tools** or **C++ Clang-cl for v143 build tools** component.

:::image type="content" source="media/clang-install-vs2019.png" alt-text="Screenshot of the Visual Studio Installer Individual Components page. C++ Clang Compiler For Windows and C++ Clang-cl for v142 build tools are selected.":::

::: moniker-end
::: moniker range="msvc-170"

For the best IDE support in Visual Studio, we recommend using the latest Clang compiler tools for Windows. If you don't already have those, you can install them by opening the Visual Studio Installer and choosing **C++ Clang compiler for Windows** under **Desktop development with C++** optional components. You may prefer to use an existing Clang installation on your machine; if so, choose the **MSBuild support for LLVM (clang-cl) toolset** component.

:::image type="content" source="media/clang-install-vs2022.png" alt-text="Screenshot of the Visual Studio Installer Individual Components page. C++ Clang Compiler For Windows and MSBuild support for LLVM are selected.":::

::: moniker-end
::: moniker range=">=msvc-160"

## Create a new configuration

To add a new Clang configuration to a CMake project:

1. Right-click on CMakeLists.txt in **Solution Explorer** and choose **CMake settings for project**.

1. Under **Configurations**, press the **Add Configuration** button:

   :::image type="content" source="media/cmake-add-config-icon.png" alt-text="Screenshot of the controls at the top of the C Make Settings dialog. The Add Configuration button is highlighted.":::

1. Choose the desired Clang configuration (note that separate Clang configurations are provided for Windows and Linux), then press **Select**:

   :::image type="content" source="media/cmake-clang-configuration.png" alt-text="Screenshot of the Add Configuration to C Make Settings dialog for Clang configuration. Contains entries such as Mingw64-Release, x86-Debug, x64-Debug, x86-Clang Debug, and so on.":::

1. To make modifications to this configuration, use the **CMake Settings Editor**. For more information, see [Customize CMake build settings in Visual Studio](customize-cmake-settings.md).

## Modify an existing configuration to use Clang

To modify an existing configuration to use Clang, follow these steps:

1. Right-click on CMakeLists.txt in **Solution Explorer** and choose **CMake settings for project**.

1. Under **General** select the **Toolset** dropdown and choose the desired Clang toolset:

   ![Screenshot of the General dialog box showing the Toolset drop-down and clang cl x 86 is highlighted.](media/cmake-clang-toolset.png)

## Custom Clang locations

By default, Visual Studio looks for Clang in two places:

- (Windows) The internally installed copy of Clang/LLVM that comes with the Visual Studio installer.
- (Windows and Linux) The PATH environment variable.

You can specify another location by setting the **CMAKE_C_COMPILER** and **CMAKE_CXX_COMPILER** CMake variables in **CMake Settings**:

:::image type="content" source="media/clang-location-cmake.png" alt-text="Screenshot of the C Make Settings dialog box with the C Make C X X Compiler highlighted. C Make configurations are listed such as x64-Clang-Debug, Linux-Clang-Release, and so on." Lightbox="media/clang-location-cmake.png":::

## Clang compatibility modes

For Windows configurations, CMake by default invokes Clang in [clang-cl](https://llvm.org/devmtg/2014-04/PDFs/Talks/clang-cl.pdf) mode and links with the Microsoft implementation of the Standard Library. By default, **clang-cl.exe** is located in `C:\Program Files (x86)\Microsoft Visual Studio\2019\Common7\IDE\CommonExtensions\Microsoft\Llvm\bin`.

You can modify these values in **CMake Settings** under **CMake variables and cache**. Click **Show advanced variables**. Scroll down to find **CMAKE_CXX_COMPILER**, then click the **Browse**  button to specify a different compiler path.

## Edit, build, and debug

After you have set up a Clang configuration, you can build and debug the project. Visual Studio detects that you're using the Clang compiler and provides IntelliSense, highlighting, navigation, and other editing features. Errors and warnings are displayed in the **Output Window**.

When debugging, you can use breakpoints, memory and data visualization, and most other debugging features. Some compiler-dependent features such as Edit and Continue aren't available for Clang configurations.

:::image type="content" source="media/clang-debug-visualize.png" alt-text="Screenshot of the Visual Studio debugger debugging a CMake Clang project.":::

::: moniker-end
