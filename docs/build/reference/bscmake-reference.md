---
title: "BSCMAKE Reference | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-tools"]
ms.topic: "reference"
dev_langs: ["C++"]
helpviewer_keywords: ["BSCMAKE, reference", "Microsoft Browse Information Maintenance Utility", "browse windows", "browse information files (.bsc), building", ".bsc files, building", "bsc files, building", "BSCMAKE"]
ms.assetid: b97ad994-1355-4809-98db-6abc12c6fb13
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# BSCMAKE Reference
> [!WARNING]
> Although BSCMAKE is still installed with Visual Studio, it is no longer used by the IDE. Since Visual Studio 2008, browse and symbol information is stored automatically in a SQL Server .sdf file in the solution folder.  
  
 The Microsoft Browse Information Maintenance Utility (BSCMAKE.EXE) builds a browse information file (.bsc) from .sbr files created during compilation. Certain third-party tools use .bsc files for code analysis. 
  
 When you build your program, you can create a browse information file for your program automatically, using BSCMAKE to build the file. You do not need to know how to run BSCMAKE if you create your browse information file in the Visual C++ development environment. However, you may want to read this topic to understand the choices available.  
  
 If you build your program outside of the development environment, you can still create a custom .bsc that you can examine in the environment. Run BSCMAKE on the .sbr files that you created during compilation.  
  
> [!NOTE]
>  You can start this tool only from the Visual Studio Developer command prompt. You cannot start it from a system command prompt or from File Explorer.  
  
 This section includes the following topics:  
  
-   [Building Browse Information Files: Overview](../../build/reference/building-browse-information-files-overview.md)  
  
-   [Building a .bsc file](../../build/reference/building-a-dot-bsc-file.md)  
  
-   [BSCMAKE command line](../../build/reference/bscmake-command-line.md)  
  
-   [BSCMAKE command file](../../build/reference/bscmake-command-file-response-file.md)  
  
-   [BSCMAKE options](../../build/reference/bscmake-options.md)  
  
-   [BSCMAKE exit codes](../../build/reference/bscmake-exit-codes.md)  
  
## See Also  
 [C/C++ Build Tools](../../build/reference/c-cpp-build-tools.md)