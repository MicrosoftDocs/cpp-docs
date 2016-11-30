---
title: "CTimeSpan Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "ATL.CTimeSpan"
  - "CTimeSpan"
  - "timespan"
  - "ATL::CTimeSpan"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "elapsed time, CTimeSpan object"
  - "timespan"
  - "time span"
  - "CTimeSpan class"
  - "shared classes, CTimeSpan"
  - "time, elapsed"
ms.assetid: ee1e42f6-1839-477a-8435-fb26ad475140
caps.latest.revision: 17
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
---
# CTimeSpan Class
An amount of time, which is internally stored as the number of seconds in the time span.  
  
## Syntax  
  
```
class CTimeSpan
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CTimeSpan::CTimeSpan](#ctimespan__ctimespan)|Constructs `CTimeSpan` objects in various ways.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CTimeSpan::Format](#ctimespan__format)|Converts a `CTimeSpan` into a formatted string.|  
|[CTimeSpan::GetDays](#ctimespan__getdays)|Returns a value that represents the number of complete days in this `CTimeSpan`.|  
|[CTimeSpan::GetHours](#ctimespan__gethours)|Returns a value that represents the number of hours in the current day (–23 through 23).|  
|[CTimeSpan::GetMinutes](#ctimespan__getminutes)|Returns a value that represents the number of minutes in the current hour (–59 through 59).|  
|[CTimeSpan::GetSeconds](#ctimespan__getseconds)|Returns a value that represents the number of seconds in the current minute (–59 through 59).|  
|[CTimeSpan::GetTimeSpan](#ctimespan__gettimespan)|Returns the value of the `CTimeSpan` object.|  
|[CTimeSpan::GetTotalHours](#ctimespan__gettotalhours)|Returns a value that represents the total number of complete hours in this `CTimeSpan`.|  
|[CTimeSpan::GetTotalMinutes](#ctimespan__gettotalminutes)|Returns a value that represents the total number of complete minutes in this `CTimeSpan`.|  
|[CTimeSpan::GetTotalSeconds](#ctimespan__gettotalseconds)|Returns a value that represents the total number of complete seconds in this `CTimeSpan`.|  
|[CTimeSpan::Serialize64](#ctimespan__serialize64)|Serializes data to or from an archive.|  
  
### Operators  
  
|||  
|-|-|  
|[operator + –](#ctimespan__operator__add_-)|Adds and subtracts `CTimeSpan` objects.|  
|[operator += –=](#ctimespan__operator__add_eq_-_eq)|Adds and subtracts a `CTimeSpan` object to and from this `CTimeSpan`.|  
|[operator == < etc.](#ctimespan_comparison_operators)|Compares two relative time values.|  
  
## Remarks  
 `CTimeSpan` does not have a base class.  
  
 `CTimeSpan` functions convert seconds to various combinations of days, hours, minutes, and seconds.  
  
 The `CTimeSpan` object is stored in a **__time64_t** structure, which is 8 bytes.  
  
 A companion class, [CTime](../../atl-mfc-shared/reference/ctime-class.md), represents an absolute time.  
  
 The `CTime` and `CTimeSpan` classes are not designed for derivation. Because there are no virtual functions, the size of both `CTime` and `CTimeSpan` objects is exactly 8 bytes. Most member functions are inline.  
  
 For more information on using `CTimeSpan`, see the articles [Date and Time](../../atl-mfc-shared/date-and-time.md), and [Time Management](../../c-runtime-library/time-management.md) in the *Run-Time Library Reference*.  
  
## Requirements  
 **Header:** atltime.h  
  
##  <a name="ctimespan_comparison_operators"></a>  CTimeSpan Comparison Operators  
 Comparison operators.  
  
```
bool operator==(CTimeSpan span) const throw();

bool operator!=(CTimeSpan span) const throw();

bool operator<(CTimeSpan span) const throw();

bool operator>(CTimeSpan span) const throw();

bool operator<=(CTimeSpan span) const throw();

bool operator>=(CTimeSpan span) const throw();
```  
  
### Parameters  
 `span`  
  
 The object to compare.  
  
### Return Value  
 These operators compare two relative time values. They return **true** if the condition is true; otherwise **false**.  
  
### Example  
 [!code-cpp[NVC_ATLMFC_Utilities#169](../../atl-mfc-shared/codesnippet/cpp/ctimespan-class_1.cpp)]  
  
##  <a name="ctimespan__ctimespan"></a>  CTimeSpan::CTimeSpan  
 Constructs `CTimeSpan` objects in various ways.  
  
```
CTimeSpan() throw();

CTimeSpan(__time64_t time) throw();

CTimeSpan(LONG lDays,
    int nHours,
    int nMins,
    int nSecs) throw();
```  
  
### Parameters  
 *timeSpanSrc*  
 A `CTimeSpan` object that already exists.  
  
 `time`  
 A **__time64_t** time value, which is the number of seconds in the time span. In Visual C++ versions 6.0 and earlier, `time` was a value of `time_t`. Visual C++ .NET or later silently converts a `time_t` parameter to **__time64_t**.  
  
 `lDays`, `nHours`, `nMins`, `nSecs`  
 Days, hours, minutes, and seconds, respectively.  
  
### Remarks  
 All these constructors create a new `CTimeSpan` object initialized with the specified relative time. Each constructor is described below:  
  
- **CTimeSpan( );** Constructs an uninitialized `CTimeSpan` object.  
  
- **CTimeSpan( const CTimeSpan& );** Constructs a `CTimeSpan` object from another `CTimeSpan` value.  
  
- **CTimeSpan( __time64_t );** Constructs a `CTimeSpan` object from a **__time64_t** type.  
  
- **CTimeSpan( LONG**, **int, int, int );** Constructs a `CTimeSpan` object from components with each component constrained to the following ranges:  
  
    |Component|Range|  
    |---------------|-----------|  
    |`lDays`|0–25,000 (approximately)|  
    |`nHours`|0–23|  
    |`nMins`|0–59|  
    |`nSecs`|0–59|  
  
 Note that the Debug version of the Microsoft Foundation Class Library asserts if one or more of the time-day components is out of range. It is your responsibility to validate the arguments prior to calling.  
  
### Example  
 [!code-cpp[NVC_ATLMFC_Utilities#162](../../atl-mfc-shared/codesnippet/cpp/ctimespan-class_2.cpp)]  
  
##  <a name="ctimespan__format"></a>  CTimeSpan::Format  
 Generates a formatted string that corresponds to this `CTimeSpan`.  
  
```
CString Format(LPCSTR pFormat) const;

CString Format(LPCTSTR pszFormat) const;

CString Format(UINT nID) const;
```  
  
### Parameters  
 `pFormat`, `pszFormat`  
 A formatting string similar to the `printf` formatting string. Formatting codes, preceded by a percent ( `%`) sign, are replaced by the corresponding `CTimeSpan` component. Other characters in the formatting string are copied unchanged to the returned string. The value and meaning of the formatting codes for **Format** are listed below:  
  
- **%D** Total days in this `CTimeSpan`  
  
- **%H** Hours in the current day  
  
- **%M** Minutes in the current hour  
  
- **%S** Seconds in the current minute  
  
- **%%** Percent sign  
  
 `nID`  
 The ID of the string that identifies this format.  
  
### Return Value  
 A `CString` object that contains the formatted time.  
  
### Remarks  
 The Debug version of the library checks the formatting codes and asserts if the code is not in the list above.  
  
### Example  
 [!code-cpp[NVC_ATLMFC_Utilities#163](../../atl-mfc-shared/codesnippet/cpp/ctimespan-class_3.cpp)]  
  
##  <a name="ctimespan__getdays"></a>  CTimeSpan::GetDays  
 Returns a value that represents the number of complete days in this `CTimeSpan`.  
  
```
LONGLONG
GetDays() const throw();
```  
  
### Return Value  
 Returns the number of complete 24-hour days in the time span. This value may be negative if the time span is negative.  
  
### Remarks  
 Note that Daylight Savings Time can cause `GetDays` to return a potentially surprising result. For example, when DST is in effect, **GetDays** reports the number of days between April 1 and May 1 as 29, not 30, because one day in April is shortened by an hour and therefore does not count as a complete day.  
  
### Example  
 [!code-cpp[NVC_ATLMFC_Utilities#164](../../atl-mfc-shared/codesnippet/cpp/ctimespan-class_4.cpp)]  
  
##  <a name="ctimespan__gethours"></a>  CTimeSpan::GetHours  
 Returns a value that represents the number of hours in the current day (–23 through 23).  
  
```
LONG
GetHours() const throw();
```  
  
### Return Value  
 Returns the number of hours in the current day. The range is –23 through 23.  
  
### Example  
 [!code-cpp[NVC_ATLMFC_Utilities#165](../../atl-mfc-shared/codesnippet/cpp/ctimespan-class_5.cpp)]  
  
##  <a name="ctimespan__getminutes"></a>  CTimeSpan::GetMinutes  
 Returns a value that represents the number of minutes in the current hour (–59 through 59).  
  
```
LONG
GetMinutes() const throw();
```  
  
### Return Value  
 Returns the number of minutes in the current hour. The range is –59 through 59.  
  
### Example  
 See the example for [GetHours](#ctimespan__gethours).  
  
##  <a name="ctimespan__getseconds"></a>  CTimeSpan::GetSeconds  
 Returns a value that represents the number of seconds in the current minute (–59 through 59).  
  
```
LONG
GetSeconds() const throw();
```  
  
### Return Value  
 Returns the number of seconds in the current minute. The range is –59 through 59.  
  
### Example  
 See the example for [GetHours](#ctimespan__gethours).  
  
##  <a name="ctimespan__gettimespan"></a>  CTimeSpan::GetTimeSpan  
 Returns the value of the `CTimeSpan` object.  
  
```
_                _time64_t GetTimeSpan() const throw();
```  
  
### Return Value  
 Returns the current value of the `CTimeSpan` object.  
  
##  <a name="ctimespan__gettotalhours"></a>  CTimeSpan::GetTotalHours  
 Returns a value that represents the total number of complete hours in this `CTimeSpan`.  
  
```
LONGLONG
GetTotalHours() const throw();
```  
  
### Return Value  
 Returns the total number of complete hours in this `CTimeSpan`.  
  
### Example  
 [!code-cpp[NVC_ATLMFC_Utilities#166](../../atl-mfc-shared/codesnippet/cpp/ctimespan-class_6.cpp)]  
  
##  <a name="ctimespan__gettotalminutes"></a>  CTimeSpan::GetTotalMinutes  
 Returns a value that represents the total number of complete minutes in this `CTimeSpan`.  
  
```
LONGLONG
GetTotalMinutes() const throw();
```  
  
### Return Value  
 Returns the total number of complete minutes in this `CTimeSpan`.  
  
### Example  
 See the example for [GetTotalHours](#ctimespan__gettotalhours).  
  
##  <a name="ctimespan__gettotalseconds"></a>  CTimeSpan::GetTotalSeconds  
 Returns a value that represents the total number of complete seconds in this `CTimeSpan`.  
  
```
LONGLONG
GetTotalSeconds() const throw();
```  
  
### Return Value  
 Returns the total number of complete seconds in this `CTimeSpan`.  
  
### Example  
 See the example for [GetTotalHours](#ctimespan__gettotalhours).  
  
##  <a name="ctimespan__operator__add_-"></a>  CTimeSpan::operator +, -  
 Adds and subtracts `CTimeSpan` objects.  
  
```
CTimeSpan operator+(CTimeSpan span) const throw();

CTimeSpan operator-(CTimeSpan span) const throw();
```  
  
### Parameters  
 `span`  
 The value to add to the `CTimeSpan` object.  
  
### Return Value  
 A `CTimeSpan` object representing the result of the operation.  
  
### Remarks  
 These two operators allow you to add and subtract `CTimeSpan` objects to and from each other.  
  
### Example  
 [!code-cpp[NVC_ATLMFC_Utilities#167](../../atl-mfc-shared/codesnippet/cpp/ctimespan-class_7.cpp)]  
  
##  <a name="ctimespan__operator__add_eq_-_eq"></a>  CTimeSpan::operator +=, -=  
 Adds and subtracts a `CTimeSpan` object to and from this `CTimeSpan`.  
  
```
CTimeSpan& operator+=(CTimeSpan span) throw();

CTimeSpan& operator-=(CTimeSpan span) throw();
```  
  
### Parameters  
 `span`  
 The value to add to the `CTimeSpan` object.  
  
### Return Value  
 The updated `CTimeSpan` object.  
  
### Remarks  
 These operators allow you to add and subtract a `CTimeSpan` object to and from this `CTimeSpan`.  
  
### Example  
 [!code-cpp[NVC_ATLMFC_Utilities#168](../../atl-mfc-shared/codesnippet/cpp/ctimespan-class_8.cpp)]  
  
##  <a name="ctimespan__serialize64"></a>  CTimeSpan::Serialize64  
  
> [!NOTE]
>  This method is only available in MFC projects.  
  
 Serializes the data associated with the member variable to or from an archive.  
  
```
CArchive& Serialize64(CArchive& ar);
```  
  
### Parameters  
 `ar`  
 The `CArchive` object that you want to update.  
  
### Return Value  
 The updated `CArchive` object.  
  
## See Also  
 [asctime, _wasctime](../../c-runtime-library/reference/asctime-wasctime.md)   
 [_ftime, _ftime32, _ftime64](../../c-runtime-library/reference/ftime-ftime32-ftime64.md)   
 [gmtime, _gmtime32, _gmtime64](../../c-runtime-library/reference/gmtime-gmtime32-gmtime64.md)   
 [localtime, _localtime32, _localtime64](../../c-runtime-library/reference/localtime-localtime32-localtime64.md)   
 [strftime, wcsftime, _strftime_l, _wcsftime_l](../../c-runtime-library/reference/strftime-wcsftime-strftime-l-wcsftime-l.md)   
 [time, _time32, _time64](../../c-runtime-library/reference/time-time32-time64.md)   
 [Hierarchy Chart](../../mfc/hierarchy-chart.md)   
 [ATL/MFC Shared Classes](../../atl-mfc-shared/atl-mfc-shared-classes.md)


