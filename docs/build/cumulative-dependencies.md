---
title: "Cumulative Dependencies | Microsoft Docs"
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
  - "dependencies, cumulative"
  - "cumulative dependencies in NMAKE"
  - "dependencies"
ms.assetid: fa6dd777-80b8-437d-87a7-aec0ed818a49
caps.latest.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
translation.priority.ht: 
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "ru-ru"
  - "zh-cn"
  - "zh-tw"
translation.priority.mt: 
  - "cs-cz"
  - "pl-pl"
  - "pt-br"
  - "tr-tr"
---
# Cumulative Dependencies
Dependencies are cumulative in a description block if a target is repeated.  
  
 For example, this set of rules,  
  
```Output  
bounce.exe : jump.obj  
bounce.exe : up.obj  
   echo Building bounce.exe...  
```  
  
 is evaluated as this:  
  
```Output  
bounce.exe : jump.obj up.obj  
   echo Building bounce.exe...  
```  
  
 Multiple targets in multiple dependency lines in a single description block are evaluated as if each were specified in a separate description block, but targets that are not in the last dependency line do not use the commands block. NMAKE attempts to use an inference rule for such targets.  
  
 For example, this set of rules,  
  
```Output  
leap.exe bounce.exe : jump.obj  
bounce.exe climb.exe : up.obj  
   echo Building bounce.exe...  
```  
  
 is evaluated as this:  
  
```Output  
  
leap.exe : jump.obj  
# invokes an inference rule  
bounce.exe : jump.obj up.obj  
   echo Building bounce.exe...  
climb.exe : up.obj  
   echo Building bounce.exe...  
```  
  
## See Also  
 [Targets](../build/targets.md)