---
title: "CFileTimeSpan Class"
ms.date: "10/18/2018"
f1_keywords: ["CFileTimeSpan", "ATLTIME/ATL::CFileTimeSpan", "ATLTIME/ATL::CFileTimeSpan::CFileTimeSpan", "ATLTIME/ATL::CFileTimeSpan::GetTimeSpan", "ATLTIME/ATL::CFileTimeSpan::SetTimeSpan"]
helpviewer_keywords: ["shared classes, CFileTimeSpan", "CFileTimeSpan class"]
ms.assetid: 5856fb39-9c82-4027-8ccf-8760890491ec
---
# CFileTimeSpan Class

This class provides methods for managing relative date and time values associated with a file.

## Syntax

```
class CFileTimeSpan
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[CFileTimeSpan::CFileTimeSpan](#cfiletimespan)|The constructor.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[CFileTimeSpan::GetTimeSpan](#gettimespan)|Call this method to retrieve the time span from the `CFileTimeSpan` object.|
|[CFileTimeSpan::SetTimeSpan](#settimespan)|Call this method to set the time span of the `CFileTimeSpan` object.|

### Public Operators

|Name|Description|
|----------|-----------------|
|[CFileTimeSpan::operator -](#operator_-)|Performs subtraction on a `CFileTimeSpan` object.|
|[CFileTimeSpan::operator !=](#operator_neq)|Compares two `CFileTimeSpan` objects for inequality.|
|[CFileTimeSpan::operator +](#operator_add)|Performs addition on a `CFileTimeSpan` object.|
|[CFileTimeSpan::operator +=](#operator_add_eq)|Performs addition on a `CFileTimeSpan` object and assign the result to the current object.|
|[CFileTimeSpan::operator &lt;](#operator_lt)|Compares two `CFileTimeSpan` objects to determine the lesser.|
|[CFileTimeSpan::operator &lt;=](#operator_lt_eq)|Compares two `CFileTimeSpan` objects to determine equality or the lesser.|
|[CFileTimeSpan::operator =](#operator_eq)|The assignment operator.|
|[CFileTimeSpan::operator -=](#operator_-_eq)|Performs subtraction on a `CFileTimeSpan` object and assign the result to the current object.|
|[CFileTimeSpan::operator ==](#operator_eq_eq)|Compares two `CFileTimeSpan` objects for equality.|
|[CFileTimeSpan::operator &gt;](#operator_gt)|Compares two `CFileTimeSpan` objects to determine the larger.|
|[CFileTimeSpan::operator &gt;=](#operator_gt_eq)|Compares two `CFileTimeSpan` objects to determine equality or the larger.|

## Remarks

This class provides methods for managing relative periods of time often encountered when performing operations concerning when a file was created, last accessed or last modified. The methods of this class are frequently used in conjunction with [CFileTime class](../../atl-mfc-shared/reference/cfiletime-class.md) objects.

## Example

See the example for [CFileTime::Millisecond](../../atl-mfc-shared/reference/cfiletime-class.md#millisecond).

## Requirements

**Header:** atltime.h

##  <a name="cfiletimespan"></a>  CFileTimeSpan::CFileTimeSpan

The constructor.

```
CFileTimeSpan() throw();
CFileTimeSpan(const CFileTimeSpan& span) throw();
CFileTimeSpan(LONGLONG nSpan) throw();
```

### Parameters

*span*<br/>
An existing `CFileTimeSpan` object.

*nSpan*<br/>
A period of time in milliseconds.

### Remarks

The `CFileTimeSpan` object can be created using an existing `CFileTimeSpan` object, or expressed as a 64-bit value. The default constructor sets the time span to 0.

##  <a name="gettimespan"></a>  CFileTimeSpan::GetTimeSpan

Call this method to retrieve the time span from the `CFileTimeSpan` object.

```
LONGLONG GetTimeSpan() const throw();
```

### Return Value

Returns the time span in milliseconds.

##  <a name="operator_-"></a>  CFileTimeSpan::operator -

Performs subtraction on a `CFileTimeSpan` object.

```
CFileTimeSpan operator-(CFileTimeSpan span) const throw();
```

### Parameters

*span*<br/>
A `CFileTimeSpan` object.

### Return Value

Returns a `CFileTimeSpan` object representing the result of the difference between two time spans.

##  <a name="operator_neq"></a>  CFileTimeSpan::operator !=

Compares two `CFileTimeSpan` objects for inequality.

```
bool operator!=(CFileTimeSpan span) const throw();
```

### Parameters

*span*<br/>
The `CFileTimeSpan` object to be compared.

### Return Value

Returns TRUE if the item being compared is not equal to the `CFileTimeSpan` object; otherwise FALSE.

##  <a name="operator_add"></a>  CFileTimeSpan::operator +

Performs addition on a `CFileTimeSpan` object.

```
CFileTimeSpan operator+(CFileTimeSpan span) const throw();
```

### Parameters

*span*<br/>
A `CFileTimeSpan` object.

### Return Value

Returns a `CFileTimeSpan` object containing the sum of the two time spans.

##  <a name="operator_add_eq"></a>  CFileTimeSpan::operator +=

Performs addition on a `CFileTimeSpan` object and assigns the result to the current object.

```
CFileTimeSpan& operator+=(CFileTimeSpan span) throw();
```

### Parameters

*span*<br/>
A `CFileTimeSpan` object.

### Return Value

Returns the updated `CFileTimeSpan` object containing the sum of the two time spans.

##  <a name="operator_lt"></a>  CFileTimeSpan::operator &lt;

Compares two `CFileTimeSpan` objects to determine the lesser.

```
bool operator<(CFileTimeSpan span) const throw();
```

### Parameters

*span*<br/>
The `CFileTimeSpan` object to be compared.

### Return Value

Returns TRUE if the first object is less (that is, represents a shorter time period) than the second, otherwise FALSE.

##  <a name="operator_lt_eq"></a>  CFileTimeSpan::operator &lt;=

Compares two `CFileTimeSpan` objects to determine equality or the lesser.

```
bool operator<=(CFileTimeSpan span) const throw();
```

### Parameters

*span*<br/>
The `CFileTimeSpan` object to be compared.

### Return Value

Returns TRUE if the first object is less than (that is, represents a shorter time period) or equal to the second, otherwise FALSE.

##  <a name="operator_eq"></a>  CFileTimeSpan::operator =

The assignment operator.

```
CFileTimeSpan& operator=(const CFileTimeSpan& span) throw();
```

### Parameters

*span*<br/>
A `CFileTimeSpan` object.

### Return Value

Returns the updated `CFileTimeSpan` object.

##  <a name="operator_-_eq"></a>  CFileTimeSpan::operator -=

Performs subtraction on a `CFileTimeSpan` object and assigns the result to the current object.

```
CFileTimeSpan& operator-=(CFileTimeSpan span) throw();
```

### Parameters

*span*<br/>
A `CFileTimeSpan` object.

### Return Value

Returns the updated `CFileTimeSpan` object.

##  <a name="operator_eq_eq"></a>  CFileTimeSpan::operator ==

Compares two `CFileTimeSpan` objects for equality.

```
bool operator==(CFileTimeSpan span) const throw();
```

### Parameters

*span*<br/>
The `CFileTimeSpan` object to be compared.

### Return Value

Returns TRUE if the objects are equal, otherwise FALSE.

##  <a name="operator_gt"></a>  CFileTimeSpan::operator &gt;

Compares two `CFileTimeSpan` objects to determine the larger.

```
bool operator>(CFileTimeSpan span) const throw();
```

### Parameters

*span*<br/>
The `CFileTimeSpan` object to be compared.

### Return Value

Returns TRUE if the first object is greater than (that is, represents a longer time period) than the second, otherwise FALSE.

##  <a name="operator_gt_eq"></a>  CFileTimeSpan::operator &gt;=

Compares two `CFileTimeSpan` objects to determine equality or the larger.

```
bool operator>=(CFileTimeSpan span) const throw();
```

### Parameters

*span*<br/>
The `CFileTimeSpan` object to be compared.

### Return Value

Returns TRUE if the first object is greater than (that is, represents a longer time period) or equal to the second, otherwise FALSE.

##  <a name="settimespan"></a>  CFileTimeSpan::SetTimeSpan

Call this method to set the time span of the `CFileTimeSpan` object.

```
void SetTimeSpan(LONGLONG nSpan) throw();
```

### Parameters

*nSpan*<br/>
The new value for the time span in milliseconds.

## See Also

[FILETIME](/windows/desktop/api/minwinbase/ns-minwinbase-filetime)<br/>
[CFileTime Class](../../atl-mfc-shared/reference/cfiletime-class.md)<br/>
[Hierarchy Chart](../../mfc/hierarchy-chart.md)<br/>
[ATL/MFC Shared Classes](../../atl-mfc-shared/atl-mfc-shared-classes.md)
