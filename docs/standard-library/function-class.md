---
title: "function Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "functional/std::tr1::function"
  - "std.tr1.function"
  - "std::tr1::function"
  - "function"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "function class [TR1]"
ms.assetid: 7b5ca76b-9ca3-4d89-8fcf-cad70a4aeae6
caps.latest.revision: 26
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
# function Class
Wrapper for a callable object.  
  
## Syntax  
  
```cpp  
template <class Fty>
class function  // Fty of type Ret(T1, T2, ..., TN)  
    : public unary_function<T1, Ret>       // when Fty is Ret(T1)  
    : public binary_function<T1, T2, Ret>  // when Fty is Ret(T1, T2)  
{
public:
    typedef Ret result_type;

    function();
    function(nullptr_t);

    function(const function& right);

    template <class Fty2>
    function(Fty2 fn);

    template <class Fty2, class Alloc>
    function(reference_wrapper<Fty2>, const Alloc& Ax);

    template <class Fty2, class Alloc>
    void assign(Fty2, const Alloc& Ax);

    template <class Fty2, class Alloc>
    assign(reference_wrapper<Fty2>, const Alloc& Ax);
    function& operator=(nullptr_t);
    function& operator=(const function&);
    template <class Fty2>
    function& operator=(Fty2);
    template <class Fty2>
    function& operator=(reference_wrapper<Fty2>);

    void swap(function&);
    explicit operator bool() const;

    result_type operator()(T1, T2, ....., TN) const;
    const std::type_info& target_type() const;
    template <class Fty2>
    Fty2 *target();

    template <class Fty2>
    const Fty2 *target() const;

    template <class Fty2>
    void operator==(const Fty2&) const = delete;
    template <class Fty2>
    void operator!=(const Fty2&) const = delete;
};
```  
  
#### Parameters  
 `Fty`  
 The function type to wrap.  
  
 `Ax`  
 The allocator function.  
  
## Remarks  
 The template class is a call wrapper whose call signature is `Ret(T1, T2, ..., TN)`. You use it to enclose a variety of callable objects in a uniform wrapper.  
  
 Some member functions take an operand that names the desired target object. You can specify such an operand in several ways:  
  
 `fn` -- the callable object `fn`; after the call the `function` object holds a copy of `fn`  
  
 `fnref` -- the callable object named by `fnref.get()`; after the call the `function` object holds a reference to `fnref.get()`  
  
 `right` -- the callable object, if any, held by the `function` object `right`  
  
 `npc` -- a null pointer; after the call the `function` object is empty  
  
 In all cases, `INVOKE(f, t1, t2, ..., tN)`, where `f` is the callable object and `t1, t2, ..., tN` are lvalues of types `T1, T2, ..., TN` respectively, must be well-formed and, if `Ret` is not void, convertible to `Ret`.  
  
 An empty `function` object does not hold a callable object or a reference to a callable object.  
  
### Constructors  
  
|||  
|-|-|  
|[function::function](#function__function)|Constructs a wrapper that either is empty or stores a callable object of arbitrary type with a fixed signature.|  
  
### Typedefs  
  
|||  
|-|-|  
|[function::result_type](#function__result_type)|The return type of the stored callable object.|  
  
### Member Functions  
  
|||  
|-|-|  
|[function::assign](#function__assign)|Assigns a callable object to this function object.|  
|[function::swap](#function__swap)|Swap two callable objects.|  
|[function::target](#function__target)|Tests if stored callable object is callable as specified.|  
|[function::target_type](#function__target_type)|Gets type information on the callable object.|  
  
### Operators  
  
|||  
|-|-|  
|[function::operator unspecified](#function__operator_unspecified)|Tests if stored callable object exists.|  
|[function::operator()](#function__operator__)|Calls a callable object.|  
|[function::operator=](#function__operator_eq)|Replaces the stored callable object.|  
  
## Requirements  
 **Header:** \<functional>  
  
 **Namespace:** std  
  
##  <a name="function__assign"></a>  function::assign  
 Assigns a callable object to this function object.  
  
```  
template <class Fx, class Alloc>  
void assign(
    Fx _Func,   
    const Alloc& Ax);

template <class Fx, class Alloc>  
void assign(
    reference_wrapper<Fx>  
_Fnref,   
    const Alloc& Ax);
```  
  
### Parameters  
 `_Func`  
 A callable object.  
  
 `_Fnref`  
 A reference wrapper that contains a callable object.  
  
 `Ax`  
 An allocator object.  
  
### Remarks  
 The member functions each replace the `callable object` held by `*this` with the callable object passed as the `operand`. Both allocate storage with the allocator object `Ax`.  
  
##  <a name="function__function"></a>  function::function  
 Constructs a wrapper that either is empty or stores a callable object of arbitrary type with a fixed signature.  
  
```  
function();

function(nullptr_t npc);

function(const function& right);

template <class Fx>  
function(Fx _Func);

template <class Fx>  
function(reference_wrapper<Fx>  
_Fnref);

template <class Fx, class Alloc>  
function(
 Fx _Func,   
    const Alloc& Ax);

template <class Fx, class Alloc>  
function(
 reference_wrapper<Fx>  
_Fnref,   
    const Alloc& Ax);
```  
  
### Parameters  
 ` right`  
 The function object to copy.  
  
 Fx  
 The type of the callable object.  
  
 `_Func`  
 The callable object to wrap.  
  
 Alloc  
 The allocator type.  
  
 `Ax`  
 The allocator.  
  
 `_Fnref`  
 The callable object reference to wrap.  
  
### Remarks  
 The first two constructors construct an empty `function` object. The next three constructors construct a `function` object that holds the callable object passed as the operand. The last two constructors allocate storage with the allocator object Ax.  
  
### Example  
  
```cpp  
// std_tr1__functional__function_function.cpp   
// compile with: /EHsc   
#include <functional>   
#include <iostream>   
#include <vector>  
  
int square(int val)  
{  
    return val * val;  
}  
  
class multiply_by  
{  
public:  
    explicit multiply_by(const int n) : m_n(n) { }  
  
    int operator()(const int x) const  
    {  
        return m_n * x;  
    }  
  
private:  
    int m_n;  
};  
  
int main()   
{   
  
    typedef std::vector< std::function<int (int)> > vf_t;  
  
    vf_t v;  
    v.push_back(square);  
    v.push_back(std::negate<int>());  
    v.push_back(multiply_by(3));  
  
    for (vf_t::const_iterator i = v.begin(); i != v.end(); ++i)  
    {  
        std::cout << (*i)(10) << std::endl;  
    }  
  
    std::function<int (int)> f = v[0];  
    std::function<int (int)> g;  
  
    if (f) {  
        std::cout << "f is non-empty (correct)." << std::endl;  
    } else {  
        std::cout << "f is empty (can't happen)." << std::endl;  
    }  
  
    if (g) {  
        std::cout << "g is non-empty (can't happen)." << std::endl;  
    } else {  
        std::cout << "g is empty (correct)." << std::endl;  
    }  
  
    return 0;   
}  
```  
  
```Output  
100  
-10  
30  
f is non-empty (correct).  
g is empty (correct).  
```  
  
##  <a name="function__operator_unspecified"></a>  function::operator unspecified  
 Tests if stored callable object exists.  
  
```  operator unspecified();
```   
  
### Remarks  
 The operator returns a value that is convertible to `bool` with a true value only if the object is not empty. You use it to test whether the object is empty.  
  
### Example  
  
```cpp  
// std_tr1__functional__function_operator_bool.cpp   
// compile with: /EHsc   
#include <functional>   
#include <iostream>   
  
int neg(int val)   
    {   
    return (-val);   
    }   
  
int main()   
    {   
    std::function<int (int)> fn0;   
    std::cout << std::boolalpha << "not empty == " << (bool)fn0 << std::endl;   
  
    std::function<int (int)> fn1(neg);   
    std::cout << std::boolalpha << "not empty == " << (bool)fn1 << std::endl;   
  
    return (0);   
    }  
  
```  
  
```Output  
not empty == false  
not empty == true  
```  
  
##  <a name="function__operator__"></a>  function::operator()  
 Calls a callable object.  
  
```  
result_type operator()(T1 t1,
    T2 t2, ...,
    TN tN);
```  
  
### Parameters  
 `TN`  
 The type of the Nth call argument.  
  
 `tN`  
 The Nth call argument.  
  
### Remarks  
 The member function returns `INVOKE(fn, t1, t2, ..., tN, Ret)`, where `fn` is the target object stored in `*this`. You use it to call the wrapped callable object.  
  
### Example  
  
```cpp  
// std_tr1__functional__function_operator_call.cpp   
// compile with: /EHsc   
#include <functional>   
#include <iostream>   
  
int neg(int val)   
    {   
    return (-val);   
    }   
  
int main()   
    {   
    std::function<int (int)> fn1(neg);   
    std::cout << std::boolalpha << "empty == " << !fn1 << std::endl;   
    std::cout << "val == " << fn1(3) << std::endl;   
  
    return (0);   
    }  
  
```  
  
```Output  
empty == false  
val == -3  
```  
  
##  <a name="function__operator_eq"></a>  function::operator=  
 Replaces the stored callable object.  
  
```  
function& operator=(null_ptr_type npc);

function& operator=(const function& right);

template <class Fty>  
function& operator=(Fty fn);

template <class Fty>  
function& operator=(reference_wrapper<Fty>  
fnref);
```  
  
### Parameters  
 `npc`  
 A null pointer constant.  
  
 `right`  
 The function object to copy.  
  
 `fn`  
 The callable object to wrap.  
  
 `fnref`  
 The callable object reference to wrap.  
  
### Remarks  
 The operators each replace the callable object held by `*this` with the callable object passed as the operand.  
  
### Example  
  
```cpp  
// std_tr1__functional__function_operator_as.cpp   
// compile with: /EHsc   
#include <functional>   
#include <iostream>   
  
int neg(int val)   
    {   
    return (-val);   
    }   
  
int main()   
    {   
    std::function<int (int)> fn0(neg);   
    std::cout << std::boolalpha << "empty == " << !fn0 << std::endl;   
    std::cout << "val == " << fn0(3) << std::endl;   
  
    std::function<int (int)> fn1;   
    fn1 = 0;   
    std::cout << std::boolalpha << "empty == " << !fn1 << std::endl;   
  
    fn1 = neg;   
    std::cout << std::boolalpha << "empty == " << !fn1 << std::endl;   
    std::cout << "val == " << fn1(3) << std::endl;   
  
    fn1 = fn0;   
    std::cout << std::boolalpha << "empty == " << !fn1 << std::endl;   
    std::cout << "val == " << fn1(3) << std::endl;   
  
    fn1 = std::cref(fn1);   
    std::cout << std::boolalpha << "empty == " << !fn1 << std::endl;   
    std::cout << "val == " << fn1(3) << std::endl;   
  
    return (0);   
    }  
  
```  
  
```Output  
empty == false  
val == -3  
empty == true  
empty == false  
val == -3  
empty == false  
val == -3  
empty == false  
val == -3  
```  
  
##  <a name="function__result_type"></a>  function::result_type  
 The return type of the stored callable object.  
  
```  
typedef Ret result_type;  
```  
  
### Remarks  
 The typedef is a synonym for the type `Ret` in the template's call signature. You use it to determine the return type of the wrapped callable object.  
  
### Example  
  
```cpp  
// std_tr1__functional__function_result_type.cpp   
// compile with: /EHsc   
#include <functional>   
#include <iostream>   
  
int neg(int val)   
    {   
    return (-val);   
    }   
  
int main()   
    {   
    std::function<int (int)> fn1(neg);   
    std::cout << std::boolalpha << "empty == " << !fn1 << std::endl;   
  
    std::function<int (int)>::result_type val = fn1(3);   
    std::cout << "val == " << val << std::endl;   
  
    return (0);   
    }  
  
```  
  
```Output  
empty == false  
val == -3  
```  
  
##  <a name="function__swap"></a>  function::swap  
 Swap two callable objects.  
  
```  
void swap(function& right);
```  
  
### Parameters  
 `right`  
 The function object to swap with.  
  
### Remarks  
 The member function swaps the target objects between `*this` and `right`. It does so in constant time and throws no exceptions.  
  
### Example  
  
```cpp  
// std_tr1__functional__function_swap.cpp   
// compile with: /EHsc   
#include <functional>   
#include <iostream>   
  
int neg(int val)   
    {   
    return (-val);   
    }   
  
int main()   
    {   
    std::function<int (int)> fn0(neg);   
    std::cout << std::boolalpha << "empty == " << !fn0 << std::endl;   
    std::cout << "val == " << fn0(3) << std::endl;   
  
    std::function<int (int)> fn1;   
    std::cout << std::boolalpha << "empty == " << !fn1 << std::endl;   
    std::cout << std::endl;   
  
    fn0.swap(fn1);   
    std::cout << std::boolalpha << "empty == " << !fn0 << std::endl;   
    std::cout << std::boolalpha << "empty == " << !fn1 << std::endl;   
    std::cout << "val == " << fn1(3) << std::endl;   
  
    return (0);   
    }  
  
```  
  
```Output  
empty == false  
val == -3  
empty == true  
  
empty == true  
empty == false  
val == -3  
```  
  
##  <a name="function__target"></a>  function::target  
 Tests if stored callable object is callable as specified.  
  
```  
template <class Fty2>  
Fty2 *target();

template <class Fty2>  
const Fty2 *target() const;
```  
  
### Parameters  
 `Fty2`  
 The target callable object type to test.  
  
### Remarks  
 The type `Fty2` must be callable for the argument types `T1, T2, ..., TN` and the return type `Ret`. If `target_type() == typeid(Fty2)`, the member template function returns the address of the target object; otherwise, it returns 0.  
  
 A type `Fty2` is callable for the argument types `T1, T2, ..., TN` and the return type `Ret` if, for lvalues `fn, t1, t2, ..., tN` of types `Fty2, T1, T2, ..., TN`, respectively, `INVOKE(fn, t1, t2, ..., tN)` is well-formed and, if `Ret` is not `void`, convertible to `Ret`.  
  
### Example  
  
```cpp  
// std_tr1__functional__function_target.cpp   
// compile with: /EHsc   
#include <functional>   
#include <iostream>   
  
int neg(int val)   
    {   
    return (-val);   
    }   
  
int main()   
    {   
    typedef int (*Myfun)(int);   
    std::function<int (int)> fn0(neg);   
    std::cout << std::boolalpha << "empty == " << !fn0 << std::endl;   
    std::cout << "no target == " << (fn0.target<Myfun>() == 0) << std::endl;   
  
    Myfun *fptr = fn0.target<Myfun>();   
    std::cout << "val == " << (*fptr)(3) << std::endl;   
  
    std::function<int (int)> fn1;   
    std::cout << std::boolalpha << "empty == " << !fn1 << std::endl;   
    std::cout << "no target == " << (fn1.target<Myfun>() == 0) << std::endl;   
  
    return (0);   
    }  
  
```  
  
```Output  
empty == false  
no target == false  
val == -3  
empty == true  
no target == true  
```  
  
##  <a name="function__target_type"></a>  function::target_type  
 Gets type information on the callable object.  
  
```  
const std::type_info& target_type() const;
```  
  
### Remarks  
 The member function returns `typeid(void)` if `*this` is empty, otherwise it returns `typeid(T)`, where `T` is the type of the target object.  
  
### Example  
  
```cpp  
// std_tr1__functional__function_target_type.cpp   
// compile with: /EHsc   
#include <functional>   
#include <iostream>   
  
int neg(int val)   
    {   
    return (-val);   
    }   
  
int main()   
    {   
    std::function<int (int)> fn0(neg);   
    std::cout << std::boolalpha << "empty == " << !fn0 << std::endl;   
    std::cout << "type == " << fn0.target_type().name() << std::endl;   
  
    std::function<int (int)> fn1;   
    std::cout << std::boolalpha << "empty == " << !fn1 << std::endl;   
    std::cout << "type == " << fn1.target_type().name() << std::endl;   
  
    return (0);   
    }  
  
```  
  
```Output  
empty == false  
type == int (__cdecl*)(int)  
empty == true  
type == void  
```  
  
## See Also  
 [mem_fn Function](../standard-library/functional-functions.md#mem_fn_function)   
 [reference_wrapper Class](../standard-library/reference-wrapper-class.md)
