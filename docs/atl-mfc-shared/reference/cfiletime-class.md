---
description: "Learn more about: CFileTime Class"
title: "CFileTime Class"
ms.date: "10/18/2018"
f1_keywords: ["CFileTime", "ATLTIME/ATL::CFileTime", "ATLTIME/ATL::CFileTime::CFileTime", "ATLTIME/ATL::CFileTime::GetCurrentTime", "ATLTIME/ATL::CFileTime::GetTime", "ATLTIME/ATL::CFileTime::LocalToUTC", "ATLTIME/ATL::CFileTime::SetTime", "ATLTIME/ATL::CFileTime::UTCToLocal", "ATLTIME/ATL::CFileTime::Day", "ATLTIME/ATL::CFileTime::Hour", "ATLTIME/ATL::CFileTime::Millisecond", "ATLTIME/ATL::CFileTime::Minute", "ATLTIME/ATL::CFileTime::Second", "ATLTIME/ATL::CFileTime::Week"]
helpviewer_keywords: ["CFileTime class", "shared classes, CFileTime"]
ms.assetid: 1a358a65-1383-4124-b0d4-59b026e6860f
---
# CFileTime Class

This class provides methods for managing the date and time values associated with a file.

## Syntax

```
class CFileTime :  public FILETIME
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[CFileTime::CFileTime](#cfiletime)|The constructor.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[CFileTime::GetCurrentTime](#getcurrenttime)|Call this static function to retrieve a `CFileTime` object that represents the current system date and time.|
|[CFileTime::GetTime](#gettime)|Call this method to retrieve the time from the `CFileTime` object.|
|[CFileTime::LocalToUTC](#localtoutc)|Call this method to convert a local file time to a file time based on the Coordinated Universal Time (UTC).|
|[CFileTime::SetTime](#settime)|Call this method to set the date and time stored by the `CFileTime` object.|
|[CFileTime::UTCToLocal](#utctolocal)|Call this method to convert time based on the Coordinated Universal Time (UTC) to local file time.|

### Public Operators

|Name|Description|
|----------|-----------------|
|[CFileTime::operator -](#operator_-)|This operator is used to perform subtraction on a `CFileTime` or `CFileTimeSpan` object.|
|[CFileTime::operator !=](#operator_neq)|This operator compares two `CFileTime` objects for inequality.|
|[CFileTime::operator +](#operator_add)|This operator is used to perform addition on a `CFileTimeSpan` object.|
|[CFileTime::operator +=](#operator_add_eq)|This operator is used to perform addition on a `CFileTimeSpan` object and assign the result to the current object.|
|[CFileTime::operator &lt;](#operator_lt)|This operator compares two `CFileTime` objects to determine the lesser.|
|[CFileTime::operator &lt;=](#operator_lt_eq)|This operator compares two `CFileTime` objects to determine equality or the lesser.|
|[CFileTime::operator =](#operator_eq)|The assignment operator.|
|[CFileTime::operator -=](#operator_-_eq)|This operator is used to perform subtraction on a `CFileTimeSpan` object and assign the result to the current object.|
|[CFileTime::operator ==](#operator_eq_eq)|This operator compares two `CFileTime` objects for equality.|
|[CFileTime::operator &gt;](#operator_gt)|This operator compares two `CFileTime` objects to determine the larger.|
|[CFileTime::operator &gt;=](#operator_gt_eq)|This operator compares two `CFileTime` objects to determine equality or the larger.|

### Public Constants

|Name|Description|
|----------|-----------------|
|[CFileTime::Day](#day)|A static data member storing the number of 100-nanosecond intervals that make up one day.|
|[CFileTime::Hour](#hour)|A static data member storing the number of 100-nanosecond intervals that make up one hour.|
|[CFileTime::Millisecond](#millisecond)|A static data member storing the number of 100-nanosecond intervals that make up one millisecond.|
|[CFileTime::Minute](#minute)|A static data member storing the number of 100-nanosecond intervals that make up one minute.|
|[CFileTime::Second](#second)|A static data member storing the number of 100-nanosecond intervals that make up one second.|
|[CFileTime::Week](#week)|A static data member storing the number of 100-nanosecond intervals that make up one week.|

## Remarks

This class provides methods for managing the date and time values associated with the creation, access and modification of files. The methods and data of this class are frequently used in conjunction with `CFileTimeSpan` objects, which deal with relative time values.

The date and time value is stored as a 64-bit value representing the number of 100-nanosecond intervals since January 1, 1601. This is the Coordinated Universal Time (UTC) format.

The following static const member variables are provided to simplify calculations:

|Member variable|Number of 100-nanosecond intervals|
|---------------------|-----------------------------------------|
|Millisecond|10,000|
|Second|Millisecond \* 1,000|
|Minute|Second \* 60|
|Hour|Minute \* 60|
|Day|Hour \* 24|
|Week|Day \* 7|

**Note** Not all file systems can record creation and last access time and not all file systems record them in the same manner. For example, on the Windows NT FAT file system, create time has a resolution of 10 milliseconds, write time has a resolution of 2 seconds, and access time has a resolution of 1 day (the access date). On NTFS, access time has a resolution of 1 hour. Furthermore, FAT records times on disk in local time, but NTFS records times on disk in UTC. For more information, see [File Times](/windows/win32/SysInfo/file-times).

## Inheritance Hierarchy

`FILETIME`

`CFileTime`

## Requirements

**Header:** atltime.h

## <a name="cfiletime"></a> CFileTime::CFileTime

The constructor.

```
CFileTime() throw();
CFileTime(const FILETIME& ft) throw();
CFileTime(ULONGLONG nTime) throw();
```

### Parameters

*ft*<br/>
A [FILETIME](/windows/win32/api/minwinbase/ns-minwinbase-filetime) structure.

*nTime*<br/>
The date and time expressed as a 64-bit value.

### Remarks

The `CFileTime` object can be created using an existing date and time from a `FILETIME` structure, or expressed as a 64-bit value (in local or Coordinated Universal Time (UTC) time formats). The default constructor sets the time to 0.

## <a name="day"></a> CFileTime::Day

A static data member storing the number of 100-nanosecond intervals that make up one day.

```
static const ULONGLONG Day = Hour* 24;
```

### Example

See the example for [CFileTime::Millisecond](#millisecond).

## <a name="getcurrenttime"></a> CFileTime::GetCurrentTime

Call this static function to retrieve a `CFileTime` object that represents the current system date and time.

```
static CFileTime GetCurrentTime() throw();
```

### Return Value

Returns the current system date and time in Coordinated Universal Time (UTC) format.

### Example

[!code-cpp[NVC_MFCFiles#41](../../atl-mfc-shared/reference/codesnippet/cpp/cfiletime-class_1.cpp)]

## <a name="gettime"></a> CFileTime::GetTime

Call this method to retrieve the time from the `CFileTime` object.

```
ULONGLONG GetTime() const throw();
```

### Return Value

Returns the date and time as a 64-bit number, which may be in either local or Coordinated Universal Time (UTC) format.

## <a name="hour"></a> CFileTime::Hour

A static data member storing the number of 100-nanosecond intervals that make up one hour.

```
static const ULONGLONG Hour = Minute* 60;
```

### Example

See the example for [CFileTime::Millisecond](#millisecond).

## <a name="localtoutc"></a> CFileTime::LocalToUTC

Call this method to convert a local file time to a file time based on the Coordinated Universal Time (UTC).

```
CFileTime LocalToUTC() const throw();
```

### Return Value

Returns a `CFileTime` object containing the time in UTC format.

### Example

See the example for [CFileTime::UTCToLocal](#utctolocal).

## <a name="millisecond"></a> CFileTime::Millisecond

A static data member storing the number of 100-nanosecond intervals that make up one millisecond.

```
static const ULONGLONG Millisecond = 10000;
```

### Example

[!code-cpp[NVC_MFCFiles#44](../../atl-mfc-shared/reference/codesnippet/cpp/cfiletime-class_2.cpp)]

## <a name="minute"></a> CFileTime::Minute

A static data member storing the number of 100-nanosecond intervals that make up one minute.

```
static const ULONGLONG Minute = Second* 60;
```

### Example

See the example for [CFileTime::Millisecond](#millisecond).

## <a name="operator_-"></a> CFileTime::operator -

This operator is used to perform subtraction on a `CFileTime` or `CFileTimeSpan` object.

```
CFileTime operator-(CFileTimeSpan span) const throw();
CFileTimeSpan operator-(CFileTime ft) const throw();
```

### Parameters

*span*<br/>
A `CFileTimeSpan` object.

*ft*<br/>
A `CFileTime` object.

### Return Value

Returns a `CFileTime` object or a `CFileTimeSpan` object representing the result of the time difference between the two objects.

## <a name="operator_neq"></a> CFileTime::operator !=

This operator compares two `CFileTime` objects for inequality.

```
bool operator!=(CFileTime ft) const throw();
```

### Parameters

*ft*<br/>
The `CFileTime` object to be compared.

### Return Value

Returns TRUE if the item being compared is not equal to the `CFileTime` object, otherwise FALSE.

## <a name="operator_add"></a> CFileTime::operator +

This operator is used to perform addition on a `CFileTimeSpan` object.

```
CFileTime operator+(CFileTimeSpan span) const throw();
```

### Parameters

*span*<br/>
A `CFileTimeSpan` object.

### Return Value

Returns a `CFileTime` object representing the result of the original time plus a relative time.

## <a name="operator_add_eq"></a> CFileTime::operator +=

This operator is used to perform addition on a `CFileTimeSpan` object and assign the result to the current object.

```
CFileTime& operator+=(CFileTimeSpan span) throw();
```

### Parameters

*span*<br/>
A `CFileTimeSpan` object.

### Return Value

Returns the updated `CFileTime` object, representing the result of the original time plus a relative time.

## <a name="operator_lt"></a> CFileTime::operator &lt;

This operator compares two `CFileTime` objects to determine the lesser.

```
bool operator<(CFileTime ft) const throw();
```

### Parameters

*ft*<br/>
The `CFileTime` object to be compared.

### Return Value

Returns TRUE if the first object is less (earlier in time) than the second, FALSE otherwise.

### Example

[!code-cpp[NVC_MFCFiles#43](../../atl-mfc-shared/reference/codesnippet/cpp/cfiletime-class_3.cpp)]

## <a name="operator_lt_eq"></a> CFileTime::operator &lt;=

This operator compares two `CFileTime` objects to determine equality or the lesser.

```
bool operator<=(CFileTime ft) const throw();
```

### Parameters

*ft*<br/>
The `CFileTime` object to be compared.

### Return Value

Returns TRUE if the first object is less than (earlier in time) or equal to the second, otherwise FALSE.

## <a name="operator_eq"></a> CFileTime::operator =

The assignment operator.

```
CFileTime& operator=(const FILETIME& ft) throw();
```

### Parameters

*ft*<br/>
A `CFileTime` object containing the new time and date.

### Return Value

Returns the updated `CFileTime` object.

## <a name="operator_-_eq"></a> CFileTime::operator -=

This operator is used to perform subtraction on a `CFileTimeSpan` object and assign the result to the current object.

```
CFileTime& operator-=(CFileTimeSpan span) throw();
```

### Parameters

*span*<br/>
A `CFileTimeSpan` object containing the relative time to subtract.

### Return Value

Returns the updated `CFileTime` object.

## <a name="operator_eq_eq"></a> CFileTime::operator ==

This operator compares two `CFileTime` objects for equality.

```
bool operator==(CFileTime ft) const throw();
```

### Parameters

*ft*<br/>
The `CFileTime` object to compare.

### Return Value

Returns TRUE if the objects are equal, otherwise FALSE.

## <a name="operator_gt"></a> CFileTime::operator &gt;

This operator compares two `CFileTime` objects to determine the larger.

```
bool operator>(CFileTime ft) const throw();
```

### Parameters

*ft*<br/>
The `CFileTime` object to be compared.

### Return Value

Returns TRUE if the first object is greater than (later in time) than the second, otherwise FALSE.

## <a name="operator_gt_eq"></a> CFileTime::operator &gt;=

This operator compares two `CFileTime` objects to determine equality or the larger.

```
bool operator>=(CFileTime ft) const throw();
```

### Parameters

*ft*<br/>
The `CFileTime` object to be compared.

### Return Value

Returns TRUE if the first object is greater than (later in time) or equal to the second, otherwise FALSE.

## <a name="second"></a> CFileTime::Second

A static data member storing the number of 100-nanosecond intervals that make up one day.

```
static const ULONGLONG Second = Millisecond* 1000;
```

### Example

See the example for [CFileTime::Millisecond](#millisecond).

## <a name="settime"></a> CFileTime::SetTime

Call this method to set the date and time stored by the `CFileTime` object.

```cpp
void SetTime(ULONGLONG nTime) throw();
```

### Parameters

*nTime*<br/>
The 64-bit value representing the date and time, in either local or Coordinated Universal Time (UTC) format.

## <a name="utctolocal"></a> CFileTime::UTCToLocal

Call this method to convert time based on the Coordinated Universal Time (UTC) to local file time.

```
CFileTime UTCToLocal() const throw();
```

### Return Value

Returns a `CFileTime` object containing the time in local file time format.

### Example

[!code-cpp[NVC_MFCFiles#42](../../atl-mfc-shared/reference/codesnippet/cpp/cfiletime-class_4.cpp)]

## <a name="week"></a> CFileTime::Week

A static data member storing the number of 100-nanosecond intervals that make up one week.

```
static const ULONGLONG Week = Day* 7;
```

### Example

See the example for [CFileTime::Millisecond](#millisecond).

## See also

[FILETIME](/windows/win32/api/minwinbase/ns-minwinbase-filetime)<br/>
[CFileTimeSpan Class](../../atl-mfc-shared/reference/cfiletimespan-class.md)<br/>
[Hierarchy Chart](../../mfc/hierarchy-chart.md)<br/>
[ATL/MFC Shared Classes](../../atl-mfc-shared/atl-mfc-shared-classes.md)
