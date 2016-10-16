---
title: "&lt;type_traits&gt;"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "article"
f1_keywords: 
  - "<type_traits>"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "typetrait header [TR1]"
  - "type_traits"
ms.assetid: 2260b51f-8160-4c66-a82f-00b534cb60d4
caps.latest.revision: 34
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
# &lt;type_traits&gt;
Defines templates that provide compile-time constants that give information about the properties of their type arguments or produce transformed types.  
  
## Syntax  
  
```  
#include <type_traits>  
```  
  
## Remarks  
 The classes and templates in `<type_traits>` are used to support type inference, classification, and transformation at compile time, to detect type-related errors, and to help you optimize your generic code. These classes and templates include unary type traits that describe a property of a type, binary type traits that describe a relationship between types, and transformation traits that modify a property of a type.  
  
 To support type traits, a helper class, `integral_constant`, is defined. It has template specializations `true_type` and `false_type` that form the base classes for type predicates. A *type predicate* is a template that takes one or more type arguments. When a type predicate *holds true*, it is publicly derived, directly or indirectly, from [true_type](../stdcpplib/-type_traits--typedefs.md#true_type_typedef). When a type predicate *holds false*, it is publicly derived, directly or indirectly, from [false_type](../stdcpplib/-type_traits--typedefs.md#false_type_typedef).  
  
 A *type modifier* or *transformation trait* is a template that takes one or more template arguments and has one member, `type`, which is a synonym for the modified type.  
  
### Alias Templates  
 To simplify type traits expressions, [alias templates](../cpp/aliases-and-typedefs--c---.md) for `typename some_trait<T>::type` are provided, where " `some_trait`" is the template class name. For example, [add_const](../stdcpplib/add_const-class.md) has an alias template for its type, `add_const_t`, defined as:  
  
```cpp
template<class T>
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
|[integral_constant](../stdcpplib/integral_constant-class--bool_constant-class.md)|Makes an integral constant from a type and a value.|  
|[true_type](../stdcpplib/-type_traits--typedefs.md#true_type_typedef)|Holds integral constant with true value.|  
|[false_type](../stdcpplib/-type_traits--typedefs.md#false_type_typedef)|Holds integral constant with false value.|  
  
 Primary type categories  
  
|||  
|-|-|  
|[is_void](../stdcpplib/is_void-class.md)|Tests whether the type is `void`.|  
|[is_null_pointer](../stdcpplib/is_null_pointer-class.md)|Tests whether the type is `std::nullptr_t`.|  
|[is_integral](../stdcpplib/is_integral-class.md)|Tests whether the type is integral.|  
|[is_floating_point](../stdcpplib/is_floating_point-class.md)|Tests whether the type is floating-point.|  
|[is_array](../stdcpplib/is_array-class.md)|Tests whether the type is an array.|  
|[is_pointer](../stdcpplib/is_pointer-class.md)|Tests whether the type is a pointer.|  
|[is_lvalue_reference](../stdcpplib/is_lvalue_reference-class.md)|Tests if type is an lvalue reference.|  
|[is_rvalue_reference](../stdcpplib/is_rvalue_reference-class.md)|Tests if type is an rvalue reference.|  
|[is_member_object_pointer](../stdcpplib/is_member_object_pointer-class.md)|Tests whether the type is a pointer to a member object.|  
|[is_member_function_pointer](../stdcpplib/is_member_function_pointer-class.md)|Tests whether the type is a pointer to a member function.|  
|[is_enum](../stdcpplib/is_enum-class.md)|Tests whether the type is an enumeration.|  
|[is_union](../stdcpplib/is_union-class.md)|Tests whether the type is a union.|  
|[is_class](../stdcpplib/is_class-class.md)|Tests whether the type is a class.|  
|[is_function](../stdcpplib/is_function-class.md)|Tests whether the type is a function type.|  
  
 Composite type categories  
  
|||  
|-|-|  
|[is_reference](../stdcpplib/is_reference-class.md)|Tests whether the type is a reference.|  
|[is_arithmetic](../stdcpplib/is_arithmetic-class.md)|Tests whether the type is arithmetic.|  
|[is_fundamental](../stdcpplib/is_fundamental-class.md)|Tests whether the type is `void` or arithmetic.|  
|[is_object](../stdcpplib/is_object-class.md)|Tests whether the type is an object type.|  
|[is_scalar](../stdcpplib/is_scalar-class.md)|Tests whether the type is scalar.|  
|[is_compound](../stdcpplib/is_compound-class.md)|Tests whether the type is not scalar.|  
|[is_member_pointer](../stdcpplib/is_member_pointer-class.md)|Tests whether the type is a pointer to a member.|  
  
 Type properties  
  
|||  
|-|-|  
|[is_const](../stdcpplib/is_const-class.md)|Tests whether the type is `const`.|  
|[is_volatile](../stdcpplib/is_volatile-class.md)|Tests whether the type is `volatile`.|  
|[is_trivial](../stdcpplib/is_trivial-class.md)|Tests whether the type is trivial.|  
|[is_trivially_copyable](../stdcpplib/is_trivially_copyable-class.md)|Tests whether the type is trivially copyable.|  
|[is_standard_layout](../stdcpplib/is_standard_layout-class.md)|Tests if type is a standard layout type.|  
|[is_pod](../stdcpplib/is_pod-class.md)|Tests whether the type is a POD.|  
|[is_literal_type](../stdcpplib/is_literal_type-class.md)|Tests whether the type can be a `constexpr` variable or used in a `constexpr` function.|  
|[is_empty](../stdcpplib/is_empty-class.md)|Tests whether the type is an empty class.|  
|[is_polymorphic](../stdcpplib/is_polymorphic-class.md)|Tests whether the type is a polymorphic class.|  
|[is_abstract](../stdcpplib/is_abstract-class.md)|Tests whether the type is an abstract class.|  
|[is_final](../stdcpplib/is_final-class.md)|Tests whether the type is a class type marked `final`.|  
|[is_signed](../stdcpplib/is_signed-class.md)|Tests whether the type is a signed integer.|  
|[is_unsigned](../stdcpplib/is_unsigned-class.md)|Tests whether the type is an unsigned integer.|  
|[is_constructible](../stdcpplib/is_constructible-class.md)|Tests whether the type is constructible using the specified argument types.|  
|[is_default_constructible](../stdcpplib/-type_traits--functions.md#is_default_constructible)|Tests whether the type has a default constructor.|  
|[is_copy_constructible](../stdcpplib/-type_traits--functions.md#is_copy_constructible)|Tests whether the type has a copy constructor.|  
|[is_move_constructible](../stdcpplib/-type_traits--functions.md#is_move_constructible)|Tests whether the type has a move constructor.|  
|[is_assignable](../stdcpplib/-type_traits--functions.md#is_assignable)|Tests whether the first type can be assigned a value of the second type.|  
|[is_copy_assignable](../stdcpplib/-type_traits--functions.md#is_copy_assignable)|Tests whether a type can be assigned a const reference value of the type.|  
|[is_move_assignable](../stdcpplib/-type_traits--functions.md#is_move_assignable)|Tests whether a type can be assigned an rvalue reference of the type.|  
|[is_destructible](../stdcpplib/is_destructible-class.md)|Tests whether the type is destructible.|  
|[is_trivially_constructible](../stdcpplib/is_trivially_constructible-class.md)|Tests whether the type uses no non-trivial operations when constructed using the specified types.|  
|[is_trivially_default_constructible](../stdcpplib/is_trivially_default_constructible-class.md)|Tests whether the type uses no non-trivial operations when default constructed.|  
|[is_trivially_copy_constructible](../stdcpplib/is_trivially_copy_constructible-class.md)|Tests whether the type uses no non-trivial operations when copy constructed.|  
|[is_trivially_move_constructible](../stdcpplib/-type_traits--functions.md#is_trivially_move_constructible)|Tests whether the type uses no non-trivial operations when move constructed.|  
|[is_trivially_assignable](../stdcpplib/is_trivially_assignable-class.md)|Tests whether the types are assignable and the assignment uses no non-trivial operations.|  
|[is_trivially_copy_assignable](../stdcpplib/-type_traits--functions.md#is_trivially_copy_assignable)|Tests whether the type is copy assignable and the assignment uses no non-trivial operations.|  
|[is_trivially_move_assignable](../stdcpplib/-type_traits--functions.md#is_trivially_move_assignable)|Tests whether the type is move assignable and the assignment uses no non-trivial operations.|  
|[is_trivially_destructible](../stdcpplib/is_trivially_destructible-class.md)|Tests whether the type is destructible and the destructor uses no non-trivial operations.|  
|[is_nothrow_constructible](../stdcpplib/is_nothrow_constructible-class.md)|Tests whether the type is constructible and is known not to throw when constructed using the specified types.|  
|[is_nothrow_default_constructible](../stdcpplib/is_nothrow_default_constructible-class.md)|Tests whether the type is default constructible and is known not to throw when default constructed.|  
|[is_nothrow_copy_constructible](../stdcpplib/is_nothrow_copy_constructible-class.md)|Tests whether the type is copy constructible and the copy constructor is known not to throw.|  
|[is_nothrow_move_constructible](../stdcpplib/is_nothrow_move_constructible-class.md)|Tests whether the type is move constructible and the move constructor is known not to throw.|  
|[is_nothrow_assignable](../stdcpplib/is_nothrow_assignable-class.md)|Tests whether the type is assignable using the specified type and the assignment is known not to throw.|  
|[is_nothrow_copy_assignable](../stdcpplib/is_nothrow_copy_assignable-class.md)|Tests whether the type is copy assignable and the assignment is known not to throw.|  
|[is_nothrow_move_assignable](../stdcpplib/-type_traits--functions.md#is_nothrow_move_assignable)|Tests whether the type is move assignable and the assignment is known not to throw.|  
|[is_nothrow_destructible](../stdcpplib/is_nothrow_destructible-class.md)|Tests whether the type is destructible and the destructor is known not to throw.|  
|[has_virtual_destructor](assetId:///c0f85f0b-c63c-410d-a046-72eeaf44f7eb)|Tests whether the type has a virtual destructor.|  
  
 Type property queries  
  
|||  
|-|-|  
|[alignment_of](../stdcpplib/alignment_of-class.md)|Gets the alignment of a type.|  
|[rank](../stdcpplib/rank-class.md)|Gets the number of array dimensions.|  
|[extent](../stdcpplib/extent-class.md)|Gets the number of elements in the specified array dimension.|  
  
 Type relations  
  
|||  
|-|-|  
|[is_same](../stdcpplib/is_same-class.md)|Tests whether two types are the same.|  
|[is_base_of](../stdcpplib/is_base_of-class.md)|Tests whether one type is a base of another.|  
|[is_convertible](../stdcpplib/is_convertible-class.md)|Tests whether one type is convertible to another.|  
  
 Const-volatile modifications  
  
|||  
|-|-|  
|[add_const](../stdcpplib/add_const-class.md)|Produces a `const` type from type.|  
|[add_volatile](../stdcpplib/add_volatile-class.md)|Produces a `volatile` type from type.|  
|[add_cv](../stdcpplib/add_cv-class.md)|Produces a `const``volatile` type from type.|  
|[remove_const](../stdcpplib/remove_const-class.md)|Produces a non-const type from type.|  
|[remove_volatile](../stdcpplib/remove_volatile-class.md)|Produces a non-volatile type from type.|  
|[remove_cv](../stdcpplib/remove_cv-class.md)|Produces a non-const non-volatile type from type.|  
  
 Reference modifications  
  
|||  
|-|-|  
|[add_lvalue_reference](../stdcpplib/add_lvalue_reference-class.md)|Produces a reference to type from type.|  
|[add_rvalue_reference](../stdcpplib/add_rvalue_reference-class.md)|Produces an rvalue reference to type from type|  
|[remove_reference](../stdcpplib/remove_reference-class.md)|Produces a non-reference type from type.|  
  
 Sign modifications  
  
|||  
|-|-|  
|[make_signed](../stdcpplib/make_signed-class.md)|Produces the type if signed, or the smallest signed type greater than or equal in size to type.|  
|[make_unsigned](../stdcpplib/make_unsigned-class.md)|Produces the type if unsigned, or the smallest unsigned type greater than or equal in size to type.|  
  
 Array modifications  
  
|||  
|-|-|  
|[remove_all_extents](../stdcpplib/remove_all_extents-class.md)|Produces a non-array type from an array type.|  
|[remove_extent](../stdcpplib/remove_extent-class.md)|Produces the element type from an array type.|  
  
 Pointer modifications  
  
|||  
|-|-|  
|[add_pointer](../stdcpplib/add_pointer-class.md)|Produces a pointer to type from type.|  
|[remove_pointer](../stdcpplib/remove_pointer-class.md)|Produces a type from a pointer to type.|  
  
 Other transformations  
  
|||  
|-|-|  
|[aligned_storage](../stdcpplib/aligned_storage-class.md)|Allocates uninitialized memory for an aligned type.|  
|[aligned_union](../stdcpplib/aligned_union-class.md)|Allocates uninitialized memory for an aligned union with a non-trivial constructor or destructor.|  
|[common_type](../stdcpplib/common_type-class.md)|Produces the common type of all the types of the parameter pack.|  
|[conditional](../stdcpplib/conditional-class.md)|If the condition is true, produces the first specified type, otherwise the second specified type.|  
|[decay](../stdcpplib/decay-class.md)|Produces the type as passed by value. Makes non-reference, non-const, or non-volatile type, or makes a pointer to type.|  
|[enable_if](../stdcpplib/enable_if-class.md)|If the condition is true, produces the specified type, otherwise no type.|  
|[result_of](../stdcpplib/result_of-class1.md)|Determines the return type of the callable type that takes the specified argument types.|  
|[underlying_type](../stdcpplib/underlying_type-class.md)|Produces the underlying integral type for an enumeration type.|  
  
## See Also  
 [\<functional>](../stdcpplib/-functional-.md)

