---
title: "-ALLOWISOLATION | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "/ALLOWISOLATION"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "-ALLOWISOLATION editbin option"
  - "/ALLOWISOLATION editbin option"
  - "ALLOWISOLATION editbin option"
ms.assetid: 91430344-f64f-491a-a5a5-7ea3b21cbe68
caps.latest.revision: 11
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
# /ALLOWISOLATION
Specifies behavior for manifest lookup.  
  
## Syntax  
  
```  
  
/ALLOWISOLATION[:NO]  
```  
  
## Remarks  
 **/ALLOWISOLATION** causes the operating system to do manifest lookups and loads.  
  
 **/ALLOWISOLATION** is the default.  
  
 **/ALLOWISOLATION:NO** indicates that executables are loaded as if there were no manifest, and causes [EDITBIN Reference](../../build/reference/editbin-reference.md) to set the `IMAGE_DLLCHARACTERISTICS_NO_ISOLATION` bit in the optional header's `DllCharacteristics` field.  
  
 When isolation is disabled for an executable, the Windows loader doesn't try to find an application manifest for the newly created process. The new process doesn't have a default activation context, even if there is a manifest in the executable itself or if there is a manifest that has the name *executable-name*.exe.manifest.  
  
## See Also  
 [EDITBIN Options](../../build/reference/editbin-options.md)   
 [/ALLOWISOLATION (Manifest Lookup)](../../build/reference/allowisolation-manifest-lookup.md)   
 [Manifest Files Reference](http://msdn.microsoft.com/library/aa375632.aspx)