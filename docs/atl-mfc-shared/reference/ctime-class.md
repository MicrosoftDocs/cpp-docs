---
title: "CTime Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "ATL.CTime"
  - "CTime"
  - "ATL::CTime"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CTime class"
  - "shared classes, CTime"
ms.assetid: 0a299544-485b-48dc-9d3c-fdc30f57d612
caps.latest.revision: 30
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
# CTime Class
Represents an absolute time and date.  
  
## Syntax  
  
```  
class CTime  
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CTime::CTime](#ctime__ctime)|Constructs `CTime` objects in various ways.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CTime::Format](#ctime__format)|Converts a `CTime` object into a formatted string — based on the local time zone.|  
|[CTime::FormatGmt](#ctime__formatgmt)|Converts a `CTime` object into a formatted string — based on UTC.|  
|[CTime::GetAsDBTIMESTAMP](#ctime__getasdbtimestamp)|Converts the time information stored in the `CTime` object to a Win32-compatible DBTIMESTAMP structure.|  
|[CTime::GetAsSystemTime](#ctime__getassystemtime)|Converts the time information stored in the `CTime` object to a Win32-compatible [SYSTEMTIME](http://msdn.microsoft.com/library/windows/desktop/ms724950) structure.|  
|[CTime::GetCurrentTime](#ctime__getcurrenttime)|Creates a `CTime` object that represents the current time (static member function).|  
|[CTime::GetDay](#ctime__getday)|Returns the day represent by the `CTime` object.|  
|[CTime::GetDayOfWeek](#ctime__getdayofweek)|Returns the day of the week represented by the `CTime` object.|  
|[CTime::GetGmtTm](#ctime__getgmttm)|Breaks down a `CTime` object into components — based on UTC.|  
|[CTime::GetHour](#ctime__gethour)|Returns the hour represented by the `CTime` object.|  
|[CTime::GetLocalTm](#ctime__getlocaltm)|Breaks down a `CTime` object into components — based on the local time zone.|  
|[CTime::GetMinute](#ctime__getminute)|Returns the minute represented by the `CTime` object.|  
|[CTime::GetMonth](#ctime__getmonth)|Returns the month represented by the `CTime` object.|  
|[CTime::GetSecond](#ctime__getsecond)|Returns the second represented by the `CTime` object.|  
|[CTime::GetTime](#ctime__gettime)|Returns a **__time64_t** value for the given `CTime` object.|  
|[CTime::GetYear](#ctime__getyear)|Returns the year represented by the `CTime` object.|  
|[CTime::Serialize64](#ctime__serialize64)|Serializes data to or from an archive.|  
  
### Operators  
  
|||  
|-|-|  
|[operator + –](#ctime__operator__add_-)|These operators add and subtract `CTimeSpan` and `CTime` objects.|  
|[operator +=, –=](#ctime__operator__add_eq_-_eq)|These operators add and subtract a `CTimeSpan` object to and from this `CTime` object.|  
|[operator =](#ctime__operator__eq)|The assignment operator.|  
|[operator ==, < , etc.](#ctime_comparison_operators)|Comparison operators.|  
  
## Remarks  
 `CTime` does not have a base class.  
  
 `CTime` values are based on coordinated universal time (UTC), which is equivalent to Coordinated Universal time (Greenwich Mean Time, GMT). See [Time Management](../../c-runtime-library/time-management.md) for information about how the time zone is determined.  
  
 When you create a `CTime` object, set the `nDST` parameter to 0 to indicate that standard time is in effect, or to a value larger than 0 to indicate that daylight saving time is in effect, or to a value less than zero to have the C run-time library code compute whether standard time or daylight saving time is in effect. `tm_isdst` is a required field. If not set, its value is undefined and the return value from [mktime](../../c-runtime-library/reference/mktime-mktime32-mktime64.md) is unpredictable. If `timeptr` points to a tm structure returned by a previous call to [asctime_s](../../c-runtime-library/reference/asctime-s-wasctime-s.md), [_gmtime_s](../../c-runtime-library/reference/gmtime-s-gmtime32-s-gmtime64-s.md), or [localtime_s](../../c-runtime-library/reference/localtime-s-localtime32-s-localtime64-s.md), the `tm_isdst` field contains the correct value.  
  
 A companion class, [CTimeSpan](../../atl-mfc-shared/reference/ctimespan-class.md), represents a time interval.  
  
 The `CTime` and `CTimeSpan` classes are not designed for derivation. Because there are no virtual functions, the size of `CTime` and `CTimeSpan` objects is exactly 8 bytes. Most member functions are inline.  
  
> [!NOTE]
>  The upper date limit is 12/31/3000. The lower limit is 1/1/1970 12:00:00 AM GMT.  
  
 For more information about using `CTime`, see the articles [Date and Time](../../atl-mfc-shared/date-and-time.md), and [Time Management](../../c-runtime-library/time-management.md) in the Run-Time Library Reference.  
  
> [!NOTE]
>  The `CTime` structure changed from MFC 7.1 to MFC 8.0. If you serialize a `CTime` structure by using the `operator <<` under MFC 8.0 or a later version, the resulting file will not be readable on older versions of MFC.  
  
## Requirements  
 **Header:** atltime.h  
  
##  <a name="ctime_comparison_operators"></a>  CTime Comparison Operators  
 Comparison operators.  
  
```  
bool operator==(CTime time) const throw();

 
    bool operator!=(CTime time) const throw();

 
    bool operator<(CTime time) const throw();

 
    bool operator>(CTime time) const throw();

 
    bool operator<=(CTime time) const throw();

 
    bool operator>=(CTime time) const throw();

 
```  
  
### Parameters  
 `time`  
 The `CTime` object to be compared.  
  
### Return Value  
 These operators compare two absolute times and return **true** if the condition is true; otherwise **false**.  
  
### Example  
 [!code-cpp[NVC_ATLMFC_Utilities#161](../../atl-mfc-shared/codesnippet/cpp/ctime-class_1.cpp)]  
  
##  <a name="ctime__ctime"></a>  CTime::CTime  
 Creates a new `CTime` object initialized with the specified time.  
  
```  
CTime() throw();

 
    CTime(
 __time64_t  time) throw();

 
    CTime(
 int  nYear,  
    int nMonth,  
    int nDay,  
    int nHour,  
    int nMin,  
    int nSec,  
    int nDST = -1);

 
    CTime(
 WORD  wDosDate,  
    WORD wDosTime,  
    int nDST = -1);

 
    CTime(
 const SYSTEMTIME& st,  
    int nDST = - 1) throw();

 
    CTime(
 const FILETIME& ft,  
    int nDST = - 1);

 
    CTime(
 const DBTIMESTAMP& dbts,  
    int nDST = -1) throw();
```  
  
### Parameters  
 `timeSrc`  
 Indicates a `CTime` object that already exists.  
  
 `time`  
 A **__time64_t** time value, which is the number of seconds after January 1, 1970 UTC. Note that this will be adjusted to your local time. For example, if you are in New York and create a `CTime` object by passing a parameter of 0, [CTime::GetMonth](#ctime__getmonth) will return 12.  
  
 In Visual C++ versions 6.0 and earlier, `time` was a value of `time_t`. Visual C++ .NET and later converts a `time_t` parameter to **__time64_t**.  
  
 `nYear`, `nMonth`, `nDay`, `nHour`, `nMin`, `nSec`  
 Indicates the date and time values to be copied into the new `CTime` object.  
  
 `nDST`  
 Indicates whether daylight savings time is in effect. Can have one of three values:  
  
- `nDST` set to 0Standard time is in effect.  
  
- `nDST` set to a value greater than 0Daylight savings time is in effect.  
  
- `nDST` set to a value less than 0The default. Automatically computes whether standard time or daylight savings time is in effect.  
  
 `wDosDate`, `wDosTime`  
 MS-DOS date and time values to be converted to a date/time value and copied into the new `CTime` object.  
  
 `st`  
 A [SYSTEMTIME](https://www.microsoftonedoc.com/#/organizations/e6f6a65cf14f462597b64ac058dbe1d0/projects/3fedad16-eaf1-41a6-8f96-0c1949c68f32/containers/a3daf831-1c5f-4bbe-964d-503870caf874/tocpaths/d6609fff-1931-4818-8a26-f042630af0b0/locales/en-us) structure to be converted to a date/time value and copied into the new `CTime` object.  
  
 `ft`  
 A [FILETIME](https://www.microsoftonedoc.com/#/organizations/e6f6a65cf14f462597b64ac058dbe1d0/projects/3fedad16-eaf1-41a6-8f96-0c1949c68f32/containers/a3daf831-1c5f-4bbe-964d-503870caf874/tocpaths/979ce746-dc17-4147-89f8-41d05c5fcc5f/locales/en-us) structure to be converted to a date/time value and copied into the new `CTime` object.  
  
 dbts  
 A reference to a DBTIMESTAMP structure containing the current local time.  
  
### Remarks  
 Each constructor is described below:  
  
- **CTime( );**Constructs an uninitialized `CTime` object. This constructor allows you to define `CTime` object arrays. You should initialize such arrays with valid times before using.  
  
- **CTime( const CTime& );**Constructs a `CTime` object from another `CTime` value.  
  
- **CTime( __time64_t );**Constructs a `CTime` object from a **__time64_t** type. This constructor expects a UTC time and converts the result to a local time before storing the result.  
  
- **CTime( int, int, ...);**Constructs a `CTime` object from local time components with each component constrained to the following ranges:  
  
    |Component|Range|  
    |---------------|-----------|  
    |`nYear`|1970–3000|  
    |`nMonth`|1–12|  
    |`nDay`|1–31|  
    |`nHour`|0-23|  
    |`nMin`|0-59|  
    |`nSec`|0-59|  
  
     This constructor makes the appropriate conversion to UTC. The Debug version of the Microsoft Foundation Class Library asserts if one or more of the time components are out of range. You must validate the arguments before calling. This constructor expects a local time.  
  
- `CTime`( **WORD, WORD** ) **;**Constructs a `CTime` object from the specified MS-DOS date and time values. This constructor expects a local time.  
  
- `CTime`( **const SYSTEMTIME&** ) **;**Constructs a `CTime` object from a `SYSTEMTIME` structure. This constructor expects a local time.  
  
- `CTime`( **const FILETIME&** ) **;**Constructs a `CTime` object from a `FILETIME` structure. You most likely will not use `CTime``FILETIME` initialization directly. If you use a `CFile` object to manipulate a file, `CFile::GetStatus` retrieves the file time stamp for you through a `CTime` object initialized with a `FILETIME` structure. This constructor assumes a time based on UTC and automatically converts the value to local time before storing the result.  
  
    > [!NOTE]
    >  The constructor using **DBTIMESTAMP** parameter is only available when OLEDB.h is included.  
  
 For more information, see the [SYSTEMTIME](http://msdn.microsoft.com/library/windows/desktop/ms724950) and [FILETIME](http://msdn.microsoft.com/library/windows/desktop/ms724284) structure in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)]. Also see the [MS-DOS Date and Time](http://msdn.microsoft.com/library/windows/desktop/ms724503) entry in the [!INCLUDE[winsdkshort](../../atl-mfc-shared/reference/includes/winsdkshort_md.md)].  
  
### Example  
 [!code-cpp[NVC_ATLMFC_Utilities#148](../../atl-mfc-shared/codesnippet/cpp/ctime-class_2.cpp)]  
  
##  <a name="ctime__format"></a>  CTime::Format  
 Call this member function to create a formatted representation of the date-time value.  
  
```  
CString Format(LPCTSTR pszFormat) const;

 
CString Format(UINT nFormatID) const;

 
```  
  
### Parameters  
 `pszFormat`  
 A formatting string similar to the `printf` formatting string. Formatting codes, preceded by a percent ( `%`) sign, are replaced by the corresponding `CTime` component. Other characters in the formatting string are copied unchanged to the returned string. See the run-time function [strftime](../../c-runtime-library/reference/strftime-wcsftime-strftime-l-wcsftime-l.md) for a list of formatting codes.  
  
 `nFormatID`  
 The ID of the string that identifies this format.  
  
### Return Value  
 A [CString](../../atl-mfc-shared/reference/cstringt-class.md) that contains the formatted time.  
  
### Remarks  
 If the status of this `CTime` object is null, the return value is an empty string.  
  
 This method throws an exception if the date-time value to format does not range from midnight, January 1, 1970 through December 31, 3000 Universal Coordinated Time (UTC).  
  
### Example  
 [!code-cpp[NVC_ATLMFC_Utilities#149](../../atl-mfc-shared/codesnippet/cpp/ctime-class_3.cpp)]  
  
##  <a name="ctime__formatgmt"></a>  CTime::FormatGmt  
 Generates a formatted string that corresponds to this `CTime` object.  
  
```  
CString FormatGmt(LPCTSTR pszFormat) const;

 
CString FormatGmt(UINT nFormatID) const;

 
```  
  
### Parameters  
 `pszFormat`  
 Specifies a formatting string similar to the `printf` formatting string. See the run-time function [strftime](../../c-runtime-library/reference/strftime-wcsftime-strftime-l-wcsftime-l.md) for details.  
  
 `nFormatID`  
 The ID of the string that identifies this format.  
  
### Return Value  
 A [CString](../../atl-mfc-shared/reference/cstringt-class.md) that contains the formatted time.  
  
### Remarks  
 The time value is not converted and thus reflects UTC.  
  
 This method throws an exception if the date-time value to format does not range from midnight, January 1, 1970 through December 31, 3000 Universal Coordinated Time (UTC).  
  
### Example  
 See the example for [CTime::Format](#ctime__format).  
  
##  <a name="ctime__getasdbtimestamp"></a>  CTime::GetAsDBTIMESTAMP  
 Call this member function to convert the time information stored in the `CTime` object to a Win32–compatible DBTIMESTAMP structure.  
  
```  
bool GetAsDBTIMESTAMP(DBTIMESTAMP& dbts) const throw();
```  
  
### Parameters  
 `dbts`  
 A reference to a DBTIMESTAMP structure containing the current local time.  
  
### Return Value  
 Nonzero if successful; otherwise 0.  
  
### Remarks  
 Stores the resulting time in the referenced `dbts` structure. The **DBTIMESTAMP** data structure initialized by this function will have its **fraction** member set to zero.  
  
### Example  
 [!code-cpp[NVC_ATLMFC_Utilities#150](../../atl-mfc-shared/codesnippet/cpp/ctime-class_4.cpp)]  
  
##  <a name="ctime__getassystemtime"></a>  CTime::GetAsSystemTime  
 Call this member function to convert the time information stored in the `CTime` object to a Win32–compatible [SYSTEMTIME](http://msdn.microsoft.com/library/windows/desktop/ms724950) structure.  
  
```  
bool GetAsSystemTime(SYSTEMTIME& st) const throw();
```  
  
### Parameters  
 *timeDest*  
 A reference to a [SYSTEMTIME](http://msdn.microsoft.com/library/windows/desktop/ms724950) structure that will hold the converted date/time value of the `CTime` object.  
  
### Return Value  
 True if successful; otherwise false.  
  
### Remarks  
 `GetAsSystemTime` stores the resulting time in the referenced *timeDest* structure. The `SYSTEMTIME` data structure initialized by this function will have its **wMilliseconds** member set to zero.  
  
### Example  
 [!code-cpp[NVC_ATLMFC_Utilities#151](../../atl-mfc-shared/codesnippet/cpp/ctime-class_5.cpp)]  
  
##  <a name="ctime__getcurrenttime"></a>  CTime::GetCurrentTime  
 Returns a `CTime` object that represents the current time.  
  
```  
static  
    CTime 
    WINAPI 
    GetCurrentTime() throw();
```  
  
### Remarks  
 Returns the current system date and time in Coordinated Universal Time (UTC).  
  
### Example  
 [!code-cpp[NVC_ATLMFC_Utilities#152](../../atl-mfc-shared/codesnippet/cpp/ctime-class_6.cpp)]  
  
##  <a name="ctime__getday"></a>  CTime::GetDay  
 Returns the day represent by the `CTime` object.  
  
```  
int  
    GetDay() const throw();

 
```  
  
### Return Value  
 Returns the day of the month, based on local time, in the range 1 through 31.  
  
### Remarks  
 This function calls `GetLocalTm`, which uses an internal, statically allocated buffer. The data in this buffer is overwritten because of calls to other `CTime` member functions.  
  
### Example  
 [!code-cpp[NVC_ATLMFC_Utilities#153](../../atl-mfc-shared/codesnippet/cpp/ctime-class_7.cpp)]  
  
##  <a name="ctime__getdayofweek"></a>  CTime::GetDayOfWeek  
 Returns the day of the week represented by the `CTime` object.  
  
```  
int  
    GetDayOfWeek() const throw();

 
```  
  
### Return Value  
 Returns the day of the week based on local time; 1 = Sunday, 2 = Monday, to 7 = Saturday.  
  
### Remarks  
 This function calls `GetLocalTm`, which uses an internal statically allocated buffer. The data in this buffer is overwritten because of calls to other `CTime` member functions.  
  
### Example  
 [!code-cpp[NVC_ATLMFC_Utilities#154](../../atl-mfc-shared/codesnippet/cpp/ctime-class_8.cpp)]  
  
##  <a name="ctime__getgmttm"></a>  CTime::GetGmtTm  
 Gets a **struct tm** that contains a decomposition of the time contained in this `CTime` object.  
  
```  
struct  
    tm* 
    GetGmtTm(struct   
    tm* ptm)  
    const;

 
```  
  
### Parameters  
 `ptm`  
 Points to a buffer that will receive the time data. If this pointer is **NULL**, an exception is thrown.  
  
### Return Value  
 A pointer to a filled-in **struct tm** as defined in the include file TIME.H. See [gmtime, _gmtime32, _gmtime64](../../c-runtime-library/reference/gmtime-gmtime32-gmtime64.md) for the structure layout.  
  
### Remarks  
 `GetGmtTm` returns UTC.  
  
 `ptm` cannot be `NULL`. If you want to revert to the old behavior, in which `ptm` could be `NULL` to indicate that an internal, statically allocated buffer should be used, then undefine `_SECURE_ATL`.  
  
### Example  
 [!code-cpp[NVC_ATLMFC_Utilities#155](../../atl-mfc-shared/codesnippet/cpp/ctime-class_9.cpp)]  
  
##  <a name="ctime__gethour"></a>  CTime::GetHour  
 Returns the hour represented by the `CTime` object.  
  
```  
int  
    GetHour() const throw();

 
```  
  
### Return Value  
 Returns the hour, based on local time, in the range 0 through 23.  
  
### Remarks  
 This function calls `GetLocalTm`, which uses an internal statically allocated buffer. The data in this buffer is overwritten because of calls to other `CTime` member functions.  
  
### Example  
 [!code-cpp[NVC_ATLMFC_Utilities#156](../../atl-mfc-shared/codesnippet/cpp/ctime-class_10.cpp)]  
  
##  <a name="ctime__getlocaltm"></a>  CTime::GetLocalTm  
 Gets a **struct tm** containing a decomposition of the time contained in this `CTime` object.  
  
```  
struct  
    tm* 
    GetLocalTm(struct   
    tm* ptm)  
    const;

 
```  
  
### Parameters  
 `ptm`  
 Points to a buffer that will receive the time data. If this pointer is **NULL**, an exception is thrown.  
  
### Return Value  
 A pointer to a filled-in **struct tm** as defined in the include file TIME.H. See [gmtime, _gmtime32, _gmtime64](../../c-runtime-library/reference/gmtime-gmtime32-gmtime64.md) for the structure layout.  
  
### Remarks  
 `GetLocalTm` returns local time.  
  
 `ptm` cannot be `NULL`. If you want to revert to the old behavior, in which `ptm` could be `NULL` to indicate that an internal, statically allocated buffer should be used, then undefine `_SECURE_ATL`.  
  
### Example  
 [!code-cpp[NVC_ATLMFC_Utilities#157](../../atl-mfc-shared/codesnippet/cpp/ctime-class_11.cpp)]  
  
##  <a name="ctime__getminute"></a>  CTime::GetMinute  
 Returns the minute represented by the `CTime` object.  
  
```  
int  
    GetMinute() const throw();

 
```  
  
### Return Value  
 Returns the minute, based on local time, in the range 0 through 59.  
  
### Remarks  
 This function calls `GetLocalTm`, which uses an internal statically allocated buffer. The data in this buffer is overwritten because of calls to other `CTime` member functions.  
  
### Example  
 See the example for [GetHour](#ctime__gethour).  
  
##  <a name="ctime__getmonth"></a>  CTime::GetMonth  
 Returns the month represented by the `CTime` object.  
  
```  
int  
    GetMonth() const throw();

 
```  
  
### Return Value  
 Returns the month, based on local time, in the range 1 through 12 (1 = January).  
  
### Remarks  
 This function calls `GetLocalTm`, which uses an internal statically allocated buffer. The data in this buffer is overwritten because of calls to other `CTime` member functions.  
  
### Example  
 See the example for [GetDay](#ctime__getday).  
  
##  <a name="ctime__getsecond"></a>  CTime::GetSecond  
 Returns the second represented by the `CTime` object.  
  
```  
int  
    GetSecond() const throw();

 
```  
  
### Return Value  
 Returns the second, based on local time, in the range 0 through 59.  
  
### Remarks  
 This function calls `GetLocalTm`, which uses an internal statically allocated buffer. The data in this buffer is overwritten because of calls to other `CTime` member functions.  
  
### Example  
 See the example for [GetHour](#ctime__gethour).  
  
##  <a name="ctime__gettime"></a>  CTime::GetTime  
 Returns a **__time64_t** value for the given `CTime` object.  
  
```  
__time64_t  
    GetTime() const throw();

 
```  
  
### Return Value  
 **GetTime** will return the number of seconds between the current `CTime` object and January 1, 1970.  
  
### Example  
 [!code-cpp[NVC_ATLMFC_Utilities#158](../../atl-mfc-shared/codesnippet/cpp/ctime-class_12.cpp)]  
  
##  <a name="ctime__getyear"></a>  CTime::GetYear  
 Returns the year represented by the `CTime` object.  
  
```  
int GetYear();
```  
  
### Return Value  
 Returns the year, based on local time, in the range January 1,1970, to January 18, 2038 (inclusive).  
  
### Remarks  
 This function calls `GetLocalTm`, which uses an internal statically allocated buffer. The data in this buffer is overwritten because of calls to other `CTime` member functions.  
  
### Example  
 See the example for [GetDay](#ctime__getday).  
  
##  <a name="ctime__operator__eq"></a>  CTime::operator =  
 The assignment operator.  
  
```  
CTime& operator=(__time64_t time) throw();
```  
  
### Parameters  
 `time`  
 The new date/time value.  
  
### Return Value  
 The updated `CTime` object.  
  
### Remarks  
 This overloaded assignment operator copies the source time into this `CTime` object. The internal time storage in a `CTime` object is independent of time zone. Time zone conversion is not necessary during assignment.  
  
##  <a name="ctime__operator__add_-"></a>  CTime::operator +, -  
 These operators add and subtract `CTimeSpan` and `CTime` objects.  
  
```  
CTime operator+(CTimeSpan timeSpan) const throw();

 
    CTime operator-(CTimeSpan timeSpan) const throw();

 
    CTimeSpan operator-(CTime time) const throw();

 
```  
  
### Parameters  
 *timeSpan*  
 The `CTimeSpan` object to be added or subtracted.  
  
 `time`  
 The `CTime` object to be subtracted.  
  
### Return Value  
 A `CTime` or `CTimeSpan` object representing the result of the operation.  
  
### Remarks  
 `CTime` objects represent absolute time, `CTimeSpan` objects represent relative time. The first two operators allow you to add and subtract `CTimeSpan` objects to and from `CTime` objects. The third operator allows you to subtract one `CTime` object from another to yield a `CTimeSpan` object.  
  
### Example  
 [!code-cpp[NVC_ATLMFC_Utilities#159](../../atl-mfc-shared/codesnippet/cpp/ctime-class_13.cpp)]  
  
##  <a name="ctime__operator__add_eq_-_eq"></a>  CTime::operator +=, -=  
 These operators add and subtract a `CTimeSpan` object to and from this `CTime` object.  
  
```  
CTime& operator+=(CTimeSpan span) throw();

 
    CTime& operator-=(CTimeSpan span) throw();
```  
  
### Parameters  
 `span`  
 The `CTimeSpan` object to be added or subtracted.  
  
### Return Value  
 The updated `CTime` object.  
  
### Remarks  
 These operators allow you to add and subtract a `CTimeSpan` object to and from this `CTime` object.  
  
### Example  
 [!code-cpp[NVC_ATLMFC_Utilities#160](../../atl-mfc-shared/codesnippet/cpp/ctime-class_14.cpp)]  
  
##  <a name="ctime__serialize64"></a>  CTime::Serialize64  
  
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
 [asctime_s, _wasctime_s](../../c-runtime-library/reference/asctime-s-wasctime-s.md)   
 [_ftime_s, _ftime32_s, _ftime64_s](../../c-runtime-library/reference/ftime-s-ftime32-s-ftime64-s.md)   
 [gmtime_s, _gmtime32_s, _gmtime64_s](../../c-runtime-library/reference/gmtime-s-gmtime32-s-gmtime64-s.md)   
 [localtime_s, _localtime32_s, _localtime64_s](../../c-runtime-library/reference/localtime-s-localtime32-s-localtime64-s.md)   
 [strftime, wcsftime, _strftime_l, _wcsftime_l](../../c-runtime-library/reference/strftime-wcsftime-strftime-l-wcsftime-l.md)   
 [time, _time32, _time64](../../c-runtime-library/reference/time-time32-time64.md)   
 [CTimeSpan Class](../../atl-mfc-shared/reference/ctimespan-class.md)   
 [Hierarchy Chart](../../mfc/hierarchy-chart.md)   
 [ATL/MFC Shared Classes](../../atl-mfc-shared/atl-mfc-shared-classes.md)


