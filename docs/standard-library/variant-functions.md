---
title: "&lt;forward_list&gt; functions"
ms.date: "11/04/2016"
f1_keywords: ["forward_list/std::swap"]
ms.assetid: 0d6bc656-7049-4651-a4bd-c9a805e47756
---
# &lt;forward_list&gt; functions

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

template <class T, class... Types> constexpr bool holds_alternative(const variant<Types...>&) noexcept;

// 23.7.7, visitation
template <class Visitor, class... Variants>
constexpr see below
visit(Visitor&&, Variants&&...);


||
|-|
|[swap](#swap)|

## <a name="swap"></a>  swap

Exchanges the elements of two forward lists.

```cpp
void swap(
    forward_list <Type, Allocator>& left,
    forward_list <Type, Allocator>& right);
```

### Parameters

|Parameter|Description|
|---------------|-----------------|
|*left*|An object of type `forward_list`.|
|*right*|An object of type `forward_list`.|

### Remarks

This template function executes `left.swap(right)`.

## See also

[<forward_list>](../standard-library/forward-list.md)<br/>
