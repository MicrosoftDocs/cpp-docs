---
title: "_HAS_ITERATOR_DEBUGGING | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
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
# _HAS_ITERATOR_DEBUGGING
Defines whether the iterator debugging feature is enabled in a debug build. By default, iterator debugging is enabled. For more information, see [Debug Iterator Support](../standard-library/debug-iterator-support.md).  
  
> [!IMPORTANT]
>  Use `_ITERATOR_DEBUG_LEVEL` to control `_HAS_ITERATOR_DEBUGGING`. For more information, see [_ITERATOR_DEBUG_LEVEL](../standard-library/iterator-debug-level.md).  
  
## Remarks  
 To enable iterator debugging in debug builds, set **_HAS_ITERATOR_DEBUGGING** to 1:  
  
```  
#define _HAS_ITERATOR_DEBUGGING 1  
```  
  
 **_HAS_ITERATOR_DEBUGGING** cannot be set to 1 in retail builds.  
  
 To disable iterator debugging in debug builds, set **_HAS_ITERATOR_DEBUGGING** to 0:  
  
```  
#define _HAS_ITERATOR_DEBUGGING 0  
```  
  
## See Also  
 [_ITERATOR_DEBUG_LEVEL](../standard-library/iterator-debug-level.md)   
 [Debug Iterator Support](../standard-library/debug-iterator-support.md)   
 [Checked Iterators](../standard-library/checked-iterators.md)   
 [Safe Libraries: C++ Standard Library](../standard-library/safe-libraries-cpp-standard-library.md)

