---
title: "add_lvalue_reference Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-standard-libraries"]
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: ["type_traits/std::add_lvalue_reference"]
dev_langs: ["C++"]
helpviewer_keywords: ["add_lvalue_reference"]
ms.assetid: 9933afc2-ad0d-465d-98fe-7d547fa3efe2
caps.latest.revision: 21
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
ms.workload: ["cplusplus"]
---
# add_lvalue_reference Class
Makes reference to type from type.  
  
## Syntax  
  
```  
template <class T>  
struct add_lvalue_reference;  
 
template <class T>  
using add_lvalue_reference_t = typename add_lvalue_reference<T>::type;  
```  
  
#### Parameters  
 `T`  
 The type to modify.  
  
## Remarks  
 An instance of the type modifier holds a modified-type that is `T` if `T` is an lvalue reference, otherwise `T&`.  
  
## Example  
  
```cpp  
#include <type_traits>   
#include <iostream>   
  
using namespace std;  
int main()  
{  
    int val = 0;  
    add_lvalue_reference_t<int> p = (int&)val;  
    p = p;  // to quiet "unused" warning   
    cout << "add_lvalue_reference_t<int> == "  
        << typeid(p).name() << endl;  
  
    return (0);  
}  
```  
  
```Output  
add_lvalue_reference_t<int> == int  
```  
  
## Requirements  
 **Header:** \<type_traits>  
  
 **Namespace:** std  
  
## See Also  
 [<type_traits>](../standard-library/type-traits.md)   
 [remove_reference Class](../standard-library/remove-reference-class.md)
