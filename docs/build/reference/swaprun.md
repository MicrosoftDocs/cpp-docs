---
title: "-SWAPRUN | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "/swaprun"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "/SWAPRUN editbin option"
  - "-SWAPRUN editbin option"
  - "SWAPRUN editbin option"
ms.assetid: 6eefd7f3-ca47-48e3-8509-323d27cf4ae7
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
# /SWAPRUN
```  
/SWAPRUN:{[!]NET|[!]CD}  
```  
  
## Remarks  
 This option edits the image to tell the operating system to copy the image to a swap file and run it from there. Use this option for images that reside on networks or removable media.  
  
 You can add or remove the NET or CD qualifiers:  
  
-   NET indicates that the image resides on a network.  
  
-   CD indicates that the image resides on a CD-ROM or similar removable medium.  
  
-   Use !NET and !CD to reverse the effects of NET and CD.  
  
## See Also  
 [EDITBIN Options](../../build/reference/editbin-options.md)