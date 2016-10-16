---
title: "-IMPORTS (DUMPBIN)"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "article"
f1_keywords: 
  - "/imports"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "IMPORTS dumpbin option"
  - "/IMPORTS dumpbin option"
  - "-IMPORTS dumpbin option"
ms.assetid: 6a296216-2b1b-40f8-8736-cd4553a22456
caps.latest.revision: 7
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
# /IMPORTS (DUMPBIN)
```  
/IMPORTS[:file]  
```  
  
 This option displays the list of DLLs (both statically linked and [delay loaded](../buildref/linker-support-for-delay-loaded-dlls.md)) that are imported to an executable file or DLL and all the individual imports from each of these DLLs.  
  
 The optional `file` specification allows you to specify that the imports for only that DLL will be displayed. For example:  
  
```  
dumpbin /IMPORTS:msvcrt.dll  
```  
  
## Remarks  
 The output displayed by this option is similar to the [/EXPORTS](../buildref/-exports.md) output.  
  
 Only the [/HEADERS](../buildref/-headers.md) DUMPBIN option is available for use on files produced with the [/GL](../buildref/-gl--whole-program-optimization-.md) compiler option.  
  
## See Also  
 [DUMPBIN Options](../buildref/dumpbin-options.md)