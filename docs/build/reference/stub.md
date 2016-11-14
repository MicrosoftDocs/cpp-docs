---
title: "STUB | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "STUB"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "STUB .def file statement"
ms.assetid: 0a3b9643-19ed-47e9-8173-ee16bc8ed056
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
# STUB
When used in a module definition file that builds a virtual device driver (VxD), allows you to specify a file name that contains an IMAGE_DOS_HEADER structure (defined in WINNT.H) to be used in the virtual device driver (VxD), rather than the default header.  
  
```  
STUB:filename  
```  
  
## Remarks  
 An equivalent way to specify *filename* is with the [/STUB](../../build/reference/stub-ms-dos-stub-file-name.md) linker option.  
  
 STUB is valid in a module definition file only when building a VxD.  
  
## See Also  
 [Rules for Module-Definition Statements](../../build/reference/rules-for-module-definition-statements.md)