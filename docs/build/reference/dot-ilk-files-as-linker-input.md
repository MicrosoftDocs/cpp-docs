---
title: ".Ilk Files as Linker Input | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
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
caps.latest.revision: 7
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
# .Ilk Files as Linker Input
When linking incrementally, LINK updates the .ilk status file that it created during the first incremental link. This file has the same base name as the .exe file or the .dll file, and it has the extension .ilk. During subsequent incremental links, LINK updates the .ilk file. If the .ilk file is missing, LINK performs a full link and creates a new .ilk file. If the .ilk file is unusable, LINK performs a nonincremental link. For details about incremental linking, see the [Link Incrementally (/INCREMENTAL)](../../build/reference/incremental-link-incrementally.md) option.  
  
## See Also  
 [LINK Input Files](../../build/reference/link-input-files.md)   
 [Linker Options](../../build/reference/linker-options.md)