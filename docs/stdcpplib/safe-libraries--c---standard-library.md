---
title: "Safe Libraries: C++ Standard Library"
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
  - "_SCL_SECURE_NO_DEPRECATE"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Safe Libraries"
  - "Safe Libraries, Standard C++ Library"
  - "Safe Standard C++ Library"
ms.assetid: 3993340f-1f29-4d81-b3f5-52a52bc8e148
caps.latest.revision: 9
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
# Safe Libraries: C++ Standard Library
Several enhancements have been made to the libraries that ship with Visual C++, including the Standard C++ Library, to make them more secure.  
  
 Several methods in the Standard C++ Library have been identified as potentially unsafe because they could lead to a buffer overrun or other code defect. The use of these methods is discouraged, and new, more secure methods have been created to replace them. These new methods all end in `_s`.  
  
 Several enhancements have also been made to make iterators and algorithms more secure. For more information, see [Checked Iterators](../stdcpplib/checked-iterators.md), [Debug Iterator Support](../stdcpplib/debug-iterator-support.md) and [_ITERATOR_DEBUG_LEVEL](../stdcpplib/_iterator_debug_level.md).  
  
## Remarks  
 The following table lists the Standard C++ Library methods that are potentially unsafe, as well as their safer equivalent:  
  
|Potentially unsafe method|Safer equivalent|  
|-------------------------------|----------------------|  
|[basic_string::copy](../Topic/basic_string::copy.md)|[basic_string::_Copy_s](../Topic/basic_string::_Copy_s.md)|  
|[char_traits::copy](../Topic/char_traits::copy.md)|[char_traits::_Copy_s](../Topic/char_traits::_Copy_s.md)|  
  
 If you call any one of the potentially unsafe methods above, or if you use iterators incorrectly, the compiler will generate [Compiler Warning (level 3) C4996](../compilerwarnings/compiler-warning--level-3--c4996.md). For information on how to disable these warnings, see [_SCL_SECURE_NO_WARNINGS](../stdcpplib/_scl_secure_no_warnings.md).  
  
## In This Section  
 [_ITERATOR_DEBUG_LEVEL](../stdcpplib/_iterator_debug_level.md)  
  
 [_SCL_SECURE_NO_WARNINGS](../stdcpplib/_scl_secure_no_warnings.md)  
  
 [Checked Iterators](../stdcpplib/checked-iterators.md)  
  
 [Debug Iterator Support](../stdcpplib/debug-iterator-support.md)  
  
## See Also  
 [STL Overview](../stdcpplib/c---standard-library-overview.md)