---
title: "Common Macros for Build Commands and Properties"
ms.custom: na
ms.date: 10/07/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: 239bd708-2ea9-4687-b264-043f1febf98b
caps.latest.revision: 20
manager: ghogen
translation.priority.ht: 
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - ru-ru
  - zh-cn
  - zh-tw
translation.priority.mt: 
  - cs-cz
  - pl-pl
  - pt-br
  - tr-tr
---
# Common Macros for Build Commands and Properties
<?xml version="1.0" encoding="utf-8"?>
<developerOrientationDocument xmlns="http://ddue.schemas.microsoft.com/authoring/2003/5" xmlns:xlink="http://www.w3.org/1999/xlink" xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:schemaLocation="http://ddue.schemas.microsoft.com/authoring/2003/5 http://dduestorage.blob.core.windows.net/ddueschema/developer.xsd">
  <introduction>
    <para>Depending on your installation options, Visual Studio can make hundreds of macros available to you. These correspond to the MSBuild properties that are set by default, or in .props or .targets files, or in your project settings. You can use these macros anywhere in a project's <ui>Property Pages</ui> dialog box where strings are accepted. These macros are not case sensitive.</para>
    <para>To display the currently available macros, in the column to the right of a property name, click the drop-down arrow. If <ui>Edit</ui> is available, click it and then in the edit dialog box, click <ui>Macros</ui>. For more information, see the <system>Specifying User-Defined Values</system> section of <link xlink:href="13ffe3ea-1bc3-4bee-be5e-053a8a99cce4">Property Pages (C++)</link>.</para>
    <para>Macros that are marked "Deprecated" are no longer used or have been replaced by an equivalent <legacyLink xlink:href="e3db5122-202d-43a9-b2f4-3e0ec4ed3d08">item metadata macro</legacyLink> (<system>%(</system><placeholder>name</placeholder><system>)</system>). Macros that are marked "Deprecated; migrated" are also deprecated. And in addition, if the project that contains the macro is migrated from Visual Studio 2008, Visual Studio converts the macro to the equivalent current macro.</para>
    <para>The following table describes a commonly used subset of the available macros. This list is not exhaustive. For details on how MSBuild property definitions are created and used as macros in .props, .targets, and .vcxproj files, see MSBuild Properties. </para>
    <table xmlns:caps="http://schemas.microsoft.com/build/caps/2013/11">
      <thead>
        <tr>
          <TD>
            <para>Macro</para>
          </TD>
          <TD>
            <para>Description</para>
          </TD>
        </tr>
      </thead>
      <tbody>
        <tr>
          <TD>
            <para>
              <system>$(RemoteMachine)</system>
            </para>
          </TD>
          <TD>
            <para>Set to the value of the <system>Remote Machine </system>property on the Debug property page. See <legacyLink xlink:href="860C7F13-A108-4FE5-8FCA-D235CD3CA1CB">Changing Project Settings for a C/C++ Debug Configuration</legacyLink> for more information.</para>
          </TD>
        </tr>
        <tr>
          <TD>
            <para>
              <system>$(Configuration)</system>
            </para>
          </TD>
          <TD>
            <para>The name of the current project configuration, for example, "Debug".</para>
          </TD>
        </tr>
        <tr>
          <TD>
            <para>
              <system>$(Platform)</system>
            </para>
          </TD>
          <TD>
            <para>The name of current project platform, for example, "Win32".</para>
          </TD>
        </tr>
        <tr>
          <TD>
            <para>
              <system>$(ParentName)</system>
            </para>
          </TD>
          <TD>
            <para>(Deprecated.) Name of the item containing this project item. This will be the parent folder name, or project name.</para>
          </TD>
        </tr>
        <tr>
          <TD>
            <para>
              <system>$(RootNameSpace)</system>
            </para>
          </TD>
          <TD>
            <para>The namespace, if any, containing the application.</para>
          </TD>
        </tr>
        <tr>
          <TD>
            <para>
              <system>$(IntDir)</system>
            </para>
          </TD>
          <TD>
            <para>Path to the directory specified for intermediate files. If this is a relative path, intermediate files go to this path appended to the project directory. This path should have a trailing slash. This resolves to the value for the <system>Intermediate Directory</system> property. Do not use <system>$(OutDir)</system> to define this property.</para>
          </TD>
        </tr>
        <tr>
          <TD>
            <para>
              <system>$(OutDir)</system>
            </para>
          </TD>
          <TD>
            <para>Path to the output file directory. If this is a  relative path, output files go to this path appended to the project directory. This path should have a trailing slash. This resolves to the value for the <system>Output Directory</system> property. Do not use <system>$(IntDir)</system> to define this property.</para>
          </TD>
        </tr>
        <tr>
          <TD>
            <para>
              <system>$(DevEnvDir)</system>
            </para>
          </TD>
          <TD>
            <para>The installation directory of Visual Studio (defined as drive + path); includes the trailing backslash '\'.</para>
          </TD>
        </tr>
        <tr>
          <TD>
            <para>
              <system>$(InputDir)</system>
            </para>
          </TD>
          <TD>
            <para>(Deprecated; migrated.) The directory of the input file (defined as drive + path); includes the trailing backslash '\'. If the project is the input, then this macro is equivalent to <system>$(ProjectDir)</system>.</para>
          </TD>
        </tr>
        <tr>
          <TD>
            <para>
              <system>$(InputPath)</system>
            </para>
          </TD>
          <TD>
            <para>(Deprecated; migrated.) The absolute path name of the input file (defined as drive + path + base name + file extension). If the project is the input, then this macro is equivalent to <system>$(ProjectPath)</system>.</para>
          </TD>
        </tr>
        <tr>
          <TD>
            <para>
              <system>$(InputName)</system>
            </para>
          </TD>
          <TD>
            <para>(Deprecated; migrated.) The base name of the input file. If the project is the input, then this macro is equivalent to <system>$(ProjectName)</system>.</para>
          </TD>
        </tr>
        <tr>
          <TD>
            <para>
              <system>$(InputFileName)</system>
            </para>
          </TD>
          <TD>
            <para>(Deprecated; migrated.) The file name of the input file (defined as base name + file extension). If the project is the input, then this macro is equivalent to <system>$(ProjectFileName)</system>.</para>
          </TD>
        </tr>
        <tr>
          <TD>
            <para>
              <system>$(InputExt)</system>
            </para>
          </TD>
          <TD>
            <para>(Deprecated; migrated.) The file extension of the input file. It includes the '.' before the file extension. If the project is the input, then this macro is equivalent to <system>$(ProjectExt)</system>.</para>
          </TD>
        </tr>
        <tr>
          <TD>
            <para>
              <system>$(ProjectDir)</system>
            </para>
          </TD>
          <TD>
            <para>The directory of the project (defined as drive + path); includes the trailing backslash '\'.</para>
          </TD>
        </tr>
        <tr>
          <TD>
            <para>
              <system>$(ProjectPath)</system>
            </para>
          </TD>
          <TD>
            <para>The absolute path name of the project (defined as drive + path + base name + file extension).</para>
          </TD>
        </tr>
        <tr>
          <TD>
            <para>
              <system>$(ProjectName)</system>
            </para>
          </TD>
          <TD>
            <para>The base name of the project.</para>
          </TD>
        </tr>
        <tr>
          <TD>
            <para>
              <system>$(ProjectFileName)</system>
            </para>
          </TD>
          <TD>
            <para>The file name of the project (defined as base name + file extension).</para>
          </TD>
        </tr>
        <tr>
          <TD>
            <para>
              <system>$(ProjectExt)</system>
            </para>
          </TD>
          <TD>
            <para>The file extension of the project. It includes the '.' before the file extension.</para>
          </TD>
        </tr>
        <tr>
          <TD>
            <para>
              <system>$(SolutionDir)</system>
            </para>
          </TD>
          <TD>
            <para>The directory of the solution (defined as drive + path); includes the trailing backslash '\'.</para>
          </TD>
        </tr>
        <tr>
          <TD>
            <para>
              <system>$(SolutionPath)</system>
            </para>
          </TD>
          <TD>
            <para>The absolute path name of the solution (defined as drive + path + base name + file extension).</para>
          </TD>
        </tr>
        <tr>
          <TD>
            <para>
              <system>$(SolutionName)</system>
            </para>
          </TD>
          <TD>
            <para>The base name of the solution.</para>
          </TD>
        </tr>
        <tr>
          <TD>
            <para>
              <system>$(SolutionFileName)</system>
            </para>
          </TD>
          <TD>
            <para>The file name of the solution (defined as base name + file extension).</para>
          </TD>
        </tr>
        <tr>
          <TD>
            <para>
              <system>$(SolutionExt)</system>
            </para>
          </TD>
          <TD>
            <para>The file extension of the solution. It includes the '.' before the file extension.</para>
          </TD>
        </tr>
        <tr>
          <TD>
            <para>
              <system>$(TargetDir)</system>
            </para>
          </TD>
          <TD>
            <para>The directory of the primary output file for the build (defined as drive + path); includes the trailing backslash '\'.</para>
          </TD>
        </tr>
        <tr>
          <TD>
            <para>
              <system>$(TargetPath)</system>
            </para>
          </TD>
          <TD>
            <para>The absolute path name of the primary output file for the build (defined as drive + path + base name + file extension).</para>
          </TD>
        </tr>
        <tr>
          <TD>
            <para>
              <system>$(TargetName)</system>
            </para>
          </TD>
          <TD>
            <para>The base name of the primary output file for the build.</para>
          </TD>
        </tr>
        <tr>
          <TD>
            <para>
              <system>$(TargetFileName)</system>
            </para>
          </TD>
          <TD>
            <para>The file name of the primary output file for the build (defined as base name + file extension).</para>
          </TD>
        </tr>
        <tr>
          <TD>
            <para>
              <system>$(TargetExt)</system>
            </para>
          </TD>
          <TD>
            <para>The file extension of the primary output file for the build. It includes the '.' before the file extension.</para>
          </TD>
        </tr>
        <tr>
          <TD>
            <para>
              <system>$(VSInstallDir)</system>
            </para>
          </TD>
          <TD>
            <para>The directory into which you installed Visual Studio. </para>
            <para>This property contains the version of the targeted Visual Studio, which might be different that the host Visual Studio. For example, when building with <codeInline>$(PlatformToolset) = v110</codeInline>, <system>$(VSInstallDir)</system> contains the path to the Visual Studio 2012 installation.</para>
          </TD>
        </tr>
        <tr>
          <TD>
            <para>
              <system>$(VCInstallDir)</system>
            </para>
          </TD>
          <TD>
            <para>The directory into which you installed Visual C++. </para>
            <para>This property contains the version of the targeted Visual C++, which might be different that the host Visual Studio. For example, when building with <codeInline>$(PlatformToolset) = v140</codeInline>, <system>$(VCInstallDir)</system> contains the path to the Visual C++ 2015 installation.</para>
          </TD>
        </tr>
        <tr>
          <TD>
            <para>
              <system>$(FrameworkDir)</system>
            </para>
          </TD>
          <TD>
            <para>The directory into which the .NET Framework was installed.</para>
          </TD>
        </tr>
        <tr>
          <TD>
            <para>
              <system>$(FrameworkVersion)</system>
            </para>
          </TD>
          <TD>
            <para>The version of the .NET Framework used by Visual Studio. Combined with <system>$(FrameworkDir)</system>, the full path to the version of the .NET Framework use by Visual Studio.</para>
          </TD>
        </tr>
        <tr>
          <TD>
            <para>
              <system>$(FrameworkSDKDir)</system>
            </para>
          </TD>
          <TD>
            <para>The directory into which you installed the .NET Framework. The .NET Framework could have been installed as part of Visual Studio or separately.</para>
          </TD>
        </tr>
        <tr>
          <TD>
            <para>
              <system>$(WebDeployPath)</system>
            </para>
          </TD>
          <TD>
            <para>The relative path from the web deployment root to where the project outputs belong. Returns the same value as <codeEntityReference autoUpgrade="true">P:Microsoft.VisualStudio.VCProjectEngine.VCWebDeploymentTool.RelativePath</codeEntityReference>.</para>
          </TD>
        </tr>
        <tr>
          <TD>
            <para>
              <system>$(WebDeployRoot)</system>
            </para>
          </TD>
          <TD>
            <para>The absolute path to the location of <system>&lt;localhost&gt;</system>. For example, c:\inetpub\wwwroot.</para>
          </TD>
        </tr>
        <tr>
          <TD>
            <para>
              <system>$(SafeParentName)</system>
            </para>
          </TD>
          <TD>
            <para>(Deprecated.) The name of the immediate parent in valid name format. For example, a form is the parent of a .resx file.</para>
          </TD>
        </tr>
        <tr>
          <TD>
            <para>
              <system>$(SafeInputName)</system>
            </para>
          </TD>
          <TD>
            <para>(Deprecated.) The name of the file as a valid class name, minus file extension.</para>
          </TD>
        </tr>
        <tr>
          <TD>
            <para>
              <system>$(SafeRootNamespace)</system>
            </para>
          </TD>
          <TD>
            <para>(Deprecated.) The namespace name in which the project wizards will add code. This namespace name will only contain characters that would be permitted in a valid C++ identifier.</para>
          </TD>
        </tr>
        <tr>
          <TD>
            <para>
              <system>$(FxCopDir)</system>
            </para>
          </TD>
          <TD>
            <para>The path to the fxcop.cmd file. The fxcop.cmd file is not installed with all Visual C++ editions.</para>
          </TD>
        </tr>
      </tbody>
    </table>
  </introduction>
  <relatedTopics>
<link xlink:href="9E8BC1A2-BB17-4951-937A-C757ED88D2D1">Building C++ Projects in Visual Studio</link>
</relatedTopics>
</developerOrientationDocument>
