---
description: "Learn more about: function Class"
title: "function Class"
ms.date: "11/04/2016"
f1_keywords: ["functional/std::function", "functional/std::function::result_type", "functional/std::function::assign", "functional/std::function::swap", "functional/std::function::target", "functional/std::function::target_type", "functional/std::function::operator unspecified", "functional/std::function::operator()"]
helpviewer_keywords: ["std::function [C++]", "std::function [C++], result_type", "std::function [C++], assign", "std::function [C++], swap", "std::function [C++], target", "std::function [C++], target_type"]
ms.assetid: 7b5ca76b-9ca3-4d89-8fcf-cad70a4aeae6
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
        void assign(reference_wrapper<Fty2>, const Alloc& Ax);
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

### Parameters

*Fty*\
The function type to wrap.

*Ax*\
The allocator function.

## Remarks

The class template is a call wrapper whose call signature is `Ret(T1, T2, ..., TN)`. You use it to enclose a variety of callable objects in a uniform wrapper.

Some member functions take an operand that names the desired target object. You can specify such an operand in several ways:

`fn` -- the callable object `fn`; after the call the `function` object holds a copy of `fn`

`fnref` -- the callable object named by `fnref.get()`; after the call the `function` object holds a reference to `fnref.get()`

`right` -- the callable object, if any, held by the `function` object `right`

`npc` -- a null pointer; after the call the `function` object is empty

In all cases, `INVOKE(f, t1, t2, ..., tN)`, where `f` is the callable object and `t1, t2, ..., tN` are lvalues of types `T1, T2, ..., TN` respectively, must be well-formed and, if `Ret` is not void, convertible to `Ret`.

An empty `function` object does not hold a callable object or a reference to a callable object.

## Members

### Constructors

|Name|Description|
|-|-|
|[function](#function)|Constructs a wrapper that either is empty or stores a callable object of arbitrary type with a fixed signature.|

### Typedefs

|Name|Description|
|-|-|
|[result_type](#result_type)|The return type of the stored callable object.|

### Functions

|Name|Description|
|-|-|
|[assign](#assign)|Assigns a callable object to this function object.|
|[swap](#swap)|Swap two callable objects.|
|[target](#target)|Tests if stored callable object is callable as specified.|
|[target_type](#target_type)|Gets type information on the callable object.|

### Operators

|Name|Description|
|-|-|
|[operator unspecified](#op_unspecified)|Tests if stored callable object exists.|
|[operator()](#op_call)|Calls a callable object.|
|[operator=](#op_eq)|Replaces the stored callable object.|

## <a name="assign"></a> assign

Assigns a callable object to this function object.

```cpp
template <class Fx, class Alloc>
    void assign(
        Fx _Func,
        const Alloc& Ax);

template <class Fx, class Alloc>
    void assign(
        reference_wrapper<Fx> _Fnref,
        const Alloc& Ax);
```

### Parameters

*_Func*\
A callable object.

*_Fnref*\
A reference wrapper that contains a callable object.

*Ax*\
An allocator object.

### Remarks

The member functions each replace the `callable object` held by **`*this`** with the callable object passed as the `operand`. Both allocate storage with the allocator object *Ax*.

## <a name="function"></a> function

Constructs a wrapper that either is empty or stores a callable object of arbitrary type with a fixed signature.

```cpp
function();
function(nullptr_t npc);
function(const function& right);
template <class Fx>
    function(Fx _Func);
template <class Fx>
    function(reference_wrapper<Fx> _Fnref);
template <class Fx, class Alloc>
    function(
        Fx _Func,
        const Alloc& Ax);

template <class Fx, class Alloc>
    function(
        reference_wrapper<Fx> _Fnref,
        const Alloc& Ax);
```

### Parameters

*right*\
The function object to copy.

*Fx*\
The type of the callable object.

*_Func*\
The callable object to wrap.

*Alloc*\
The allocator type.

*Ax*\
The allocator.

*_Fnref*\
The callable object reference to wrap.

### Remarks

The first two constructors construct an empty `function` object. The next three constructors construct a `function` object that holds the callable object passed as the operand. The last two constructors allocate storage with the allocator object Ax.

### Example

```cpp
// std__functional__function_function.cpp
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

## <a name="op_unspecified"></a> operator unspecified

Tests if stored callable object exists.

```cpp
operator unspecified();
```

### Remarks

The operator returns a value that is convertible to **`bool`** with a true value only if the object is not empty. You use it to test whether the object is empty.

### Example

```cpp
// std__functional__function_operator_bool.cpp
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

## <a name="op_call"></a> operator()

Calls a callable object.

```cpp
result_type operator()(
    T1 t1,
    T2 t2, ...,
    TN tN);
```

### Parameters

*TN*\
The type of the Nth call argument.

*tN*\
The Nth call argument.

### Remarks

The member function returns `INVOKE(fn, t1, t2, ..., tN, Ret)`, where `fn` is the target object stored in **`*this`**. You use it to call the wrapped callable object.

### Example

```cpp
// std__functional__function_operator_call.cpp
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

## <a name="op_eq"></a> operator=

Replaces the stored callable object.

```cpp
function& operator=(null_ptr_type npc);
function& operator=(const function& right);
template <class Fty>
    function& operator=(Fty fn);
template <class Fty>
    function& operator=(reference_wrapper<Fty> fnref);
```

### Parameters

*npc*\
A null pointer constant.

*right*\
The function object to copy.

*fn*\
The callable object to wrap.

*fnref*\
The callable object reference to wrap.

### Remarks

The operators each replace the callable object held by **`*this`** with the callable object passed as the operand.

### Example

```cpp
// std__functional__function_operator_as.cpp
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

## <a name="result_type"></a> result_type

The return type of the stored callable object.

```cpp
typedef Ret result_type;
```

### Remarks

The typedef is a synonym for the type `Ret` in the template's call signature. You use it to determine the return type of the wrapped callable object.

### Example

```cpp
// std__functional__function_result_type.cpp
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

## <a name="swap"></a> swap

Swap two callable objects.

```cpp
void swap(function& right);
```

### Parameters

*right*\
The function object to swap with.

### Remarks

The member function swaps the target objects between **`*this`** and *right*. It does so in constant time and throws no exceptions.

### Example

```cpp
// std__functional__function_swap.cpp
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

## <a name="target"></a> target

Tests if stored callable object is callable as specified.

```cpp
template <class Fty2>
    Fty2 *target();
template <class Fty2>
    const Fty2 *target() const;
```

### Parameters

*Fty2*\
The target callable object type to test.

### Remarks

The type *Fty2* must be callable for the argument types `T1, T2, ..., TN` and the return type `Ret`. If `target_type() == typeid(Fty2)`, the member template function returns the address of the target object; otherwise, it returns 0.

A type *Fty2* is callable for the argument types `T1, T2, ..., TN` and the return type `Ret` if, for lvalues `fn, t1, t2, ..., tN` of types `Fty2, T1, T2, ..., TN`, respectively, `INVOKE(fn, t1, t2, ..., tN)` is well-formed and, if `Ret` is not **`void`**, convertible to `Ret`.

### Example

```cpp
// std__functional__function_target.cpp
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

## <a name="target_type"></a> target_type

Gets type information on the callable object.

```cpp
const std::type_info& target_type() const;
```

### Remarks

The member function returns `typeid(void)` if **`*this`** is empty, otherwise it returns `typeid(T)`, where `T` is the type of the target object.

### Example

```cpp
// std__functional__function_target_type.cpp
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
