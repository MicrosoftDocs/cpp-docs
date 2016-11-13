---
title: "-DYNAMICBASE | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "/dynamicbase"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "-DYNAMICBASE editbin option"
  - "DYNAMICBASE editbin option"
  - "/DYNAMICBASE editbin option"
ms.assetid: edb3df90-7b07-42fb-a94a-f5a4c1d325d6
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
# /DYNAMICBASE
Specifies whether an executable image can be randomly rebased at load time by using address space layout randomization (ASLR).  
  
## Syntax  
  
```  
  
/DYNAMICBASE[:NO]  
```  
  
## Remarks  
 By default, the linker sets the **/DYNAMICBASE** option.  
  
 This option modifies the header of an executable image to indicate whether the loader can randomly rebase the image at load time.  
  
 ASLR is supported on Windows Vista, Windows Server 2008, Windows 7, Windows 8, and Windows Server 2012.  
  
## See Also  
 [EDITBIN Options](../../build/reference/editbin-options.md)   
 [Windows ISV Software Security Defenses](http://msdn.microsoft.com/library/bb430720.aspx)