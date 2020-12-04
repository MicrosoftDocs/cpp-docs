---
description: "Learn more about: Clang Linker properties (Android C++)"
title: "Clang Linker Properties (Android C++)"
ms.date: "10/23/2017"
ms.assetid: 66e88848-116c-4eb0-bc57-183394d35b57
f1_keywords:
  - VC.Project.VCLinkerTool.Clang.OutputFile
  - VC.Project.VCLinkerTool.Clang.Soname
  - VC.Project.VCLinkerTool.Clang.ShowProgress
  - VC.Project.VCLinkerTool.Clang.Version
  - VC.Project.VCLinkerTool.Clang.VerboseOutput
  - VC.Project.VCLinkerTool.Clang.IncrementalLink
  - VC.Project.VCLinkerTool.Clang.SharedLibrarySearchPath
  - VC.Project.VCLinkerTool.Clang.AdditionalLibraryDirectories
  - VC.Project.VCLinkerTool.Clang.UnresolvedReferences
  - VC.Project.VCLinkerTool.Clang.OptimizeForMemory
  - VC.Project.VCLinkerTool.Clang.IgnoreDefaultLibraryNames
  - VC.Project.VCLinkerTool.Clang.ForceSymbolReferences
  - VC.Project.VCLinkerTool.Clang.ForceFileOutput
  - VC.Project.VCLinkerTool.Clang.OmitDebuggerSymbolInformation
  - VC.Project.VCLinkerTool.Clang.GenerateMapFile
  - VC.Project.VCLinkerTool.Clang.Relocation
  - VC.Project.VCLinkerTool.Clang.FunctionBinding
  - VC.Project.VCLinkerTool.Clang.NoExecStackRequired
  - VC.Project.VCLinkerTool.Clang.WholeArchive
  - VC.Project.VCLinkerTool.Clang.AdditionalOptionsPage
  - VC.Project.VCLinkerTool.Clang.AdditionalDependencies
  - VC.Project.VCLinkerTool.Clang.LibraryDependencies
---
# Clang Linker properties (Android C++)

| Property | Description | Choices |
|--|--|--|
| Output File | The option overrides the default name and location of the program that the linker creates. (-o) |
| Show Progress | Prints Linker Progress Messages. |
| Version | The -version option tells the linker to put a version number in the header of the executable. |
| Enable Verbose Output | The -verbose option tells the linker to output verbose messages for debugging. |
| Enable Incremental Linking | The option tells the linker to enable incremental linking. |
| Shared Library Search Path | Allows the user to populate the shared library search path. |
| Additional Library Directories | Allows the user to override the environmental library path. (-L folder). |
| Report Unresolved Symbol References | This option when enabled reports unresolved symbol references. |
| Optimize For Memory Usage | Optimize for memory usage, by rereading the symbol tables as necessary. |
| Ignore Specific Default Libraries | Specifies one or more names of default libraries to ignore. |
| Force Symbol References | Force symbol to be entered in the output file as an undefined symbol. |
| Debugger Symbol Information | Debugger symbol information from the output file. | **Include All**<br /><br />**Omit Unneeded Symbols for Relocation Processing**<br /><br />**Omit Debugger Symbol Information Only**<br /><br />**Omit All Symbol Information** |
| Package Debugger Symbol Information | Strip the Debugger Symbols Information before Packaging.  A copy of the original binary is used for debugging. |
| Map File Name | The Map option tells the linker to create a map file with the user specified name. |
| Mark Variables ReadOnly After Relocation | This option marks variables read-only after relocation. |
| Enable Immediate Function Binding | This option marks object for immediate function binding. |
| Require Executable Stack | This option marks output as not requiring executable stack. |
| Whole Archive | Whole Archive uses all code from Sources and Additional Dependencies. |
| Additional Options | Additional Options. |
| Additional Dependencies | Specifies additional items to add to the link command line. |
| Library Dependencies | This option allows specifying additional libraries to be added to the linker command line. The additional libraries are added to the end of the linker command line start with *lib* and end with *.a* or *.so* extension.  (-lFILE) |
