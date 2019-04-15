---
title: "&lt;forward_list&gt;"
ms.date: "11/04/2016"
f1_keywords: ["<forward_list>"]
helpviewer_keywords: ["<forward_list>"]
ms.assetid: 8b4ab09e-1475-434a-b4e0-fdbc07a08b5b
---
# &lt;forward_list&gt;

Defines the container template class forward_list and several supporting templates.

namespace std { 
// 23.7.3, 
class template variant
template <class... Types> class variant;
// 23.7.4, variant helper classes
template <class T>
struct variant_size; // not deﬁned
template <class T>
struct variant_size<const T>;
template <class T>
struct variant_size<volatile T>;
template <class T>
struct variant_size<const volatile T>;
template <class T>
inline constexpr size_t variant_size_v = variant_size<T>::value;
template <class... Types>
struct variant_size<variant<Types...>>;
template <size_t I, class T>
struct variant_alternative; // not deﬁned
template <size_t I, class T>
struct variant_alternative<I, const T>;
template <size_t I, class T>
struct variant_alternative<I, volatile T>;
template <size_t I, class T>
struct variant_alternative<I, const volatile T>;
template <size_t I, class T>
using variant_alternative_t = typename variant_alternative<I, T>::type;
template <size_t I, class... Types>
struct variant_alternative<I, variant<Types...>>;
inline constexpr size_t variant_npos = -1;
// 23.7.5, value access
template <class T, class... Types>
constexpr bool holds_alternative(const variant<Types...>&) noexcept;
template <size_t I, class... Types>
constexpr variant_alternative_t<I, variant<Types...>>& get(variant<Types...>&);
template <size_t I, class... Types>
constexpr variant_alternative_t<I, variant<Types...>>&& get(variant<Types...>&&);
template <size_t I, class... Types>
constexpr const variant_alternative_t<I, variant<Types...>>& get(const variant<Types...>&);
template <size_t I, class... Types>
constexpr const variant_alternative_t<I, variant<Types...>>&& get(const variant<Types...>&&);
template <class T, class... Types>
constexpr T& get(variant<Types...>&);
template <class T, class... Types> constexpr T&& get(variant<Types...>&&);
template <class T, class... Types>
constexpr const T& get(const variant<Types...>&);
template <class T, class... Types>
constexpr const T&& get(const variant<Types...>&&);
template <size_t I, class... Types>
constexpr add_pointer_t<variant_alternative_t<I, variant<Types...>>> get_if(variant<Types...>*) noexcept;
template <size_t I, class... Types>
constexpr add_pointer_t<const variant_alternative_t<I, variant<Types...>>> get_if(const variant<Types...>*) noexcept;
template <class T, class... Types>
constexpr add_pointer_t<T> get_if(variant<Types...>*) noexcept;
template <class T, class... Types>
constexpr add_pointer_t<const T> get_if(const variant<Types...>*) noexcept;
// 23.7.6, relational operators
template <class... Types> constexpr bool operator==(const variant<Types...>&, const variant<Types...>&);
template <class... Types> constexpr bool operator!=(const variant<Types...>&, const variant<Types...>&);
template <class... Types> constexpr bool operator<(const variant<Types...>&, const variant<Types...>&);
template <class... Types> constexpr bool operator>(const variant<Types...>&, const variant<Types...>&);
template <class... Types> constexpr bool operator<=(const variant<Types...>&, const variant<Types...>&);
template <class... Types> constexpr bool operator>=(const variant<Types...>&, const variant<Types...>&);
// 23.7.7, visitation
template <class Visitor, class... Variants> constexpr see below visit(Visitor&&, Variants&&...); // 23.7.8, class monostate struct monostate; // 23.7.9, monostate relational operators constexpr bool operator<(monostate, monostate) noexcept; constexpr bool operator>(monostate, monostate) noexcept; constexpr bool operator<=(monostate, monostate) noexcept; constexpr bool operator>=(monostate, monostate) noexcept; constexpr bool operator==(monostate, monostate) noexcept; constexpr bool operator!=(monostate, monostate) noexcept;
// 23.7.10, specialized algorithms template <class... Types> void swap(variant<Types...>&, variant<Types...>&) noexcept(see below); // 23.7.11, class bad_variant_access class bad_variant_access;
// 23.7.12, hash support
template <class T>
struct hash;
template <class... Types>
struct hash<variant<Types...>>;
template <>
struct hash<monostate>;
// 23.7.13, allocator-related traits
template <class T, class Alloc>
struct uses_allocator;
template <class... Types, class Alloc>
struct uses_allocator<variant<Types...>, Alloc>;
}

## Syntax

```cpp
#include <forward_list>
```

### Operators

|Operator|Description|
|-|-|
|[operator==](../standard-library/forward-list-operators.md#op_eq_eq)|Tests if the forward list object on the left side of the operator is equal to the forward list object on the right side.|
|[operator!=](../standard-library/forward-list-operators.md#op_neq)|Tests if the forward list object on the left side of the operator is not equal to the forward list object on the right side.|
|[operator<](../standard-library/forward-list-operators.md#op_lt)|Tests if the forward list object on the left side of the operator is less than the forward list object on the right side.|
|[operator<=](../standard-library/forward-list-operators.md#op_lt_eq)|Tests if the forward list object on the left side of the operator is less than or equal to the forward list object on the right side.|
|[operator>](../standard-library/forward-list-operators.md#op_gt)|Tests if the forward list object on the left side of the operator is greater than the forward list object on the right side.|
|[operator>=](../standard-library/forward-list-operators.md#op_lt_eq)|Tests if the forward list object on the left side of the operator is greater than or equal to the forward list object on the right side.|

### Functions

|Function|Description|
|-|-|
|[swap](../standard-library/forward-list-functions.md#swap)|Exchanges the elements of two forward lists.|

### Classes

|Class|Description|
|-|-|
|[forward_list](../standard-library/forward-list-class.md)|Describes an object that controls a varying-length sequence of elements. The sequence is stored as a singly-linked list of elements, each containing a member of type `Type`.|

## See also

[Header Files Reference](../standard-library/cpp-standard-library-header-files.md)<br/>
