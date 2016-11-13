---
title: "Linker Tools Error LNK1123 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "LNK1123"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "LNK1123"
ms.assetid: fe47af69-0f42-4792-9133-541192cd8514
caps.latest.revision: 15
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
---
# Linker Tools Error LNK1123
failure during conversion to COFF: file invalid or corrupt  
  
 Input files must have the Common Object File Format (COFF) format. If an input file is not COFF, the linker automatically tries to convert 32-bit OMF objects to COFF, or runs CVTRES.EXE to convert resource files. This message indicates that the linker could not convert the file. This can also occur when using an incompatible version of CVTRES.EXE from another installation of Visual Studio, the Windows Development Kit, or .NET Framework.  
  
> [!NOTE]
>  If you are running an earlier version of Visual Studio, automatic conversion may not be supported.  
  
### To fix the problem  
  
-   Apply all service packs and updates for your version of Visual Studio. This is particularly important for Visual Studio 2010.  
  
-   Try building with incremental linking disabled. On the menu bar, choose **Project**, **Properties**. In the **Property Pages** dialog box, expand **Configuration Properties**, **Linker**. Change the value of **Enable Incremental Linking** to **No**.  
  
-   Verify that the version of CVTRES.EXE found first in your PATH environment variable matches the version of the build tools, or the version of the Platform Toolset, used by your project.  
  
-   Try turning off the Embed Manifest option. On the menu bar, choose **Project**, **Properties**. In the **Property Pages** dialog box, expand **Configuration Properties**, **Manifest Tool**, **Input and Output**. Change the value of **Embed Manifest** to **No**.  
  
-   Make sure that the file type is valid. For example, make sure that an OMF object is 32-bit and not 16-bit. For more information, see [.Obj Files as Linker Input](../../build/reference/dot-obj-files-as-linker-input.md) and [Microsoft PE and COFF Specification](http://go.microsoft.com/fwlink/p/?LinkId=93292).  
  
-   Make sure that the file is not corrupt. Rebuild it, if necessary.  
  
## See Also  
 [.Obj Files as Linker Input](../../build/reference/dot-obj-files-as-linker-input.md)   
 [EDITBIN Reference](../../build/reference/editbin-reference.md)   
 [DUMPBIN Reference](../../build/reference/dumpbin-reference.md)