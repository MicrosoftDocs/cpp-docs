---
description: "Learn more about: &lt;forward_list&gt; operators"
title: "&lt;forward_list&gt; operators"
ms.date: "11/04/2016"
f1_keywords: ["forward_list/std::operator!=", "forward_list/std::operator==", "forward_list/std::operatoroperator&gt;", "forward_list/std::operatoroperator&gt=;", "forward_list/std::operatoroperator&lt;", "forward_list/std::operatoroperator&lt;="]
ms.assetid: 57492e09-3836-4dbc-9ae5-78ecf506c190
helpviewer_keywords: ["std::operator!= (forward_list)", "std::operator== (forward_list)", "std::operatoroperator&gt; (forward_list)", "std::operatoroperator&gt=; (forward_list)", "std::operatoroperator&lt; (forward_list)", "std::operatoroperator&lt;= (forward_list)"]
---
# &lt;forward_list&gt; operators

## <a name="op_eq_eq"></a> operator==

Tests if the forward list object on the left side of the operator is equal to the forward list object on the right side.

```cpp
bool operator==(
    const forward_list <Type, Allocator>& left,
    const forward_list <Type, Allocator>& right);
```

### Parameters

*left*\
An object of type `forward_list`.

*right*\
An object of type `forward_list`.

### Remarks

This template function overloads `operator==` to compare two objects of class template `forward_list`. The function returns `distance(left.begin(), end()) == distance(right.begin(),right.end()) && equal(left. begin(),left. end(),right.begin())`.

## <a name="op_neq"></a> operator!=

Tests if the forward list object on the left side of the operator is not equal to the forward list object on the right side.

```cpp
bool operator!=(
    const forward_list <Type, Allocator>& left,
    const forward_list <Type, Allocator>& right);
```

### Parameters

*left*\
An object of type `forward_list`.

*right*\
An object of type `forward_list`.

### Return Value

**`true`** if the lists are not equal; **`false`** if the lists are equal.

### Remarks

This template function returns `!(left == right)`.

## <a name="op_lt"></a> operator&lt;

Tests if the forward list object on the left side of the operator is less than the forward list object on the right side.

```cpp
bool operator<(
    const forward_list <Type, Allocator>& left,
    const forward_list <Type, Allocator>& right);
```

### Parameters

*left*\
An object of type `forward_list`.

*right*\
An object of type `forward_list`.

### Return Value

**`true`** if the list on the left side of the operator is less than but not equal to the list on the right side of the operator; otherwise **`false`**.

### Remarks

This template function overloads `operator<` to compare two objects of class template `forward_list`. The function returns `lexicographical_compare(lhs. begin(), lhs. end(), rhs.begin(), rhs.end())`.

## <a name="op_lt_eq"></a> operator&lt;=

Tests if the forward list object on the left side of the operator is less than or equal to the forward list object on the right side.

```cpp
bool operator<=(
    const forward_list <Type, Allocator>& left,
    const forward_list <Type, Allocator>& right);
```

### Parameters

*left*\
An object of type `forward_list`.

*right*\
An object of type `forward_list`.

### Return Value

**`true`** if the list on the left side of the operator is less than or equal to the list on the right side of the operator; otherwise **`false`**.

### Remarks

This template function returns `!(right < left)`.

## <a name="op_gt"></a> operator&gt;

Tests if the forward list object on the left side of the operator is greater than the forward list object on the right side.

```cpp
bool operator>(
    const forward_list <Type, Allocator>& left,
    const forward_list <Type, Allocator>& right);
```

### Parameters

*left*\
An object of type `forward_list`.

*right*\
An object of type `forward_list`.

### Return Value

**`true`** if the list on the left side of the operator is greater than the list on the right side of the operator; otherwise **`false`**.

### Remarks

This template function returns `right < left`.

## <a name="op_gt_eq"></a> operator&gt;=

Tests if the forward list object on the left side of the operator is greater than or equal to the forward list object on the right side.

```cpp
bool operator>=(
    const forward_list <Type, Allocator>& left,
    const forward_list <Type, Allocator>& right);
```

### Parameters

*left*\
An object of type `forward_list`.

*right*\
An object of type `forward_list`.

### Return Value

**`true`** if the forward list on the left side of the operator is greater than or equal to the forward list on the right side of the operator; otherwise **`false`**.

### Remarks

The template function returns `!(left < right)`.
