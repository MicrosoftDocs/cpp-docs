---
title: "&lt;type_traits&gt;"
ms.custom: na
ms.date: 10/06/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: 2260b51f-8160-4c66-a82f-00b534cb60d4
caps.latest.revision: 33
manager: ghogen
translation.priority.mt: 
  - cs-cz
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - pl-pl
  - pt-br
  - ru-ru
  - tr-tr
  - zh-cn
  - zh-tw
---
# &lt;type_traits&gt;
Defines templates that provide compile-time constants that give information about the properties of their type arguments or produce transformed types.  
  
## Syntax  
  
```  
#include <type_traits>  
```  
  
## Remarks  
 The classes and templates in `<type_traits>` are used to support type inference, classification, and transformation at compile time, to detect type-related errors, and to help you optimize your generic code. These classes and templates include unary type traits that describe a property of a type, binary type traits that describe a relationship between types, and transformation traits that modify a property of a type.  
  
 To support type traits, a helper class, `integral_constant`, is defined. It has template specializations `true_type` and `false_type` that form the base classes for type predicates. A *type predicate* is a template that takes one or more type arguments. When a type predicate *holds true*, it is publicly derived, directly or indirectly, from [true_type](../VS_visualcpp/-type_traits--typedefs.md#true_type_typedef). When a type predicate *holds false*, it is publicly derived, directly or indirectly, from [false_type](../VS_visualcpp/-type_traits--typedefs.md#false_type_typedef).  
  
 A *type modifier* or *transformation trait* is a template that takes one or more template arguments and has one member, `type`, which is a synonym for the modified type.  
  
### Alias Templates  
 To simplify type traits expressions, [alias templates](../VS_visualcpp/Aliases-and-typedefs--C---.md) for `typename some_trait<T>::type` are provided, where " `some_trait`" is the template class name. For example, [add_const](../VS_visualcpp/add_const-Class.md) has an alias template for its type, `add_const_t`, defined as:  
  
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
|[integral_constant](../VS_visualcpp/integral_constant-Class--bool_constant-Class.md)|Makes an integral constant from a type and a value.|  
|[true_type](../VS_visualcpp/-type_traits--typedefs.md#true_type_typedef)|Holds integral constant with true value.|  
|[false_type](../VS_visualcpp/-type_traits--typedefs.md#false_type_typedef)|Holds integral constant with false value.|  
  
 Primary type categories  
  
|||  
|-|-|  
|[is_void](../VS_visualcpp/is_void-Class.md)|Tests whether the type is `void`.|  
|[is_null_pointer](../VS_visualcpp/is_null_pointer-Class.md)|Tests whether the type is `std::nullptr_t`.|  
|[is_integral](../VS_visualcpp/is_integral-Class.md)|Tests whether the type is integral.|  
|[is_floating_point](../VS_visualcpp/is_floating_point-Class.md)|Tests whether the type is floating-point.|  
|[is_array](../VS_visualcpp/is_array-Class.md)|Tests whether the type is an array.|  
|[is_pointer](../VS_visualcpp/is_pointer-Class.md)|Tests whether the type is a pointer.|  
|[is_lvalue_reference](../VS_visualcpp/is_lvalue_reference-Class.md)|Tests if type is an lvalue reference.|  
|[is_rvalue_reference](../VS_visualcpp/is_rvalue_reference-Class.md)|Tests if type is an rvalue reference.|  
|[is_member_object_pointer](../VS_visualcpp/is_member_object_pointer-Class.md)|Tests whether the type is a pointer to a member object.|  
|[is_member_function_pointer](../VS_visualcpp/is_member_function_pointer-Class.md)|Tests whether the type is a pointer to a member function.|  
|[is_enum](../VS_visualcpp/is_enum-Class.md)|Tests whether the type is an enumeration.|  
|[is_union](../VS_visualcpp/is_union-Class.md)|Tests whether the type is a union.|  
|[is_class](../VS_visualcpp/is_class-Class.md)|Tests whether the type is a class.|  
|[is_function](../VS_visualcpp/is_function-Class.md)|Tests whether the type is a function type.|  
  
 Composite type categories  
  
|||  
|-|-|  
|[is_reference](../VS_visualcpp/is_reference-Class.md)|Tests whether the type is a reference.|  
|[is_arithmetic](../VS_visualcpp/is_arithmetic-Class.md)|Tests whether the type is arithmetic.|  
|[is_fundamental](../VS_visualcpp/is_fundamental-Class.md)|Tests whether the type is `void` or arithmetic.|  
|[is_object](../VS_visualcpp/is_object-Class.md)|Tests whether the type is an object type.|  
|[is_scalar](../VS_visualcpp/is_scalar-Class.md)|Tests whether the type is scalar.|  
|[is_compound](../VS_visualcpp/is_compound-Class.md)|Tests whether the type is not scalar.|  
|[is_member_pointer](../VS_visualcpp/is_member_pointer-Class.md)|Tests whether the type is a pointer to a member.|  
  
 Type properties  
  
|||  
|-|-|  
|[is_const](../VS_visualcpp/is_const-Class.md)|Tests whether the type is `const`.|  
|[is_volatile](../VS_visualcpp/is_volatile-Class.md)|Tests whether the type is `volatile`.|  
|[is_trivial](../VS_visualcpp/is_trivial-Class.md)|Tests whether the type is trivial.|  
|[is_trivially_copyable](../VS_visualcpp/is_trivially_copyable-Class.md)|Tests whether the type is trivially copyable.|  
|[is_standard_layout](../VS_visualcpp/is_standard_layout-Class.md)|Tests if type is a standard layout type.|  
|[is_pod](../VS_visualcpp/is_pod-Class.md)|Tests whether the type is a POD.|  
|[is_literal_type](../VS_visualcpp/is_literal_type-Class.md)|Tests whether the type can be a `constexpr` variable or used in a `constexpr` function.|  
|[is_empty](../VS_visualcpp/is_empty-Class.md)|Tests whether the type is an empty class.|  
|[is_polymorphic](../VS_visualcpp/is_polymorphic-Class.md)|Tests whether the type is a polymorphic class.|  
|[is_abstract](../VS_visualcpp/is_abstract-Class.md)|Tests whether the type is an abstract class.|  
|[is_final](../VS_visualcpp/is_final-Class.md)|Tests whether the type is a class type marked `final`.|  
|[is_signed](../VS_visualcpp/is_signed-Class.md)|Tests whether the type is a signed integer.|  
|[is_unsigned](../VS_visualcpp/is_unsigned-Class.md)|Tests whether the type is an unsigned integer.|  
|[is_constructible](../VS_visualcpp/is_constructible-Class.md)|Tests whether the type is constructible using the specified argument types.|  
|[is_default_constructible](../VS_visualcpp/-type_traits--functions.md#is_default_constructible)|Tests whether the type has a default constructor.|  
|[is_copy_constructible](../VS_visualcpp/-type_traits--functions.md#is_copy_constructible)|Tests whether the type has a copy constructor.|  
|[is_move_constructible](../VS_visualcpp/-type_traits--functions.md#is_move_constructible)|Tests whether the type has a move constructor.|  
|[is_assignable](../VS_visualcpp/-type_traits--functions.md#is_assignable)|Tests whether the first type can be assigned a value of the second type.|  
|[is_copy_assignable](../VS_visualcpp/-type_traits--functions.md#is_copy_assignable)|Tests whether a type can be assigned a const reference value of the type.|  
|[is_move_assignable](../VS_visualcpp/-type_traits--functions.md#is_move_assignable)|Tests whether a type can be assigned an rvalue reference of the type.|  
|[is_destructible](../VS_visualcpp/is_destructible-Class.md)|Tests whether the type is destructible.|  
|[is_trivially_constructible](../VS_visualcpp/is_trivially_constructible-Class.md)|Tests whether the type uses no non-trivial operations when constructed using the specified types.|  
|[is_trivially_default_constructible](../VS_visualcpp/is_trivially_default_constructible-Class.md)|Tests whether the type uses no non-trivial operations when default constructed.|  
|[is_trivially_copy_constructible](../VS_visualcpp/is_trivially_copy_constructible-Class.md)|Tests whether the type uses no non-trivial operations when copy constructed.|  
|[is_trivially_move_constructible](../VS_visualcpp/-type_traits--functions.md#is_trivially_move_constructible)|Tests whether the type uses no non-trivial operations when move constructed.|  
|[is_trivially_assignable](../VS_visualcpp/is_trivially_assignable-Class.md)|Tests whether the types are assignable and the assignment uses no non-trivial operations.|  
|[is_trivially_copy_assignable](../VS_visualcpp/-type_traits--functions.md#is_trivially_copy_assignable)|Tests whether the type is copy assignable and the assignment uses no non-trivial operations.|  
|[is_trivially_move_assignable](../VS_visualcpp/-type_traits--functions.md#is_trivially_move_assignable)|Tests whether the type is move assignable and the assignment uses no non-trivial operations.|  
|[is_trivially_destructible](../VS_visualcpp/is_trivially_destructible-Class.md)|Tests whether the type is destructible and the destructor uses no non-trivial operations.|  
|[is_nothrow_constructible](../VS_visualcpp/is_nothrow_constructible-Class.md)|Tests whether the type is constructible and is known not to throw when constructed using the specified types.|  
|[is_nothrow_default_constructible](../VS_visualcpp/is_nothrow_default_constructible-Class.md)|Tests whether the type is default constructible and is known not to throw when default constructed.|  
|[is_nothrow_copy_constructible](../VS_visualcpp/is_nothrow_copy_constructible-Class.md)|Tests whether the type is copy constructible and the copy constructor is known not to throw.|  
|[is_nothrow_move_constructible](../VS_visualcpp/is_nothrow_move_constructible-Class.md)|Tests whether the type is move constructible and the move constructor is known not to throw.|  
|[is_nothrow_assignable](../VS_visualcpp/is_nothrow_assignable-Class.md)|Tests whether the type is assignable using the specified type and the assignment is known not to throw.|  
|[is_nothrow_copy_assignable](../VS_visualcpp/is_nothrow_copy_assignable-Class.md)|Tests whether the type is copy assignable and the assignment is known not to throw.|  
|[is_nothrow_move_assignable](../VS_visualcpp/-type_traits--functions.md#is_nothrow_move_assignable)|Tests whether the type is move assignable and the assignment is known not to throw.|  
|[is_nothrow_destructible](../VS_visualcpp/is_nothrow_destructible-Class.md)|Tests whether the type is destructible and the destructor is known not to throw.|  
|[has_virtual_destructor](assetId:///c0f85f0b-c63c-410d-a046-72eeaf44f7eb)|Tests whether the type has a virtual destructor.|  
  
 Type property queries  
  
|||  
|-|-|  
|[alignment_of](../VS_visualcpp/alignment_of-Class.md)|Gets the alignment of a type.|  
|[rank](../VS_visualcpp/rank-Class.md)|Gets the number of array dimensions.|  
|[extent](../VS_visualcpp/extent-Class.md)|Gets the number of elements in the specified array dimension.|  
  
 Type relations  
  
|||  
|-|-|  
|[is_same](../VS_visualcpp/is_same-Class.md)|Tests whether two types are the same.|  
|[is_base_of](../VS_visualcpp/is_base_of-Class.md)|Tests whether one type is a base of another.|  
|[is_convertible](../VS_visualcpp/is_convertible-Class.md)|Tests whether one type is convertible to another.|  
  
 Const-volatile modifications  
  
|||  
|-|-|  
|[add_const](../VS_visualcpp/add_const-Class.md)|Produces a `const` type from type.|  
|[add_volatile](../VS_visualcpp/add_volatile-Class.md)|Produces a `volatile` type from type.|  
|[add_cv](../VS_visualcpp/add_cv-Class.md)|Produces a `const``volatile` type from type.|  
|[remove_const](../VS_visualcpp/remove_const-Class.md)|Produces a non-const type from type.|  
|[remove_volatile](../VS_visualcpp/remove_volatile-Class.md)|Produces a non-volatile type from type.|  
|[remove_cv](../VS_visualcpp/remove_cv-Class.md)|Produces a non-const non-volatile type from type.|  
  
 Reference modifications  
  
|||  
|-|-|  
|[add_lvalue_reference](../VS_visualcpp/add_lvalue_reference-Class.md)|Produces a reference to type from type.|  
|[add_rvalue_reference](../VS_visualcpp/add_rvalue_reference-Class.md)|Produces an rvalue reference to type from type|  
|[remove_reference](../VS_visualcpp/remove_reference-Class.md)|Produces a non-reference type from type.|  
  
 Sign modifications  
  
|||  
|-|-|  
|[make_signed](../VS_visualcpp/make_signed-Class.md)|Produces the type if signed, or the smallest signed type greater than or equal in size to type.|  
|[make_unsigned](../VS_visualcpp/make_unsigned-Class.md)|Produces the type if unsigned, or the smallest unsigned type greater than or equal in size to type.|  
  
 Array modifications  
  
|||  
|-|-|  
|[remove_all_extents](../VS_visualcpp/remove_all_extents-Class.md)|Produces a non-array type from an array type.|  
|[remove_extent](../VS_visualcpp/remove_extent-Class.md)|Produces the element type from an array type.|  
  
 Pointer modifications  
  
|||  
|-|-|  
|[add_pointer](../VS_visualcpp/add_pointer-Class.md)|Produces a pointer to type from type.|  
|[remove_pointer](../VS_visualcpp/remove_pointer-Class.md)|Produces a type from a pointer to type.|  
  
 Other transformations  
  
|||  
|-|-|  
|[aligned_storage](../VS_visualcpp/aligned_storage-Class.md)|Allocates uninitialized memory for an aligned type.|  
|[aligned_union](../VS_visualcpp/aligned_union-Class.md)|Allocates uninitialized memory for an aligned union with a non-trivial constructor or destructor.|  
|[common_type](../VS_visualcpp/common_type-Class.md)|Produces the common type of all the types of the parameter pack.|  
|[conditional](../VS_visualcpp/conditional-Class.md)|If the condition is true, produces the first specified type, otherwise the second specified type.|  
|[decay](../VS_visualcpp/decay-Class.md)|Produces the type as passed by value. Makes non-reference, non-const, or non-volatile type, or makes a pointer to type.|  
|[enable_if](../VS_visualcpp/enable_if-Class.md)|If the condition is true, produces the specified type, otherwise no type.|  
|[result_of](../VS_visualcpp/result_of-Class1.md)|Determines the return type of the callable type that takes the specified argument types.|  
|[underlying_type](../VS_visualcpp/underlying_type-Class.md)|Produces the underlying integral type for an enumeration type.|  
  
## See Also  
 [<functional\>](../VS_visualcpp/-functional-.md)