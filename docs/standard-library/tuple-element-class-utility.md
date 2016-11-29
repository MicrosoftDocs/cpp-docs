---
title: "tuple_element Class &lt;utility&gt; | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "std.tr1.tuple_element"
  - "tuple_element"
  - "std::tr1::tuple_element"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "tuple_element Class <utility> (TR1)"
ms.assetid: f9db79e8-685c-49e3-97ee-81763e516ce3
caps.latest.revision: 20
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
# tuple_element Class &lt;utility&gt;
Wraps the type of a `pair` element.  
  
## Syntax  
  
```
// CLASS tuple_element (find element by index)
template <size_t Index, class Tuple>
struct tuple_element;

// struct to determine type of element 0 in pair
template <class Ty1, class Ty2>
struct tuple_element<0, pair<Ty1, Ty2>>;

// struct to determine type of element 1 in pair
template <class Ty1, class Ty2>
struct tuple_element<1, pair<Ty1, Ty2>>;

// tuple_element for const
template <size_t Index, class Tuple>
struct tuple_element<Index, const Tuple>;

// tuple_element for volatile
template <size_t Index, class Tuple>
struct tuple_element<Index, volatile Tuple>;

// tuple_element for const volatile
template <size_t Index, class Tuple>
struct tuple_element<Index, const volatile Tuple>;

template <size_t Index, class Tuple>
using tuple_element_t = typename tuple_element<Index, Tuple>::type;
```  
  
#### Parameters  
 Index  
 The position of the element; for pair this value is either 0 or 1.  
  
 `T1`  
 The type of the first pair element.  
  
 `T2`  
 The type of the second pair element.  
  
 type  
  
## Remarks  
 The templates are specializations of the template class [tuple_element Class](../standard-library/tuple-element-class-tuple.md). Each has a single member typedef, `type`, which is a synonym for the type of the element at the specified position in the `pair`, with any const and/or volatile qualifications preserved. `tuple_element_t` is a convenient alias for `tuple_element<N, pair<T1, T2>>::type`. Use the [get Function &lt;utility&gt;](../standard-library/utility-functions.md#get) to return the element at a specified position or (in C++14 / Visual Studio 2015) of a specified type.  
  
## Example  
  
```cpp  
#include <utility>   
#include <iostream>   
  
using namespace std;  
  
typedef pair<int, double> MyPair;  
int main()  
{  
    MyPair c0(0, 1.333);  
  
    // display contents " 0 1"   
    cout << " " << get<0>(c0);  
    cout << " " << get<1>(c0) << endl;  
  
    // display first element " 0" by index  
    tuple_element<0, MyPair>::type val = get<0>(c0);  
    cout << " " << val;  
  
    // display second element by type   
    tuple_element<1, MyPair>::type val2 = get<double>(c0);  
    cout << " " << val2 << endl;  
}  
  
/*  
Output:  
0 1.333  
0 1.333  
*/  
```  
  
## Requirements  
 **Header:** \<utility>  
  
 **Namespace:** std  
  
## See Also  
 [\<utility>](../standard-library/utility.md)   
 [get Function &lt;utility&gt;](../standard-library/utility-functions.md#get)   
 [tuple_size Class](../standard-library/tuple-size-class-utility.md)
