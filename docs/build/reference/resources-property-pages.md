---
description: "Learn more about: Resources property page"
title: "Resources"
ms.date: "08/28/2019"
ms.topic: "article"
ms.assetid: dade2f6b-c51f-4c33-9023-41956ae4b5f6
f1_keywords:
  - VC.Project.VCResourceCompilerTool.PreprocessorDefinitions
  - VC.Project.VCResourceCompilerTool.UndefineProcessorDefinitions
  - VC.Project.VCResourceCompilerTool.Culture
  - VC.Project.VCResourceCompilerTool.AdditionalIncludeDirectories
  - VC.Project.VCResourceCompilerTool.IgnoreStandardIncludePath
  - VC.Project.VCResourceCompilerTool.ShowProgress
  - VC.Project.VCResourceCompilerTool.SuppressStartupBanner
  - VC.Project.VCResourceCompilerTool.ResourceOutputFileName
  - VC.Project.VCResourceCompilerTool.NullTerminateStrings
  - vc.project.AdditionalOptionsPage
---
# Resources property page

For native Windows desktop programs, the build invokes the [Resource Compiler (rc.exe)](/windows/win32/menurc/resource-compiler) to add images, string tables, and *.res* files to the binary. The properties exposed in this property page are passed to the Resource Compiler, not to the C++ compiler or the linker. For more information on the properties listed here and how they map to RC command-line options, see [Using RC (The RC Command Line)](/windows/win32/menurc/using-rc-the-rc-command-line-). For information on how to access the **Resources** property pages, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md). To programmatically access these properties, see <xref:Microsoft.VisualStudio.VCProjectEngine.VCResourceCompilerTool>.

Properties for .NET resources in C++/CLI applications are exposed in the [Managed Resources Property Page](managed-resources-property-page.md).

## Preprocessor Definitions

Specifies one or more defines for the resource compiler. (/d[macro])

## Undefine Preprocessor Definitions

Undefine a symbol. (/u)

## Culture

Lists the culture (such as US English or Italian) used in the resources. (/l [num])

## Additional Include Directories

Specifies one or more directories to add to the include path; use semi-colon delimiter if more than one. (/I[path])

## Ignore Standard Include Paths

Prevents the resource compiler from searching for include files in directories specified in the INCLUDE environment variables. (/X)

## Show Progress

Send progress messages to output window. (/v)

## Suppress Startup Banner

Suppress the display of the startup banner and information message (/nologo)

## Resource File Name

Specifies the name of the resource file (/fo[file])

## Null Terminate Strings

Append null's to all strings in the string tables. (/n)

## See also

[C++ project property page reference](property-pages-visual-cpp.md)
