---
description: "Learn more about: &lt;functional&gt; functions"
title: "&lt;functional&gt; functions"
ms.date: "02/21/2019"
f1_keywords: ["functional/std::bind", "functional/std::bind1st", "functional/std::bind2nd", "functional/std::bit_and", "functional/std::bit_not", "functional/std::bit_or", "functional/std::bit_xor", "functional/std::cref", "type_traits/std::cref", "functional/std::mem_fn", "functional/std::mem_fun_ref", "functional/std::not1", "functional/std::not2", "functional/std::not_fn", "functional/std::ptr_fun", "functional/std::ref", "functional/std::swap"]
helpviewer_keywords: ["std::bind [C++]", "std::bind1st", "std::bind2nd", "std::bit_and [C++]", "std::bit_not [C++]", "std::bit_or [C++]", "std::bit_xor [C++]", "std::cref [C++]"]
ms.assetid: c34d0b45-50a7-447a-9368-2210d06339a4
---
# &lt;functional&gt; functions

These functions are deprecated in C++11 and removed in C++17:

[bind1st](#bind1st)\
[bind2nd](#bind2nd)\
[mem_fun](#mem_fun)\
[mem_fun_ref](#mem_fun_ref)\
[ptr_fun](#ptr_fun)

These functions are deprecated in C++17:

[not1](#not1)\
[not2](#not2)

## <a name="bind"></a> bind

Binds arguments to a callable object.

```cpp
template <class FT, class T1, class T2, ..., class TN>
    unspecified bind(FT fn, T1 t1, T2 t2, ..., TN tN);

template <class RTy, class FT, class T1, class T2, ..., class TN>
    unspecified bind(FT fn, T1 t1, T2 t2, ..., TN tN);
```

### Parameters

*Fey*\
The type of the object to call.

*TN*\
The type of the Nth call argument.

*fn*\
The object to call.

*tN*\
The Nth call argument.

### Remarks

The types `FT, T1, T2, ..., TN` must be copy-constructible, and `INVOKE(fn, t1, ..., tN)` must be a valid expression for some values `w1, w2, ..., wN`.

The first template function returns a forwarding call wrapper `g` with a weak result type. The effect of `g(u1, u2, ..., uM)` is `INVOKE(f, v1, v2, ..., vN,` [invoke_result](../standard-library/invoke-result-class.md)`<FT cv (V1, V2, ..., VN)>::type)`, where `cv` is the cv-qualifiers of `g` and the values and types of the bound arguments `v1, v2, ..., vN` are determined as specified below. You use it to bind arguments to a callable object to make a callable object with a tailored argument list.

The second template function returns a forwarding call wrapper `g` with a nested type `result_type` that is a synonym for `RTy`. The effect of `g(u1, u2, ..., uM)` is `INVOKE(f, v1, v2, ..., vN, RTy)`, where `cv` is the cv-qualifiers of `g` and the values and types of the bound arguments `v1, v2, ..., vN` are determined as specified below. You use it to bind arguments to a callable object to make a callable object with a tailored argument list and with a specified return type.

The values of the bound arguments `v1, v2, ..., vN` and their corresponding types `V1, V2, ..., VN` depend on the type of the corresponding argument `ti` of type `Ti` in the call to `bind` and the cv-qualifiers `cv` of the call wrapper `g` as follows:

if `ti` is of type `reference_wrapper<T>` the argument `vi` is `ti.get()` and its type `Vi` is `T&`;

if the value of `std::is_bind_expression<Ti>::value` is **`true`** the argument `vi` is `ti(u1, u2, ..., uM)` and its type `Vi` is `result_of<Ti` `cv` `(U1&, U2&, ..., UN&>::type`;

if the value `j` of `std::is_placeholder<Ti>::value` isn't zero the argument `vi` is `uj` and its type `Vi` is `Uj&`;

otherwise the argument `vi` is `ti` and its type `Vi` is `Ti` `cv` `&`.

For example, given a function `f(int, int)` the expression `bind(f, _1, 0)` returns a forwarding call wrapper `cw` such that `cw(x)` calls `f(x, 0)`. The expression `bind(f, 0, _1)` returns a forwarding call wrapper `cw` such that `cw(x)` calls `f(0, x)`.

The number of arguments in a call to `bind` and the argument `fn` must be equal to the number of arguments that can be passed to the callable object `fn`. For example, `bind(cos, 1.0)` is correct, and both `bind(cos)` and `bind(cos, _1, 0.0)` are incorrect.

The number of arguments in the function call to the call wrapper returned by `bind` must be at least as large as the highest numbered value of `is_placeholder<PH>::value` for all of the placeholder arguments in the call to `bind`. For example, `bind(cos, _2)(0.0, 1.0)` is correct (and returns `cos(1.0)`), and `bind(cos, _2)(0.0)` is incorrect.

### Example

```cpp
// std__functional__bind.cpp
// compile with: /EHsc
#include <functional>
#include <algorithm>
#include <iostream>

using namespace std::placeholders;

void square(double x)
{
    std::cout << x << "^2 == " << x * x << std::endl;
}

void product(double x, double y)
{
    std::cout << x << "*" << y << " == " << x * y << std::endl;
}

int main()
{
    double arg[] = { 1, 2, 3 };

    std::for_each(&arg[0], arg + 3, square);
    std::cout << std::endl;

    std::for_each(&arg[0], arg + 3, std::bind(product, _1, 2));
    std::cout << std::endl;

    std::for_each(&arg[0], arg + 3, std::bind(square, _1));

    return (0);
}
```

```Output
1^2 == 1
2^2 == 4
3^2 == 9

1*2 == 2
2*2 == 4
3*2 == 6

1^2 == 1
2^2 == 4
3^2 == 9
```

## <a name="bind1st"></a> bind1st

A helper template function that creates an adaptor to convert a binary function object into a unary function object. It binds the first argument of the binary function to a specified value. Deprecated in C++11, removed in C++17.

```cpp
template <class Operation, class Type>
    binder1st <Operation> bind1st (const Operation& func, const Type& left);
```

### Parameters

*func*\
The binary function object to be converted to a unary function object.

*left*\
The value to which the first argument of the binary function object is to be bound.

### Return Value

The unary function object that results from binding the first argument of the binary function object to the value *left*.

### Remarks

Function binders are a kind of function adaptor. Because they return function objects, they can be used in certain types of function composition to construct more complicated and powerful expressions.

If *func* is an object of type `Operation` and `c` is a constant, then `bind1st( func, c )` is the same as the [binder1st](../standard-library/binder1st-class.md) class constructor `binder1st<Operation>(func, c)`, and is more convenient to use.

### Example

```cpp
// functional_bind1st.cpp
// compile with: /EHsc
#include <vector>
#include <functional>
#include <algorithm>
#include <iostream>

using namespace std;

// Creation of a user-defined function object
// that inherits from the unary_function base class
class greaterthan5: unary_function<int, bool>
{
public:
    result_type operator()(argument_type i)
    {
        return (result_type)(i > 5);
    }
};

int main()
{
    vector<int> v1;
    vector<int>::iterator Iter;

    int i;
    for (i = 0; i <= 5; i++)
    {
        v1.push_back(5 * i);
    }

    cout << "The vector v1 = ( " ;
    for (Iter = v1.begin(); Iter != v1.end(); Iter++)
        cout << *Iter << " ";
    cout << ")" << endl;

    // Count the number of integers > 10 in the vector
    vector<int>::iterator::difference_type result1a;
    result1a = count_if(v1.begin(), v1.end(), bind1st(less<int>(), 10));
    cout << "The number of elements in v1 greater than 10 is: "
         << result1a << "." << endl;

    // Compare: counting the number of integers > 5 in the vector
    // with a user defined function object
    vector<int>::iterator::difference_type result1b;
    result1b = count_if(v1.begin(), v1.end(), greaterthan5());
    cout << "The number of elements in v1 greater than 5 is: "
         << result1b << "." << endl;

    // Count the number of integers < 10 in the vector
    vector<int>::iterator::difference_type result2;
    result2 = count_if(v1.begin(), v1.end(), bind2nd(less<int>(), 10));
    cout << "The number of elements in v1 less than 10 is: "
         << result2 << "." << endl;
}
```

```Output
The vector v1 = ( 0 5 10 15 20 25 )
The number of elements in v1 greater than 10 is: 3.
The number of elements in v1 greater than 5 is: 4.
The number of elements in v1 less than 10 is: 2.
```

## <a name="bind2nd"></a> bind2nd

A helper template function that creates an adaptor to convert a binary function object into a unary function object. It binds the second argument of the binary function to a specified value. Deprecated in C++11, removed in C++17.

```cpp
template <class Operation, class Type>
    binder2nd <Operation> bind2nd(const Operation& func, const Type& right);
```

### Parameters

*func*\
The binary function object to be converted to a unary function object.

*right*\
The value to which the second argument of the binary function object is to be bound.

### Return Value

The unary function object result of binding the second argument of the binary function object to *right*.

### Remarks

Function binders are a kind of function adaptor. Because they return function objects, they can be used in certain types of function composition to construct more complicated and powerful expressions.

If *func* is an object of type `Operation` and `c` is a constant, then `bind2nd(func, c)` is the same as the [binder2nd](../standard-library/binder2nd-class.md) class constructor `binder2nd<Operation>(func, c)`, and more convenient to use.

### Example

```cpp
// functional_bind2nd.cpp
// compile with: /EHsc
#include <vector>
#include <functional>
#include <algorithm>
#include <iostream>

using namespace std;

// Creation of a user-defined function object
// that inherits from the unary_function base class
class greaterthan15: unary_function<int, bool>
{
public:
    result_type operator()(argument_type i)
    {
        return (result_type)(i > 15);
    }
};

int main()
{
    vector<int> v1;
    vector<int>::iterator Iter;

    int i;
    for (i = 0; i <= 5; i++)
    {
        v1.push_back(5 * i);
    }

    cout << "The vector v1 = ( ";
    for (Iter = v1.begin(); Iter != v1.end(); Iter++)
        cout << *Iter << " ";
    cout << ")" << endl;

    // Count the number of integers > 10 in the vector
    vector<int>::iterator::difference_type result1a;
    result1a = count_if(v1.begin(), v1.end(), bind2nd(greater<int>(), 10));
    cout << "The number of elements in v1 greater than 10 is: "
         << result1a << "." << endl;

    // Compare counting the number of integers > 15 in the vector
    // with a user-defined function object
    vector<int>::iterator::difference_type result1b;
    result1b = count_if(v1.begin(), v1.end(), greaterthan15());
    cout << "The number of elements in v1 greater than 15 is: "
         << result1b << "." << endl;

    // Count the number of integers < 10 in the vector
    vector<int>::iterator::difference_type result2;
    result2 = count_if(v1.begin(), v1.end(), bind1st(greater<int>(), 10));
    cout << "The number of elements in v1 less than 10 is: "
         << result2 << "." << endl;
}
```

```Output
The vector v1 = ( 0 5 10 15 20 25 )
The number of elements in v1 greater than 10 is: 3.
The number of elements in v1 greater than 15 is: 2.
The number of elements in v1 less than 10 is: 2.
```

## <a name="bit_and"></a> bit_and

A predefined function object that does a bitwise AND operation (binary `operator&`) on its arguments.

```cpp
template <class Type = void>
struct bit_and : public binary_function<Type, Type, Type> {
    Type operator()(
    const Type& Left,
    const Type& Right) const;
};

// specialized transparent functor for operator&
template <>
struct bit_and<void>
{
    template <class T, class U>
    auto operator()(T&& Left, U&& Right) const  ->
        decltype(std::forward<T>(Left) & std::forward<U>(Right));
};
```

### Parameters

*Type*, *T*, *U*\
Any type that supports an `operator&` that takes operands of the specified or inferred types.

*Left*\
The left operand of the bitwise AND operation. The unspecialized template takes an lvalue reference argument of type *Type*. The specialized template does perfect forwarding of lvalue and rvalue reference arguments of inferred type *T*.

*Right*\
The right operand of the bitwise AND operation. The unspecialized template takes an lvalue reference argument of type *Type*. The specialized template does perfect forwarding of lvalue and rvalue reference arguments of inferred type *U*.

### Return Value

The result of `Left & Right`. The specialized template does perfect forwarding of the result, which has the type that's returned by `operator&`.

### Remarks

The `bit_and` functor is restricted to integral types for the basic data types, or to user-defined types that implement binary `operator&`.

## <a name="bit_not"></a> bit_not

A predefined function object that does a bitwise complement (NOT) operation (unary `operator~`) on its argument. Added in C++14.

```cpp
template <class Type = void>
struct bit_not : public unary_function<Type, Type>
{
    Type operator()(const Type& Right) const;
};

// specialized transparent functor for operator~
template <>
struct bit_not<void>
{
    template <class Type>
    auto operator()(Type&& Right) const -> decltype(~std::forward<Type>(Right));
};
```

### Parameters

*Type*\
A type that supports a unary `operator~`.

*Right*\
The operand of the bitwise complement operation. The unspecialized template takes an lvalue reference argument of type *Type*. The specialized template does perfect forwarding of an lvalue or rvalue reference argument of inferred type *Type*.

### Return Value

The result of `~ Right`. The specialized template does perfect forwarding of the result, which has the type that's returned by `operator~`.

### Remarks

The `bit_not` functor is restricted to integral types for the basic data types, or to user-defined types that implement binary `operator~`.

## <a name="bit_or"></a> bit_or

A predefined function object that does a bitwise OR operation (`operator|`) on its arguments.

```cpp
template <class Type = void>
struct bit_or : public binary_function<Type, Type, Type> {
    Type operator()(
    const Type& Left,
    const Type& Right) const;
};

// specialized transparent functor for operator|
template <>
struct bit_or<void>
{
    template <class T, class U>
    auto operator()(T&& Left, U&& Right) const
        -> decltype(std::forward<T>(Left) | std::forward<U>(Right));
};
```

### Parameters

*Type*, *T*, *U*\
Any type that supports an `operator|` that takes operands of the specified or inferred types.

*Left*\
The left operand of the bitwise OR operation. The unspecialized template takes an lvalue reference argument of type *Type*. The specialized template does perfect forwarding of lvalue and rvalue reference arguments of inferred type *T*.

*Right*\
The right operand of the bitwise OR operation. The unspecialized template takes an lvalue reference argument of type *Type*. The specialized template does perfect forwarding of lvalue and rvalue reference arguments of inferred type *U*.

### Return Value

The result of `Left | Right`. The specialized template does perfect forwarding of the result, which has the type that's returned by `operator|`.

### Remarks

The `bit_or` functor is restricted to integral types for the basic data types, or to user-defined types that implement `operator|`.

## <a name="bit_xor"></a> bit_xor

A predefined function object that does a bitwise XOR operation (binary `operator^`) on its arguments.

```cpp
template <class Type = void>
struct bit_xor : public binary_function<Type, Type, Type> {
    Type operator()(
    const Type& Left,
    const Type& Right) const;
};

// specialized transparent functor for operator^
template <>
struct bit_xor<void>
{
    template <class T, class U>
    auto operator()(T&& Left, U&& Right) const
        -> decltype(std::forward<T>(Left) ^ std::forward<U>(Right));
};
```

### Parameters

*Type*, *T*, *U*\
Any type that supports an `operator^` that takes operands of the specified or inferred types.

*Left*\
The left operand of the bitwise XOR operation. The unspecialized template takes an lvalue reference argument of type *Type*. The specialized template does perfect forwarding of lvalue and rvalue reference arguments of inferred type *T*.

*Right*\
The right operand of the bitwise XOR operation. The unspecialized template takes an lvalue reference argument of type *Type*. The specialized template does perfect forwarding of lvalue and rvalue reference arguments of inferred type *U*.

### Return Value

The result of `Left ^ Right`. The specialized template does perfect forwarding of the result, which has the type that's returned by `operator^`.

### Remarks

The `bit_xor` functor is restricted to integral types for the basic data types, or to user-defined types that implement binary `operator^`.

## <a name="cref"></a> cref

Constructs a const `reference_wrapper` from an argument.

```cpp
template <class Ty>
reference_wrapper<const Ty> cref(const Ty& arg);

template <class Ty>
reference_wrapper<const Ty> cref(const reference_wrapper<Ty>& arg);
```

### Parameters

*Ty*\
The type of the argument to wrap.

*arg*\
The argument to wrap.

### Remarks

The first function returns `reference_wrapper<const Ty>(arg.get())`. You use it to wrap a const reference. The second function returns `reference_wrapper<const Ty>(arg)`. You use it to rewrap a wrapped reference as a const reference.

### Example

```cpp
// std__functional__cref.cpp
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

    std::cout << "i = " << i << std::endl;
    std::cout << "cref(i) = " << std::cref(i) << std::endl;
    std::cout << "cref(neg)(i) = "
        << std::cref(&neg)(i) << std::endl;

    return (0);
    }
```

```Output
i = 1
cref(i) = 1
cref(neg)(i) = -1
```

## <a name="invoke"></a> invoke

Invokes any callable object with the given arguments. Added in C++17.

```cpp
template <class Callable, class... Args>
invoke_result_t<Callable, Args...>
    invoke(Callable&& fn, Args&&... args) noexcept(/* specification */);
```

### Parameters

*Callable*\
The type of the object to call.

*Args*\
The types of the call arguments.

*fn*\
The object to call.

*args*\
The call arguments.

*specification*\
The **`noexcept`** specification `std::is_nothrow_invocable_v<Callable, Args>)`.

### Remarks

Invokes the callable object *fn* using the parameters *args*. Effectively, `INVOKE(std::forward<Callable>(fn), std::forward<Args>(args)...)`, where the pseudo-function `INVOKE(f, t1, t2, ..., tN)` means one of the following things:

- `(t1.*f)(t2, ..., tN)` when `f` is a pointer to member function of class `T` and `t1` is an object of type `T` or a reference to an object of type `T` or a reference to an object of a type derived from `T`. That is, when `std::is_base_of<T, std::decay_t<decltype(t1)>>::value` is true.

- `(t1.get().*f)(t2, ..., tN)` when `f` is a pointer to member function of class `T` and `std::decay_t<decltype(t1)>` is a specialization of `std::reference_wrapper`.

- `((*t1).*f)(t2, ..., tN)` when `f` is a pointer to member function of class `T` and `t1` isn't one of the previous types.

- `t1.*f` when N == 1 and `f` is a pointer to member data of a class `T` and `t1` is an object of type `T` or a reference to an object of type `T` or a reference to an object of a type derived from `T`.  That is, when `std::is_base_of<T, std::decay_t<decltype(t1)>>::value` is true.

- `t1.get().*f` when N == 1 and `f` is a pointer to member data of a class `T` and `std::decay_t<decltype(t1)>` is a specialization of `std::reference_wrapper`.

- `(*t1).*f` when N == 1 and `f` is a pointer to member data of a class `T` and `t1` isn't one of the previous types.

- `f(t1, t2, ..., tN)` in all other cases.

For information on the result type of a callable object, see [invoke_result](invoke-result-class.md). For predicates on callable types, see [is_invocable, is_invocable_r, is_nothrow_invocable, is_nothrow_invocable_r classes](is-invocable-classes.md).

### Example

```cpp
// functional_invoke.cpp
// compile using: cl /EHsc /std:c++17 functional_invoke.cpp
#include <functional>
#include <iostream>

struct Demo
{
    int n_;

    Demo(int const n) : n_{n} {}

    void operator()( int const i, int const j ) const
    {
        std::cout << "Demo operator( " << i << ", "
            << j << " ) is " << i * j << "\n";
    }

    void difference( int const i ) const
    {
        std::cout << "Demo.difference( " << i << " ) is "
            << n_ - i << "\n";
    }
};

void divisible_by_3(int const i)
{
    std::cout << i << ( i % 3 == 0 ? " is" : " isn't" )
        << " divisible by 3.\n";
}

int main()
{
    Demo d{ 42 };
    Demo * pd{ &d };
    auto pmf = &Demo::difference;
    auto pmd = &Demo::n_;

    // Invoke a function object, like calling d( 3, -7 )
    std::invoke( d, 3, -7 );

    // Invoke a member function, like calling
    // d.difference( 29 ) or (d.*pmf)( 29 )
    std::invoke( &Demo::difference, d, 29 );
    std::invoke( pmf, pd, 13 );

    // Invoke a data member, like access to d.n_ or d.*pmd
    std::cout << "d.n_: " << std::invoke( &Demo::n_, d ) << "\n";
    std::cout << "pd->n_: " << std::invoke( pmd, pd ) << "\n";

    // Invoke a stand-alone (free) function
    std::invoke( divisible_by_3, 42 );

    // Invoke a lambda
    auto divisible_by_7 = []( int const i ) {
        std::cout << i << ( i % 7 == 0 ? " is" : " isn't" )
            << " divisible by 7.\n";
        };
    std::invoke( divisible_by_7, 42 );
}
```

```Output
Demo operator( 3, -7 ) is -21
Demo.difference( 29 ) is 13
Demo.difference( 13 ) is 29
d.n_: 42
pd->n_: 42
42 is divisible by 3.
42 is divisible by 7.
```

## <a name="mem_fn"></a> mem_fn

Generates a simple call wrapper.

```cpp
template <class RTy, class Ty>
unspecified mem_fn(RTy Ty::*pm);
```

### Parameters

*RTy*\
The return type of the wrapped function.

*Ty*\
The type of the member function pointer.

### Remarks

The template function returns a simple call wrapper `cw`, with a weak result type, such that the expression `cw(t, a2, ..., aN)` is the same as `INVOKE(pm, t, a2, ..., aN)`. It doesn't throw any exceptions.

The returned call wrapper is derived from `std::unary_function<cv Ty*, RTy>` (and defining the nested type `result_type` as a synonym for *RTy* and the nested type `argument_type` as a synonym for `cv Ty*`) only if the type *Ty* is a pointer to member function with cv-qualifier `cv` that takes no arguments.

The returned call wrapper is derived from `std::binary_function<cv Ty*, T2, RTy>` (and defining the nested type `result_type` as a synonym for *RTy*, the nested type `first argument_type` as a synonym for `cv Ty*`, and the nested type `second argument_type` as a synonym for `T2`) only if the type *Ty* is a pointer to member function with cv-qualifier `cv` that takes one argument, of type `T2`.

### Example

```cpp
// std__functional__mem_fn.cpp
// compile with: /EHsc
#include <functional>
#include <iostream>

class Funs
    {
public:
    void square(double x)
        {
        std::cout << x << "^2 == " << x * x << std::endl;
        }

    void product(double x, double y)
        {
        std::cout << x << "*" << y << " == " << x * y << std::endl;
        }
    };

int main()
    {
    Funs funs;

    std::mem_fn(&Funs::square)(funs, 3.0);
    std::mem_fn(&Funs::product)(funs, 3.0, 2.0);

    return (0);
    }
```

```Output
3^2 == 9
3*2 == 6
```

## <a name="mem_fun"></a> mem_fun

Helper template functions used to construct function object adaptors for member functions when initialized with pointer arguments. Deprecated in C++11 for [mem_fn](#mem_fn) and [bind](#bind), and removed in C++17.

```cpp
template <class Result, class Type>
mem_fun_t<Result, Type> mem_fun (Result(Type::* pMem)());

template <class Result, class Type, class Arg>
mem_fun1_t<Result, Type, Arg> mem_fun(Result (Type::* pMem)(Arg));

template <class Result, class Type>
const_mem_fun_t<Result, Type> mem_fun(Result (Type::* pMem)() const);

template <class Result, class Type, class Arg>
const_mem_fun1_t<Result, Type, Arg> mem_fun(Result (Type::* pMem)(Arg) const);
```

### Parameters

*pMem*\
A pointer to the member function of class `Type` to be converted to a function object.

### Return Value

A **`const`** or **non_const** function object of type `mem_fun_t` or `mem_fun1_t`.

### Example

```cpp
// functional_mem_fun.cpp
// compile with: /EHsc
#include <vector>
#include <functional>
#include <algorithm>
#include <iostream>

using namespace std;

class StoreVals
{
    int val;
public:
    StoreVals() { val = 0; }
    StoreVals(int j) { val = j; }

    bool display() { cout << val << " "; return true; }
    int squareval() { val *= val; return val; }
    int lessconst(int k) {val -= k; return val; }
};

int main( )
{
    vector<StoreVals *> v1;

    StoreVals sv1(5);
    v1.push_back(&sv1);
    StoreVals sv2(10);
    v1.push_back(&sv2);
    StoreVals sv3(15);
    v1.push_back(&sv3);
    StoreVals sv4(20);
    v1.push_back(&sv4);
    StoreVals sv5(25);
    v1.push_back(&sv5);

    cout << "The original values stored are: " ;
    for_each(v1.begin(), v1.end(), mem_fun<bool, StoreVals>(&StoreVals::display));
    cout << endl;

    // Use of mem_fun calling member function through a pointer
    // square each value in the vector using squareval ()
    for_each(v1.begin(), v1.end(), mem_fun<int, StoreVals>(&StoreVals::squareval));
    cout << "The squared values are: " ;
    for_each(v1.begin(), v1.end(), mem_fun<bool, StoreVals>(&StoreVals::display));
    cout << endl;

    // Use of mem_fun1 calling member function through a pointer
    // subtract 5 from each value in the vector using lessconst ()
    for_each(v1.begin(), v1.end(),
        bind2nd (mem_fun1<int, StoreVals,int>(&StoreVals::lessconst), 5));
    cout << "The squared values less 5 are: " ;
    for_each(v1.begin(), v1.end(), mem_fun<bool, StoreVals>(&StoreVals::display));
    cout << endl;
}
```

## <a name="mem_fun_ref"></a> mem_fun_ref

Helper template functions used to construct function object adaptors for member functions when initialized by using reference arguments. Deprecated in C++11, removed in C++17.

```cpp
template <class Result, class Type>
mem_fun_ref_t<Result, Type> mem_fun_ref(Result (Type::* pMem)());

template <class Result, class Type, class Arg>
mem_fun1_ref_t<Result, Type, Arg> mem_fun_ref(Result (Type::* pMem)(Arg));

template <class Result, class Type>
const_mem_fun_ref_t<Result, Type> mem_fun_ref(Result Type::* pMem)() const);

template <class Result, class Type, class Arg>
const_mem_fun1_ref_t<Result, Type, Arg> mem_fun_ref(Result (T::* pMem)(Arg) const);
```

### Parameters

*pMem*\
A pointer to the member function of class `Type` to be converted to a function object.

### Return Value

A **`const`** or `non_const` function object of type `mem_fun_ref_t` or `mem_fun1_ref_t`.

### Example

```cpp
// functional_mem_fun_ref.cpp
// compile with: /EHsc
#include <vector>
#include <functional>
#include <algorithm>
#include <iostream>

using namespace std;

class NumVals
   {
   int val;
   public:
   NumVals ( ) { val = 0; }
   NumVals ( int j ) { val = j; }

   bool display ( ) { cout << val << " "; return true; }
   bool isEven ( ) { return ( bool )  !( val %2 ); }
   bool isPrime( )
   {
      if (val < 2) { return true; }
      for (int i = 2; i <= val / i; ++i)
      {
         if (val % i == 0) { return false; }
      }
      return true;
   }
};

int main( )
{
   vector <NumVals> v1 ( 13 ), v2 ( 13 );
   vector <NumVals>::iterator v1_Iter, v2_Iter;
   int i, k;

   for ( i = 0; i < 13; i++ ) v1 [ i ] = NumVals ( i+1 );
   for ( k = 0; k < 13; k++ ) v2 [ k ] = NumVals ( k+1 );

   cout << "The original values stored in v1 are: " ;
   for_each( v1.begin( ), v1.end( ),
   mem_fun_ref ( &NumVals::display ) );
   cout << endl;

   // Use of mem_fun_ref calling member function through a reference
   // remove the primes in the vector using isPrime ( )
   v1_Iter = remove_if ( v1.begin( ),  v1.end( ),
      mem_fun_ref ( &NumVals::isPrime ) );
   cout << "With the primes removed, the remaining values in v1 are: " ;
   for_each( v1.begin( ), v1_Iter,
   mem_fun_ref ( &NumVals::display ) );
   cout << endl;

   cout << "The original values stored in v2 are: " ;
   for_each( v2.begin( ), v2.end( ),
   mem_fun_ref ( &NumVals::display ) );
   cout << endl;

   // Use of mem_fun_ref calling member function through a reference
   // remove the even numbers in the vector v2 using isEven ( )
   v2_Iter = remove_if ( v2.begin( ),  v2.end( ),
      mem_fun_ref ( &NumVals::isEven ) );
   cout << "With the even numbers removed, the remaining values are: " ;
   for_each( v2.begin( ),  v2_Iter,
   mem_fun_ref ( &NumVals::display ) );
   cout << endl;
}
```

```Output
The original values stored in v1 are: 1 2 3 4 5 6 7 8 9 10 11 12 13
With the primes removed, the remaining values in v1 are: 4 6 8 9 10 12
The original values stored in v2 are: 1 2 3 4 5 6 7 8 9 10 11 12 13
With the even numbers removed, the remaining values are: 1 3 5 7 9 11 13
```

## <a name="not1"></a> not1

Returns the complement of a unary predicate. Deprecated for [not_fn](#not_fn) in C++17.

```cpp
template <class UnaryPredicate>
unary_negate<UnaryPredicate> not1(const UnaryPredicate& predicate);
```

### Parameters

*predicate*\
The unary predicate to be negated.

### Return Value

A unary predicate that is the negation of the unary predicate modified.

### Remarks

If a `unary_negate` is constructed from a unary predicate `predicate(x)`, then it returns `!predicate(x)`.

### Example

```cpp
// functional_not1.cpp
// compile with: /EHsc
#include <vector>
#include <functional>
#include <algorithm>
#include <iostream>

using namespace std;

int main()
{
    vector<int> v1;
    vector<int>::iterator Iter;

    int i;
    for (i = 0; i <= 7; i++)
    {
        v1.push_back(5 * i);
    }

    cout << "The vector v1 = ( ";
    for (Iter = v1.begin(); Iter != v1.end(); Iter++)
        cout << *Iter << " ";
    cout << ")" << endl;

    vector<int>::iterator::difference_type result1;
    // Count the elements greater than 10
    result1 = count_if(v1.begin(), v1.end(), bind2nd(greater<int>(), 10));
    cout << "The number of elements in v1 greater than 10 is: "
         << result1 << "." << endl;

    vector<int>::iterator::difference_type result2;
    // Use the negator to count the elements less than or equal to 10
    result2 = count_if(v1.begin(), v1.end(),
        not1(bind2nd(greater<int>(), 10)));

    cout << "The number of elements in v1 not greater than 10 is: "
         << result2 << "." << endl;
}
```

```Output
The vector v1 = ( 0 5 10 15 20 25 30 35 )
The number of elements in v1 greater than 10 is: 5.
The number of elements in v1 not greater than 10 is: 3.
```

## <a name="not2"></a> not2

Returns the complement of a binary predicate. Deprecated for [not_fn](#not_fn) in C++17.

```cpp
template <class BinaryPredicate>
binary_negate<BinaryPredicate> not2(const BinaryPredicate& func);
```

### Parameters

*func*\
The binary predicate to be negated.

### Return Value

A binary predicate that is the negation of the binary predicate modified.

### Remarks

If a `binary_negate` is constructed from a binary predicate `binary_predicate(x, y)`, then it returns `!binary_predicate(x, y)`.

### Example

```cpp
// functional_not2.cpp
// compile with: /EHsc
#include <vector>
#include <algorithm>
#include <functional>
#include <cstdlib>
#include <iostream>

int main( )
{
   using namespace std;
   vector <int> v1;
   vector <int>::iterator Iter1;

   int i;
   v1.push_back( 6262 );
   v1.push_back( 6262 );
   for ( i = 0 ; i < 5 ; i++ )
   {
      v1.push_back( rand( ) );
   }

   cout << "Original vector v1 = ( " ;
   for ( Iter1 = v1.begin( ) ; Iter1 != v1.end( ) ; Iter1++ )
      cout << *Iter1 << " ";
   cout << ")" << endl;

   // To sort in ascending order,
   // use default binary predicate less<int>( )
   sort( v1.begin( ), v1.end( ) );
   cout << "Sorted vector v1 = ( " ;
   for ( Iter1 = v1.begin( ) ; Iter1 != v1.end( ) ; Iter1++ )
      cout << *Iter1 << " ";
   cout << ")" << endl;

   // To sort in descending order,
   // use the binary_negate helper function not2
   sort( v1.begin( ), v1.end( ), not2(less<int>( ) ) );
   cout << "Resorted vector v1 = ( " ;
   for ( Iter1 = v1.begin( ) ; Iter1 != v1.end( ) ; Iter1++ )
      cout << *Iter1 << " ";
   cout << ")" << endl;
}
```

```Output
Original vector v1 = ( 6262 6262 41 18467 6334 26500 19169 )
Sorted vector v1 = ( 41 6262 6262 6334 18467 19169 26500 )
Resorted vector v1 = ( 26500 19169 18467 6334 6262 6262 41 )
```

## <a name="not_fn"></a> not_fn

The `not_fn` function template takes a callable object and returns a callable object. When the returned callable object is later invoked with some arguments, it passes them to the original callable object, and logically negates the result. It preserves the const qualification and value category behavior of the wrapped callable object. `not_fn` is new in C++17, and replaces the deprecated `std::not1`, `std::not2`, `std::unary_negate`, and `std::binary_negate`.

```cpp
template <class Callable>
/* unspecified */ not_fn(Callable&& func);
```

### Parameters

*func*\
A callable object used to construct the forwarding call wrapper.

### Remarks

The template function returns a call wrapper like `return call_wrapper(std::forward<Callable>(func))`, based on this exposition-only class:

```cpp
class call_wrapper
{
   using FD = decay_t<Callable>;
   explicit call_wrapper(Callable&& func);

public:
   call_wrapper(call_wrapper&&) = default;
   call_wrapper(call_wrapper const&) = default;

   template<class... Args>
     auto operator()(Args&&...) & -> decltype(!declval<invoke_result_t<FD&(Args...)>>());

   template<class... Args>
     auto operator()(Args&&...) const& -> decltype(!declval<invoke_result_t<FD const&(Args...)>>());

   template<class... Args>
     auto operator()(Args&&...) && -> decltype(!declval<invoke_result_t<FD(Args...)>>());

   template<class... Args>
     auto operator()(Args&&...) const&& -> decltype(!declval<invoke_result_t<FD const(Args...)>>());

private:
  FD fd;
};
```

The explicit constructor on the callable object *func* requires type `std::decay_t<Callable>` to satisfy the requirements of `MoveConstructible`, and `is_constructible_v<FD, Callable>` must be true. It initializes the wrapped callable object `fd` from `std::forward<Callable>(func)`, and throws any exception thrown by construction of `fd`.

The wrapper exposes call operators distinguished by lvalue or rvalue reference category and const qualification as shown here:

```cpp
template<class... Args> auto operator()(Args&&... args) & -> decltype(!declval<invoke_result_t<FD&(Args...)>>());
template<class... Args> auto operator()(Args&&... args) const& -> decltype(!declval<invoke_result_t<FD const&(Args...)>>());
template<class... Args> auto operator()(Args&&... args) && -> decltype(!declval<invoke_result_t<FD(Args...)>>());
template<class... Args> auto operator()(Args&&... args) const&& -> decltype(!declval<invoke_result_t<FD const(Args...)>>());
```

The first two are the same as `return !std::invoke(fd, std::forward<Args>(args)...)`. The second two are the same as `return !std::invoke(std::move(fd), std::forward<Args>(args)...)`.

### Example

```cpp
// functional_not_fn_.cpp
// compile with: /EHsc /std:c++17
#include <vector>
#include <algorithm>
#include <functional>
#include <iostream>

int main()
{
    std::vector<int> v1 = { 99, 6264, 41, 18467, 6334, 26500, 19169 };
    auto divisible_by_3 = [](int i){ return i % 3 == 0; };

    std::cout << "Vector v1 = ( " ;
    for (const auto& item : v1)
    {
        std::cout << item << " ";
    }
    std::cout << ")" << std::endl;

    // Count the number of vector elements divisible by 3.
    int divisible =
        std::count_if(v1.begin(), v1.end(), divisible_by_3);
    std::cout << "Elements divisible by three: "
        << divisible << std::endl;

    // Count the number of vector elements not divisible by 3.
    int not_divisible =
        std::count_if(v1.begin(), v1.end(), std::not_fn(divisible_by_3));
    std::cout << "Elements not divisible by three: "
        << not_divisible << std::endl;
}
```

```Output
Vector v1 = ( 99 6264 41 18467 6334 26500 19169 )
Elements divisible by three: 2
Elements not divisible by three: 5
```

## <a name="ptr_fun"></a> ptr_fun

Helper template functions used to convert unary and binary function pointers, respectively, into unary and binary adaptable functions. Deprecated in C++11, removed in C++17.

```cpp
template <class Arg, class Result>
pointer_to_unary_function<Arg, Result, Result (*)(Arg)> ptr_fun(Result (*pfunc)(Arg));

template <class Arg1, class Arg2, class Result>
pointer_to_binary_function<Arg1, Arg2, Result, Result (*)(Arg1, Arg2)> ptr_fun(Result (*pfunc)(Arg1, Arg2));
```

### Parameters

*pfunc*\
The unary or binary function pointer to be converted to an adaptable function.

### Return Value

The first template function returns the unary function [pointer_to_unary_function](../standard-library/pointer-to-unary-function-class.md) <`Arg`, **Result**>(\* `pfunc`).

The second template function returns binary function [pointer_to_binary_function](../standard-library/pointer-to-binary-function-class.md) \<**Arg1**, **Arg2**, **Result**>(\* `pfunc`).

### Remarks

A function pointer is a function object. It may be passed to any algorithm that expects a function as a parameter, but it isn't adaptable. Information about its nested types is required to use it with an adaptor, for example, to bind a value to it or to negate it. The conversion of unary and binary function pointers by the `ptr_fun` helper function allows the function adaptors to work with unary and binary function pointers.

### Example

[!code-cpp[functional_ptr_fun#1](../standard-library/codesnippet/CPP/functional-functions_1.cpp)]

## <a name="ref"></a> ref

Constructs a `reference_wrapper` from an argument.

```cpp
template <class Ty>
    reference_wrapper<Ty> ref(Ty& arg);

template <class Ty>
    reference_wrapper<Ty> ref(reference_wrapper<Ty>& arg);
```

### Return Value

A reference to `arg`; specifically, `reference_wrapper<Ty>(arg)`.

### Example

The following example defines two functions: one bound to a string variable, the other bound to a reference of the string variable computed by a call to `ref`. When the value of the variable changes, the first function continues to use the old value and the second function uses the new value.

```cpp
#include <algorithm>
#include <functional>
#include <iostream>
#include <iterator>
#include <ostream>
#include <string>
#include <vector>
using namespace std;
using namespace std;
using namespace std::placeholders;

bool shorter_than(const string& l, const string& r) {
    return l.size() < r.size();
}

int main() {
    vector<string> v_original;
    v_original.push_back("tiger");
    v_original.push_back("cat");
    v_original.push_back("lion");
    v_original.push_back("cougar");

    copy(v_original.begin(), v_original.end(), ostream_iterator<string>(cout, " "));
    cout << endl;

    string s("meow");

    function<bool (const string&)> f = bind(shorter_than, _1, s);
    function<bool (const string&)> f_ref = bind(shorter_than, _1, ref(s));

    vector<string> v;

    // Remove elements that are shorter than s ("meow")

    v = v_original;
    v.erase(remove_if(v.begin(), v.end(), f), v.end());

    copy(v.begin(), v.end(), ostream_iterator<string>(cout, " "));
    cout << endl;

    // Now change the value of s.
    // f_ref, which is bound to ref(s), will use the
    // new value, while f is still bound to the old value.

    s = "kitty";

    // Remove elements that are shorter than "meow" (f is bound to old value of s)

    v = v_original;
    v.erase(remove_if(v.begin(), v.end(), f), v.end());

    copy(v.begin(), v.end(), ostream_iterator<string>(cout, " "));
    cout << endl;

    // Remove elements that are shorter than "kitty" (f_ref is bound to ref(s))

    v = v_original;
    v.erase(remove_if(v.begin(), v.end(), f_ref), v.end());

    copy(v.begin(), v.end(), ostream_iterator<string>(cout, " "));
    cout << endl;
}
```

```Output
tiger cat lion cougar
tiger lion cougar
tiger lion cougar
tiger cougar
```

## <a name="swap"></a> swap

Swaps two `function` objects.

```cpp
template <class FT>
    void swap(function<FT>& f1, function<FT>& f2);
```

### Parameters

*FT*\
The type controlled by the function objects.

*f1*\
The first function object.

*f2*\
The second function object.

### Remarks

The function returns `f1.swap(f2)`.

### Example

```cpp
// std__functional__swap.cpp
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

    swap(fn0, fn1);
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
