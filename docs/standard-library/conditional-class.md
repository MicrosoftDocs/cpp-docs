---
title: "conditional Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "std::tr1::conditional"
  - "std.tr1.conditional"
  - "conditional"
  - "std.conditional"
  - "std::conditional"
  - "type_traits/std::conditional"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "conditional class[TR1]"
  - "conditional"
ms.assetid: ece9f539-fb28-4e26-a79f-3264bc984493
caps.latest.revision: 22
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
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
# conditional Class
Selects one of two types, depending on the specified condition.  
  
## Syntax  
  
```
template <bool B, class T1, class T2>  
struct conditional;

template <bool _Test, class _T1, class _T2>  
using conditional_t = typename conditional<_Test, _T1, _T2>::type;
```  
  
#### Parameters  
 `B`  
 The value that determines the selected type.  
  
 `T1`  
 The type result when B is true.  
  
 `T2`  
 The type result when B is false.  
  
## Remarks  
 The template member typedef `conditional<B, T1, T2>::type` evaluates to `T1` when `B` evaluates to `true`, and evaluates to `T2` when `B` evaluates to `false`.  
  
## Requirements  
 **Header:** <type_traits>  
  
 **Namespace:** std  
  
## See Also  
 [<type_traits>](../standard-library/type-traits.md)



