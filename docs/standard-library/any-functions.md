---
title: "&lt;any&gt; functions"
ms.date: "04/04/2019"
f1_keywords: ["any/std::swap"]
---
# &lt;any&gt; functions

void swap(any& x, any& y) noexcept;
template <class T, class... Args>
any make_any(Args&& ...args);
template <class T, class U, class... Args>
any make_any(initializer_list<U> il, Args&& ...args);
template<class T>
T any_cast(const any& operand);
template<class T>
T any_cast(any& operand);
template<class T>
T any_cast(any&& operand);
template<class T>
const T* any_cast(const any* operand) noexcept;
template<class T>
T* any_cast(any* operand) noexcept;

|[any_cast](../standard-library/any-functions.md#any_cast)||
|[make_any](../standard-library/any-functions.md#make_any)||
|[swap](../standard-library/any-functions.md#swap)|Exchanges the elements of two forward lists.|

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

[&lt;any>](../standard-library/any.md)
