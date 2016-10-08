---
title: "MSBuild (Visual C++) Overview"
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
ms.assetid: dd258f6f-ab51-48d9-b274-f7ba911d05ca
caps.latest.revision: 14
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
# MSBuild (Visual C++) Overview
<?xml version="1.0" encoding="utf-8"?>
<developerConceptualDocument xmlns="http://ddue.schemas.microsoft.com/authoring/2003/5" xmlns:xlink="http://www.w3.org/1999/xlink" xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:schemaLocation="http://ddue.schemas.microsoft.com/authoring/2003/5 http://clixdevr3.blob.core.windows.net/ddueschema/developer.xsd">
  <introduction>
    <para>MSBuild is the standard build system for Visual C++ projects. When you build a project in the Visual Studio integrated development environment (IDE), it uses the msbuild.exe tool, an XML-based project file, and optional settings files. Although you can use msbuild.exe and a project file on the command line, the IDE provides a user interface so that you can more easily configure settings and build a project. This overview describes how Visual C++ uses the MSBuild system.</para>
  </introduction>
  <section>
    <title>Prerequisites</title>
    <content>
      <para>Read the following documents about MSBuild. </para>
      <definitionTable>
        <definedTerm>
          <link xlink:href="e39f13f7-1e1d-4435-95ca-0c222bca071c">MSBuild</link>
        </definedTerm>
        <definition>
          <para>Overview of MSBuild concepts. </para>
        </definition>
        <definedTerm>
          <link xlink:href="093395e1-70da-4f74-b34d-046c5e2b32e8">MSBuild Reference</link>
        </definedTerm>
        <definition>
          <para>Reference information about the MSBuild system.</para>
        </definition>
        <definedTerm>
          <link xlink:href="d9a68146-1f43-4621-ac78-2c8c3f400936">MSBuild Project File Schema Reference</link>
        </definedTerm>
        <definition>
          <para>Lists the MSBuild XML Schema elements, together with their attributes, and parent and child elements. Especially note the <legacyLink xlink:href="aac894e3-a9f1-4bbc-a796-6ef07001f35b">ItemGroup</legacyLink>, <legacyLink xlink:href="ff1e6c68-b9a1-4263-a1ce-dc3b829a64d4">PropertyGroup</legacyLink>, <legacyLink xlink:href="350f6fc2-86b3-45f2-a31e-ece0e6bd4dca">Target</legacyLink>, and <legacyLink xlink:href="d82e2485-e5f0-4936-a357-745bacccc299">Task</legacyLink> elements.</para>
        </definition>
        <definedTerm>
          <link xlink:href="edaa65ec-ab8a-42a1-84cb-d76d5b2f4584">MSBuild Command Line Reference</link>
        </definedTerm>
        <definition>
          <para>Describes the command-line arguments and options that you can use with msbuild.exe.</para>
        </definition>
        <definedTerm>
          <link xlink:href="b3144b27-a426-4259-b8ae-5f7991b202b6">MSBuild Task Reference</link>
        </definedTerm>
        <definition>
          <para>Describes MSBuild tasks. Especially note these tasks, which are specific to Visual C++: <link xlink:href="bb98fc67-cad8-43a7-9598-60df6d734db2">BscMake Task</link>, <link xlink:href="651ba971-b755-4f03-a549-4816beb3cc0d">CL Task</link>, <link xlink:href="b62a482e-8fb5-4999-b50b-6605a078e291">CPPClean Task</link>, <link xlink:href="e062c7f9-cc69-4a83-9361-1bb5355e5fe8">LIB Task</link>, <link xlink:href="0a61f168-3113-4fa7-83a3-d9142e2a33f8">Link Task</link>, <link xlink:href="727efa8c-3336-40b8-8bef-ae6cbd77a422">MIDL Task</link>, <link xlink:href="bb94913c-1042-4968-9f08-b394518e899f">MT Task</link>, <link xlink:href="2fd26c75-a056-4dda-9f7e-2f90d3748d88">RC Task</link>, <link xlink:href="fd9e4225-68cb-4608-8b27-468b0218c936">SetEnv Task</link>, <link xlink:href="956675fd-05dc-40b4-856f-616145103498">VCMessage Task</link>, <link xlink:href="a7de9c64-903a-4a02-85f3-f37672270f25">XDCMake Task</link>, <link xlink:href="15c99f5c-7124-4bbc-bc03-70c7bcce8893">XSD Task</link>.</para>
        </definition>
      </definitionTable>
    </content>
  </section>
  <section>
    <title>MSBuild on the Command Line</title>
    <content>
      <para>The following statement from the <link xlink:href="edaa65ec-ab8a-42a1-84cb-d76d5b2f4584">MSBuild Command Line Reference</link> document illustrates that the msbuild.exe tool takes an implicit or explicit <parameterReference>project file</parameterReference> argument (a .vcxproj file for Visual C++ projects) and zero or more command-line <parameterReference>options</parameterReference>. </para>
      <para>
        <system>msbuild.exe [</system>
        <parameterReference>project file</parameterReference>
        <system>] [</system>
        <parameterReference>options</parameterReference>
        <system>]</system>
      </para>
      <para>Use the <system>/target</system> (or <system>/t</system>) and <system>/property</system> (or <system>/p</system>) command-line options to override properties and targets that are specified in the project file.</para>
      <para>An essential function of the project file is to specify a <newTerm>target</newTerm>, which is a particular operation applied to your project, and the inputs and outputs that are required to perform that operation. A project file can specify one or more targets, which can include a default target. </para>
      <para>Each target consists of a sequence of one or more <newTerm>tasks</newTerm>. Each task is represented by a .NET Framework class that contains one executable command. For example, the <legacyLink xlink:href="651ba971-b755-4f03-a549-4816beb3cc0d">CL task</legacyLink> contains the <legacyLink xlink:href="f3eef5ab-d0be-4fb2-90f9-927e6ed58736">cl.exe</legacyLink> command. </para>
      <para>A <newTerm>task parameter</newTerm> is a property of the class task and typically represents a command-line option of the executable command. For example, the <languageKeyword>FavorSizeOrSpeed</languageKeyword> parameter of the <languageKeyword>CL</languageKeyword> task corresponds to the <system>/Os</system> and <system>/Ot</system> compiler options. </para>
      <para>Additional task parameters support the MSBuild infrastructure. For example, the <languageKeyword>Sources</languageKeyword> task parameter specifies a set of tasks that can be consumed by other tasks. For more information about MSBuild tasks, see <link xlink:href="b3144b27-a426-4259-b8ae-5f7991b202b6">MSBuild Task Reference</link>.</para>
      <para>Most tasks require inputs and outputs, such as file names, paths, and string, numeric, or Boolean parameters. For example, a common input is the name of a .cpp source file to compile. An important input parameter is a string that specifies the build configuration and platform, for example, "Debug|Win32". Inputs and outputs are specified by one or more user-defined XML <languageKeyword>Item</languageKeyword> elements contained in an <languageKeyword>ItemGroup</languageKeyword> element. </para>
      <para>A project file can also specify user-defined <newTerm>properties</newTerm> and <newTerm>item-definition-group</newTerm> <newTerm>items</newTerm>. Properties and items form name/value pairs that can be used as variables in the build. The name component of a pair defines a <newTerm>macro</newTerm>, and the value component declares the <newTerm>macro value</newTerm>. A property macro is accessed by using $(<placeholder>name</placeholder>) notation, and an item macro is accessed by using %(<placeholder>name</placeholder>) notation. </para>
      <para>Other XML elements in a project file can test macros, and then conditionally set the value of any macro or control the execution of the build. Macro names and literal strings can be concatenated to generate constructs such as a path and file name. On the command line, the <system>/property</system> option sets or overrides a project property. Items cannot be referenced on the command line.</para>
      <para>The MSBuild system can conditionally execute a target before or after another target. Also, the system can build a target based on whether the files that the target consumes are newer than the files it emits. </para>
    </content>
  </section>
  <section>
    <title>MSBuild in the IDE</title>
    <content>
      <para>When you set project properties in the IDE and then save the project, Visual C++ writes the project settings to your project file. The project file contains settings that are unique to your project, but it does not contain all the settings that are required to build your project. The project file contains <languageKeyword>Import</languageKeyword> elements that include a network of additional <newTerm>support files.</newTerm> The support files contain the remaining properties, targets, and settings that are required to build the project. </para>
      <para>Most targets and properties in the support files exist solely to implement the build system. The following section discusses some useful targets and properties that you can specify on the MSBuild command line. To discover more targets and properties, explore the files in the support file directories. </para>
    </content>
    <sections>
      <section>
        <title>Support File Directories</title>
        <content>
          <para>By default, the primary Visual C++ support files are located in the following directories. </para>
          <table xmlns:caps="http://schemas.microsoft.com/build/caps/2013/11">
            <thead>
              <tr>
                <TD>
                  <para>Directory</para>
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
                    <placeholder>drive</placeholder>:\Program Files\MSBuild\Microsoft.Cpp\v4.0\<placeholder>version</placeholder>\</para>
                </TD>
                <TD>
                  <para>Contains the primary target files (.targets) and property files (.props) that are used by the targets. By default, the $(VCTargetsPath) macro references this directory.</para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para>
                    <placeholder>drive</placeholder>:\Program Files\MSBuild\Microsoft.Cpp\v4.0\<placeholder>version</placeholder>\Platforms\<placeholder>platform</placeholder>\</para>
                </TD>
                <TD>
                  <para>Contains platform-specific target and property files that override targets and properties in its parent directory. This directory also contains a .dll file that defines the tasks that are used by the targets in this directory. </para>
                  <para>The <placeholder>platform</placeholder> placeholder represents the <unmanagedCodeEntityReference>ARM</unmanagedCodeEntityReference>, <unmanagedCodeEntityReference>Win32</unmanagedCodeEntityReference>, or <unmanagedCodeEntityReference>x64</unmanagedCodeEntityReference> subdirectory.</para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para>
                    <placeholder>drive</placeholder>:\Program Files\MSBuild\Microsoft.Cpp\v4.0\<placeholder>version</placeholder>\Platforms\<placeholder>platform</placeholder>\PlatformToolsets\<placeholder>toolset</placeholder>\</para>
                  <para />
                </TD>
                <TD>
                  <para>Contains the directories that enable the build to generate Visual C++ applications with the specified <placeholder>version</placeholder> of the toolset.</para>
                  <para>The <placeholder>platform</placeholder> placeholder represents the <unmanagedCodeEntityReference>ARM</unmanagedCodeEntityReference>, <unmanagedCodeEntityReference>Win32</unmanagedCodeEntityReference>, or <unmanagedCodeEntityReference>x64</unmanagedCodeEntityReference> subdirectory. The <placeholder>toolset</placeholder> placeholder represents the toolset subdirectory for building Windows, Windows XP, or Windows Phone apps. </para>
                  <para />
                </TD>
              </tr>
              <tr>
                <TD>
                  <para>
                    <placeholder>drive</placeholder>:\Program Files\MSBuild\Microsoft.Cpp\v4.0\Platforms\<placeholder>platform</placeholder>\PlatformToolsets\<placeholder>toolset</placeholder>\</para>
                </TD>
                <TD>
                  <para>Contains the directories that enable the build to generate either 9.0 or Visual C++ 10.0 applications.</para>
                  <para>The <placeholder>platform</placeholder> placeholder represents the <unmanagedCodeEntityReference>Itanium</unmanagedCodeEntityReference>, <unmanagedCodeEntityReference>Win32</unmanagedCodeEntityReference>, or <unmanagedCodeEntityReference>x64</unmanagedCodeEntityReference> subdirectory. The <placeholder>toolset</placeholder> placeholder represents the <unmanagedCodeEntityReference>v90</unmanagedCodeEntityReference> or <unmanagedCodeEntityReference>v100</unmanagedCodeEntityReference> toolset subdirectory. </para>
                </TD>
              </tr>
            </tbody>
          </table>
        </content>
      </section>
      <section>
        <title>Support Files</title>
        <content>
          <para>The support file directories contain files with the following extensions.</para>
          <table xmlns:caps="http://schemas.microsoft.com/build/caps/2013/11">
            <thead>
              <tr>
                <TD>
                  <para>Extension</para>
                </TD>
                <TD>
                  <para>Description</para>
                </TD>
              </tr>
            </thead>
            <tbody>
              <tr>
                <TD>
                  <para>.targets</para>
                </TD>
                <TD>
                  <para>Contains <languageKeyword>Target</languageKeyword> XML elements that specify the tasks that are executed by the target. May also contain <languageKeyword>Property Group</languageKeyword>, <languageKeyword>Item Group</languageKeyword>, <languageKeyword>Item Definition Group</languageKeyword>, and user-defined <languageKeyword>Item</languageKeyword> elements that are used to assign files and command-line options to task parameters.</para>
                  <para>For more information, see <link xlink:href="350f6fc2-86b3-45f2-a31e-ece0e6bd4dca">Target Element (MSBuild)</link>.</para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para>.props</para>
                </TD>
                <TD>
                  <para>Contains <languageKeyword>Property Group</languageKeyword> and user-defined <languageKeyword>Property</languageKeyword> XML elements that specify file and parameter settings that are used during a build. </para>
                  <para>May also contain <languageKeyword>Item Definition Group</languageKeyword> and user-defined <languageKeyword>Item</languageKeyword> XML elements that specify additional settings. Items defined in an item definition group resemble properties, but cannot be accessed from the command line. Visual C++ project files frequently uses items instead of properties to represent settings. </para>
                  <para>For more information, see <link xlink:href="aac894e3-a9f1-4bbc-a796-6ef07001f35b">ItemGroup Element (MSBuild)</link>, <link xlink:href="4e9fb04b-5148-4ae5-a394-42861dd62371">ItemDefinitionGroup Element (MSBuild)</link>, and <link xlink:href="dcef5f91-0613-4bfc-8ee9-d7004bb6d3a9">Item Element (MSBuild)</link>.</para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para>.xml</para>
                </TD>
                <TD>
                  <para>Contains XML elements that declare and initialize IDE user interface elements such as property sheets and property pages, and text box and list box controls. </para>
                  <para>The .xml files directly support the IDE, not MSBuild. However, the values of IDE properties are assigned to build properties and items. </para>
                  <para>Most .xml files are in a locale-specific subdirectory. For example, files for the English-US region are in $(VCTargetsPath)\1033\.</para>
                </TD>
              </tr>
            </tbody>
          </table>
        </content>
      </section>
    </sections>
  </section>
  <section>
    <title>User Targets and Properties</title>
    <content>
      <para>To use MSBuild most effectively on the command line, it helps to know which properties and targets are useful and relevant. Most properties and targets help implement the Visual C++ build system, and consequently are not relevant to the user. This section describes some worthwhile user-oriented properties and targets.</para>
    </content>
    <sections>
      <section>
        <title>PlatformToolset Property</title>
        <content>
          <para>The <unmanagedCodeEntityReference>PlatformToolset</unmanagedCodeEntityReference> property determines which Visual C++ toolset is used in the build. The value of the property is concatenated with literal strings to form the path of a directory that contains the property and target files that are required to build a project for a particular platform.</para>
          <para>Set the <unmanagedCodeEntityReference>PlatformToolset</unmanagedCodeEntityReference> property to <userInput>v110</userInput> to use <token>cpp_dev11_long</token> tools and libraries to build your application. </para>
          <para>
            <userInput>msbuild myProject.vcxproj /p:PlatformToolset=v110</userInput>
          </para>
          <para>Set the <unmanagedCodeEntityReference>PlatformToolset</unmanagedCodeEntityReference> property to <userInput>v100</userInput> to use <token>cpp_dev10_long</token> tools and libraries to build your application. </para>
          <para>
            <userInput>msbuild myProject.vcxproj /p:PlatformToolset=v100</userInput>
          </para>
          <para>Set the <unmanagedCodeEntityReference>PlatformToolset</unmanagedCodeEntityReference> property to <userInput>v90</userInput> to use Visual C++ 2008 tools and libraries to build your application. The Visual C++ 2008 toolset must already be installed on your computer for this property to be effective.</para>
          <para>
            <userInput>msbuild myProject.vcxproj /p:PlatformToolset=v90</userInput>
          </para>
        </content>
      </section>
      <section>
        <title>PreferredToolArchitecture Property</title>
        <content>
          <para>The <unmanagedCodeEntityReference>PreferredToolArchitecture</unmanagedCodeEntityReference> property determines whether the 32-bit or 64-bit compiler and tools are used in the build. This property does not affect the output platform architecture or configuration. By default, MSBuild uses the x86 version of the compiler and tools if this property is not set, or is set to any value other than <userInput>x64</userInput>.</para>
          <para>Set the <unmanagedCodeEntityReference>PreferredToolArchitecture</unmanagedCodeEntityReference> property to <userInput>x64</userInput> to use the 64-bit compiler and tools to build your application. </para>
          <para>
            <userInput>msbuild myProject.vcxproj /p:PreferredToolArchitecture=x64</userInput>
          </para>
        </content>
      </section>
      <section>
        <title>UseEnv Property</title>
        <content>
          <para>By default, the platform-specific settings for the current project override the PATH, INCLUDE, LIB, LIBPATH, CONFIGURATION, and PLATFORM environment variables. Set the <unmanagedCodeEntityReference>UseEnv</unmanagedCodeEntityReference> property to <languageKeyword>true</languageKeyword> to guarantee that the environment variables are not overridden.</para>
          <para>
            <userInput>msbuild myProject.vcxproj /p:UseEnv=true</userInput>
          </para>
        </content>
      </section>
      <section>
        <title>Targets</title>
        <content>
          <para>There are hundreds of targets in the Visual C++ support files. However, most are system-oriented targets that the user can ignore. Most system targets are prefixed by an underscore (_), or have a name that starts with "PrepareFor", "Compute", "Before", "After", "Pre", or "Post".  </para>
          <para>The following table lists several worthwhile user-oriented targets.</para>
          <table xmlns:caps="http://schemas.microsoft.com/build/caps/2013/11">
            <thead>
              <tr>
                <TD>
                  <para>Target</para>
                </TD>
                <TD>
                  <para>Description</para>
                </TD>
              </tr>
            </thead>
            <tbody>
              <tr>
                <TD>
                  <para>BscMake</para>
                </TD>
                <TD>
                  <para>Executes the Microsoft Browse Information Maintenance Utility tool, bscmake.exe.</para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para>Build</para>
                </TD>
                <TD>
                  <para>Builds the project. </para>
                  <para>This is the default target for a project. </para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para>ClCompile</para>
                </TD>
                <TD>
                  <para>Executes the Visual C++ compiler tool, cl.exe.</para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para>Clean</para>
                </TD>
                <TD>
                  <para>Deletes temporary and intermediate build files.</para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para>Lib</para>
                </TD>
                <TD>
                  <para>Executes the Microsoft 32-Bit Library Manager tool, lib.exe.</para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para>Link</para>
                </TD>
                <TD>
                  <para>Executes the Visual C++ linker tool, link.exe.</para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para>ManifestResourceCompile</para>
                </TD>
                <TD>
                  <para>Extracts a list of resources from a manifest and then executes the Microsoft Windows Resource Compiler tool, rc.exe.</para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para>Midl</para>
                </TD>
                <TD>
                  <para>Executes the Microsoft Interface Definition Language (MIDL) compiler tool, midl.exe.</para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para>Rebuild</para>
                </TD>
                <TD>
                  <para>Cleans and then builds your project.</para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para>ResourceCompile</para>
                </TD>
                <TD>
                  <para>Executes the Microsoft Windows Resource Compiler tool, rc.exe.</para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para>XdcMake</para>
                </TD>
                <TD>
                  <para>Executes the XML Documentation tool, xdcmake.exe.</para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para>Xsd</para>
                </TD>
                <TD>
                  <para>Executes the XML Schema Definition tool, xsd.exe.</para>
                </TD>
              </tr>
            </tbody>
          </table>
        </content>
      </section>
    </sections>
  </section>
  <relatedTopics>
<link xlink:href="7a1be7ff-0312-4669-adf2-5f5bf507d560">MSBuild (Visual C++)</link>
</relatedTopics>
</developerConceptualDocument>