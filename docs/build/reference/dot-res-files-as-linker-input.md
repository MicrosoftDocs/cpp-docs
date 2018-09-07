---
title: ".Res Files as Linker Input | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-tools"]
ms.topic: "reference"
dev_langs: ["C++"]
helpviewer_keywords: ["RES files as linker input", ".res files as linker input", "linking [C++], resource files", "resource files, linking"]
ms.assetid: 9c37ab00-97df-4d9a-91cd-6bf132970683
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# .Res Files as Linker Input
You can specify a .res file when linking a program. The .res file is created by the resource compiler (RC). LINK automatically converts .res files to COFF. The CVTRES.exe tool must be in the same directory as LINK.exe or in a directory specified in the PATH environment variable.  
  
## See Also  
 [LINK Input Files](../../build/reference/link-input-files.md)   
 [Linker Options](../../build/reference/linker-options.md)