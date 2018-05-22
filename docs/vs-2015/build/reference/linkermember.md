---
title: "-LINKERMEMBER | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
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
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# /LINKERMEMBER
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [-LINKERMEMBER](https://docs.microsoft.com/cpp/build/reference/linkermember).  
  
  
LINKERMEMBER[:{1|2}]  
```  
  
## Remarks  
 This option displays public symbols defined in a library. Specify the 1 argument to display symbols in object order, along with their offsets. Specify the 2 argument to display offsets and index numbers of objects, and then list the symbols in alphabetical order, along with the object index for each. To get both outputs, specify /LINKERMEMBER without the number argument.  
  
 Only the [/HEADERS](../../build/reference/headers.md) DUMPBIN option is available for use on files produced with the [/GL](../../build/reference/gl-whole-program-optimization.md) compiler option.  
  
## See Also  
 [DUMPBIN Options](../../build/reference/dumpbin-options.md)

