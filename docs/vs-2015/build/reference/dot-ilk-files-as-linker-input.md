---
title: ".Ilk Files as Linker Input | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ILK files"
  - ".ilk files"
ms.assetid: 7324c104-9e5d-423d-b268-b59f92607bf2
caps.latest.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# .Ilk Files as Linker Input
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [.Ilk Files as Linker Input](https://docs.microsoft.com/cpp/build/reference/dot-ilk-files-as-linker-input).  
  
  
When linking incrementally, LINK updates the .ilk status file that it created during the first incremental link. This file has the same base name as the .exe file or the .dll file, and it has the extension .ilk. During subsequent incremental links, LINK updates the .ilk file. If the .ilk file is missing, LINK performs a full link and creates a new .ilk file. If the .ilk file is unusable, LINK performs a nonincremental link. For details about incremental linking, see the [Link Incrementally (/INCREMENTAL)](../../build/reference/incremental-link-incrementally.md) option.  
  
## See Also  
 [LINK Input Files](../../build/reference/link-input-files.md)   
 [Linker Options](../../build/reference/linker-options.md)

