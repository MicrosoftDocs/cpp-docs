---
title: "Clang Linker Properties (Android C++)| Microsoft Docs"
ms.custom: ""
ms.date: "9/26/2017"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "vs-ide-general"
ms.tgt_pltfrm: ""
ms.topic: "article"
ms.assetid: 66e88848-116c-4eb0-bc57-183394d35b57
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
f1_keywords:
  - VC.Project.VCLinkerTool.OutputFile
  - VC.Project.VCLinkerTool.ShowProgress
  - VC.Project.VCLinkerTool.Version
  - VC.Project.VCLinkerTool.VerboseOutput
  - VC.Project.VCLinkerTool.IncrementalLink
  - VC.Project.VCLinkerTool.SharedLibrarySearchPath
  - VC.Project.VCLinkerTool.AdditionalLibraryDirectories
  - VC.Project.VCLinkerTool.UnresolvedReferences
  - VC.Project.VCLinkerTool.OptimizeForMemory
  - VC.Project.VCLinkerTool.IgnoreDefaultLibraryNames
  - VC.Project.VCLinkerTool.ForceSymbolReferences
  - VC.Project.VCLinkerTool.ForceFileOutput
  - VC.Project.VCLinkerTool.OmitDebuggerSymbolInformation
  - VC.Project.VCLinkerTool.GenerateMapFile
  - VC.Project.VCLinkerTool.Relocation
  - VC.Project.VCLinkerTool.FunctionBinding
  - VC.Project.VCLinkerTool.NoExecStackRequired
  - VC.Project.WholeArchive
  - VC.Project.AdditionalOptionsPage
  - VC.Project.VCLinkerTool.AdditionalDependencies
  - VC.Project.VCLinkerTool.LibraryDependencies
---

# Clang Linker Properties (Android C++)

Property | Description | Choices
--- | ---| ---
Output File | The option overrides the default name and location of the program that the linker creates. (-o)
Show Progress | Prints Linker Progress Messages.
Version | The -version option tells the linker to put a version number in the header of the executable.
Enable Verbose Output | The -verbose option tells the linker to output verbose messages for debugging.
Enable Incremental Linking | The option tells the linker to enable incremental linking.
Shared Library Search Path | Allows the user to populate the shared library search path.
Additional Library Directories | Allows the user to override the environmental library path. (-L folder).
Report Unresolved Symbol References | This option when enabled will report unresolved symbol references.
Optimize For Memory Usage | Optimize for memory usage, by rereading the symbol tables as necessary.
Ignore Specific Default Libraries | Specifies one or more names of default libraries to ignore.
Force Symbol References | Force symbol to be entered in the output file as an undefined symbol.
Debugger Symbol Information | Debugger symbol information from the output file. | **Include All**<br>**Omit Unneeded Symbols for Relocation Processing**<br>**Omit Debugger Symbol Information Only**<br>**Omit All Symbol Information**<br>
Package Debugger Symbol Information | Strip the Debugger Symbols Information before Packaging.  A copy of the original binary will be used for debugging.
Map File Name | The Map option tells the linker to create a map file with the user specified name.
Mark Variables ReadOnly After Relocation | This option marks variables read-only after relocation.
Enable Immediate Function Binding | This option marks object for immediate function binding.
Require Executable Stack | This option marks output as not requiring executable stack.
Whole Archive | Whole Archive uses all code from Sources and Additional Dependencies.
Additional Options | Additional Options.
Additional Dependencies | Specifies additional items to add to the link command line.
Library Dependencies | This option allows specifying additional libraries to be added to the linker command line. The additional libraries will be added to the end of the linker command line start with 'lib' and end with '.a' or '.so' extension.  (-lFILE)
