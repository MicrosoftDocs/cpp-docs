---
title: "Walkthrough: Using MSBuild to Create a Visual Studio C++ Project"
description: "A walkthrough that shows how to create a command-line MSBuild C++ .vcxproj project from scratch."
ms.date: 10/08/2020
helpviewer_keywords: ["MSBuild (C++), walkthrough: create a project"]
---
# Walkthrough: Using MSBuild to Create a Visual C++ Project

This walkthrough demonstrates how to use MSBuild in a command prompt to build a Visual Studio C++ project. You'll learn how to create an XML-based *`.vcxproj`* project file for a Visual C++ console application. After building the project, you'll learn how to customize the build process.

> [!IMPORTANT]
> Don't use this approach if you intend to edit the project file later by using the Visual Studio IDE. If you create a *`.vcxproj`* file manually, the Visual Studio IDE might not be able to edit or load it, especially if the project uses wildcards in project items. For more information, see [`.vcxproj` and `.props` file structure](./reference/vcxproj-file-structure.md) and [`.vcxproj` files and wildcards](./reference/vcxproj-files-and-wildcards.md).

This walkthrough illustrates these tasks:

- Creating the C++ source files for your project.

- Creating the XML MSBuild project file.

- Using MSBuild to build your project.

- Using MSBuild to customize your project.

## Prerequisites

You need these prerequisites to complete this walkthrough:

- A copy of Visual Studio with the **Desktop development with C++** workload installed.

- A general understanding of the MSBuild system.

::: moniker range="msvc-140"

> [!NOTE]
> Most of the low-level build instructions are contained in the *`.targets`* and *`.props`* files that are defined under the default targets folder, stored in the property `$(VCTargetsPath)`. It's where you'll find files such as *`Microsoft.Cpp.Common.props`*. The default path for these files in Visual Studio 2015 and earlier versions is under *`%ProgramFiles(x86)%\MSBuild\Microsoft.Cpp\v4.0\<version>\`*.

::: moniker-end

::: moniker range="msvc-150"

> [!NOTE]
> Most of the low-level build instructions are contained in the *`.targets`* and *`.props`* files that are defined under the default targets folder, stored in the property `$(VCTargetsPath)`. It's where you'll find files such as *`Microsoft.Cpp.Common.props`*. The default path for these files in Visual Studio 2017 is under *`%VSINSTALLDIR%Common7\IDE\VC\VCTargets\`*. Visual Studio 2015 and earlier versions stored them under *`%ProgramFiles(x86)%\MSBuild\Microsoft.Cpp\v4.0\<version>\`*.

::: moniker-end

::: moniker range=">=msvc-160"

> [!NOTE]
> Most of the low-level build instructions are contained in the *`.targets`* and *`.props`* files that are defined under the default targets folder, stored in the property `$(VCTargetsPath)`. It's where you'll find files such as *`Microsoft.Cpp.Common.props`*. The default path for these files is under *`%VSINSTALLDIR%MSBuild\Microsoft\VC\<version>\`*. The `<version>` path element is specific to the version of Visual Studio. It's *`v160`* for Visual Studio 2019. Visual Studio 2017 stored these files under *`%VSINSTALLDIR%Common7\IDE\VC\VCTargets\`*. Visual Studio 2015 and earlier versions stored them under *`%ProgramFiles(x86)%\MSBuild\Microsoft.Cpp\v4.0\<version>\`*.

::: moniker-end

## Create the C++ source files

In this walkthrough, you'll create a project that has a source file and a header file. The source file *`main.cpp`* contains the `main` function for the console application. The header file *`main.h`* contains code to include the `<iostream>` header file. You can create these C++ files by using Visual Studio or a text editor such as Visual Studio Code.

### To create the C++ source files for your project

1. Create a folder for your project.

1. Create a file named *`main.cpp`* and add this code to the file:

    ```cpp
    // main.cpp : the application source code.
    #include <iostream>
    #include "main.h"
    int main()
    {
       std::cout << "Hello, from MSBuild!\n";
       return 0;
    }
    ```

1. Create a file named *`main.h`* and add this code to the file:

    ```cpp
    // main.h: the application header code.
    /* Additional source code to include. */
    ```

## Creating the XML MSBuild Project File

An MSBuild project file is an XML file that contains a project root element (`<Project>`). In the example project you'll build, the `<Project>` element contains seven child elements:

- Three item group tags (`<ItemGroup>`) that specify project configuration and platform, source file name, and header file name.

- Three import tags (`<Import>`) that specify the location of Microsoft Visual C++ settings.

- A property group tag (`<PropertyGroup>`) that specifies project settings.

### To create the MSBuild project file

1. Use a text editor to create a project file that is named *`myproject.vcxproj`*, and then add the root `<Project>` element shown here. (Use `ToolsVersion="14.0"` if you're using Visual Studio 2015, `ToolsVersion="15.0"` if you're using Visual Studio 2017, or `ToolsVersion="16.0"` if you're using Visual Studio 2019.)

    ```xml
    <Project DefaultTargets="Build" ToolsVersion="16.0" xmlns="http://schemas.microsoft.com/developer/msbuild/2003">
    </Project>
    ```

   Insert the elements in the next procedure steps between the root `<Project>` tags.

1. Add these two `<ProjectConfiguration>` child elements in an `<ItemGroup>` element. The child element specifies debug and release configurations for a 32-bit Windows operating system:

    ```xml
    <ItemGroup>
      <ProjectConfiguration Include="Debug|Win32">
        <Configuration>Debug</Configuration>
        <Platform>Win32</Platform>
      </ProjectConfiguration>
      <ProjectConfiguration Include="Release|Win32">
        <Configuration>Release</Configuration>
        <Platform>Win32</Platform>
      </ProjectConfiguration>
    </ItemGroup>
    ```

1. Add an `<Import>` element that specifies the path of the default C++ settings for this project:

    ```xml
    <Import Project="$(VCTargetsPath)\Microsoft.Cpp.default.props" />
    ```

1. Add a property group element (`<PropertyGroup>`) that specifies two project properties, `<ConfigurationType>` and `<PlatformToolset>`. (Use `v140` as the `<PlatformToolset>` value if you're using Visual Studio 2015, `v141` if you're using Visual Studio 2017, or `v142` if you're using Visual Studio 2019.)

    ```xml
    <PropertyGroup>
      <ConfigurationType>Application</ConfigurationType>
      <PlatformToolset>v142</PlatformToolset>
    </PropertyGroup>
    ```

1. Add an `<Import>` element that specifies the path of the current C++ settings for this project:

    ```xml
    <Import Project="$(VCTargetsPath)\Microsoft.Cpp.props" />
    ```

1. Add a `<ClCompile>` child element in an `<ItemGroup>` element. The child element specifies the name of the C/C++ source file to compile:

    ```xml
    <ItemGroup>
      <ClCompile Include="main.cpp" />
    </ItemGroup>
    ```

   > [!NOTE]
   > `<ClCompile>` is a *build target* and is defined in the default targets folder.

1. Add a `<ClInclude>` child element in an `<ItemGroup>` element. The child element specifies the name of the header file for the C/C++ source file:

    ```xml
    <ItemGroup>
      <ClInclude Include="main.h" />
    </ItemGroup>
    ```

1. Add an `<Import>` element that specifies the path of the file that defines the target for this project:

    ```xml
    <Import Project="$(VCTargetsPath)\Microsoft.Cpp.Targets" />
    ```

### Complete Project File

This code shows the complete project file that you created in the previous procedure. (Use `ToolsVersion="15.0"` for Visual Studio 2017, or `ToolsVersion="14.0"` for Visual Studio 2015.)

```xml
<Project DefaultTargets="Build" ToolsVersion="16.0" xmlns="http://schemas.microsoft.com/developer/msbuild/2003">
  <ItemGroup>
    <ProjectConfiguration Include="Debug|Win32">
      <Configuration>Debug</Configuration>
      <Platform>Win32</Platform>
    </ProjectConfiguration>
    <ProjectConfiguration Include="Release|Win32">
      <Configuration>Release</Configuration>
      <Platform>Win32</Platform>
    </ProjectConfiguration>
  </ItemGroup>
  <Import Project="$(VCTargetsPath)\Microsoft.Cpp.default.props" />
  <PropertyGroup>
    <ConfigurationType>Application</ConfigurationType>
    <PlatformToolset>v142</PlatformToolset>
  </PropertyGroup>
  <Import Project="$(VCTargetsPath)\Microsoft.Cpp.props" />
  <ItemGroup>
    <ClCompile Include="main.cpp" />
  </ItemGroup>
  <ItemGroup>
    <ClInclude Include="main.h" />
  </ItemGroup>
  <Import Project="$(VCTargetsPath)\Microsoft.Cpp.Targets" />
</Project>
```

## Using MSBuild to Build Your Project

Enter this command at the command prompt to build your console application:

> `msbuild myproject.vcxproj /p:configuration=debug`

MSBuild creates a folder for the output files, and then compiles and links your project to generate the *`Myproject.exe`* program. After the build process finishes, use this command to run the application from the debug folder:

> `myproject`

The application should display "Hello, from MSBuild!" in the console window.

## Customizing Your Project

MSBuild enables you to execute predefined build targets, apply user-defined properties, and use custom tools, events, and build steps. This section illustrates these tasks:

- Using MSBuild with build targets.

- Using MSBuild with build properties.

- Using MSBuild with the 64-bit compiler and tools.

- Using MSBuild with different toolsets.

- Adding MSBuild customizations.

### Using MSBuild with Build Targets

A *build target* is a named set of predefined or user-defined commands that can be executed during the build. Use the target command-line option (**`/t`**) to specify a build target. For the `myproject` example project, the predefined **`clean`** target deletes all files in the debug folder and creates a new log file.

At the command prompt, enter this command to clean `myproject`:

> `msbuild myproject.vcxproj /t:clean`

### Using MSBuild with Build Properties

The property command-line option (`/p`) enables you to override a property in your project build file. In the `myproject` example project, the release or debug build configuration is specified by the `Configuration` property. The operating system that you'll use to run the built application is specified by the `Platform` property.

At the command prompt, enter this command to create a debug build of the `myproject` application to run on 32-bit Windows:

> `msbuild myproject.vcxproj /p:configuration=debug /p:platform=win32`

Assume that the `myproject` example project also defines a configuration for 64-bit Windows, and another configuration for a custom operating system named `myplatform`.

At the command prompt, enter this command to create a release build that runs on 64-bit Windows:

> `msbuild myproject.vcxproj /p:configuration=release /p:platform=x64`

At the command prompt, enter this command to create a release build for `myplatform`:

> `msbuild myproject.vcxproj /p:configuration=release /p:platform=myplatform`

### Using MSBuild with the 64-bit Compiler and Tools

If you have installed Visual Studio on 64-bit Windows, the 64-bit x64 native and cross tools are installed by default. You can configure MSBuild to use the 64-bit compiler and tools to build your application by setting the `PreferredToolArchitecture` property. This property doesn't affect the project configuration or platform properties. By default, the 32-bit version of the tools is used. To specify the 64-bit version of the compiler and tools, add this property group element to the *`Myproject.vcxproj`* project file after the *`Microsoft.Cpp.default.props`* file `<Import />` element:

```xml
<PropertyGroup>
    <PreferredToolArchitecture>x64</PreferredToolArchitecture>
</PropertyGroup>
```

At the command prompt, enter this command to use the 64-bit tools to build your application:

> `msbuild myproject.vcxproj /p:PreferredToolArchitecture=x64`

### Using MSBuild with a different toolset

If you have the toolsets and libraries for other versions of Visual C++ installed, MSBuild can build applications for either the current Visual C++ version or for the other installed versions. For example, if you have installed Visual Studio 2012, to specify the Visual C++ 11.0 toolset for Windows XP, add this property group element to the *`Myproject.vcxproj`* project file after the *`Microsoft.Cpp.props`* file `<Import />` element:

```xml
<PropertyGroup>
    <PlatformToolset>v110_xp</PlatformToolset>
</PropertyGroup>
```

To rebuild your project with the Visual C++ 11.0 Windows XP toolset, enter this command:

> `msbuild myproject.vcxproj /p:PlatformToolset=v110_xp /t:rebuild`

### Adding MSBuild customizations

MSBuild provides various ways to customize your build process. These articles show how to add custom build steps, tools, and events to your MSBuild project:

- [How to: Add a Custom Build Step to MSBuild Projects](how-to-add-a-custom-build-step-to-msbuild-projects.md)

- [How to: Add Custom Build Tools to MSBuild Projects](how-to-add-custom-build-tools-to-msbuild-projects.md)

- [How to: Use Build Events in MSBuild Projects](how-to-use-build-events-in-msbuild-projects.md)
