---
title: "&lt;thread&gt; | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "<thread>"
dev_langs: 
  - "C++"
ms.assetid: 0c858405-4efb-449d-bf76-70d3693c9234
caps.latest.revision: 18
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
# &lt;thread&gt;
Include the standard header \<thread> to define the class `thread` and various supporting functions.  
  
## Syntax  
  
```cpp  
#include <thread>  
```  
  
## Remarks  
  
> [!NOTE]
>  In code that is compiled by using **/clr** or **/clr:pure**, this header is blocked.  
  
 The `__STDCPP_THREADS__` macro is defined as a nonzero value to indicate that threads are supported by this header.  
  
## Members  
  
### Public Classes  
  
|Name|Description|  
|----------|-----------------|  
|[thread Class](../standard-library/thread-class.md)|Defines an object that is used to observe and manage a thread of execution in an application.|  
  
### Public Structures  
  
|Name|Description|  
|----------|-----------------|  
|[hash Structure (STL)](../standard-library/hash-structure-stl.md)|Defines a member function that returns a value that is uniquely determined by a `thread::id`. The member function defines a [hash](../standard-library/hash-class.md) function that is suitable for mapping values of type `thread::id` to a distribution of index values.|  
  
### Public Functions  
  
|Name|Description|  
|----------|-----------------|  
|[get_id Function](../standard-library/thread-functions.md#get_id_function)|Uniquely identifies the current thread of execution.|  
|[sleep_for Function](../standard-library/thread-functions.md#sleep_for_function)|Blocks the calling thread.|  
|[sleep_until Function](../standard-library/thread-functions.md#sleep_until_function)|Blocks the calling thread at least until the specified time.|  
|[swap Function](../standard-library/thread-functions.md#swap_function)|Exchanges the states of two `thread` objects.|  
|[yield Function](../standard-library/thread-functions.md#yield_function)|Signals the operating system to run other threads, even if the current thread would ordinarily continue to run.|  
  
### Public Operators  
  
|Name|Description|  
|----------|-----------------|  
|[operator>= Operator](../standard-library/thread-operators.md#operator_gt__eq)|Determines whether one `thread::id` object is greater than or equal to another.|  
|[operator> Operator](../standard-library/thread-operators.md#operator_gt_)|Determines whether one `thread::id` object is greater than another.|  
|[operator<= Operator](../standard-library/thread-operators.md#operator_lt__eq)|Determines whether one `thread::id` object is less than or equal to another.|  
|[operator< Operator](../standard-library/thread-operators.md#operator_lt_)|Determines whether one `thread::id` object is less than another.|  
|[operator!= Operator](../standard-library/thread-operators.md#operator_neq)|Compares two `thread::id` objects for inequality.|  
|[operator== Operator](../standard-library/thread-operators.md#operator_eq_eq)|Compares two `thread::id` objects for equality.|  
|[operator<< Operator](../standard-library/thread-operators.md#operator_lt__lt_)|Inserts a text representation of a `thread::id` object into a stream.|  
  
## See Also  
 [Header Files Reference](../standard-library/cpp-standard-library-header-files.md)   
 [Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md)

