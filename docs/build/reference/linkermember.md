---
title: "-LINKERMEMBER | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "/linkermember"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "/LINKERMEMBER dumpbin option"
  - "LINKERMEMBER dumpbin option"
  - "-LINKERMEMBER dumpbin option"
ms.assetid: c96868c1-d70e-4651-ae36-c55b58b16406
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
# /LINKERMEMBER
```  
/LINKERMEMBER[:{1|2}]  
```  
  
## Remarks  
 This option displays public symbols defined in a library. Specify the 1 argument to display symbols in object order, along with their offsets. Specify the 2 argument to display offsets and index numbers of objects, and then list the symbols in alphabetical order, along with the object index for each. To get both outputs, specify /LINKERMEMBER without the number argument.  
  
 Only the [/HEADERS](../../build/reference/headers.md) DUMPBIN option is available for use on files produced with the [/GL](../../build/reference/gl-whole-program-optimization.md) compiler option.  
  
## See Also  
 [DUMPBIN Options](../../build/reference/dumpbin-options.md)