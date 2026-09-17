---
title: Custom Build Step Property Page
description: This article describes the properties available on the Custom Build Step page in the Property Pages dialog.
ms.date: 09/17/2026
f1_keywords: ["VC.Project.VCCustomBuildStep.AdditionalInputs", "VC.Project.VCCustomBuildStep.CustomBuildAfterTargets", "VC.Project.VCCustomBuildStep.CustomBuildBeforeTargets", "VC.Project.VCCustomBuildStep.Outputs", "VC.Project.VCCustomBuildStep.Message", "VC.Project.VCCustomBuildStep.Command"]
helpviewer_keywords: ["project properties, custom build step", "custom build step (general)"]
ms.assetid: bd319741-0491-46c4-a428-7c61b4b46a02
---
# Custom Build Step property page

For each project configuration and target platform combination in your project, you can specify a custom step to run when the project is built.

For the Linux version of this page, see [Custom Build Step Properties (Linux C++)](../../linux/prop-pages/custom-build-step-linux.md).

## General page

- **Command Line**

   The command that the custom build step runs.

- **Description**

   A message that's displayed when the custom build step runs.

- **Outputs**

   The output file that the custom build step generates. This setting is required so that incremental builds work correctly.

- **Additional Dependencies**

   A semicolon-delimited list of any additional input files to use for the custom build step.

- **Execute After and Execute Before**

   These options define when the custom build step is run in the build process, relative to the listed targets. The most commonly listed targets are `BuildGenerateSources`, `BuildCompile`, and `BuildLink`, because they represent the major steps in the build process. Other often-listed targets are `Midl`, `CLCompile`, and `Link`.

- **Treat Output As Content**

   This option is only meaningful for Universal Windows Platform or Windows Phone apps, which include all content files in the *`.appx`* package.

:::moniker range=">=msvc-170"
- **Content Root Folder** 
  
   This property specifies the base folder that MSBuild uses to calculate package-relative paths for custom-build outputs marked as content. It doesn't select files for packaging or require them to be stored under this folder. For example:

   Content root: `C:\Projects\MyApp\Assets`<br>
   Source file: `C:\Projects\MyApp\Assets\Images\logo.png`<br>
   Target path: `Images\logo.png`

   MSBuild removes the content root from the source path to produce the target path. Packaging tools use the target path to determine where to place the file. For example, if the package is staged at `C:\Package`, the file is placed at `C:\Package\Images\logo.png`.

   The target path is portable because it doesn't contain the machine-specific location where the file was built.
:::moniker-end

### To specify a custom build step

1. On the menu bar, select **Project** > **Properties** to open the **Property Pages** dialog. For more information, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).

1. Select the **Configuration Properties** > **Custom Build Step** > **General** page.

1. Modify the settings.

## See also

[C++ project property page reference](property-pages-visual-cpp.md)
