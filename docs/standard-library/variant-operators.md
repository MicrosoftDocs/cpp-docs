---
description: "Learn more about: &lt;variant&gt; operators"
title: "&lt;variant&gt; operators"
ms.date: "04/04/2019"
f1_keywords: ["variant/std::operator!=", "variant/std::operator==", "variant/std::operatoroperator&gt;", "variant/std::operatoroperator&gt=;", "variant/std::operatoroperator&lt;", "variant/std::operatoroperator&lt;="]
helpviewer_keywords: ["std::operator!= (variant)", "std::operator== (variant)", "std::operatoroperator&gt; (variant)", "std::operatoroperator&gt=; (variant)", "std::operatoroperator&lt; (variant)", "std::operatoroperator&lt;= (variant)"]
---
# &lt;variant&gt; operators

## <a name="op_eq_eq"></a> operator==

Tests if the forward list object on the left side of the operator is equal to the forward list object on the right side.

```cpp
template <class... Types>
    constexpr bool operator==(const variant<Types...>&, const variant<Types...>&);
```

## <a name="op_neq"></a> operator!=

Tests if the forward list object on the left side of the operator is not equal to the forward list object on the right side.

```cpp
template <class... Types>
    constexpr bool operator!=(const variant<Types...>&, const variant<Types...>&);
```

## <a name="op_lt"></a> operator&lt;

Tests if the forward list object on the left side of the operator is less than the forward list object on the right side.

```cpp
template <class... Types>
    constexpr bool operator<(const variant<Types...>&, const variant<Types...>&);
```

## <a name="op_lt_eq"></a> operator&lt;=

Tests if the forward list object on the left side of the operator is less than or equal to the forward list object on the right side.

```cpp
template <class... Types>
    constexpr bool operator<=(const variant<Types...>&, const variant<Types...>&);
```

## <a name="op_gt"></a> operator&gt;

Tests if the forward list object on the left side of the operator is greater than the forward list object on the right side.

```cpp
template <class... Types> constexpr
    bool operator>(const variant<Types...>&, const variant<Types...>&);
```

## <a name="op_gt_eq"></a> operator&gt;=

Tests if the forward list object on the left side of the operator is greater than or equal to the forward list object on the right side.

```cpp
template <class... Types> constexpr
    bool operator>=(const variant<Types...>&, const variant<Types...>&);
```
