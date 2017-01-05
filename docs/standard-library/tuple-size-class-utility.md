---
title: "tuple_size Class &lt;utility&gt; | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "tuple_size"
  - "std::tr1::tuple_size"
  - "std.tr1.tuple_size"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "tuple_size Class <utility> (TR1)"
ms.assetid: 36d04207-ed87-4c11-9875-150c59833b79
caps.latest.revision: 21
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
# tuple_size Class &lt;utility&gt;
Wraps `pair` element count.  
  
## Syntax  
  
```
template <class Tuple>
struct tuple_size;

template <class T1, class T2>
struct tuple_size<pair<T1, T2>>   : integral_constant<size_t, 2>

// size of const tuple
template <class Tuple>
struct tuple_size<const Tuple>;

// size of volatile tuple
template <class Tuple>
struct tuple_size<volatile Tuple>;

// size of const volatile tuple
template <class Tuple>
struct tuple_size<const volatile Tuple>;
```  
  
#### Parameters  
 `T1`  
 The type of the first pair element.  
  
 `T2`  
 The type of the second pair element.  
  
## Remarks  
 The template is a specialization of the template class [tuple_size Class](../standard-library/tuple-size-class-tuple.md). It has a member `value` that is an integral constant expression whose value is 2.  
  
## Example  
  
```cpp  
#include <utility>   
#include <iostream>   
  
using namespace std;  
  
typedef pair<int, double> MyPair;  
  
int main()  
{  
    MyPair c0(0, 1.1);  
  
    // display contents " 0 1.1"   
    cout << " " << get<0>(c0);  
    cout << " " << get<1>(c0) << endl;  
  
    // display size " 2"   
    cout << " " << tuple_size<MyPair>::value << endl;  
  
}  
  
/*  
Output:  
0 1.1  
2  
*/  
```  
  
## Requirements  
 **Header:** \<utility>  
  
 **Namespace:** std  
  
## See Also  
 [\<utility>](../standard-library/utility.md)   
 [get](../standard-library/utility-functions.md#get)   
 [tuple_element Class](../standard-library/tuple-element-class-utility.md)
