---
title: "Clang/LLVM support in Visual Studio CMake projects"
ms.date: "06/19/2019"
helpviewer_keywords: ["Clang support for C++"]
---

# Clang/LLVM support in Visual Studio CMake projects

You can use Visual Studio with Clang to edit and debug C++ CMake projects that target Windows or Linux.

**Windows**: Visual Studio 2019 version 16.1 includes support for editing, building, and debugging with with Clang/LLVM in CMake projects targeting Windows. Support for MSBuild based **.vcxproj** projects is planned for a future update. 

**Linux**: For Linux CMake projects, no special Visual Studio support is required. You can install Clang using your favorite package installer, and add the appropriate commadns in the CMakeLists.txt file.

## Install

For best IDE support in Visual Studio, we recommend using the latest Clang compiler tools for Windows. If you don't already have those, you can install them by opening the Visual Studio Installer and choosing **Clang compiler for Windows** under **Desktop development with C++** optional components.

![Clang component](media/clang-install-vs2019.png)

## Configure

To add a new Clang configuration to a CMake project:

1. Right-click on CMakeLists.txt in **Solution Explorer** and choose **CMake settings for project**.

1. Under **Configurations**, press the add configuration button:

   ![New configuration](media/cmake-add-config-icon.png)

1. Choose the desired Clang configuration, then press **Select**:

   ![CMake Clang configuration](media/cmake-clang-configuration.png)

   Separate Clang configurations are provided for Windows and Linux.

1. In the CMakeSettings.json file, the following default configuration is added:

```json
{
      "name": "x64-Clang-Debug",
      "generator": "Ninja",
      "configurationType": "Debug",
      "buildRoot": "${projectDir}\\out\\build\\${name}",
      "installRoot": "${projectDir}\\out\\install\\${name}",
      "cmakeCommandArgs": "",
      "buildCommandArgs": "-v",
      "ctestCommandArgs": "",
      "inheritEnvironments": [ "clang_cl_x64" ],
      "variables": []
    }
```

To modify an existing configuration to use Clang:

1. Right-click on CMakeLists.txt in **Solution Explorer** and choose **CMake settings for project**.

1. Under **General** select the **Toolset** dropdown and choose the desired Clang toolset:

   ![CMake Clang toolset](media/cmake-clang-toolset.png)

## Custom Clang locations

By default, Visual Studio looks for Clang in two places:

- (Windows) The internally installed copy of Clang/LLVM that comes with the Visual Studio installer.
- (Windows and Linux) The PATH environment variable.

You can specify another location by setting the “CMAKE_C_COMPILER” and “CMAKE_CXX_COMPILER” CMake variables in **CMake Settings**:

![CMake Clang toolset](media/clang-location-cmake.png)

## Clang compatibility modes

For Linux configurations, CMake invokes Clang in GCC compatibility mode. For Windows configurations, CMake by default invokes Clang in [clang-cl](https://llvm.org/devmtg/2014-04/PDFs/Talks/clang-cl.pdf) mode and links with the Microsoft implementation of the Standard Library. By default, **clang-cl.exe** is located in `C:\Program Files (x86)\Microsoft Visual Studio\2019\Common7\IDE\CommonExtensions\Microsoft\Llvm\bin`.

 You can modify these values in **CMake Settings** under **CMake variables and cache**. Click **Show advanced variables**. Scroll down to find **CMAKE_CXX_COMPILER**, the click the **Browse**  button to specify a different compiler path.

## Edit, build and debug

After you have set up a Clang configuration, you can build and debug the project. Visual Studio detect that you are using the Clang compiler and provides applicable IntelliSense, highlighting, navigation, and other editing features. Errors and warnings are displayed in the **Output Window**.

When debugging, you can use breakpoints, memory and data visualization, and most other debugging features. Some compiler-dependent features such as Edit and Continue are not available for Clang configurations.

![CMake Clang debugging](media/clang-debug-visualize.png)

