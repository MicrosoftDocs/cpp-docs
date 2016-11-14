---
title: "-INTEGRITYCHECK | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "/INTEGRITYCHECK"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "-INTEGRITYCHECK editbin options"
  - "/INTEGRITYCHECK editbin options"
  - "INTEGRITYCHECK editbin options"
ms.assetid: 2a293705-4396-421b-a5a5-693b4b867a85
caps.latest.revision: 5
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
# /INTEGRITYCHECK
Specifies that the digital signature of the binary image must be checked at load time.  
  
```  
  
/INTEGRITYCHECK[:NO]  
```  
  
## Remarks  
 In the header of the DLL file or executable file, this option sets a flag that requires a digital signature check by the memory manager to load the image in Windows. Versions of Windows prior to Windows Vista ignore this flag. This option must be set for 64-bit DLLs that implement kernel-mode code, and is recommended for all device drivers. For more information, see [Kernel-Mode Code Signing Walkthrough](http://go.microsoft.com/fwlink/?linkid=237093) on the MSDN website.  
  
## See Also  
 [EDITBIN Options](../../build/reference/editbin-options.md)