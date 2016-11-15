---
title: "_SECURE_SCL | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "_SECURE_SCL"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "_SECURE_SCL"
ms.assetid: 4ffbc788-cc12-4c6a-8cd7-490081675086
caps.latest.revision: 10
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
# _SECURE_SCL
Defines whether [Checked Iterators](../standard-library/checked-iterators.md) are enabled. If defined as 1, unsafe iterator use causes a runtime error and the program is terminated. If defined as 0, checked iterators are disabled. In debug mode, the default value for **_SECURE_SCL** is 1, meaning checked iterators are enabled. In release mode, the default value for `_SECURE_SCL` is 0.  
  
> [!IMPORTANT]
>  Use `_ITERATOR_DEBUG_LEVEL` to control `_SECURE_SCL`. For more information, see [_ITERATOR_DEBUG_LEVEL](../standard-library/iterator-debug-level.md).  
  
## Remarks  
 To enable checked iterators, set **_SECURE_SCL** to 1:  
  
```  
#define _SECURE_SCL 1  
```  
  
 To disable checked iterators, set **_SECURE_SCL** to 0:  
  
```  
#define _SECURE_SCL 0  
```  
  
 For information on how to disable warnings about checked iterators, see [_SCL_SECURE_NO_WARNINGS](../standard-library/scl-secure-no-warnings.md).  
  
## See Also  
 [_ITERATOR_DEBUG_LEVEL](../standard-library/iterator-debug-level.md)   
 [Checked Iterators](../standard-library/checked-iterators.md)   
 [Debug Iterator Support](../standard-library/debug-iterator-support.md)   
 [Safe Libraries: C++ Standard Library](../standard-library/safe-libraries-cpp-standard-library.md)

