---
description: "Learn more about: CComSafeArrayBound Class"
title: "CComSafeArrayBound Class"
ms.date: "05/06/2019"
f1_keywords: ["CComSafeArrayBound", "ATLSAFE/ATL::CComSafeArrayBound", "ATLSAFE/ATL::GetCount", "ATLSAFE/ATL::GetLowerBound", "ATLSAFE/ATL::GetUpperBound", "ATLSAFE/ATL::SetCount", "ATLSAFE/ATL::SetLowerBound"]
helpviewer_keywords: ["CComSafeArrayBound class"]
ms.assetid: dd6299db-5f84-4630-bbf0-f5add5318437
---
# CComSafeArrayBound Class

This class is a wrapper for a [SAFEARRAYBOUND](/windows/win32/api/oaidl/ns-oaidl-safearraybound) structure.

## Syntax

```
class CComSafeArrayBound : public SAFEARRAYBOUND
```

## Members

### Methods

|Function|Description|
|-|-|
|[CComSafeArrayBound](#ccomsafearraybound)|The constructor.|
|[GetCount](#getcount)|Call this method to return the number of elements.|
|[GetLowerBound](#getlowerbound)|Call this method to return the lower bound.|
|[GetUpperBound](#getupperbound)|Call this method to return the upper bound.|
|[SetCount](#setcount)|Call this method to set the number of elements.|
|[SetLowerBound](#setlowerbound)|Call this method to set the lower bound.|

### Operators

|Operator|Description|
|-|-|
|[operator =](#operator_eq)|Sets the `CComSafeArrayBound` to a new value.|

## Remarks

This class is a wrapper for the `SAFEARRAYBOUND` structure used by [CComSafeArray](../../atl/reference/ccomsafearray-class.md). It provides methods for querying and setting the upper and lower bounds of a single dimension of a `CComSafeArray` object and the number of elements it contains. A multidimensional `CComSafeArray` object uses an array of `CComSafeArrayBound` objects, one for each dimension. Therefore, when using methods such as [GetCount](#getcount), be aware that this method will not return the total number of elements in a multidimensional array.

**Header:** atlsafe.h

## Requirements

**Header:** atlsafe.h

## <a name="ccomsafearraybound"></a> CComSafeArrayBound::CComSafeArrayBound

The constructor.

```
CComSafeArrayBound(ULONG ulCount = 0, LONG lLowerBound = 0) throw();
```

### Parameters

*ulCount*<br/>
The number of elements in the array.

*lLowerBound*<br/>
The lower bound from which the array is numbered.

### Remarks

If the array is to be accessed from a C++ program, it is recommended that the lower bound be defined as 0. It may be preferable to use a different lower bound value if the array is to be used with other languages, such as Visual Basic.

## <a name="getcount"></a> CComSafeArrayBound::GetCount

Call this method to return the number of elements.

```
ULONG GetCount() const throw();
```

### Return Value

Returns the number of elements.

### Remarks

If the associated `CComSafeArray` object represents a multidimensional array, this method will only return the total number of elements in the rightmost dimension. Use [CComSafeArray::GetCount](../../atl/reference/ccomsafearray-class.md#getcount) to obtain the total number of elements.

## <a name="getlowerbound"></a> CComSafeArrayBound::GetLowerBound

Call this method to return the lower bound.

```
LONG GetLowerBound() const throw();
```

### Return Value

Returns the lower bound of the `CComSafeArrayBound` object.

## <a name="getupperbound"></a> CComSafeArrayBound::GetUpperBound

Call this method to return the upper bound.

```
LONG GetUpperBound() const throw();
```

### Return Value

Returns the upper bound of the `CComSafeArrayBound` object.

### Remarks

The upper bound depends on the number of elements and the lower bound value. For example, if the lower bound is 0 and the number of elements is 10, the upper bound will automatically be set to 9.

## <a name="operator_eq"></a> CComSafeArrayBound::operator =

Sets the `CComSafeArrayBound` to a new value.

```
CComSafeArrayBound& operator= (const CComSafeArrayBound& bound) throw();
CComSafeArrayBound& operator= (ULONG ulCount) throw();
```

### Parameters

*bound*<br/>
A `CComSafeArrayBound` object.

*ulCount*<br/>
The number of elements.

### Return Value

Returns a pointer to the `CComSafeArrayBound` object.

### Remarks

The `CComSafeArrayBound` object can be assigned using an existing `CComSafeArrayBound`, or by supplying the number of elements, in which case the lower bound is set to 0 by default.

## <a name="setcount"></a> CComSafeArrayBound::SetCount

Call this method to set the number of elements.

```
ULONG SetCount(ULONG ulCount) throw();
```

### Parameters

*ulCount*<br/>
The number of elements.

### Return Value

Returns the number of elements in the `CComSafeArrayBound` object.

## <a name="setlowerbound"></a> CComSafeArrayBound::SetLowerBound

Call this method to set the lower bound.

```
LONG SetLowerBound(LONG lLowerBound) throw();
```

### Parameters

*lLowerBound*<br/>
The lower bound.

### Return Value

Returns the new lower bound of the `CComSafeArrayBound` object.

### Remarks

If the array is to be accessed from a Visual C++ program, it is recommended that the lower bound be defined as 0. It may be preferable to use a different lower bound value if the array is to be used with other languages, such as Visual Basic.

The upper bound depends on the number of elements and the lower bound value. For example, if the lower bound is 0 and the number of elements is 10, the upper bound will automatically be set to 9.

## See also

[Class Overview](../../atl/atl-class-overview.md)
