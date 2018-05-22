---
title: "_HAS_ITERATOR_DEBUGGING | Microsoft Docs"
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
  - "_HAS_ITERATOR_DEBUGGING"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "_HAS_ITERATOR_DEBUGGING"
ms.assetid: 90077dbb-8a76-4963-83a6-29f4854007a8
caps.latest.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# _HAS_ITERATOR_DEBUGGING
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [_HAS_ITERATOR_DEBUGGING](https://docs.microsoft.com/cpp/standard-library/has-iterator-debugging).  
  
Superseded by [_ITERATOR_DEBUG_LEVEL](../standard-library/iterator-debug-level.md), this macro defines whether the iterator debugging feature is enabled in a debug build. By default, iterator debugging is enabled in Debug builds and disabled in Retail builds. For more information, see [Debug Iterator Support](../standard-library/debug-iterator-support.md).  
  
> [!IMPORTANT]
> Direct use of the `_HAS_ITERATOR_DEBUGGING` macro is deprecated. Instead, use `_ITERATOR_DEBUG_LEVEL` to control iterator debug settings. For more information, see [_ITERATOR_DEBUG_LEVEL](../standard-library/iterator-debug-level.md).  
  
## Remarks  
To enable iterator debugging in debug builds, set `_ITERATOR_DEBUG_LEVEL` to 2. This is equivalent to a `_HAS_ITERATOR_DEBUGGING` setting of 1, or enabled:  
  
```  
#define _ITERATOR_DEBUG_LEVEL 2  
```  
  
`_ITERATOR_DEBUG_LEVEL` cannot be set to 2 (and `_HAS_ITERATOR_DEBUGGING` cannot be set to 1) in retail builds.  
  
To disable debug iterators in debug builds, set `_ITERATOR_DEBUG_LEVEL` to 0 or 1. This is equivalent to a `_HAS_ITERATOR_DEBUGGING` setting of 0, or disabled:  
  
```  
#define _ITERATOR_DEBUG_LEVEL 0  
```  
  
## See Also  
 [_ITERATOR_DEBUG_LEVEL](../standard-library/iterator-debug-level.md)   
 [Debug Iterator Support](../standard-library/debug-iterator-support.md)   
 [Checked Iterators](../standard-library/checked-iterators.md)   
 [Safe Libraries: C++ Standard Library](../standard-library/safe-libraries-cpp-standard-library.md)





