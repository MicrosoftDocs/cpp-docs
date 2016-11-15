---
title: "reference_wrapper Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "std.tr1.reference_wrapper"
  - "tr1.reference_wrapper"
  - "reference_wrapper"
  - "tr1::reference_wrapper"
  - "xrefwrap/std::tr1::reference_wrapper"
  - "std::tr1::reference_wrapper"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "reference_wrapper class"
  - "reference_wrapper class [TR1]"
ms.assetid: 90b8ed62-e6f1-44ed-acc7-9619bd58865a
caps.latest.revision: 21
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
# reference_wrapper Class
Wraps a reference.  
  
## Syntax  
  
```  
template <class Ty>  
class reference_wrapper  
 : public unary_function<T1, Ret>        // see below  
 : public binary_function<T1, T2, Ret>   // see below  
 {  
public:  
    typedef Ty type;  
    typedef T0 result_type; // see below  
 
    reference_wrapper(Ty&);

 
    Ty& get() const;

 operator Ty&() const;

 
    template <class T1, class T2, ..., class TN>  
typename result_of<T(T1, T2, ..., TN)>::type operator()(T1&, T2&, ..., TN&);

 
private:  
    Ty *ptr; // exposition only  
 };  
```  
  
## Remarks  
 A `reference_wrapper<Ty>` is copy constructible and assignable, and holds a pointer that points to an object of type `Ty`.  
  
 A specialization `reference_wrapper<Ty>` is derived from `std::unary_function<T1, Ret>` (hence defining the nested type `result_type` as a synonym for `Ret` and the nested type `argument_type` as a synonym for `T1`) only if the type `Ty` is:  
  
 a function type or pointer to function type taking one argument of type `T1` and returning `Ret`; or  
  
 a pointer to a member function `Ret T::f() cv`, where `cv` represents the member function's cv-qualifiers; the type `T1` is `cv``T*`; or  
  
 a class type that is derived from `unary_function<T1, Ret>`.  
  
 A specialization `reference_wrapper<Ty>` is derived from `std::binary_function<T1, T2, Ret>` (hence defining the nested type `result_type` as a synonym for `Ret`, the nested type `first_argument_type` as a synonym for `T1`, and the nested type `second_argument_type` as a synonym for `T2`) only if the type `Ty` is:  
  
 a function type or pointer to function type taking two arguments of types `T1` and `T2` and returning `Ret`; or  
  
 a pointer to a member function `Ret T::f(T2) cv`, where `cv` represents the member function's cv-qualifiers; the type `T1` is `cv``T*`; or  
  
 a class type that is derived from `binary_function<T1, T2, Ret>`.  
  
### Constructors  
  
|||  
|-|-|  
|[reference_wrapper::reference_wrapper](#reference_wrapper__reference_wrapper)|Constructs a `reference_wrapper`.|  
  
### Typedefs  
  
|||  
|-|-|  
|[reference_wrapper::result_type](#reference_wrapper__result_type)|The weak result type of the wrapped reference.|  
|[reference_wrapper::type](#reference_wrapper__type)|The type of the wrapped reference.|  
  
### Member Functions  
  
|||  
|-|-|  
|[reference_wrapper::get](#reference_wrapper__get)|Obtains the wrapped reference.|  
  
### Operators  
  
|||  
|-|-|  
|[reference_wrapper::operator Ty&amp;](#reference_wrapper__operator_ty_amp_)|Gets a pointer to the wrapped reference.|  
|[reference_wrapper::operator()](#reference_wrapper__operator__)|Calls the wrapped reference.|  
  
## Requirements  
 **Header:** \<functional>  
  
 **Namespace:** std  
  
##  <a name="reference_wrapper__get"></a>  reference_wrapper::get  
 Obtains the wrapped reference.  
  
```  
Ty& get() const;
```  
  
### Remarks  
 The member function returns `INVOKE(get(), t1, t2, ..., tN)`.  
  
### Example  
  
```cpp  
// std_tr1__functional__reference_wrapper_get.cpp   
// compile with: /EHsc   
#include <functional>   
#include <iostream>   
  
int main()   
    {   
    int i = 1;   
    std::reference_wrapper<int> rwi(i);   
  
    std::cout << "i = " << i << std::endl;   
    std::cout << "rwi = " << rwi << std::endl;   
    rwi.get() = -1;   
    std::cout << "i = " << i << std::endl;   
  
    return (0);   
    }  
  
```  
  
```Output  
i = 1  
rwi = 1  
i = -1  
```  
  
##  <a name="reference_wrapper__operator_ty_amp_"></a>  reference_wrapper::operator Ty&amp;  
 Gets a pointer to the wrapped reference.  
  
```  operator Ty&() const;
```  
  
### Parameters  
  
### Remarks  
 The member operator returns `*ptr`.  
  
### Example  
  
```cpp  
// std_tr1__functional__reference_wrapper_operator_cast.cpp   
// compile with: /EHsc   
#include <functional>   
#include <iostream>   
  
int main()   
    {   
    int i = 1;   
    std::reference_wrapper<int> rwi(i);   
  
    std::cout << "i = " << i << std::endl;   
    std::cout << "(int)rwi = " << (int)rwi << std::endl;   
  
    return (0);   
    }  
  
```  
  
```Output  
i = 1  
(int)rwi = 1  
```  
  
##  <a name="reference_wrapper__operator__"></a>  reference_wrapper::operator()  
 Calls the wrapped reference.  
  
```  
template <class T1, class T2, ..., class TN>  
typename result_of<T(T1, T2, ..., TN)>::type operator()(T1& t1, T2& t2, ..., TN& tN);
```  
  
### Parameters  
 `TN`  
 The type of the Nth call argument.  
  
 `tN`  
 The Nth call argument.  
  
### Remarks  
 The template member operator returns `INVOKE(get(), t1, t2, ..., tN)`.  
  
### Example  
  
```cpp  
// std_tr1__functional__reference_wrapper_operator_call.cpp   
// compile with: /EHsc   
#include <functional>   
#include <iostream>   
  
int neg(int val)   
    {   
    return (-val);   
    }   
  
int main()   
    {   
    std::reference_wrapper<int (int)> rwi(neg);   
  
    std::cout << "rwi(3) = " << rwi(3) << std::endl;   
  
    return (0);   
    }  
  
```  
  
```Output  
rwi(3) = -3  
```  
  
##  <a name="reference_wrapper__reference_wrapper"></a>  reference_wrapper::reference_wrapper  
 Constructs a `reference_wrapper`.  
  
```  
explicit reference_wrapper(Ty& val);
```  
  
### Parameters  
 `Ty`  
 The type to wrap.  
  
 `val`  
 The value to wrap.  
  
### Remarks  
 The constructor sets the stored value `ptr` to `&val`.  
  
### Example  
  
```cpp  
// std_tr1__functional__reference_wrapper_reference_wrapper.cpp   
// compile with: /EHsc   
#include <functional>   
#include <iostream>   
  
int neg(int val)   
    {   
    return (-val);   
    }   
  
int main()   
    {   
    int i = 1;   
    std::reference_wrapper<int> rwi(i);   
  
    std::cout << "i = " << i << std::endl;   
    std::cout << "rwi = " << rwi << std::endl;   
    rwi.get() = -1;   
    std::cout << "i = " << i << std::endl;   
  
    return (0);   
    }  
  
```  
  
```Output  
i = 1  
rwi = 1  
i = -1  
```  
  
##  <a name="reference_wrapper__result_type"></a>  reference_wrapper::result_type  
 The weak result type of the wrapped reference.  
  
```  
typedef T0 result_type;  
```  
  
### Remarks  
 The typedef is a synonym for the weak result type of a wrapped function.  
  
### Example  
  
```cpp  
// std_tr1__functional__reference_wrapper_result_type.cpp   
// compile with: /EHsc   
#include <functional>   
#include <iostream>   
  
int neg(int val)   
    {   
    return (-val);   
    }   
  
int main()   
    {   
    typedef std::reference_wrapper<int (int)> Mywrapper;   
    Mywrapper rwi(neg);   
    Mywrapper::result_type val = rwi(3);   
  
    std::cout << "val = " << val << std::endl;   
  
    return (0);   
    }  
  
```  
  
```Output  
val = -3  
```  
  
##  <a name="reference_wrapper__type"></a>  reference_wrapper::type  
 The type of the wrapped reference.  
  
```  
typedef Ty type;  
```  
  
### Remarks  
 The typedef is a synonym for the template argument `Ty`.  
  
### Example  
  
```cpp  
// std_tr1__functional__reference_wrapper_type.cpp   
// compile with: /EHsc   
#include <functional>   
#include <iostream>   
  
int neg(int val)   
    {   
    return (-val);   
    }   
  
int main()   
    {   
    int i = 1;   
    typedef std::reference_wrapper<int> Mywrapper;   
    Mywrapper rwi(i);   
    Mywrapper::type val = rwi.get();   
  
    std::cout << "i = " << i << std::endl;   
    std::cout << "rwi = " << val << std::endl;   
  
    return (0);   
    }  
  
```  
  
```Output  
i = 1  
rwi = 1  
```  
  
## See Also  
 [cref Function](../standard-library/functional-functions.md#cref_function)   
 [ref Function](../standard-library/functional-functions.md#ref_function)

