---
description: "Learn more about: add_rvalue_reference Class"
title: "add_rvalue_reference Class"
ms.date: "11/04/2016"
f1_keywords: ["type_traits/std::add_rvalue_reference"]
helpviewer_keywords: ["add_rvalue_reference Class"]
ms.assetid: 76b0cb7c-1031-45d0-b409-f03ab0297580
---
# add_rvalue_reference Class

Creates an rvalue reference type of the template parameter, if it is an object or function type. Otherwise, because of the semantics of reference collapsing, the type is the same as the template parameter.

## Syntax

```cpp
template <class T>
struct add_rvalue_reference;

template <class T>
using add_rvalue_reference_t = typename add_rvalue_reference<T>::type;
```

### Parameters

*T*\
The type to modify.

## Remarks

The `add_rvalue_reference` class has a member named `type`, which is an alias for the type of an rvalue reference to the template parameter *T*. The semantics of reference collapsing imply that, for non-object and non-function types *T*, `T&&` is a *T*. For example, when *T* is an lvalue reference type, `add_rvalue_reference<T>::type` is the lvalue reference type, not an rvalue reference.

For convenience, \<type_traits> defines a helper template, `add_rvalue_reference_t`, that aliases the `type` member of `add_rvalue_reference`.

## Example

This code example uses static_assert to show how rvalue reference types are created by using `add_rvalue_reference` and `add_rvalue_reference_t`, and how the result of `add_rvalue_reference` on an lvalue reference type is not an rvalue reference, but collapses to the lvalue reference type.

```cpp
// ex_add_rvalue_reference.cpp
// Build by using: cl /EHsc /W4 ex_add_rvalue_reference.cpp
#include <type_traits>
#include <iostream>
#include <string>

using namespace std;
int main()
{
    static_assert(is_same<add_rvalue_reference<string>::type, string&&>::value,
        "Expected add_rvalue_reference_t<string> to be string&&");
    static_assert(is_same<add_rvalue_reference_t<string*>, string*&&>::value,
        "Expected add_rvalue_reference_t<string*> to be string*&&");
    static_assert(is_same<add_rvalue_reference<string&>::type, string&>::value,
        "Expected add_rvalue_reference_t<string&> to be string&");
    static_assert(is_same<add_rvalue_reference_t<string&&>, string&&>::value,
        "Expected add_rvalue_reference_t<string&&> to be string&&");
    cout << "All static_assert tests of add_rvalue_reference passed." << endl;
    return 0;
}

/*Output:
All static_assert tests of add_rvalue_reference passed.
*/
```

## Requirements

Header: \<type_traits>

Namespace: std

## See also

[<type_traits>](type-traits.md)\
[add_lvalue_reference Class](add-lvalue-reference-class.md)\
[is_rvalue_reference Class](is-rvalue-reference-class.md)
