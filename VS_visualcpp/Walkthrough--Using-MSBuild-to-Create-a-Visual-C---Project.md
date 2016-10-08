---
title: "Walkthrough: Using MSBuild to Create a Visual C++ Project"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: 52350d1c-c373-4868-923c-5e8be6f67adb
caps.latest.revision: 27
manager: ghogen
translation.priority.ht: 
  - cs-cz
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - pl-pl
  - pt-br
  - ru-ru
  - tr-tr
  - zh-cn
  - zh-tw
---
# Walkthrough: Using MSBuild to Create a Visual C++ Project
This walkthrough demonstrates how to use MSBuild to build a Visual C++ project at a command prompt. You will learn how to create the C++ source files and an XML-based project file for a Visual C++ console application. After building the project, you will learn how to customize the build process.  
  
 This walkthrough illustrates the following tasks:  
  
-   Creating the C++ source files for your project.  
  
-   Creating the XML MSBuild project file.  
  
-   Using MSBuild to build your project.  
  
-   Using MSBuild to customize your project.  
  
## Prerequisites  
 You need the following to complete this walkthrough:  
  
-   Visual Studio 2013  
  
-   A general understanding of the MSBuild system.  
  
## Creating the C++ Source Files  
 In this walkthrough you will create a project that has a source file and a header file. The source file main.cpp contains the main function for the console application. The header file main.h contains code to include the iostream header file. You can create these C++ files by using Visual Studio or a text editor.  
  
#### To create the C++ source files for your project  
  
1.  Create a directory for your project.  
  
2.  Create a file that is named main.cpp and add the following code to this file:  
  
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
  
3.  Create a file that is named main.h and add the following code to this file:  
  
    ```hlsl  
    // main.h: the application header code.  
    /* Additional source code to include. */  
    ```  
  
## Creating the XML MSBuild Project File  
 An MSBuild project file is an XML file that contains a project root element (<Project\>). In the following example project, the <Project\> element contains seven child elements:  
  
-   Three item group tags (<ItemGroup\>) that specify project configuration and platform, source file name, and header file name.  
  
-   Three import tags (<Import\>) that specify the location of Microsoft Visual C++ settings.  
  
-   A property group tag (<PropertyGroup\>) that specifies project settings.  
  
#### To create the MSBuild project file  
  
1.  Use a text editor to create a project file that is named `myproject.vcxproj`, and then add the following root <Project\> element. Insert the elements in the following procedure steps between the root <Project\> tags:  
  
    ```xml  
    <Project DefaultTargets="Build" ToolsVersion="12.0" xmlns="http://schemas.microsoft.com/developer/msbuild/2003">  
    </Project>  
    ```  
  
2.  Add the following two <ProjectConfiguration\> child elements in an <ItemGroup\> element. The child element specifies debug and release configurations for a 32-bit Windows operating system:  
  
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
  
3.  Add the following <Import/\> element that specifies the path of the default C++ settings for this project:  
  
    ```xml  
    <Import Project="$(VCTargetsPath)\Microsoft.Cpp.default.props" />  
  
    ```  
  
4.  Add the following property group element (<PropertyGroup\>) that specifies two project properties:  
  
    ```xml  
    <PropertyGroup>  
      <ConfigurationType>Application</ConfigurationType>  
      <PlatformToolset>v120</PlatformToolset>  
    </PropertyGroup>  
    ```  
  
5.  Add the following <Import/\> element that specifies the path of the current C++ settings for this project:  
  
    ```xml  
    <Import Project="$(VCTargetsPath)\Microsoft.Cpp.props" />  
    ```  
  
6.  Add the following <ClCompile\> child element in an <ItemGroup\> element. The child element specifies the name of the C/C++ source file to compile:  
  
    ```xml  
    <ItemGroup>  
      <ClCompile Include="main.cpp" />  
    </ItemGroup>  
    ```  
  
7.  Add the following <ClInclude\> child element in an <ItemGroup\> element. The child element specifies the name of the header file for the C/C++ source file:  
  
    ```xml  
    <ItemGroup>  
      <ClInclude Include="main.h" />  
    </ItemGroup>  
    ```  
  
8.  Add the following <Import\> element that specifies the path of the file that defines the target for this project:  
  
    ```xml  
    <Import Project="$(VCTargetsPath)\Microsoft.Cpp.Targets" />  
  
    ```  
  
### Complete Project File  
 The following code shows the complete project file that you created in the previous procedure.  
  
```xml  
<Project DefaultTargets="Build" ToolsVersion="12.0" xmlns="http://schemas.microsoft.com/developer/msbuild/2003">  
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
    <PlatformToolset>v120</PlatformToolset>  
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
 Type the following command at the command prompt to build your console application:  
  
```  
msbuild myproject.vcxproj /p:configuration=debug  
```  
  
 MSBuild creates a directory for the output files, and then compiles and links your project to generate the Myproject.exe program. After the build process finishes, use the following command to run the application:  
  
```  
myproject  
```  
  
 The application should display "Hello, from MSBuild!" in the console window.  
  
## Customizing Your Project  
 MSBuild enables you to execute predefined build targets, apply user-defined properties, and use custom tools, events, and build steps. This section illustrates the following tasks:  
  
-   Using MSBuild with build targets.  
  
-   Using MSBuild with build properties.  
  
-   Using MSBuild with the 64-bit compiler and tools.  
  
-   Using MSBuild with different toolsets.  
  
-   Adding MSBuild customizations.  
  
### Using MSBuild with Build Targets  
 A *build target* is a named set of predefined or user-defined commands that can be executed during the build. Use the target command-line option (**/t**) to specify a build target. In the case of the `myproject` example project, the predefined **clean** target deletes all files in the debug folder and creates a new log file.  
  
 At the command prompt, type the following command to clean `myproject`.  
  
 `msbuild myproject.vcxproj /t:clean`  
  
### Using MSBuild with Build Properties  
 The property command-line option (**/p**) enables you to override a property in your project build file. In the `myproject` example project, the release or debug build configuration is specified by the `Configuration` property. And the operating system that is intended to run the built application is specified by the `Platform` property.  
  
 At the command prompt, type the following command to create a debug build of the `myproject` application that is intended to run on 32-bit Windows.  
  
 `msbuild myproject.vcxproj /p:configuration=debug /p:platform=win32`  
  
 Assume that the `myproject` example project also defines a configuration for 64-bit Windows, and another configuration for a custom operating system named `myplatform`.  
  
 At the command prompt, type the following command to create a release build that runs on 64-bit Windows.  
  
 `msbuild myproject.vcxproj /p:configuration=release /p:platform=x64`  
  
 At the command prompt, type the following command to create a release build for `myplatform`.  
  
 `msbuild myproject.vcxproj /p:configuration=release /p:platform=myplatform`  
  
### Using MSBuild with the 64-bit Compiler and Tools  
 If you have installed Visual C++ on 64-bit Windows, by default, the 64-bit x64 native and cross tools are installed. You can configure MSBuild to use the 64-bit compiler and tools to build your application by setting the `PreferredToolArchitecture` property. This property does not affect the project configuration or platform properties. By default, the 32-bit version of the tools is used. To specify the 64-bit version of the compiler and tools, add the following property group element to the Myproject.vcxproj project file after the `Microsoft.Cpp.default.props` <Import /\> element:  
  
```xml  
<PropertyGroup>  
    <PreferredToolArchitecture>x64</PreferredToolArchitecture>  
</PropertyGroup>  
```  
  
 At the command prompt, type the following command to use the 64-bit tools to build your application.  
  
 `msbuild myproject.vcxproj /p:PreferredToolArchitecture=x64`  
  
### Using MSBuild with a Different Toolset  
 If you have the toolsets and libraries for other versions of Visual C++ installed, MSBuild can build applications for either the current Visual C++ version or for the other installed versions. For example, if you have installed Visual C++ in Visual Studio 2012, to specify the Visual C++ 11.0 toolset for Windows XP, add the following property group element to the Myproject.vcxproj project file after the Microsoft.Cpp.props `<Import />` element:  
  
```xml  
<PropertyGroup>  
    <PlatformToolset>v110_xp</PlatformToolset>  
</PropertyGroup>  
```  
  
 To rebuild your project with the Visual C++ 11.0 Windows XP toolset, type either of the following commands:  
  
 `msbuild myproject.vcxproj /p:PlatformToolset=v110_xp /t:rebuild`  
  
 `msbuild myproject.vcxproj /t:rebuild`  
  
### Adding MSBuild Customizations  
 MSBuild provides various ways to customize your build process. The following topics show how to add custom build steps, tools, and events to your MSBuild project:  
  
-   [How to: Add a Custom Build Step to MSBuild Projects](../VS_visualcpp/How-to--Add-a-Custom-Build-Step-to-MSBuild-Projects.md)  
  
-   [How to: Add Custom Build Tools to MSBuild Projects](../VS_visualcpp/How-to--Add-Custom-Build-Tools-to-MSBuild-Projects.md)  
  
-   [How to: Use Build Events in MSBuild Projects](../VS_visualcpp/How-to--Use-Build-Events-in-MSBuild-Projects.md)