---
title: "&lt;type_traits&gt; | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-standard-libraries"]
ms.topic: "reference"
f1_keywords: ["<type_traits>"]
dev_langs: ["C++"]
helpviewer_keywords: ["typetrait header", "type_traits"]
ms.assetid: 2260b51f-8160-4c66-a82f-00b534cb60d4
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# &lt;type_traits&gt;

Defines templates that provide compile-time constants that give information about the properties of their type arguments or produce transformed types.

## Syntax

```cpp
#include <type_traits>
```

## Remarks

The classes and templates in \<type_traits> are used to support type inference, classification, and transformation at compile time, to detect type-related errors, and to help you optimize your generic code. These classes and templates include unary type traits that describe a property of a type, binary type traits that describe a relationship between types, and transformation traits that modify a property of a type.

To support type traits, a helper class, `integral_constant`, is defined. It has template specializations `true_type` and `false_type` that form the base classes for type predicates. A *type predicate* is a template that takes one or more type arguments. When a type predicate *holds true*, it is publicly derived, directly or indirectly, from [true_type](../standard-library/type-traits-typedefs.md#true_type). When a type predicate *holds false*, it is publicly derived, directly or indirectly, from [false_type](../standard-library/type-traits-typedefs.md#false_type).

A *type modifier* or *transformation trait* is a template that takes one or more template arguments and has one member, `type`, which is a synonym for the modified type.

### Alias Templates

To simplify type traits expressions, [alias templates](../cpp/aliases-and-typedefs-cpp.md) for `typename some_trait<T>::type` are provided, where " `some_trait`" is the template class name. For example, [add_const](../standard-library/add-const-class.md) has an alias template for its type, `add_const_t`, defined as:

```cpp
template <class T>
using add_const_t = typename add_const<T>::type;
```

|||||
|-|-|-|-|
|add_const_t|aligned_storage_t|make_signed_t|remove_pointer_t|
|add_cv_t|aligned_union_t|make_unsigned_t|remove_reference_t|
|add_lvalue_reference_t|common_type_t|remove_all_extents_t|remove_volatile_t|
|add_pointer_t|conditional_t|remove_const_t|result_of_t|
|add_rvalue_reference_t|decay_t|remove_cv_t|underlying_type_t|
|add_volatile_t|enable_if_t|remove_extent_t||

### Classes

Helper class and typedefs

|||
|-|-|
|[integral_constant](../standard-library/integral-constant-class-bool-constant-class.md)|Makes an integral constant from a type and a value.|
|[true_type](../standard-library/type-traits-typedefs.md#true_type)|Holds integral constant with true value.|
|[false_type](../standard-library/type-traits-typedefs.md#false_type)|Holds integral constant with false value.|

Primary type categories

|||
|-|-|
|[is_void](../standard-library/is-void-class.md)|Tests whether the type is **void**.|
|[is_null_pointer](../standard-library/is-null-pointer-class.md)|Tests whether the type is `std::nullptr_t`.|
|[is_integral](../standard-library/is-integral-class.md)|Tests whether the type is integral.|
|[is_floating_point](../standard-library/is-floating-point-class.md)|Tests whether the type is floating-point.|
|[is_array](../standard-library/is-array-class.md)|Tests whether the type is an array.|
|[is_pointer](../standard-library/is-pointer-class.md)|Tests whether the type is a pointer.|
|[is_lvalue_reference](../standard-library/is-lvalue-reference-class.md)|Tests if type is an lvalue reference.|
|[is_rvalue_reference](../standard-library/is-rvalue-reference-class.md)|Tests if type is an rvalue reference.|
|[is_member_object_pointer](../standard-library/is-member-object-pointer-class.md)|Tests whether the type is a pointer to a member object.|
|[is_member_function_pointer](../standard-library/is-member-function-pointer-class.md)|Tests whether the type is a pointer to a member function.|
|[is_enum](../standard-library/is-enum-class.md)|Tests whether the type is an enumeration.|
|[is_union](../standard-library/is-union-class.md)|Tests whether the type is a union.|
|[is_class](../standard-library/is-class-class.md)|Tests whether the type is a class.|
|[is_function](../standard-library/is-function-class.md)|Tests whether the type is a function type.|

Composite type categories

|||
|-|-|
|[is_reference](../standard-library/is-reference-class.md)|Tests whether the type is a reference.|
|[is_arithmetic](../standard-library/is-arithmetic-class.md)|Tests whether the type is arithmetic.|
|[is_fundamental](../standard-library/is-fundamental-class.md)|Tests whether the type is **void** or arithmetic.|
|[is_object](../standard-library/is-object-class.md)|Tests whether the type is an object type.|
|[is_scalar](../standard-library/is-scalar-class.md)|Tests whether the type is scalar.|
|[is_compound](../standard-library/is-compound-class.md)|Tests whether the type is not scalar.|
|[is_member_pointer](../standard-library/is-member-pointer-class.md)|Tests whether the type is a pointer to a member.|

Type properties

|||
|-|-|
|[is_const](../standard-library/is-const-class.md)|Tests whether the type is **const**.|
|[is_volatile](../standard-library/is-volatile-class.md)|Tests whether the type is **volatile**.|
|[is_trivial](../standard-library/is-trivial-class.md)|Tests whether the type is trivial.|
|[is_trivially_copyable](../standard-library/is-trivially-copyable-class.md)|Tests whether the type is trivially copyable.|
|[is_standard_layout](../standard-library/is-standard-layout-class.md)|Tests if type is a standard layout type.|
|[is_pod](../standard-library/is-pod-class.md)|Tests whether the type is a POD.|
|[is_literal_type](../standard-library/is-literal-type-class.md)|Tests whether the type can be a `constexpr` variable or used in a `constexpr` function.|
|[is_empty](../standard-library/is-empty-class.md)|Tests whether the type is an empty class.|
|[is_polymorphic](../standard-library/is-polymorphic-class.md)|Tests whether the type is a polymorphic class.|
|[is_abstract](../standard-library/is-abstract-class.md)|Tests whether the type is an abstract class.|
|[is_final](../standard-library/is-final-class.md)|Tests whether the type is a class type marked `final`.|
|[is_signed](../standard-library/is-signed-class.md)|Tests whether the type is a signed integer.|
|[is_unsigned](../standard-library/is-unsigned-class.md)|Tests whether the type is an unsigned integer.|
|[is_constructible](../standard-library/is-constructible-class.md)|Tests whether the type is constructible using the specified argument types.|
|[is_default_constructible](../standard-library/type-traits-functions.md#is_default_constructible)|Tests whether the type has a default constructor.|
|[is_copy_constructible](../standard-library/type-traits-functions.md#is_copy_constructible)|Tests whether the type has a copy constructor.|
|[is_move_constructible](../standard-library/type-traits-functions.md#is_move_constructible)|Tests whether the type has a move constructor.|
|[is_assignable](../standard-library/type-traits-functions.md#is_assignable)|Tests whether the first type can be assigned a value of the second type.|
|[is_copy_assignable](../standard-library/type-traits-functions.md#is_copy_assignable)|Tests whether a type can be assigned a const reference value of the type.|
|[is_move_assignable](../standard-library/type-traits-functions.md#is_move_assignable)|Tests whether a type can be assigned an rvalue reference of the type.|
|[is_destructible](../standard-library/is-destructible-class.md)|Tests whether the type is destructible.|
|[is_trivially_constructible](../standard-library/is-trivially-constructible-class.md)|Tests whether the type uses no non-trivial operations when constructed using the specified types.|
|[is_trivially_default_constructible](../standard-library/is-trivially-default-constructible-class.md)|Tests whether the type uses no non-trivial operations when default constructed.|
|[is_trivially_copy_constructible](../standard-library/is-trivially-copy-constructible-class.md)|Tests whether the type uses no non-trivial operations when copy constructed.|
|[is_trivially_move_constructible](../standard-library/type-traits-functions.md#is_trivially_move_constructible)|Tests whether the type uses no non-trivial operations when move constructed.|
|[is_trivially_assignable](../standard-library/is-trivially-assignable-class.md)|Tests whether the types are assignable and the assignment uses no non-trivial operations.|
|[is_trivially_copy_assignable](../standard-library/type-traits-functions.md#is_trivially_copy_assignable)|Tests whether the type is copy assignable and the assignment uses no non-trivial operations.|
|[is_trivially_move_assignable](../standard-library/type-traits-functions.md#is_trivially_move_assignable)|Tests whether the type is move assignable and the assignment uses no non-trivial operations.|
|[is_trivially_destructible](../standard-library/is-trivially-destructible-class.md)|Tests whether the type is destructible and the destructor uses no non-trivial operations.|
|[is_nothrow_constructible](../standard-library/is-nothrow-constructible-class.md)|Tests whether the type is constructible and is known not to throw when constructed using the specified types.|
|[is_nothrow_default_constructible](../standard-library/is-nothrow-default-constructible-class.md)|Tests whether the type is default constructible and is known not to throw when default constructed.|
|[is_nothrow_copy_constructible](../standard-library/is-nothrow-copy-constructible-class.md)|Tests whether the type is copy constructible and the copy constructor is known not to throw.|
|[is_nothrow_move_constructible](../standard-library/is-nothrow-move-constructible-class.md)|Tests whether the type is move constructible and the move constructor is known not to throw.|
|[is_nothrow_assignable](../standard-library/is-nothrow-assignable-class.md)|Tests whether the type is assignable using the specified type and the assignment is known not to throw.|
|[is_nothrow_copy_assignable](../standard-library/is-nothrow-copy-assignable-class.md)|Tests whether the type is copy assignable and the assignment is known not to throw.|
|[is_nothrow_move_assignable](../standard-library/type-traits-functions.md#is_nothrow_move_assignable)|Tests whether the type is move assignable and the assignment is known not to throw.|
|[is_nothrow_destructible](../standard-library/is-nothrow-destructible-class.md)|Tests whether the type is destructible and the destructor is known not to throw.|
|`has_virtual_destructor`|Tests whether the type has a virtual destructor.|

Type property queries

|||
|-|-|
|[alignment_of](../standard-library/alignment-of-class.md)|Gets the alignment of a type.|
|[rank](../standard-library/rank-class.md)|Gets the number of array dimensions.|
|[extent](../standard-library/extent-class.md)|Gets the number of elements in the specified array dimension.|

Type relations

|||
|-|-|
|[is_same](../standard-library/is-same-class.md)|Tests whether two types are the same.|
|[is_base_of](../standard-library/is-base-of-class.md)|Tests whether one type is a base of another.|
|[is_convertible](../standard-library/is-convertible-class.md)|Tests whether one type is convertible to another.|

Const-volatile modifications

|||
|-|-|
|[add_const](../standard-library/add-const-class.md)|Produces a **const** type from type.|
|[add_volatile](../standard-library/add-volatile-class.md)|Produces a **volatile** type from type.|
|[add_cv](../standard-library/add-cv-class.md)|Produces a **const volatile** type from type.|
|[remove_const](../standard-library/remove-const-class.md)|Produces a non-const type from type.|
|[remove_volatile](../standard-library/remove-volatile-class.md)|Produces a non-volatile type from type.|
|[remove_cv](../standard-library/remove-cv-class.md)|Produces a non-const non-volatile type from type.|

Reference modifications

|||
|-|-|
|[add_lvalue_reference](../standard-library/add-lvalue-reference-class.md)|Produces a reference to type from type.|
|[add_rvalue_reference](../standard-library/add-rvalue-reference-class.md)|Produces an rvalue reference to type from type|
|[remove_reference](../standard-library/remove-reference-class.md)|Produces a non-reference type from type.|

Sign modifications

|||
|-|-|
|[make_signed](../standard-library/make-signed-class.md)|Produces the type if signed, or the smallest signed type greater than or equal in size to type.|
|[make_unsigned](../standard-library/make-unsigned-class.md)|Produces the type if unsigned, or the smallest unsigned type greater than or equal in size to type.|

Array modifications

|||
|-|-|
|[remove_all_extents](../standard-library/remove-all-extents-class.md)|Produces a non-array type from an array type.|
|[remove_extent](../standard-library/remove-extent-class.md)|Produces the element type from an array type.|

Pointer modifications

|||
|-|-|
|[add_pointer](../standard-library/add-pointer-class.md)|Produces a pointer to type from type.|
|[remove_pointer](../standard-library/remove-pointer-class.md)|Produces a type from a pointer to type.|

Other transformations

|||
|-|-|
|[aligned_storage](../standard-library/aligned-storage-class.md)|Allocates uninitialized memory for an aligned type.|
|[aligned_union](../standard-library/aligned-union-class.md)|Allocates uninitialized memory for an aligned union with a non-trivial constructor or destructor.|
|[common_type](../standard-library/common-type-class.md)|Produces the common type of all the types of the parameter pack.|
|[conditional](../standard-library/conditional-class.md)|If the condition is true, produces the first specified type, otherwise the second specified type.|
|[decay](../standard-library/decay-class.md)|Produces the type as passed by value. Makes non-reference, non-const, or non-volatile type, or makes a pointer to type.|
|[enable_if](../standard-library/enable-if-class.md)|If the condition is true, produces the specified type, otherwise no type.|
|[result_of](../standard-library/result-of-class.md)|Determines the return type of the callable type that takes the specified argument types.|
|[underlying_type](../standard-library/underlying-type-class.md)|Produces the underlying integral type for an enumeration type.|

## See also

[\<functional>](../standard-library/functional.md)<br/>
