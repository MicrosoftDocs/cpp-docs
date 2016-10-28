---
title: "-ALLOWBIND"
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
  - "/allowbind"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ALLOWBIND editbin option"
  - "/ALLOWBIND editbin option"
  - "-ALLOWBIND editbin option"
ms.assetid: eaadbb8c-4339-4281-9a75-3a1ce2352ff8
caps.latest.revision: 10
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
# /ALLOWBIND
Specifies whether a DLL can be bound.  
  
```  
  
/ALLOWBIND[:NO]  
```  
  
## Remarks  
 The **/ALLOWBIND** option sets a bit in a DLL's header that indicates to Bind.exe that the image is allowed to be bound. Binding can allow an image to load faster when the loader doesn't have to rebase and perform address fixup for each referenced DLL. You may not want a DLL to be bound if it has been digitally signed—binding invalidates the signature. Binding has no effect if address space layout randomization (ASLR) is enabled for the image by using **/DYNAMICBASE** on versions of Windows that support ASLR.  
  
 Use **/ALLOWBIND:NO** to prevent Bind.exe from binding the DLL.  
  
 For more information, see the [/ALLOWBIND](../buildref/-allowbind--prevent-dll-binding-.md) linker option.  
  
## See Also  
 [EDITBIN Options](../buildref/editbin-options.md)