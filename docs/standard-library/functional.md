---
description: "Learn more about: &lt;functional&gt;"
title: "&lt;functional&gt;"
ms.date: "02/21/2019"
f1_keywords: ["<functional>", "functional/std::<functional>", "std::<functional>"]
helpviewer_keywords: ["functors", "functional header"]
ms.assetid: 7dd463e8-a29f-49bc-aedd-8fa53b54bfbc
---
# &lt;functional&gt;

Defines C++ Standard Library functions that help construct *function objects*, also known as *functors*, and their binders. A function object is an object of a type that defines `operator()`. A function object can be a function pointer, but more typically, the object is used to store additional information that can be accessed during a function call.

## Requirements

**Header:** \<functional>

**Namespace:** std

## Remarks

Algorithms require two types of function objects: *unary* and *binary*. Unary function objects require one argument, and binary function objects require two arguments. A function object and function pointers can be passed as a predicate to an algorithm, but function objects are also adaptable and increase the scope, flexibility, and efficiency of the C++ Standard Library. If, for example, a value needed to be bound to a function before being passed to an algorithm, then a function pointer could not be used. Function adaptors convert function pointers into adaptable function objects that can be bound to a value. The header \<functional> also contains member function adaptors that allow member functions to be called as adaptable function objects. Functions are adaptable if they have nested type declarations specifying their argument and return types. Function objects and their adaptors allow the C++ Standard Library to upgrade existing applications and help integrate the library into the C++ programming environment.

The implementation of the function objects in \<functional> includes *transparent operator functors*. which are specializations of standard function objects and take no template parameters, and perform perfect forwarding of the function arguments and perfect return of the result. These template specializations do not require that you specify argument types when you invoke arithmetic, comparison, logical, and bitwise operator functors. You can overload arithmetic, comparison, logical, or bitwise operators for your own types, or for heterogeneous combinations of types, and then use the transparent operator functors as function arguments. For example, if your type *MyType* implements `operator<`, you can call `sort(my_collection.begin(), my_collection.end(), less<>())` instead of explicitly specifying the type `sort(my_collection.begin(), my_collection.end(), less<MyType>())`.

The following features are added in C++11, C++14 and C++17:

- A *call signature* is the name of a return type followed by a parenthesized comma-separated list of zero or more argument types.

- A *callable type* is a pointer to function, a pointer to member function, a pointer to member data, or a class type whose objects can appear immediately to the left of a function call operator.

- A *callable object* is an object of a callable type.

- A *call wrapper type* is a type that holds a callable object and supports a call operation that forwards to that object.

- A *call wrapper* is an object of a call wrapper type.

- A *target object* is the callable object held by a call wrapper object.

The pseudo-function `INVOKE(f, t1, t2, ..., tN)` means one of the following things:

- `(t1.*f)(t2, ..., tN)` when `f` is a pointer to member function of class `T` and `t1` is an object of type `T` or a reference to an object of type `T` or a reference to an object of a type derived from `T`.

- `((*t1).*f)(t2, ..., tN)` when `f` is a pointer to member function of class `T` and `t1` is not one of the types described in the previous item.

- `t1.*f` when N == 1 and `f` is a pointer to member data of a class `T` and `t1` is an object of type `T` or a reference to an object of type `T` or a reference to an object of a type derived from `T`.

- `(*t1).*f` when N == 1 and `f` is a pointer to member data of a class `T` and `t1` is not one of the types described in the previous item.

- `f(t1, t2, ..., tN)` in all other cases.

The pseudo-function `INVOKE(f, t1, t2, ..., tN, R)` means `INVOKE(f, t1, t2, ..., tN)` implicitly converted to `R`.

If a call wrapper has a *weak result type*, the type of its member type `result_type` is based on the type `T` of the target object of the wrapper, as follows:

- If `T` is a pointer to function, `result_type` is a synonym for the return type of `T`.

- If `T` is a pointer to member function, `result_type` is a synonym for the return type of `T`.

- If `T` is a class type that has a member type `result_type`, then `result_type` is a synonym for `T::result_type`.

- Otherwise, there is no member `result_type`.

Every call wrapper has a move constructor and a copy constructor. A *simple call wrapper* is a call wrapper that has an assignment operator and whose copy constructor, move constructor, and assignment operator do not throw exceptions. A *forwarding call wrapper* is a call wrapper that can be called by using an arbitrary argument list and that delivers the arguments to the wrapped callable object as references. All rvalue arguments are delivered as rvalue references, and lvalue arguments are delivered as lvalue references.

## Members

### Classes

|Name|Description|
|-|-|
|[bad_function_call](../standard-library/bad-function-call-class.md)|A class that describes an exception thrown to indicate that a call to `operator()` on a [function](../standard-library/function-class.md) object failed because the object was empty.|
|[binary_negate](../standard-library/binary-negate-class.md)|A class template providing a member function that negates the return value of a specified binary function.<br/> (Deprecated in C++17.) |
|[binder1st](../standard-library/binder1st-class.md)|A class template providing a constructor that converts a binary function object into a unary function object by binding the first argument of the binary function to a specified value.<br/> (Deprecated in C++11, removed in C++17.) |
|[binder2nd](../standard-library/binder2nd-class.md)|A class template providing a constructor that converts a binary function object into a unary function object by binding the second argument of the binary function to a specified value.<br/> (Deprecated in C++11, removed in C++17.) |
|[boyer_moore_horspool_searcher](../standard-library/boyer-moore-horspool-searcher-class.md)||
|[boyer_moore_searcher](../standard-library/boyer-moore-searcher-class.md)||
|[const_mem_fun_ref_t](../standard-library/const-mem-fun-ref-t-class.md)|An adapter class that allows a const member function that takes no arguments to be called as a unary function object when initialized with a reference argument.<br/> (Deprecated in C++11, removed in C++17.) |
|[const_mem_fun_t](../standard-library/const-mem-fun-t-class.md)|An adapter class that allows a const member function that takes no arguments to be called as a unary function object when initialized with a pointer argument.<br/> (Deprecated in C++11, removed in C++17.) |
|[const_mem_fun1_ref_t](../standard-library/const-mem-fun1-ref-t-class.md)|An adapter class that allows a const member function that takes a single argument to be called as a binary function object when initialized with a reference argument.<br/> (Deprecated in C++11, removed in C++17.) |
|[const_mem_fun1_t](../standard-library/const-mem-fun1-t-class.md)|An adapter class that allows a const member function that takes a single argument to be called as a binary function object when initialized with a pointer argument.<br/> (Deprecated in C++11, removed in C++17.) |
|[default_searcher](../standard-library/default-searcher-class.md)||
|[function](../standard-library/function-class.md)|A class that wraps a callable object.|
|[hash](../standard-library/hash-class.md)|A class that computes a hash code for a value.|
|[is_bind_expression](../standard-library/is-bind-expression-class.md)|A class that tests if a particular type is generated by calling `bind`.|
|[is_placeholder](../standard-library/is-placeholder-class.md)|A class that tests if a particular type is a placeholder.|
|[mem_fun_ref_t](../standard-library/mem-fun-ref-t-class.md)|An adapter class that allows a `non_const` member function that takes no arguments to be called as a unary function object when initialized with a reference argument.<br/> (Deprecated in C++11, removed in C++17.) |
|[mem_fun_t](../standard-library/mem-fun-t-class.md)|An adapter class that allows a `non_const` member function that takes no arguments to be called as a unary function object when initialized with a pointer argument.<br/> (Deprecated in C++11, removed in C++17.) |
|[mem_fun1_ref_t](../standard-library/mem-fun1-ref-t-class.md)|An adapter class that allows a `non_const` member function that takes a single argument to be called as a binary function object when initialized with a reference argument.<br/> (Deprecated in C++11, removed in C++17.) |
|[mem_fun1_t](../standard-library/mem-fun1-t-class.md)|An adapter class that allows a `non_const` member function that takes a single argument to be called as a binary function object when initialized with a pointer argument.<br/> (Deprecated in C++11, removed in C++17.) |
|[pointer_to_binary_function](../standard-library/pointer-to-binary-function-class.md)|Converts a binary function pointer into an adaptable binary function.<br/> (Deprecated in C++11, removed in C++17.) |
|[pointer_to_unary_function](../standard-library/pointer-to-unary-function-class.md)|Converts a unary function pointer into an adaptable unary function.<br/> (Deprecated in C++11, removed in C++17.) |
|[reference_wrapper](../standard-library/reference-wrapper-class.md)|A class that wraps a reference.|
|[unary_negate](../standard-library/unary-negate-class.md)|A class template providing a member function that negates the return value of a specified unary function.<br/> (Deprecated in C++17.)  |

### Functions

|Name|Description|
|-|-|
|[bind](../standard-library/functional-functions.md#bind)|Binds arguments to a callable object.|
|[bind1st](../standard-library/functional-functions.md#bind1st)|A helper template function that creates an adaptor to convert a binary function object into a unary function object by binding the first argument of the binary function to a specified value.<br/> (Deprecated in C++11, removed in C++17.) |
|[bind2nd](../standard-library/functional-functions.md#bind2nd)|A helper template function that creates an adaptor to convert a binary function object into a unary function object by binding the second argument of the binary function to a specified value.<br/> (Deprecated in C++11, removed in C++17.) |
|[bit_and](../standard-library/functional-functions.md#bit_and)|Returns the bitwise logical AND (binary operator&) of the two parameters.|
|[bit_not](../standard-library/functional-functions.md#bit_not)|Returns the bitwise logical complement (operator~) of the parameter.<br/> (Added in C++14.) |
|[bit_or](../standard-library/functional-functions.md#bit_or)|Returns the bitwise logical OR (operator&#124;) of the two parameters.|
|[bit_xor](../standard-library/functional-functions.md#bit_xor)|Returns the bitwise logical XOR (operator^) of the two parameters.|
|[cref](../standard-library/functional-functions.md#cref)|Constructs a const `reference_wrapper` from an argument.|
|[invoke](../standard-library/functional-functions.md#invoke)||
|[mem_fn](../standard-library/functional-functions.md#mem_fn)|Generates a simple call wrapper.|
|[mem_fun](../standard-library/functional-functions.md#mem_fun)|Helper template functions used to construct function object adaptors for member functions when initialized with pointer arguments.<br/> (Deprecated in C++11, removed in C++17.) |
|[mem_fun_ref](../standard-library/functional-functions.md#mem_fun_ref)|A helper template function used to construct function object adaptors for member functions when initialized with reference arguments.|
|[not1](../standard-library/functional-functions.md#not1)|Returns the complement of a unary predicate.<br/> (Deprecated in C++17.) |
|[not2](../standard-library/functional-functions.md#not2)|Returns the complement of a binary predicate.<br/> (Deprecated in C++17.) |
|[not_fn](../standard-library/functional-functions.md#not_fn)|Returns the complement of the result of its function object.<br/> (Added in C++17.) |
|[ptr_fun](../standard-library/functional-functions.md#ptr_fun)|A helper template function used to convert unary and binary function pointers, respectively, into unary and binary adaptable functions.<br/> (Deprecated in C++11, removed in C++17.) |
|[ref](../standard-library/functional-functions.md#ref)|Constructs a `reference_wrapper` from an argument.|
|[swap](../standard-library/functional-functions.md#swap)|Swaps two `function` objects.|

### Structs

|Name|Description|
|-|-|
|[binary_function](../standard-library/binary-function-struct.md)|An empty base class that defines types that may be inherited by derived class that provides a binary function object.<br/> (Deprecated in C++11, removed in C++17.) |
|[divides](../standard-library/divides-struct.md)|The class provides a predefined function object that performs the arithmetic operation of division on elements of a specified value type.|
|[equal_to](../standard-library/equal-to-struct.md)|A binary predicate that tests whether a value of a specified type is equal to another value of that type.|
|[greater](../standard-library/greater-struct.md)|A binary predicate that tests whether a value of a specified type is greater than another value of that type.|
|[greater_equal](../standard-library/greater-equal-struct.md)|A binary predicate that tests whether a value of a specified type is greater than or equal to another value of that type.|
|[less](../standard-library/less-struct.md)|A binary predicate that tests whether a value of a specified type is less than another value of that type.|
|[less_equal](../standard-library/less-equal-struct.md)|A binary predicate that tests whether a value of a specified type is less than or equal to another value of that type.|
|[logical_and](../standard-library/logical-and-struct.md)|The class provides a predefined function object that performs the logical operation of conjunction on elements of a specified value type and tests for the truth or falsity of the result.|
|[logical_not](../standard-library/logical-not-struct.md)|The class provides a predefined function object that performs the logical operation of negation on elements of a specified value type and tests for the truth or falsity of the result.|
|[logical_or](../standard-library/logical-or-struct.md)|The class provides a predefined function object that performs the logical operation of disjunction on elements of a specified value type and tests for the truth or falsity of the result.|
|[minus](../standard-library/minus-struct.md)|The class provides a predefined function object that performs the arithmetic operation of subtraction on elements of a specified value type.|
|[modulus](../standard-library/modulus-struct.md)|The class provides a predefined function object that performs the arithmetic operation of modulus on elements of a specified value type.|
|[multiplies](../standard-library/multiplies-struct.md)|The class provides a predefined function object that performs the arithmetic operation of multiplication on elements of a specified value type.|
|[negate](../standard-library/negate-struct.md)|The class provides a predefined function object that returns the negative of an element value.|
|[not_equal_to](../standard-library/not-equal-to-struct.md)|A binary predicate that tests whether a value of a specified type is not equal to another value of that type.|
|[plus](../standard-library/plus-struct.md)|The class provides a predefined function object that performs the arithmetic operation of addition on elements of a specified value type.|
|[unary_function](../standard-library/unary-function-struct.md)|An empty base class that defines types that may be inherited by derived class that provides a unary function object.<br/> (Deprecated in C++11, removed in C++17.) |

### Objects

|Name|Description|
|-|-|
|[_1.._M](../standard-library/1-object.md)|Placeholders for replaceable arguments.|

### Operators

|Name|Description|
|-|-|
|[operator==](../standard-library/functional-operators.md#op_eq_eq)|Disallows equality comparison of callable objects.|
|[operator!=](../standard-library/functional-operators.md#op_neq)|Disallows inequality comparison of callable objects.|

## See also

[Header Files Reference](../standard-library/cpp-standard-library-header-files.md)\
[Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md)\
[C++ Standard Library Reference](../standard-library/cpp-standard-library-reference.md)
