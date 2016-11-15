---
title: "Linker Tools Warning LNK4197 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "LNK4197"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "LNK4197"
ms.assetid: 8a976fd7-a74b-4c83-ab66-a9e7d7073c4a
caps.latest.revision: 6
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
# Linker Tools Warning LNK4197
export 'exportname' specified multiple times; using first specification  
  
 An export is specified in multiple and different ways. The linker uses the first specification and ignores the rest.  
  
 If you are rebuilding the C run-time library, you can ignore this message.  
  
 If an export is specified exactly the same way multiple times, the linker will not issue a warning.  
  
 For example, the following contents of a .def file would cause this warning:  
  
```  
EXPORTS  
   functioname      NONAME  
   functioname      @10  
```  
  
### To fix by checking the following possible causes  
  
1.  The same export is specified both on the command line (through export:) and in the .def file  
  
2.  The same export is listed twice in the .def file with different attributes.