---
title: "CFileTimeSpan class"
description: "The Active Template Library (ATL) and Microsoft Foundation Classes (MFC) CFileTimeSpan class manages time intervals in FILETIME units."
ms.date: "01/10/2020"
f1_keywords: ["CFileTimeSpan", "ATLTIME/ATL::CFileTimeSpan", "ATLTIME/ATL::CFileTimeSpan::CFileTimeSpan", "ATLTIME/ATL::CFileTimeSpan::GetTimeSpan", "ATLTIME/ATL::CFileTimeSpan::SetTimeSpan"]
helpviewer_keywords: ["shared classes, CFileTimeSpan", "CFileTimeSpan class"]
ms.assetid: 5856fb39-9c82-4027-8ccf-8760890491ec
---
# `CFileTimeSpan` class

This class provides methods for managing relative date and time values associated with a file.

## Syntax

```cpp
class CFileTimeSpan
```

## Members

### Public constructors

|Name|Description|
|----------|-----------------|
|[`CFileTimeSpan::CFileTimeSpan`](#cfiletimespan)|The constructor.|

### Public methods

|Name|Description|
|----------|-----------------|
|[`CFileTimeSpan::GetTimeSpan`](#gettimespan)|Call this method to retrieve the time span from the `CFileTimeSpan` object.|
|[`CFileTimeSpan::SetTimeSpan`](#settimespan)|Call this method to set the time span of the `CFileTimeSpan` object.|

### Public operators

|Name|Description|
|----------|-----------------|
|[`CFileTimeSpan::operator -`](#operator_-)|Performs subtraction on a `CFileTimeSpan` object.|
|[`CFileTimeSpan::operator !=`](#operator_neq)|Compares two `CFileTimeSpan` objects for inequality.|
|[`CFileTimeSpan::operator +`](#operator_add)|Performs addition on a `CFileTimeSpan` object.|
|[`CFileTimeSpan::operator +=`](#operator_add_eq)|Performs addition on a `CFileTimeSpan` object and assign the result to the current object.|
|[`CFileTimeSpan::operator <`](#operator_lt)|Compares two `CFileTimeSpan` objects to determine the lesser.|
|[`CFileTimeSpan::operator <=`](#operator_lt_eq)|Compares two `CFileTimeSpan` objects to determine equality or the lesser.|
|[`CFileTimeSpan::operator =`](#operator_eq)|The assignment operator.|
|[`CFileTimeSpan::operator -=`](#operator_-_eq)|Performs subtraction on a `CFileTimeSpan` object and assign the result to the current object.|
|[`CFileTimeSpan::operator ==`](#operator_eq_eq)|Compares two `CFileTimeSpan` objects for equality.|
|[`CFileTimeSpan::operator >`](#operator_gt)|Compares two `CFileTimeSpan` objects to determine the larger.|
|[`CFileTimeSpan::operator >=`](#operator_gt_eq)|Compares two `CFileTimeSpan` objects to determine equality or the larger.|

## Remarks

The `CFileTimeSpan` class provides methods to handle relative periods of time in the units the file system uses. These units are often used in file operations, such as when a file was created, last accessed, or last modified. The methods of this class are frequently used together with [`CFileTime` class](../../atl-mfc-shared/reference/cfiletime-class.md) objects.

## Example

See the example for [`CFileTime::Millisecond`](../../atl-mfc-shared/reference/cfiletime-class.md#millisecond).

## Requirements

**Header:** atltime.h

## <a name="cfiletimespan"></a> `CFileTimeSpan::CFileTimeSpan`

The constructor.

```cpp
CFileTimeSpan() throw();
CFileTimeSpan(const CFileTimeSpan& span) throw();
CFileTimeSpan(LONGLONG nSpan) throw();
```

### Parameters

*`span`*\
An existing `CFileTimeSpan` object.

*`nSpan`*\
A period of time in `FILETIME` units.

### Remarks

The `CFileTimeSpan` object can be created using an existing `CFileTimeSpan` object, or expressed as a 64-bit value in 100-nanosecond `FILETIME` units. For more information, see [`CFileTime`](cfiletime-class.md). The default constructor sets the time span to 0.

## <a name="gettimespan"></a> `CFileTimeSpan::GetTimeSpan`

Call this method to retrieve the time span from the `CFileTimeSpan` object.

```cpp
LONGLONG GetTimeSpan() const throw();
```

### Return value

Returns the time span in 100-nanosecond `FILETIME` units. For more information, see [`CFileTime`](cfiletime-class.md).

## <a name="operator_-"></a> `CFileTimeSpan::operator -`

Performs subtraction on a `CFileTimeSpan` object.

```cpp
CFileTimeSpan operator-(CFileTimeSpan span) const throw();
```

### Parameters

*`span`*\
A `CFileTimeSpan` object.

### Return value

Returns a `CFileTimeSpan` object representing the result of the difference between two time spans.

## <a name="operator_neq"></a> `CFileTimeSpan::operator !=`

Compares two `CFileTimeSpan` objects for inequality.

```cpp
bool operator!=(CFileTimeSpan span) const throw();
```

### Parameters

*`span`*\
The `CFileTimeSpan` object to be compared.

### Return value

Returns `TRUE` if the item being compared isn't equal to the `CFileTimeSpan` object; otherwise `FALSE`.

## <a name="operator_add"></a> `CFileTimeSpan::operator +`

Performs addition on a `CFileTimeSpan` object.

```cpp
CFileTimeSpan operator+(CFileTimeSpan span) const throw();
```

### Parameters

*`span`*\
A `CFileTimeSpan` object.

### Return value

Returns a `CFileTimeSpan` object containing the sum of the two time spans.

## <a name="operator_add_eq"></a> `CFileTimeSpan::operator +=`

Performs addition on a `CFileTimeSpan` object and assigns the result to the current object.

```cpp
CFileTimeSpan& operator+=(CFileTimeSpan span) throw();
```

### Parameters

*`span`*\
A `CFileTimeSpan` object.

### Return value

Returns the updated `CFileTimeSpan` object containing the sum of the two time spans.

## <a name="operator_lt"></a> `CFileTimeSpan::operator <`

Compares two `CFileTimeSpan` objects to determine the lesser.

```cpp
bool operator<(CFileTimeSpan span) const throw();
```

### Parameters

*`span`*\
The `CFileTimeSpan` object to be compared.

### Return value

Returns `TRUE` if the first object is less (that is, represents a shorter time period) than the second, otherwise `FALSE`.

## <a name="operator_lt_eq"></a> `CFileTimeSpan::operator <=`

Compares two `CFileTimeSpan` objects to determine equality or the lesser.

```cpp
bool operator<=(CFileTimeSpan span) const throw();
```

### Parameters

*`span`*\
The `CFileTimeSpan` object to be compared.

### Return value

Returns `TRUE` if the first object is less than (that is, represents a shorter time period) or equal to the second, otherwise `FALSE`.

## <a name="operator_eq"></a> `CFileTimeSpan::operator =`

The assignment operator.

```cpp
CFileTimeSpan& operator=(const CFileTimeSpan& span) throw();
```

### Parameters

*`span`*\
A `CFileTimeSpan` object.

### Return value

Returns the updated `CFileTimeSpan` object.

## <a name="operator_-_eq"></a> `CFileTimeSpan::operator -=`

Performs subtraction on a `CFileTimeSpan` object and assigns the result to the current object.

```cpp
CFileTimeSpan& operator-=(CFileTimeSpan span) throw();
```

### Parameters

*`span`*\
A `CFileTimeSpan` object.

### Return value

Returns the updated `CFileTimeSpan` object.

## <a name="operator_eq_eq"></a> `CFileTimeSpan::operator ==`

Compares two `CFileTimeSpan` objects for equality.

```cpp
bool operator==(CFileTimeSpan span) const throw();
```

### Parameters

*`span`*\
The `CFileTimeSpan` object to be compared.

### Return value

Returns `TRUE` if the objects are equal, otherwise `FALSE`.

## <a name="operator_gt"></a> `CFileTimeSpan::operator >`

Compares two `CFileTimeSpan` objects to determine the larger.

```cpp
bool operator>(CFileTimeSpan span) const throw();
```

### Parameters

*`span`*\
The `CFileTimeSpan` object to be compared.

### Return value

Returns `TRUE` if the first object is greater than (that is, represents a longer time period) than the second, otherwise `FALSE`.

## <a name="operator_gt_eq"></a> `CFileTimeSpan::operator >=`

Compares two `CFileTimeSpan` objects to determine equality or the larger.

```cpp
bool operator>=(CFileTimeSpan span) const throw();
```

### Parameters

*`span`*\
The `CFileTimeSpan` object to be compared.

### Return value

Returns `TRUE` if the first object is greater than (that is, represents a longer time period) or equal to the second, otherwise `FALSE`.

## <a name="settimespan"></a> `CFileTimeSpan::SetTimeSpan`

Call this method to set the time span of the `CFileTimeSpan` object.

```cpp
void SetTimeSpan(LONGLONG nSpan) throw();
```

### Parameters

*`nSpan`*\
The new value for the time span in 100-nanosecond `FILETIME` units. For more information, see [`CFileTime`](cfiletime-class.md).

## See also

[`FILETIME`](/windows/win32/api/minwinbase/ns-minwinbase-filetime)\
[`CFileTime` class](cfiletime-class.md)\
[Hierarchy chart](../../mfc/hierarchy-chart.md)\
[ATL/MFC shared classes](../../atl-mfc-shared/atl-mfc-shared-classes.md)
