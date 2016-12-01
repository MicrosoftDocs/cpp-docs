---
title: "COleDateTime Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "COleDateTime"
  - "ATL.COleDateTime"
  - "ATL::COleDateTime"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "shared classes, COleDateTime"
  - "time-only values"
  - "Date data type, MFC encapsulation of"
  - "COleDateTime class"
  - "dates, handling in MFC"
  - "time, handling in MFC"
ms.assetid: e718f294-16ec-4649-88b6-a4dbae5178fb
caps.latest.revision: 34
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
# COleDateTime Class
Encapsulates the `DATE` data type that is used in OLE automation.  
  
## Syntax  
  
```
class COleDateTime
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[COleDateTime::COleDateTime](#coledatetime__coledatetime)|Constructs a `COleDateTime` object.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[COleDateTime::Format](#coledatetime__format)|Generates a formatted string representation of a `COleDateTime` object.|  
|[COleDateTime::GetAsDBTIMESTAMP](#coledatetime__getasdbtimestamp)|Call this method to obtain the time in the `COleDateTime` object as a **DBTIMESTAMP** data structure.|  
|[COleDateTime::GetAsSystemTime](#coledatetime__getassystemtime)|Call this method to obtain the time in the `COleDateTime` object as a [SYSTEMTIME](http://msdn.microsoft.com/library/windows/desktop/ms724950) data structure.|  
|[COleDateTime::GetAsUDATE](#coledatetime__getasudate)|Call this method to obtain the time in the `COleDateTime` as a **UDATE** data structure.|  
|[COleDateTime::GetCurrentTime](#coledatetime__getcurrenttime)|Creates a `COleDateTime` object that represents the current time (static member function).|  
|[COleDateTime::GetDay](#coledatetime__getday)|Returns the day this `COleDateTime` object represents (1 – 31).|  
|[COleDateTime::GetDayOfWeek](#coledatetime__getdayofweek)|Returns the day of the week this `COleDateTime` object represents (Sunday = 1).|  
|[COleDateTime::GetDayOfYear](#coledatetime__getdayofyear)|Returns the day of the year this `COleDateTime` object represents (Jan 1 = 1).|  
|[COleDateTime::GetHour](#coledatetime__gethour)|Returns the hour this `COleDateTime` object represents (0 – 23).|  
|[COleDateTime::GetMinute](#coledatetime__getminute)|Returns the minute this `COleDateTime` object represents (0 – 59).|  
|[COleDateTime::GetMonth](#coledatetime__getmonth)|Returns the month this `COleDateTime` object represents (1 – 12).|  
|[COleDateTime::GetSecond](#coledatetime__getsecond)|Returns the second this `COleDateTime` object represents (0 – 59).|  
|[COleDateTime::GetStatus](#coledatetime__getstatus)|Gets the status (validity) of this `COleDateTime` object.|  
|[COleDateTime::GetYear](#coledatetime__getyear)|Returns the year this `COleDateTime` object represents.|  
|[COleDateTime::ParseDateTime](#coledatetime__parsedatetime)|Reads a date/time value from a string and sets the value of `COleDateTime`.|  
|[COleDateTime::SetDate](#coledatetime__setdate)|Sets the value of this `COleDateTime` object to the specified date-only value.|  
|[COleDateTime::SetDateTime](#coledatetime__setdatetime)|Sets the value of this `COleDateTime` object to the specified date/time value.|  
|[COleDateTime::SetStatus](#coledatetime__setstatus)|Sets the status (validity) of this `COleDateTime` object.|  
|[COleDateTime::SetTime](#coledatetime__settime)|Sets the value of this `COleDateTime` object to the specified time-only value.|  
  
### Public Operators  

|Name|Description|  
|----------|-----------------|  
|[COleDateTime::operator ==, COleDateTime::operator <, etc.](#coledatetime_relational_operators)|Compare two `COleDateTime` values.|  
|[COleDateTime::operator +, COleDateTime::operator -](#coledatetime__operator__add_-)|Add and subtract `COleDateTime` values.|  
|[COleDateTime::operator +=, COleDateTime::operator -=](#coledatetime__operator__add_eq_-_eq)|Add and subtract a `COleDateTime` value from this `COleDateTime` object.|  
|[COleDateTime::operator =](#coledatetime__operator__eq)|Copies a `COleDateTime` value.|  
|[COleDateTime::operator DATE, COleDateTime::operator Date*](#coledatetime__operator_date)|Converts a `COleDateTime` value into a `DATE` or a `DATE*`.|  
  
### Public Data Members  
  
|Name|Description|  
|----------|-----------------|  
|[COleDateTime::m_dt](#coledatetime__m_dt)|Contains the underlying **DATE** for this `COleDateTime` object.|  
|[COleDateTime::m_status](#coledatetime__m_status)|Contains the status of this `COleDateTime` object.|  
  
## Remarks  
 `COleDateTime` does not have a base class.  
  
 It is one of the possible types for the [VARIANT](http://msdn.microsoft.com/en-us/e305240e-9e11-4006-98cc-26f4932d2118) data type of OLE automation. A `COleDateTime` value represents an absolute date and time value.  
  
 The `DATE` type is implemented as a floating-point value. Days are measured from December 30, 1899, at midnight. The following table shows some dates and their associated values:  
  
|Date|Value|  
|----------|-----------|  
|December 29, 1899, midnight|-1.0|  
|December 29, 1899, 6 A.M|-1.25|  
|December 30, 1899, midnight|0.0|  
|December 31, 1899, midnight|1.0|  
|January 1, 1900, 6 A.M.|2.25|  
  
> [!CAUTION]
>  Note in the table above that although day values become negative before midnight on December 30, 1899, time-of-day values do not. For example, 6:00 AM is always represented by a fractional value 0.25 regardless of whether the integer representing the day is positive (after December 30, 1899) or negative (before December 30, 1899). This means that a simple floating point comparison would erroneously sort a `COleDateTime` representing 6:00 AM on 12/29/1899 as **later** than one representing 7:00 AM on the same day.  
  
 The `COleDateTime` class handles dates from January 1, 100, through December 31, 9999. The `COleDateTime` class uses the Gregorian calendar; it does not support Julian dates. `COleDateTime` ignores Daylight Saving Time. (See [Date and Time: Automation Support](../../atl-mfc-shared/date-and-time-automation-support.md).)  
  
> [!NOTE]
>  You can use the `%y` format to retrieve a two-digit year only for dates starting at 1900. If you use the `%y` format on a date before 1900, the code generates an ASSERT failure.  
  
 This type is also used to represent date-only or time-only values. By convention, the date 0 (December 30, 1899) is used for time-only values and the time 00:00 (midnight) is used for date-only values.  
  
 If you create a `COleDateTime` object by using a date less than 100, the date is accepted, but subsequent calls to `GetYear`, `GetMonth`, `GetDay`, `GetHour`, `GetMinute`, and `GetSecond` fail and return -1. Previously, you could use two-digit dates, but dates must be 100 or larger in MFC 4.2 and later.  
  
 To avoid problems, specify a four-digit date. For example:  
  
 [!code-cpp[NVC_ATLMFC_Utilities#1](../../atl-mfc-shared/codesnippet/cpp/coledatetime-class_1.cpp)]  
  
 Basic arithmetic operations for the `COleDateTime` values use the companion class [COleDateTimeSpan](../../atl-mfc-shared/reference/coledatetimespan-class.md). `COleDateTimeSpan` values define a time interval. The relationship between these classes is similar to the one between [CTime](../../atl-mfc-shared/reference/ctime-class.md) and [CTimeSpan](../../atl-mfc-shared/reference/ctimespan-class.md).  
  
 For more information about the `COleDateTime` and `COleDateTimeSpan` classes, see the article [Date and Time: Automation Support](../../atl-mfc-shared/date-and-time-automation-support.md).  
  
## Requirements  
 **Header:** ATLComTime.h  
  
##  <a name="coledatetime_relational_operators"></a>  COleDateTime Relational Operators  
 Comparison operators.  
  
```
bool operator==(const COleDateTime& date) const throw();

bool operator!=(const COleDateTime& date) const throw();

bool operator<(const COleDateTime& date) const throw();

bool operator>(const COleDateTime& date) const throw();

bool operator<=(const COleDateTime& date) const throw();

bool operator>=(const COleDateTime& date) const throw();
```  
  
### Parameters  
 `date`  
 The **COleDateTime** object to be compared.  
  
### Remarks  
  
> [!NOTE]
>  An ATLASSERT will occur if either of the two operands is invalid.  
  
### Example  
 [!code-cpp[NVC_ATLMFC_Utilities#13](../../atl-mfc-shared/codesnippet/cpp/coledatetime-class_2.cpp)]  
  
### Example  
 The operators **>=**, **\<=**, **>**, and **<**, will assert if the `COleDateTime` object is set to null.  
  
 [!code-cpp[NVC_ATLMFC_Utilities#170](../../atl-mfc-shared/codesnippet/cpp/coledatetime-class_3.cpp)]  
  
##  <a name="coledatetime__coledatetime"></a>  COleDateTime::COleDateTime  
 Constructs a `COleDateTime` object.  
  
```
COleDateTime() throw();

COleDateTime(const VARIANT& varSrc) throw();

COleDateTime(DATE dtSrc) throw();

COleDateTime(time_t timeSrc) throw();

COleDateTime(__time64_t timeSrc) throw();

COleDateTime(const SYSTEMTIME& systimeSrc) throw();

COleDateTime(const FILETIME& filetimeSrc) throw();

COleDateTime(int nYear,
    int nMonth,
    int nDay,
    int nHour,
    int nMin,
    int nSec) throw();

COleDateTime(WORD wDosDate,
    WORD wDosTime) throw();

COleDateTime(const DBTIMESTAMP& dbts) throw();
```  
  
### Parameters  
 `dateSrc`  
 An existing `COleDateTime` object to be copied into the new `COleDateTime` object.  
  
 *varSrc*  
 An existing **VARIANT** data structure (possibly a `COleVariant` object) to be converted to a date/time value ( `VT_DATE`) and copied into the new `COleDateTime` object.  
  
 `dtSrc`  
 A date/time ( **DATE**) value to be copied into the new `COleDateTime` object.  
  
 `timeSrc`  
 A `time_t` or **__time64_t** value to be converted to a date/time value and copied into the new `COleDateTime` object.  
  
 *systimeSrc*  
 A `SYSTEMTIME` structure to be converted to a date/time value and copied into the new `COleDateTime` object.  
  
 `filetimeSrc`  
 A `FILETIME` structure to be converted to a date/time value and copied into the new `COleDateTime` object. Note that `FILETIME` uses Universal Coordinated Time (UTC), so if you pass a local time in the structure, your results will be incorrect. See [File Times](http://msdn.microsoft.com/library/windows/desktop/ms724290) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)] for more information.  
  
 `nYear`, `nMonth`, `nDay`, `nHour`, `nMin`, `nSec`  
 Indicate the date and time values to be copied into the new `COleDateTime` object.  
  
 `wDosDate`, `wDosTime`  
 MS-DOS date and time values to be converted to a date/time value and copied into the new `COleDateTime` object.  
  
 `dbts`  
 A reference to a [DBTimeStamp](https://msdn.microsoft.com/library/system.data.oledb.oledbtype) structure containing the current local time.  
  
### Remarks  
 All these constructors create new `COleDateTime` objects initialized to the specified value. The following table shows valid ranges for each date and time component:  
  
|Date/time component|Valid range|  
|--------------------------|-----------------|  
|year|100 – 9999|  
|month|0 – 12|  
|day|0 – 31|  
|hour|0 – 23|  
|minute|0 – 59|  
|second|0 – 59|  
  
 Note that the actual upper bound for the day component varies based on the month and year components. For details, see the **SetDate** or `SetDateTime` member functions.  
  
 Following is a brief description of each constructor:  
  
- `COleDateTime(` **)** Constructs a `COleDateTime` object initialized to 0 (midnight, 30 December 1899).  
  
- `COleDateTime(` `dateSrc` **)** Constructs a `COleDateTime` object from an existing `COleDateTime` object.  
  
- `COleDateTime(` *varSrc* **)** Constructs a `COleDateTime` object. Attempts to convert a `VARIANT` structure or [COleVariant](../../mfc/reference/colevariant-class.md) object to a date/time ( `VT_DATE`) value. If this conversion is successful, the converted value is copied into the new `COleDateTime` object. If it is not, the value of the `COleDateTime` object is set to 0 (midnight, 30 December 1899) and its status to invalid.  
  
- `COleDateTime(` `dtSrc` **)** Constructs a `COleDateTime` object from a **DATE** value.  
  
- `COleDateTime(` `timeSrc` **)** Constructs a `COleDateTime` object from a `time_t` value.  
  
- `COleDateTime(` *systimeSrc* **)** Constructs a `COleDateTime` object from a `SYSTEMTIME` value.  
  
- `COleDateTime(` `filetimeSrc` **)** Constructs a `COleDateTime` object from a `FILETIME` value. . Note that `FILETIME` uses Universal Coordinated Time (UTC), so if you pass a local time in the structure, your results will be incorrect. See [File Times](http://msdn.microsoft.com/library/windows/desktop/ms724290) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)] for more information.  
  
- `COleDateTime(` `nYear`, `nMonth`, `nDay`, `nHour`, `nMin`, `nSec` **)** Constructs a `COleDateTime` object from the specified numerical values.  
  
- `COleDateTime(` `wDosDate`, `wDosTime` **)** Constructs a `COleDateTime` object from the specified MS-DOS date and time values.  
  
 For more information on the `time_t` data type, see the [time](../../c-runtime-library/reference/time-time32-time64.md) function in the *Run-Time Library Reference*.  
  
 For more information, see the [SYSTEMTIME](http://msdn.microsoft.com/library/windows/desktop/ms724950) and [FILETIME](http://msdn.microsoft.com/library/windows/desktop/ms724284) structures in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
 For more information about the bounds for `COleDateTime` values, see the article [Date and Time: Automation Support](../../atl-mfc-shared/date-and-time-automation-support.md).  
  
> [!NOTE]
>  The constructor using **DBTIMESTAMP** parameter is only available when OLEDB.h is included.  
  
### Example  
 [!code-cpp[NVC_ATLMFC_Utilities#2](../../atl-mfc-shared/codesnippet/cpp/coledatetime-class_4.cpp)]  
  
##  <a name="coledatetime__format"></a>  COleDateTime::Format  
 Creates a formatted representation of the date/time value.  
  
```
CString Format(DWORD dwFlags = 0,  LCID lcid = LANG_USER_DEFAULT) const;

CString Format(LPCTSTR lpszFormat) const;

CString Format(UINT nFormatID) const;
```  
  
### Parameters  
 `dwFlags`  
 Indicates one of the following locale flags:  
  
- `LOCALE_NOUSEROVERRIDE` Use the system default locale settings, instead of custom user settings.  
  
- `VAR_TIMEVALUEONLY` Ignore the date portion during parsing.  
  
- `VAR_DATEVALUEONLY` Ignore the time portion during parsing.  
  
 `lcid`  
 Indicates locale ID to use for the conversion. For more information about language identifiers, see [Language Identifiers](http://msdn.microsoft.com/library/windows/desktop/dd318691).  
  
 `lpszFormat`  
 A formatting string similar to the `printf` formatting string. Each formatting code, preceded by a percent ( `%`) sign, is replaced by the corresponding `COleDateTime` component. Other characters in the formatting string are copied unchanged to the returned string. See the run-time function [strftime](../../c-runtime-library/reference/strftime-wcsftime-strftime-l-wcsftime-l.md) for more information. The value and meaning of the formatting codes for `Format` are:  
  
- `%H` Hours in the current day  
  
- `%M` Minutes in the current hour  
  
- `%S` Seconds in the current minute  
  
- `%%` Percent sign  
  
 `nFormatID`  
 The resource ID for the format-control string.  
  
### Return Value  
 A `CString` that contains the formatted date/time value.  
  
### Remarks  
 If the status of this `COleDateTime` object is null, the return value is an empty string. If the status is invalid, the return string is specified by the string resource `ATL_IDS_DATETIME_INVALID`.  
  
 A brief description of the three forms for this function follows:  
  
 `Format`( `dwFlags`, `lcid`)  
 This form formats the value by using the language specifications (locale IDs) for date and time. Using the default parameters, this form will print the date and the time, unless the time portion is 0 (midnight), in which case it will print just the date, or the date portion is 0 (30 December 1899), in which case it will print just the time. If the date/time value is 0 (30 December 1899, midnight), this form with the default parameters will print midnight.  
  
 `Format`( `lpszFormat`)  
 This form formats the value by using the format string which contains special formatting codes that are preceded by a percent sign (%), as in `printf`. The formatting string is passed as a parameter to the function. For more information about the formatting codes, see [strftime, wcsftime](../../c-runtime-library/reference/strftime-wcsftime-strftime-l-wcsftime-l.md) in the Run-Time Library Reference.  
  
 `Format`( `nFormatID`)  
 This form formats the value by using the format string which contains special formatting codes that are preceded by a percent sign (%), as in `printf`. The formatting string is a resource. The ID of this string resource is passed as the parameter. For more information about the formatting codes, see [strftime, wcsftime](../../c-runtime-library/reference/strftime-wcsftime-strftime-l-wcsftime-l.md) in the *Run-Time Library Reference*.  
  
### Example  
 [!code-cpp[NVC_ATLMFC_Utilities#3](../../atl-mfc-shared/codesnippet/cpp/coledatetime-class_5.cpp)]  
  
##  <a name="coledatetime__getasdbtimestamp"></a>  COleDateTime::GetAsDBTIMESTAMP  
 Call this method to obtain the time in the `COleDateTime` object as a **DBTIMESTAMP** data structure.  
  
```
bool GetAsDBTIMESTAMP(DBTIMESTAMP& dbts) const throw();
```  
  
### Parameters  
 `dbts`  
 A reference to a [DBTimeStamp](https://msdn.microsoft.com/library/system.data.oledb.oledbtype) structure.  
  
### Return Value  
 Nonzero if successful; otherwise 0.  
  
### Remarks  
 Stores the resulting time in the referenced `dbts` structure. The **DBTIMESTAMP** data structure initialized by this function will have its **fraction** member set to zero.  
  
### Example  
 [!code-cpp[NVC_ATLMFC_Utilities#4](../../atl-mfc-shared/codesnippet/cpp/coledatetime-class_6.cpp)]  
  
##  <a name="coledatetime__getassystemtime"></a>  COleDateTime::GetAsSystemTime  
 Call this method to obtain the time in the `COleDateTime` object as a `SYSTEMTIME` data structure.  
  
```
bool GetAsSystemTime(SYSTEMTIME& sysTime) const throw();
```  
  
### Parameters  
 *sysTime*  
 A reference to a [SYSTEMTIME](http://msdn.microsoft.com/library/windows/desktop/ms724950) structure to receive the converted date/time value from the `COleDateTime` object.  
  
### Return Value  
 Returns **true** if successful; **false** if the conversion fails, or if the `COleDateTime` object is **NULL** or invalid.  
  
### Remarks  
 `GetAsSystemTime` stores the resulting time in the referenced *sysTime* object. The `SYSTEMTIME` data structure initialized by this function will have its **wMilliseconds** member set to zero.  
  
 See [GetStatus](#coledatetime__getstatus) for more information on the status information held in a `COleDateTime` object.  
  
##  <a name="coledatetime__getasudate"></a>  COleDateTime::GetAsUDATE  
 Call this method to obtain the time in the `COleDateTime` object as a **UDATE** data structure.  
  
```
bool GetAsUDATE(UDATE& udate) const throw();
```  
  
### Parameters  
 `udate`  
 A reference to a **UDATE** structure to receive the converted date/time value from the `COleDateTime` object.  
  
### Return Value  
 Returns **true** if successful; **false** if the conversion fails, or if the `COleDateTime` object is **NULL** or invalid.  
  
### Remarks  
 A **UDATE** structure represents an "unpacked" date.  
  
##  <a name="coledatetime__getcurrenttime"></a>  COleDateTime::GetCurrentTime  
 Call this static member function to return the current date/time value.  
  
```
static COleDateTime WINAPI GetCurrentTime() throw();
```  
  
### Example  
 [!code-cpp[NVC_ATLMFC_Utilities#5](../../atl-mfc-shared/codesnippet/cpp/coledatetime-class_7.cpp)]  
  
##  <a name="coledatetime__getday"></a>  COleDateTime::GetDay  
 Gets the day of the month represented by this date/time value.  
  
```
int GetDay() const throw();
```  
  
### Return Value  
 The day of the month represented by the value of this `COleDateTime` object or `COleDateTime::error` if the day could not be obtained.  
  
### Remarks  
 Valid return values range between 1 and 31.  
  
 For information on other member functions that query the value of this `COleDateTime` object, see the following member functions:  
  
- [GetMonth](#coledatetime__getmonth)  
  
- [GetYear](#coledatetime__getyear)  
  
- [GetHour](#coledatetime__gethour)  
  
- [GetMinute](#coledatetime__getminute)  
  
- [GetSecond](#coledatetime__getsecond)  
  
- [GetDayOfWeek](#coledatetime__getdayofweek)  
  
- [GetDayOfYear](#coledatetime__getdayofyear)  
  
### Example  
 [!code-cpp[NVC_ATLMFC_Utilities#6](../../atl-mfc-shared/codesnippet/cpp/coledatetime-class_8.cpp)]  
  
##  <a name="coledatetime__getdayofweek"></a>  COleDateTime::GetDayOfWeek  
 Gets the day of the month represented by this date/time value.  
  
```
int GetDayOfWeek() const throw();
```  
  
### Return Value  
 The day of the week represented by the value of this `COleDateTime` object or `COleDateTime::error` if the day of the week could not be obtained.  
  
### Remarks  
 Valid return values range between 1 and 7, where 1=Sunday, 2=Monday, and so on.  
  
 For information on other member functions that query the value of this `COleDateTime` object, see the following member functions:  
  
- [GetDay](#coledatetime__getday)  
  
- [GetMonth](#coledatetime__getmonth)  
  
- [GetYear](#coledatetime__getyear)  
  
- [GetHour](#coledatetime__gethour)  
  
- [GetMinute](#coledatetime__getminute)  
  
- [GetSecond](#coledatetime__getsecond)  
  
- [GetDayOfYear](#coledatetime__getdayofyear)  
  
### Example  
 [!code-cpp[NVC_ATLMFC_Utilities#7](../../atl-mfc-shared/codesnippet/cpp/coledatetime-class_9.cpp)]  
  
##  <a name="coledatetime__getdayofyear"></a>  COleDateTime::GetDayOfYear  
 Gets the day of the year represented by this date/time value.  
  
```
int GetDayOfYear() const throw();
```  
  
### Return Value  
 The day of the year represented by the value of this `COleDateTime` object or `COleDateTime::error` if the day of the year could not be obtained.  
  
### Remarks  
 Valid return values range between 1 and 366, where January 1 = 1.  
  
 For information on other member functions that query the value of this `COleDateTime` object, see the following member functions:  
  
- [GetDay](#coledatetime__getday)  
  
- [GetMonth](#coledatetime__getmonth)  
  
- [GetYear](#coledatetime__getyear)  
  
- [GetHour](#coledatetime__gethour)  
  
- [GetMinute](#coledatetime__getminute)  
  
- [GetSecond](#coledatetime__getsecond)  
  
- [GetDayOfWeek](#coledatetime__getdayofweek)  
  
### Example  
 [!code-cpp[NVC_ATLMFC_Utilities#8](../../atl-mfc-shared/codesnippet/cpp/coledatetime-class_10.cpp)]  
  
##  <a name="coledatetime__gethour"></a>  COleDateTime::GetHour  
 Gets the hour represented by this date/time value.  
  
```
int GetHour() const throw();
```  
  
### Return Value  
 The hour represented by the value of this `COleDateTime` object or `COleDateTime::error` if the hour could not be obtained.  
  
### Remarks  
 Valid return values range between 0 and 23.  
  
 For information on other member functions that query the value of this `COleDateTime` object, see the following member functions:  
  
- [GetDay](#coledatetime__getday)  
  
- [GetMonth](#coledatetime__getmonth)  
  
- [GetYear](#coledatetime__getyear)  
  
- [GetMinute](#coledatetime__getminute)  
  
- [GetSecond](#coledatetime__getsecond)  
  
- [GetDayOfWeek](#coledatetime__getdayofweek)  
  
- [GetDayOfYear](#coledatetime__getdayofyear)  
  
### Example  
 [!code-cpp[NVC_ATLMFC_Utilities#9](../../atl-mfc-shared/codesnippet/cpp/coledatetime-class_11.cpp)]  
  
##  <a name="coledatetime__getminute"></a>  COleDateTime::GetMinute  
 Gets the minute represented by this date/time value.  
  
```
int GetMinute() const throw();
```  
  
### Return Value  
 The minute represented by the value of this `COleDateTime` object or `COleDateTime::error` if the minute could not be obtained.  
  
### Remarks  
 Valid return values range between 0 and 59.  
  
 For information on other member functions that query the value of this `COleDateTime` object, see the following member functions:  
  
- [GetDay](#coledatetime__getday)  
  
- [GetMonth](#coledatetime__getmonth)  
  
- [GetYear](#coledatetime__getyear)  
  
- [GetHour](#coledatetime__gethour)  
  
- [GetSecond](#coledatetime__getsecond)  
  
- [GetDayOfWeek](#coledatetime__getdayofweek)  
  
- [GetDayOfYear](#coledatetime__getdayofyear)  
  
### Example  
 See the example for [GetHour](#coledatetime__gethour).  
  
##  <a name="coledatetime__getmonth"></a>  COleDateTime::GetMonth  
 Gets the month represented by this date/time value.  
  
```
int GetMonth() const throw();
```  
  
### Return Value  
 The month represented by the value of this `COleDateTime` object or `COleDateTime::error` if the month could not be obtained.  
  
### Remarks  
 Valid return values range between 1 and 12.  
  
 For information on other member functions that query the value of this `COleDateTime` object, see the following member functions:  
  
- [GetDay](#coledatetime__getday)  
  
- [GetYear](#coledatetime__getyear)  
  
- [GetHour](#coledatetime__gethour)  
  
- [GetMinute](#coledatetime__getminute)  
  
- [GetSecond](#coledatetime__getsecond)  
  
- [GetDayOfWeek](#coledatetime__getdayofweek)  
  
- [GetDayOfYear](#coledatetime__getdayofyear)  
  
### Example  
 See the example for [GetDay](#coledatetime__getday).  
  
##  <a name="coledatetime__getsecond"></a>  COleDateTime::GetSecond  
 Gets the second represented by this date/time value.  
  
```
int GetSecond() const throw();
```  
  
### Return Value  
 The second represented by the value of this `COleDateTime` object or `COleDateTime::error` if the second could not be obtained.  
  
### Remarks  
 Valid return values range between 0 and 59.  
  
> [!NOTE]
>  The `COleDateTime` class does not support leap seconds.  
  
 For more information about the implementation for `COleDateTime`, see the article [Date and Time: Automation Support](../../atl-mfc-shared/date-and-time-automation-support.md).  
  
 For information on other member functions that query the value of this `COleDateTime` object, see the following member functions:  
  
- [GetDay](#coledatetime__getday)  
  
- [GetMonth](#coledatetime__getmonth)  
  
- [GetYear](#coledatetime__getyear)  
  
- [GetHour](#coledatetime__gethour)  
  
- [GetMinute](#coledatetime__getminute)  
  
- [GetDayOfWeek](#coledatetime__getdayofweek)  
  
- [GetDayOfYear](#coledatetime__getdayofyear)  
  
### Example  
 See the example for [GetHour](#coledatetime__gethour).  
  
##  <a name="coledatetime__getstatus"></a>  COleDateTime::GetStatus  
 Gets the status (validity) of a given `COleDateTime` object.  
  
```
DateTimeStatus GetStatus() const throw();
```  
  
### Return Value  
 Returns the status of this `COleDateTime` value. If you call **GetStatus** on a `COleDateTime` object constructed with the default, it will return valid. If you call **GetStatus** on a `COleDateTime` object initialized with the constructor set to null, **GetStatus** will return null. See **Remarks** for more information.  
  
### Remarks  
 The return value is defined by the **DateTimeStatus** enumerated type, which is defined within the `COleDateTime` class.  
  
 `enum DateTimeStatus`  
  
 `{`  
  
 `error = -1,`  
  
 `valid = 0,`  
  
 `invalid = 1,    // Invalid date (out of range, etc.)`  
  
 `null = 2,       // Literally has no value`  
  
 `};`  
  
 For a brief description of these status values, see the following list:  
  
- `COleDateTime::error` Indicates that an error occurred while attempting to obtain part of the date/time value.  
  
- **COleDateTime::valid** Indicates that this `COleDateTime` object is valid.  
  
- **COleDateTime::invalid** Indicates that this `COleDateTime` object is invalid; that is, its value may be incorrect.  
  
- **COleDateTime::null** Indicates that this `COleDateTime` object is null, that is, that no value has been supplied for this object. (This is "null" in the database sense of "having no value," as opposed to the C++ **NULL**.)  
  
 The status of a `COleDateTime` object is invalid in the following cases:  
  
-   If its value is set from a **VARIANT** or `COleVariant` value that could not be converted to a date/time value.  
  
-   If its value is set from a `time_t`, `SYSTEMTIME`, or `FILETIME` value that could not be converted to a valid date/time value.  
  
-   If its value is set by `SetDateTime` with invalid parameter values.  
  
-   If this object has experienced an overflow or underflow during an arithmetic assignment operation, namely, `+=` or `-=`.  
  
-   If an invalid value was assigned to this object.  
  
-   If the status of this object was explicitly set to invalid using `SetStatus`.  
  
 For more information about the operations that may set the status to invalid, see the following member functions:  
  
- [COleDateTime](#coledatetime__coledatetime)  
  
- [SetDateTime](#coledatetime__setdatetime)  
  
- [operator +, -](#coledatetime__operator__add_-)  
  
- [operator +=, -=](#coledatetime__operator__add_eq_-_eq)  
  
 For more information about the bounds for `COleDateTime` values, see the article [Date and Time: Automation Support](../../atl-mfc-shared/date-and-time-automation-support.md).  
  
### Example  
 [!code-cpp[NVC_ATLMFC_Utilities#10](../../atl-mfc-shared/codesnippet/cpp/coledatetime-class_12.cpp)]  
  
##  <a name="coledatetime__getyear"></a>  COleDateTime::GetYear  
 Gets the year represented by this date/time value.  
  
```
int GetYear() const throw();
```  
  
### Return Value  
 The year represented by the value of this `COleDateTime` object or `COleDateTime::error` if the year could not be obtained.  
  
### Remarks  
 Valid return values range between 100 and 9999, which includes the century.  
  
 For information on other member functions that query the value of this `COleDateTime` object, see the following member functions:  
  
- [GetDay](#coledatetime__getday)  
  
- [GetMonth](#coledatetime__getmonth)  
  
- [GetHour](#coledatetime__gethour)  
  
- [GetMinute](#coledatetime__getminute)  
  
- [GetSecond](#coledatetime__getsecond)  
  
- [GetDayOfWeek](#coledatetime__getdayofweek)  
  
- [GetDayOfYear](#coledatetime__getdayofyear)  
  
 For more information about the bounds for `COleDateTime` values, see the article [Date and Time: Automation Support](../../atl-mfc-shared/date-and-time-automation-support.md).  
  
### Example  
 See the example for [GetDay](#coledatetime__getday).  
  
##  <a name="coledatetime__m_dt"></a>  COleDateTime::m_dt  
 The underlying **DATE** structure for this `COleDateTime` object.  
  
```
DATE m_dt;
```  
  
### Remarks  
  
> [!CAUTION]
>  Changing the value in the **DATE** object accessed by the pointer returned by this function will change the value of this `COleDateTime` object. It does not change the status of this `COleDateTime` object.  
  
 For more information about the implementation of the **DATE** object, see the article [Date and Time: Automation Support](../../atl-mfc-shared/date-and-time-automation-support.md).  
  
##  <a name="coledatetime__m_status"></a>  COleDateTime::m_status  
 Contains the status of this `COleDateTime` object.  
  
```
DateTimeStatus m_status;
```  
  
### Remarks  
 The type of this data member is the enumerated type **DateTimeStatus**, which is defined within the `COleDateTime` class. See [COleDateTime::GetStatus](#coledatetime__getstatus) for details.  
  
> [!CAUTION]
>  This data member is for advanced programming situations. You should use the inline member functions [GetStatus](#coledatetime__getstatus) and [SetStatus](#coledatetime__setstatus). See `SetStatus` for further cautions regarding explicitly setting this data member.  
  
##  <a name="coledatetime__operator__eq"></a>  COleDateTime::operator =  
 Copies a `COleDateTime` value.  
  
```
COleDateTime& operator=(const VARIANT& varSrc) throw();

COleDateTime& operator=(DATE dtSrc) throw();

COleDateTime& operator=(const time_t& timeSrc) throw();

COleDateTime& operator=(const __time64_t& timeSrc) throw();

COleDateTime& operator=(const SYSTEMTIME& systimeSrc) throw();

COleDateTime& operator=(const FILETIME& filetimeSrc) throw();

COleDateTime& operator=(const UDATE& udate) throw();
```  
  
### Remarks  
 These overloaded assignment operators copy the source date/time value into this `COleDateTime` object. A brief description of each these overloaded assignment operators follows:  
  
- **operator =(** `dateSrc` **)** The value and status of the operand are copied into this `COleDateTime` object.  
  
- **operator =(** *varSrc* **)** If the conversion of the [VARIANT](http://msdn.microsoft.com/en-us/e305240e-9e11-4006-98cc-26f4932d2118) value (or [COleVariant](../../mfc/reference/colevariant-class.md) object) to a date/time ( `VT_DATE`) is successful, the converted value is copied into this `COleDateTime` object and its status is set to valid. If the conversion is not successful, the value of this object is set to zero (30 December 1899, midnight) and its status to invalid.  
  
- **operator =(** `dtSrc` **)** The **DATE** value is copied into this `COleDateTime` object and its status is set to valid.  
  
- **operator =(** `timeSrc` **)** The `time_t` or **__time64_t** value is converted and copied into this `COleDateTime` object. If the conversion is successful, the status of this object is set to valid; if unsuccessful, it is set to invalid.  
  
- **operator =(** *systimeSrc* **)** The [SYSTEMTIME](http://msdn.microsoft.com/library/windows/desktop/ms724950) value is converted and copied into this `COleDateTime` object. If the conversion is successful, the status of this object is set to valid; if unsuccessful, it is set to invalid.  
  
- **operator =(** `udate` **)** The **UDATE** value is converted and copied into this `COleDateTime` object. If the conversion is successful, the status of this object is set to valid; if unsuccessful, it is set to invalid. A **UDATE** structure represents an "unpacked" date. See the function [VarDateFromUdate](http://msdn.microsoft.com/en-us/1c924ac5-b896-49e1-9ccf-825ac7a030c8) for more details.  
  
- **operator =(** `filetimeSrc` **)** The [FILETIME](http://msdn.microsoft.com/library/windows/desktop/ms724284) value is converted and copied into this `COleDateTime` object. If the conversion is successful, the status of this object is set to valid; otherwise it is set to invalid. `FILETIME` uses Universal Coordinated Time (UTC), so if you pass a UTC time in the structure, your results will be converted from UTC time to local time, and will be stored as variant time. This behavior is the same as in Visual C++ 6.0 and Visual C++.NET 2003 SP2. See [File Times](http://msdn.microsoft.com/library/windows/desktop/ms724290) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)] for more information.  
  
 For more information, see the [VARIANT](http://msdn.microsoft.com/en-us/e305240e-9e11-4006-98cc-26f4932d2118) entry in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
 For more information on the `time_t` data type, see the [time](../../c-runtime-library/reference/time-time32-time64.md) function in the *Run-Time Library Reference*.  
  
 For more information, see the [SYSTEMTIME](http://msdn.microsoft.com/library/windows/desktop/ms724950) and [FILETIME](http://msdn.microsoft.com/library/windows/desktop/ms724284) structures in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
 For more information about the bounds for `COleDateTime` values, see the article [Date and Time: Automation Support](../../atl-mfc-shared/date-and-time-automation-support.md).  
  
##  <a name="coledatetime__operator__add_-"></a>  COleDateTime::operator +, -  
 Add and subtract **ColeDateTime** values.  
  
```
COleDateTime operator+(COleDateTimeSpan dateSpan) const throw();

COleDateTime operator-(COleDateTimeSpan dateSpan) const throw();

COleDateTimeSpan operator-(const COleDateTime& date) const throw();
```  
  
### Remarks  
 `COleDateTime` objects represent absolute times. [COleDateTimeSpan](../../atl-mfc-shared/reference/coledatetimespan-class.md) objects represent relative times. The first two operators allow you to add and subtract a `COleDateTimeSpan` value from a `COleDateTime` value. The third operator allows you to subtract one `COleDateTime` value from another to yield a `COleDateTimeSpan` value.  
  
 If either of the operands is null, the status of the resulting `COleDateTime` value is null.  
  
 If the resulting `COleDateTime` value falls outside the bounds of acceptable values, the status of that `COleDateTime` value is invalid.  
  
 If either of the operands is invalid and the other is not null, the status of the resulting `COleDateTime` value is invalid.  
  
 The **+** and **-** operators will assert if the `COleDateTime` object is set to null. See [COleDateTime Relational Operators](#coledatetime_relational_operators) for an example.  
  
 For more information on the valid, invalid, and null status values, see the [m_status](#coledatetime__m_status) member variable.  
  
 For more information about the bounds for `COleDateTime` values, see the article [Date and Time: Automation Support](../../atl-mfc-shared/date-and-time-automation-support.md).  
  
### Example  
 [!code-cpp[NVC_ATLMFC_Utilities#12](../../atl-mfc-shared/codesnippet/cpp/coledatetime-class_13.cpp)]  
  
##  <a name="coledatetime__operator__add_eq_-_eq"></a>  COleDateTime::operator +=, -=  
 Add and subtract a **ColeDateTime** value from this `COleDateTime` object.  
  
```
COleDateTime& operator+=(COleDateTimeSpan dateSpan) throw();

COleDateTime& operator-=(COleDateTimeSpan dateSpan) throw();
```  
  
### Remarks  
 These operators allow you to add and subtract a `COleDateTimeSpan` value to and from this `COleDateTime`. If either of the operands is null, the status of the resulting `COleDateTime` value is null.  
  
 If the resulting `COleDateTime` value falls outside the bounds of acceptable values, the status of this `COleDateTime` value is set to invalid.  
  
 If either of the operands is invalid and other is not null, the status of the resulting `COleDateTime` value is invalid.  
  
 For more information on the valid, invalid, and null status values, see the [m_status](#coledatetime__m_status) member variable.  
  
 The **+=** and **-=** operators will assert if the `COleDateTime` object is set to null. See [COleDateTime Relational Operators](#coledatetime_relational_operators) for an example.  
  
 For more information about the bounds for `COleDateTime` values, see the article [Date and Time: Automation Support](../../atl-mfc-shared/date-and-time-automation-support.md).  
  
##  <a name="coledatetime__operator_date"></a>  COleDateTime::operator DATE  
 Converts a **ColeDateTime** value into a **DATE**.  
  
```operator DATE() const throw();
```  
  
### Remarks  
 This operator returns a **DATE** object whose value is copied from this `COleDateTime` object. For more information about the implementation of the **DATE** object, see the article [Date and Time: Automation Support](../../atl-mfc-shared/date-and-time-automation-support.md).  
  
 The **DATE** operator will assert if the `COleDateTime` object is set to null. See [COleDateTime Relational Operators](#coledatetime_relational_operators) for an example.  
  
##  <a name="coledatetime__parsedatetime"></a>  COleDateTime::ParseDateTime  
 Parses a string to read a date/time value.  
  
```
bool ParseDateTime(LPCTSTR lpszDate,
    DWORD dwFlags = 0,
    LCID lcid = LANG_USER_DEFAULT) throw();
```  
  
### Parameters  
 `lpszDate`  
 A pointer to the null-terminated string which is to be parsed. For details, see Remarks.  
  
 `dwFlags`  
 Indicates flags for locale settings and parsing. One or more of the following flags:  
  
- **LOCALE_NOUSEROVERRIDE** Use the system default locale settings, rather than custom user settings.  
  
- **VAR_TIMEVALUEONLY** Ignore the date portion during parsing.  
  
- **VAR_DATEVALUEONLY** Ignore the time portion during parsing.  
  
 `lcid`  
 Indicates locale ID to use for the conversion.  
  
### Return Value  
 Returns **true** if the string was successfully converted to a date/time value, otherwise **false**.  
  
### Remarks  
 If the string was successfully converted to a date/time value, the value of this `COleDateTime` object is set to that value and its status to valid.  
  
> [!NOTE]
>  Year values must lie between 100 and 9999, inclusively.  
  
 The `lpszDate` parameter can take a variety of formats. For example, the following strings contain acceptable date/time formats:  
  
 `"25 January 1996"`  
  
 `"8:30:00"`  
  
 `"20:30:00"`  
  
 `"January 25, 1996 8:30:00"`  
  
 `"8:30:00 Jan. 25, 1996"`  
  
 `"1/25/1996 8:30:00"  // always specify the full year,`  
  
 `// even in a 'short date' format`  
  
 Note that the locale ID will also affect whether the string format is acceptable for conversion to a date/time value.  
  
 In the case of **VAR_DATEVALUEONLY**, the time value is set to time 0, or midnight. In the case of **VAR_TIMEVALUEONLY**, the date value is set to date 0, meaning 30 December 1899.  
  
 If the string could not be converted to a date/time value or if there was a numerical overflow, the status of this `COleDateTime` object is invalid.  
  
 For more information about the bounds and implementation for `COleDateTime` values, see the article [Date and Time: Automation Support](../../atl-mfc-shared/date-and-time-automation-support.md).  
  
##  <a name="coledatetime__setdate"></a>  COleDateTime::SetDate  
 Sets the date of this `COleDateTime` object.  
  
```
int SetDate(int nYear,
    int nMonth,
    int nDay) throw();
```  
  
### Parameters  
 `nYear`, `nMonth`, `nDay`  
 Indicate the date components to be copied into this `COleDateTime` object.  
  
### Return Value  
 Zero if the value of this `COleDateTime` object was set successfully; otherwise, 1. This return value is based on the **DateTimeStatus** enumerated type. For more information, see the [SetStatus](#coledatetime__setstatus) member function.  
  
### Remarks  
 The date is set to the specified values. The time is set to time 0, midnight.  
  
 See the following table for bounds for the parameter values:  
  
|Parameter|Bounds|  
|---------------|------------|  
|`nYear`|100 – 9999|  
|`nMonth`|1 – 12|  
|`nDay`|0 – 31|  
  
 If the day of the month overflows, it is converted to the correct day of the next month and the month and/or year is incremented accordingly. A day value of zero indicates the last day of the previous month. The behavior is the same as `SystemTimeToVariantTime`.  
  
 If the date value specified by the parameters is not valid, the status of this object is set to **COleDateTime::invalid**. You should use [GetStatus](#coledatetime__getstatus) to check the validity of the **DATE** value and should not assume that the value of [m_dt](#coledatetime__m_dt) will remain unmodified.  
  
 Here are some examples of date values:  
  
|`nYear`|`nMonth`|`nDay`|Value|  
|-------------|--------------|------------|-----------|  
|2000|2|29|29 February 2000|  
|1776|7|4|4 July 1776|  
|1925|4|35|35 April 1925 (invalid date)|  
|10000|1|1|1 January 10000 (invalid date)|  
  
 To set both date and time, see [COleDateTime::SetDateTime](#coledatetime__setdatetime).  
  
 For information on member functions that query the value of this `COleDateTime` object, see the following member functions:  
  
- [GetDay](#coledatetime__getday)  
  
- [GetMonth](#coledatetime__getmonth)  
  
- [GetYear](#coledatetime__getyear)  
  
- [GetHour](#coledatetime__gethour)  
  
- [GetMinute](#coledatetime__getminute)  
  
- [GetSecond](#coledatetime__getsecond)  
  
- [GetDayOfWeek](#coledatetime__getdayofweek)  
  
- [GetDayOfYear](#coledatetime__getdayofyear)  
  
 For more information about the bounds for `COleDateTime` values, see the article [Date and Time: Automation Support](../../atl-mfc-shared/date-and-time-automation-support.md).  
  
### Example  
 [!code-cpp[NVC_ATLMFC_Utilities#11](../../atl-mfc-shared/codesnippet/cpp/coledatetime-class_14.cpp)]  
  
##  <a name="coledatetime__setdatetime"></a>  COleDateTime::SetDateTime  
 Sets the date and time of this `COleDateTime` object.  
  
```
int SetDateTime(int nYear,
    int nMonth,
    int nDay,
    int nHour,
    int nMin,
    int nSec) throw();
```  
  
### Parameters  
 `nYear`, `nMonth`, `nDay`, `nHour`, `nMin`, `nSec`  
 Indicate the date and time components to be copied into this `COleDateTime` object.  
  
### Return Value  
 Zero if the value of this `COleDateTime` object was set successfully; otherwise, 1. This return value is based on the **DateTimeStatus** enumerated type. For more information, see the [SetStatus](#coledatetime__setstatus) member function.  
  
### Remarks  
 See the following table for bounds for the parameter values:  
  
|Parameter|Bounds|  
|---------------|------------|  
|`nYear`|100 – 9999|  
|`nMonth`|1 – 12|  
|`nDay`|0 – 31|  
|`nHour`|0 – 23|  
|`nMin`|0 – 59|  
|`nSec`|0 – 59|  
  
 If the day of the month overflows, it is converted to the correct day of the next month and the month and/or year is incremented accordingly. A day value of zero indicates the last day of the previous month. The behavior is the same as [SystemTimeToVariantTime](http://msdn.microsoft.com/en-us/d9d69521-9b33-4fc5-8a1c-929f216db450).  
  
 If the date or time value specified by the parameters is not valid, the status of this object is set to invalid and the value of this object is not changed.  
  
 Here are some examples of time values:  
  
|`nHour`|`nMin`|`nSec`|Value|  
|-------------|------------|------------|-----------|  
|1|3|3|01:03:03|  
|23|45|0|23:45:00|  
|25|30|0|Invalid|  
|9|60|0|Invalid|  
  
 Here are some examples of date values:  
  
|`nYear`|`nMonth`|`nDay`|Value|  
|-------------|--------------|------------|-----------|  
|1995|4|15|15 April 1995|  
|1789|7|14|17 July 1789|  
|1925|2|30|Invalid|  
|10000|1|1|Invalid|  
  
 To set the date only, see [COleDateTime::SetDate](#coledatetime__setdate). To set the time only, see [COleDateTime::SetTime](#coledatetime__settime).  
  
 For information on member functions that query the value of this `COleDateTime` object, see the following member functions:  
  
- [GetDay](#coledatetime__getday)  
  
- [GetMonth](#coledatetime__getmonth)  
  
- [GetYear](#coledatetime__getyear)  
  
- [GetHour](#coledatetime__gethour)  
  
- [GetMinute](#coledatetime__getminute)  
  
- [GetSecond](#coledatetime__getsecond)  
  
- [GetDayOfWeek](#coledatetime__getdayofweek)  
  
- [GetDayOfYear](#coledatetime__getdayofyear)  
  
 For more information about the bounds for `COleDateTime` values, see the article [Date and Time: Automation Support](../../atl-mfc-shared/date-and-time-automation-support.md).  
  
### Example  
 See the example for [GetStatus](#coledatetime__getstatus).  
  
##  <a name="coledatetime__setstatus"></a>  COleDateTime::SetStatus  
 Sets the status of this `COleDateTime` object.  
  
```
void SetStatus(DateTimeStatus status) throw();
```  
  
### Parameters  
 *status*  
 The new status value for this `COleDateTime` object.  
  
### Remarks  
 The *status* parameter value is defined by the **DateTimeStatus** enumerated type, which is defined within the `COleDateTime` class. See [COleDateTime::GetStatus](#coledatetime__getstatus) for details.  
  
> [!CAUTION]
>  This function is for advanced programming situations. This function does not alter the data in this object. It will most often be used to set the status to `null` or **invalid**. Note that the assignment operator ( [operator =](#coledatetime__operator__eq)) and [SetDateTime](#coledatetime__setdatetime) do set the status of the object based on the source value(s).  
  
### Example  
 See the example for [GetStatus](#coledatetime__getstatus).  
  
##  <a name="coledatetime__settime"></a>  COleDateTime::SetTime  
 Sets the time of this `COleDateTime` object.  
  
```
int SetTime(int nHour,
    int nMin,
    int nSec) throw();
```  
  
### Parameters  
 `nHour`, `nMin`, `nSec`  
 Indicate the time components to be copied into this `COleDateTime` object.  
  
### Return Value  
 Zero if the value of this `COleDateTime` object was set successfully; otherwise, 1. This return value is based on the **DateTimeStatus** enumerated type. For more information, see the [SetStatus](#coledatetime__setstatus) member function.  
  
### Remarks  
 The time is set to the specified values. The date is set to date 0, meaning 30 December 1899.  
  
 See the following table for bounds for the parameter values:  
  
|Parameter|Bounds|  
|---------------|------------|  
|`nHour`|0 – 23|  
|`nMin`|0 – 59|  
|`nSec`|0 – 59|  
  
 If the time value specified by the parameters is not valid, the status of this object is set to invalid and the value of this object is not changed.  
  
 Here are some examples of time values:  
  
|`nHour`|`nMin`|`nSec`|Value|  
|-------------|------------|------------|-----------|  
|1|3|3|01:03:03|  
|23|45|0|23:45:00|  
|25|30|0|Invalid|  
|9|60|0|Invalid|  
  
 To set both date and time, see [COleDateTime::SetDateTime](#coledatetime__setdatetime).  
  
 For information on member functions that query the value of this `COleDateTime` object, see the following member functions:  
  
- [GetDay](#coledatetime__getday)  
  
- [GetMonth](#coledatetime__getmonth)  
  
- [GetYear](#coledatetime__getyear)  
  
- [GetHour](#coledatetime__gethour)  
  
- [GetMinute](#coledatetime__getminute)  
  
- [GetSecond](#coledatetime__getsecond)  
  
- [GetDayOfWeek](#coledatetime__getdayofweek)  
  
- [GetDayOfYear](#coledatetime__getdayofyear)  
  
 For more information about the bounds for `COleDateTime` values, see the article [Date and Time: Automation Support](../../atl-mfc-shared/date-and-time-automation-support.md).  
  
### Example  
 See the example for [SetDate](#coledatetime__setdate).  
  
## See Also  
 [COleVariant Class](../../mfc/reference/colevariant-class.md)   
 [CTime Class](../../atl-mfc-shared/reference/ctime-class.md)   
 [CTimeSpan Class](../../atl-mfc-shared/reference/ctimespan-class.md)   
 [Hierarchy Chart](../../mfc/hierarchy-chart.md)   
 [ATL/MFC Shared Classes](../../atl-mfc-shared/atl-mfc-shared-classes.md)



