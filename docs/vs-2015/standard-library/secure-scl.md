---
title: "_SECURE_SCL | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
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
caps.latest.revision: 14
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# _SECURE_SCL
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [_SECURE_SCL](https://docs.microsoft.com/cpp/standard-library/secure-scl).  
  
Defines whether [Checked Iterators](../standard-library/checked-iterators.md) are enabled. By default, checked iterators are enabled in Debug builds, and disabled in Retail builds.  
  
> [!IMPORTANT]
> Direct use of the `_SECURE_SCL` macro is deprecated. Instead, use  `_ITERATOR_DEBUG_LEVEL` to control checked iterator settings. For more information, see [_ITERATOR_DEBUG_LEVEL](../standard-library/iterator-debug-level.md).  
  
## Remarks  
When checked iterators are enabled, unsafe iterator use causes a runtime error and the program is terminated. To enable checked iterators, set `_ITERATOR_DEBUG_LEVEL` to 1 or 2. This implies a `_SECURE_SCL` setting of 1, or enabled:  
  
```  
#define _ITERATOR_DEBUG_LEVEL 1  
```  
  
To disable checked iterators, set `_ITERATOR_DEBUG_LEVEL` to 0. This implies a `_SECURE_SCL` setting of 0, or disabled:  
  
```  
#define _ITERATOR_DEBUG_LEVEL 0  
```  
  
 For information on how to disable warnings about checked iterators, see [_SCL_SECURE_NO_WARNINGS](../standard-library/scl-secure-no-warnings.md).  
  
## See Also  
 [_ITERATOR_DEBUG_LEVEL](../standard-library/iterator-debug-level.md)   
 [Checked Iterators](../standard-library/checked-iterators.md)   
 [Debug Iterator Support](../standard-library/debug-iterator-support.md)   
 [Safe Libraries: C++ Standard Library](../standard-library/safe-libraries-cpp-standard-library.md)





