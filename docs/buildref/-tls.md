---
title: "-TLS"
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
  - "/TLS"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "/TLS dumpbin option"
  - "-TLS dumpbin option"
ms.assetid: 2b3f48f9-cac4-4351-b15c-2833b43bc709
caps.latest.revision: 6
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
# /TLS
Displays the IMAGE_TLS_DIRECTORY structure from an executable.  
  
## Remarks  
 /TLS displays the fields of the TLS structure as well as the addresses of the TLS callback functions.  
  
 If a program does not use thread local storage, its image will not contain a TLS structure.  See [thread](../cpp/thread.md) for more information.  
  
 IMAGE_TLS_DIRECTORY is defined in winnt.h.  
  
## See Also  
 [DUMPBIN Options](../buildref/dumpbin-options.md)