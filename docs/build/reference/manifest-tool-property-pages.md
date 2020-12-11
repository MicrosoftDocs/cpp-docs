---
description: "Learn more about: Manifest Tool Property Pages"
title: "Manifest Tool Property Pages"
ms.date: "07/24/2019"
ms.topic: "article"
f1_keywords:
  - VC.Project.VCManifestTool.SuppressStartupBanner
  - VC.Project.VCManifestTool.VerboseOutput
  - VC.Project.VCManifestTool.AssemblyIdentity
  - VC.Project.VCManifestTool.AdditionalManifestFiles
  - VC.Project.VCManifestTool.InputResourceManifests
  - VC.Project.VCManifestTool.EmbedManifest
  - VC.Project.VCManifestTool.OutputManifestFile
  - VC.Project.VCManifestTool.ResourceOutputFileName
  - VC.Project.VCManifestTool.GenerateCatalogFiles
  - VC.Project.VCManifestTool.ManifestFromManagedAssembly
  - VC.Project.VCManifestTool.SuppressDependencyElement
  - VC.Project.VCManifestTool.GenerateCategoryTags
  - VC.Project.VCManifestTool.EnableDPIAwareness
  - VC.Project.VCManifestTool.TypeLibraryFile
  - VC.Project.VCManifestTool.RegistrarScriptFile
  - VC.Project.VCManifestTool.ComponentFileName
  - VC.Project.VCManifestTool.ReplacementsFile
  - VC.Project.VCManifestTool.UpdateFileHashes
  - VC.Project.VCManifestTool.UpdateFileHashesSearchPath
  - vc.project.AdditionalOptionsPage
ms.assetid: f33499c4-7733-42d9-80e3-8a5018786965
---
# Manifest Tool Property Pages

Use these pages to specify general options for [Mt.exe](/windows/win32/sbscs/mt-exe). These pages are found under **Project** > **Properties** > **Configuration Properties** > **Manifest Tool**.

## General Property Page

### Suppress Startup Banner

   **Yes (/nologo)** specifies that standard Microsoft copyright data will be concealed when the manifest tool is started. Use this option to suppress unwanted output in log files, when you run mt.exe as part of a build process or from a build environment.

### Verbose Output

   **Yes (/verbose)** specifies that additional build information will be displayed during manifest generation.

### Assembly Identity

Uses the /identity option to specify an identity string, which comprises the attributes for the [\<assemblyIdentity> Element](/visualstudio/deployment/assemblyidentity-element-clickonce-application). An identity string begins with the value for the `name` attribute, and is followed by *attribute* = *value* pairs. The attributes in an identity string are delimited by a comma.

This is an example identity string: `Microsoft.Windows.Common-Controls, processorArchitecture=x86, version=6.0.0.0, type=win32, publicKeyToken=6595b64144ccf1df`

## Input and Output Property Page

### Additional Manifest Files

Uses the **/manifest** option to specify the full paths of additional manifest files that the manifest tool will process or merge. Full paths are delimited by a semicolon. (-manifest [manifest1] [manifest2] ...)

### Input Resource Manifests

Uses the **/inputresource** option to specify the full path of a resource of type RT_MANIFEST, to input into the manifest tool. The path can be followed by the specified resource ID. For example:

`dll_with_manifest.dll;#1`

### Embed Manifest

- **Yes** specifies that the project system will embed the application manifest file into the assembly.

- **No** specifies that the project system will create the application manifest file as a stand-alone file.

### Output Manifest File

Specifies the name of the output manifest file. This property is optional when only one manifest file is operated upon by the manifest tool. (-out:[file];#[resource ID])

### Manifest Resource File

Specifies the output resources file used to embed the manifest into the project output.

### Generate Catalog Files

Uses the **/makecdfs** option to specify that the manifest tool will generate catalog definition files (.cdf files), which are used to make catalogs. (/makecdfs)

### Generate Manifest From ManagedAssembly

Generates a manifest from a managed assembly. (-managedassemblyname:\[file])

### Suppress Dependency Element

Used with -managedassembly. suppresses the generation of dependency elements in the final manifest. (-nodependency)

### Generate Category Tags

Used with -managedassembly. -category causes the category tags to be generated. (-category)

### DPI Awareness

Specifies whether the application is DPI-aware. By default, the setting is **Yes** for MFC projects and **No** otherwise because only MFC projects have built in DPI awareness. You can override the setting to **Yes** if you add code to handle different DPI settings. Your application might appear fuzzy or small if you set it as DPI-aware when it is not.

**Choices**

- **None**
- **High DPI Aware**
- **Per Monitor High DPI Aware**

## Isolated COM Property Page

For more information about isolated COM, see [Isolated Applications](/windows/win32/SbsCs/isolated-applications) and [How to: Build Isolated Applications to Consume COM Components](../how-to-build-isolated-applications-to-consume-com-components.md).

### Type Library File

Specifies the type library to use for regfree COM manifest support. (-tlb:[file])

### Registrar Script File

Specifies the registrar script file to use for regfree COM manifest support. (-rgs:[file])

### Component File Name

Specifies the file name of the component that is built from the .tlb or .rgs specified. (-dll:[file])

### Replacements File

Specifies the file that contains values for replaceable strings in the RGS file. (replacements:[file])

## Advanced Property Page

### Update File Hashes

Computes the hash of files specified in the file elements and updates the hash attribute with this value. (hashupdate:[path])

### Update File Hashes Search Path

Specifies the search path to use when updating the file hashes.

### Additional Options

Additional Options

## See also

[C++ project property page reference](property-pages-visual-cpp.md)
