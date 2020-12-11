---
description: "Learn more about: ATL Operators"
title: "ATL Operators"
ms.date: "11/04/2016"
helpviewer_keywords: ["operators [ATL]"]
ms.assetid: 58ccd252-2869-45ee-8a5c-3ca40ee7f8a2
---
# ATL Operators

This section contains the reference topics for the ATL global operators.

|Operator|Description|
|--------------|-----------------|
|[operator ==](#operator_eq_eq)|Compares two `CSid` objects or `SID` structures for equality.|
|[operator !=](#operator_neq)|Compares two `CSid` objects or `SID` structures for inequality.|
|[operator <](#operator_lt)|Tests if the `CSid` object or `SID` structure on the left side of the operator is less than the `CSid` object or `SID` structure on the right side (for C++ Standard Library compatibility).|
|[operator >](#operator_gt)|Tests if the `CSid` object or `SID` structure on the left side of the operator is greater than the `CSid` object or `SID` structure on the right side (for C++ Standard Library compatibility).|
|[operator <=](#operator_lt__eq)|Tests if the `CSid` object or `SID` structure on the left side of the operator is less than or equal to the `CSid` object or `SID` structure on the right side (for C++ Standard Library compatibility).|
|[operator >=](#operator_gt__eq)|Tests if the `CSid` object or `SID` structure on the left side of the operator is greater than or equal to the `CSid` object or `SID` structure on the right side (for C++ Standard Library compatibility).|

## Requirements

**Header:** atlsecurity.h.

## <a name="operator_eq_eq"></a> operator ==

Compares `CSid` objects or `SID` (security identifier) structures for equality.

```cpp
bool operator==(const CSid& lhs, const CSid& rhs) throw();
```

### Parameters

*lhs*<br/>
The first `CSid` object or `SID` structure to compare.

*rhs*<br/>
The second `CSid` object or `SID` structure to compare.

### Return Value

Returns TRUE if the objects are equal, FALSE if they are not equal.

## <a name="operator_neq"></a> operator !=

Compares `CSid` objects or `SID` (security identifier) structures for inequality.

```cpp
bool operator==(const CSid& lhs, const CSid& rhs) throw();
```

### Parameters

*lhs*<br/>
The first `CSid` object or `SID` structure to compare.

*rhs*<br/>
The second `CSid` object or `SID` structure to compare.

### Return Value

Returns TRUE if the objects are not equal, FALSE if they are equal.

## <a name="operator_lt"></a> operator <

Tests if the `CSid` object or `SID` structure on the left side of the operator is less than the `CSid` object or `SID` structure on the right side (for C++ Standard Library compatibility).

```cpp
bool operator<(const CSid& lhs, const CSid& rhs) throw();
```

### Parameters

*lhs*<br/>
The first `CSid` object or `SID` structure to compare.

*rhs*<br/>
The second `CSid` object or `SID` structure to compare.

### Return Value

Returns TRUE if the address of the *lhs* object is less than the address of the *rhs* object, FALSE otherwise.

### Remarks

This operator acts on the address of the `CSid` object or `SID` structure, and is implemented to provide compatibility with C++ Standard Library collection classes.

## <a name="operator_gt"></a> operator >

Tests if the `CSid` object or `SID` structure on the left side of the operator is greater than the `CSid` object or `SID` structure on the right side (for C++ Standard Library compatibility).

```cpp
bool operator<(const CSid& lhs, const CSid& rhs) throw();
```

### Parameters

*lhs*<br/>
The first `CSid` object or `SID` structure to compare.

*rhs*<br/>
The second `CSid` object or `SID` structure to compare.

### Return Value

Returns TRUE if the address of the *lhs* is greater than the address of the *rhs*, FALSE otherwise.

### Remarks

This operator acts on the address of the `CSid` object or `SID` structure, and is implemented to provide compatibility with C++ Standard Library collection classes.

## <a name="operator_lt__eq"></a> operator <=

Tests if the `CSid` object or `SID` structure on the left side of the operator is less than or equal to the `CSid` object or `SID` structure on the right side (for C++ Standard Library compatibility).

```cpp
bool operator<(const CSid& lhs, const CSid& rhs) throw();
```

### Parameters

*lhs*<br/>
The first `CSid` object or `SID` structure to compare.

*rhs*<br/>
The second `CSid` object or `SID` structure to compare.

### Return Value

Returns TRUE if the address of the *lhs* is less than or equal to the address of the *rhs*, FALSE otherwise.

### Remarks

This operator acts on the address of the `CSid` object or `SID` structure, and is implemented to provide compatibility with C++ Standard Library collection classes.

## <a name="operator_gt__eq"></a> operator >=

Tests if the `CSid` object or `SID` structure on the left side of the operator is greater than or equal to the `CSid` object or `SID` structure on the right side (for C++ Standard Library compatibility).

```cpp
bool operator<(const CSid& lhs, const CSid& rhs) throw();
```

### Parameters

*lhs*<br/>
The first `CSid` object or `SID` structure to compare.

*rhs*<br/>
The second `CSid` object or `SID` structure to compare.

### Return Value

Returns TRUE if the address of the *lhs* is greater than or equal to the address of the *rhs*, FALSE otherwise.

### Remarks

This operator acts on the address of the `CSid` object or `SID` structure, and is implemented to provide compatibility with C++ Standard Library collection classes.
