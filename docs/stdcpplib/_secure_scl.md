---
title: "_SECURE_SCL"
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
  - "_SECURE_SCL"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "_SECURE_SCL"
ms.assetid: 4ffbc788-cc12-4c6a-8cd7-490081675086
caps.latest.revision: 9
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
# _SECURE_SCL
Defines whether [Checked Iterators](../stdcpplib/checked-iterators.md) are enabled. If defined as 1, unsafe iterator use causes a runtime error and the program is terminated. If defined as 0, checked iterators are disabled. In debug mode, the default value for **_SECURE_SCL** is 1, meaning checked iterators are enabled. In release mode, the default value for `_SECURE_SCL` is 0.  
  
> [!IMPORTANT]
>  Use `_ITERATOR_DEBUG_LEVEL` to control `_SECURE_SCL`. For more information, see [_ITERATOR_DEBUG_LEVEL](../stdcpplib/_iterator_debug_level.md).  
  
## Remarks  
 To enable checked iterators, set **_SECURE_SCL** to 1:  
  
```  
#define _SECURE_SCL 1  
```  
  
 To disable checked iterators, set **_SECURE_SCL** to 0:  
  
```  
#define _SECURE_SCL 0  
```  
  
 For information on how to disable warnings about checked iterators, see [_SCL_SECURE_NO_WARNINGS](../stdcpplib/_scl_secure_no_warnings.md).  
  
## See Also  
 [_ITERATOR_DEBUG_LEVEL](../stdcpplib/_iterator_debug_level.md)   
 [Checked Iterators](../stdcpplib/checked-iterators.md)   
 [Debug Iterator Support](../stdcpplib/debug-iterator-support.md)   
 [Safe Libraries: C++ Standard Library](../stdcpplib/safe-libraries--c---standard-library.md)