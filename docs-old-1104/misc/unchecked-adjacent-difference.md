---
title: "unchecked_adjacent_difference | Microsoft Docs"
ms.custom: ""
ms.date: "10/29/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "std.unchecked_adjacent_difference"
  - "std::unchecked_adjacent_difference"
  - "unchecked_adjacent_difference"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "unchecked_adjacent_difference function"
ms.assetid: 3a6b0b49-a84b-40b1-bcd5-3bf76c6ef7d7
caps.latest.revision: 14
author: "ghogen"
ms.author: "ghogen"
manager: "douge"
translation.priority.mt: 
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
# unchecked_adjacent_difference
Same as [adjacent_difference](../Topic/adjacent_difference.md), but allows the use of an unchecked iterator as output iterator when _SECURE_SCL=1 is defined.  `unchecked_adjacent_difference` is defined in the `stdext` namespace.  
  
> [!NOTE]
>  This algorithm is a Microsoft extension to the Standard C++ Library. Code implemented using this algorithm will not be portable.  
  
## Syntax  
  
```  
template<class InputIterator, class OutIterator>  
   OutputIterator unchecked_adjacent_difference(  
      InputIterator_First,  
      InputIterator _Last,  
      OutputIterator_Result   
   );  
  
template<class InputIterator, class OutputIterator, class BinaryOperation>  
   OutputIterator unchecked_adjacent_difference(  
      InputIterator_First,  
      InputIterator _Last,  
      OutputIterator_Result,   
      BinaryOperation _Binary_op  
   );  
```  
  
#### Parameters  
 `_First`  
 An input iterator addressing the first element in the input range whose elements are to be differenced with their respective predecessors or where the pair of values is to be operated on by another specified binary operation.  
  
 `_Last`  
 An input iterator addressing the last element in the input range whose elements are to be differenced with their respective predecessors or where the pair of values is to be operated on by another specified binary operation.  
  
 `_Result`  
 An output iterator addressing the first element a destination range where the series of differences or the results of the specified operation is to be stored.  
  
 `_Binary_op`  
 The binary operation that is to be applied in the generalized operation replacing the operation of subtraction in the differencing procedure.  
  
## Return Value  
 An output iterator addressing the end of the destination range: `_Result` + (`_Last` - `_First`).  
  
## Remarks  
 See [adjacent_difference](../Topic/adjacent_difference.md) for a code sample.  
  
 For more information on checked iterators, see [Checked Iterators](../standard-library/checked-iterators.md).  
  
## Requirements  
 **Header:** \<numeric>  
  
 **Namespace:** stdext  
  
## See Also  
 [Standard Template Library](../misc/standard-template-library.md)