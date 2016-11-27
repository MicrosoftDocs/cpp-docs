---
title: "COleDateTimeSpan Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "ATL.COleDateTimeSpan"
  - "COleDateTimeSpan"
  - "ATL::COleDateTimeSpan"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "timespan"
  - "time span"
  - "shared classes, COleDateTimeSpan"
  - "Date data type, MFC encapsulation of"
  - "COleDateTimeSpan class"
ms.assetid: 7441526d-a30a-4019-8fb3-3fee6f897cbe
caps.latest.revision: 19
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
translation.priority.ht: 
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "ru-ru"
  - "zh-cn"
  - "zh-tw"
translation.priority.mt: 
  - "cs-cz"
  - "pl-pl"
  - "pt-br"
  - "tr-tr"
---
# COleDateTimeSpan Class
Represents a relative time, a time span.  
  
## Syntax  
  
```
class COleDateTimeSpan
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[COleDateTimeSpan::COleDateTimeSpan](#coledatetimespan__coledatetimespan)|Constructs a `COleDateTimeSpan` object.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[COleDateTimeSpan::Format](#coledatetimespan__format)|Generates a formatted string representation of a `COleDateTimeSpan` object.|  
|[COleDateTimeSpan::GetDays](#coledatetimespan__getdays)|Returns the day portion of the span this `COleDateTimeSpan` object represents.|  
|[COleDateTimeSpan::GetHours](#coledatetimespan__gethours)|Returns the hour portion of the span this `COleDateTimeSpan` object represents.|  
|[COleDateTimeSpan::GetMinutes](#coledatetimespan__getminutes)|Returns the minute portion of the span this `COleDateTimeSpan` object represents.|  
|[COleDateTimeSpan::GetSeconds](#coledatetimespan__getseconds)|Returns the second portion of the span this `COleDateTimeSpan` object represents.|  
|[COleDateTimeSpan::GetStatus](#coledatetimespan__getstatus)|Gets the status (validity) of this `COleDateTimeSpan` object.|  
|[COleDateTimeSpan::GetTotalDays](#coledatetimespan__gettotaldays)|Returns the number of days this `COleDateTimeSpan` object represents.|  
|[COleDateTimeSpan::GetTotalHours](#coledatetimespan__gettotalhours)|Returns the number of hours this `COleDateTimeSpan` object represents.|  
|[COleDateTimeSpan::GetTotalMinutes](#coledatetimespan__gettotalminutes)|Returns the number of minutes this `COleDateTimeSpan` object represents.|  
|[COleDateTimeSpan::GetTotalSeconds](#coledatetimespan__gettotalseconds)|Returns the number of seconds this `COleDateTimeSpan` object represents.|  
|[COleDateTimeSpan::SetDateTimeSpan](#coledatetimespan__setdatetimespan)|Sets the value of this `COleDateTimeSpan` object.|  
|[COleDateTimeSpan::SetStatus](#coledatetimespan__setstatus)|Sets the status (validity) of this `COleDateTimeSpan` object.|  
  
### Public Operators  
  
|||  
|-|-|  
|[operator +, -](#coledatetimespan__operator__add_-)|Add, subtract, and change sign for `COleDateTimeSpan` values.|  
|[operator +=, -=](#coledatetimespan__operator__add_eq_-_eq)|Add and subtract a `COleDateTimeSpan` value from this `COleDateTimeSpan` value.|  
|[operator =](#coledatetimespan__operator__eq)|Copies a `COleDateTimeSpan` value.|  
|[operator ==, <, <=](#coledatetimespan_relational_operators)|Compare two `COleDateTimeSpan` values.|  
|[operator double](#coledatetimespan__operator_double)|Converts this `COleDateTimeSpan` value to a **double**.|  
  
### Public Data Members  
  
|Name|Description|  
|----------|-----------------|  
|[COleDateTimeSpan::m_span](#coledatetimespan__m_span)|Contains the underlying **double** for this `COleDateTimeSpan` object.|  
|[COleDateTimeSpan::m_status](#coledatetimespan__m_status)|Contains the status of this `COleDateTimeSpan` object.|  
  
## Remarks  
 `COleDateTimeSpan` does not have a base class.  
  
 A `COleDateTimeSpan` keeps time in days.  
  
 `COleDateTimeSpan` is used with its companion class [COleDateTime](../../atl-mfc-shared/reference/coledatetime-class.md). `COleDateTime` encapsulates the **DATE** data type of OLE automation. `COleDateTime` represents absolute time values. All `COleDateTime` calculations involve `COleDateTimeSpan` values. The relation between these classes is analogous to the one between [CTime](../../atl-mfc-shared/reference/ctime-class.md) and [CTimeSpan](../../atl-mfc-shared/reference/ctimespan-class.md).  
  
 For more information on the `COleDateTime` and `COleDateTimeSpan` classes, see the article [Date and Time: Automation Support](../../atl-mfc-shared/date-and-time-automation-support.md).  
  
## Requirements  
 **Header:** ATLComTime.h  
  
##  <a name="coledatetimespan_relational_operators"></a>  COleDateTimeSpan Relational Operators  
 Comparison operators.  
  
```
bool operator==(const COleDateTimeSpan& dateSpan) const throw();

bool operator!=(const COleDateTimeSpan& dateSpan) const throw();

bool operator<(const COleDateTimeSpan& dateSpan) const throw();

bool operator>(const COleDateTimeSpan& dateSpan) const throw();

bool operator<=(const COleDateTimeSpan& dateSpan) const throw();

bool operator>=(const COleDateTimeSpan& dateSpan) const throw();
```  
  
### Parameters  
 *dateSpan*  
 The `COleDateTimeSpan` to compare.  
  
### Return Value  
 These operators compare two date/time-span values and return **true** if the condition is true; otherwise **false**.  
  
### Remarks  
  
> [!NOTE]
>  An ATLASSERT will occur if either operand is invalid.  
  
### Example  
 [!code-cpp[NVC_ATLMFC_Utilities#25](../../atl-mfc-shared/codesnippet/cpp/coledatetimespan-class_1.cpp)]  
  
 [!code-cpp[NVC_ATLMFC_Utilities#26](../../atl-mfc-shared/codesnippet/cpp/coledatetimespan-class_2.cpp)]  
  
##  <a name="coledatetimespan__coledatetimespan"></a>  COleDateTimeSpan::COleDateTimeSpan  
 Constructs a `COleDateTimeSpan` object.  
  
```
COleDateTimeSpan() throw();

COleDateTimeSpan(
    double dblSpanSrc) throw();

COleDateTimeSpan(
    LONG
lDays,
 int
nHours,
    int
nMins,
 int
nSecs) throw();
```  
  
### Parameters  
 `dblSpanSrc`  
 The number of days to be copied into the new `COleDateTimeSpan` object.  
  
 `lDays`, `nHours`, `nMins`, `nSecs`  
 Indicate the day and time values to be copied into the new `COleDateTimeSpan` object.  
  
### Remarks  
 All of these constructors create new `COleDateTimeSpan` objects initialized to the specified value. A brief description of each of these constructors follows:  
  
- **COleDateTimeSpan( )** Constructs a `COleDateTimeSpan` object initialized to 0.  
  
- **COleDateTimeSpan(** `dblSpanSrc` **)** Constructs a `COleDateTimeSpan` object from a floating-point value.  
  
- **COleDateTimeSpan(** `lDays`**,** `nHours`**,** `nMins`**,** `nSecs` **)** Constructs a `COleDateTimeSpan` object initialized to the specified numerical values.  
  
 The status of the new `COleDateTimeSpan` object is set to valid.  
  
 For more information about the bounds for `COleDateTimeSpan` values, see the article [Date and Time: Automation Support](../../atl-mfc-shared/date-and-time-automation-support.md).  
  
### Example  
 [!code-cpp[NVC_ATLMFC_Utilities#14](../../atl-mfc-shared/codesnippet/cpp/coledatetimespan-class_3.cpp)]  
  
##  <a name="coledatetimespan__format"></a>  COleDateTimeSpan::Format  
 Generates a formatted string representation of a `COleDateTimeSpan` object.  
  
```
CString Format(LPCTSTR    pFormat) const;

CString Format(UINT    nID) const;
```  
  
### Parameters  
 `pFormat`  
 A formatting string similar to the `printf` formatting string. Formatting codes, preceded by a percent ( `%`) sign, are replaced by the corresponding `COleDateTimeSpan` component. Other characters in the formatting string are copied unchanged to the returned string. The value and meaning of the formatting codes for **Format** are listed below:  
  
- **%H** Hours in the current day  
  
- **%M** Minutes in the current hour  
  
- **%S** Seconds in the current minute  
  
- **%%** Percent sign  
  
 The four format codes listed above are the only codes that Format will accept.  
  
-  
  
 `nID`  
 The resource ID for the format-control string.  
  
### Return Value  
 A `CString` that contains the formatted date/time-span value.  
  
### Remarks  
 Call these functions to create a formatted representation of the time-span value. If the status of this `COleDateTimeSpan` object is null, the return value is an empty string. If the status is invalid, the return string is specified by the string resource **IDS_INVALID_DATETIMESPAN**.  
  
 A brief description of the forms for this function follows:  
  
 **Format(** `pFormat` **)**  
 This form formats the value using the format string that contains special formatting codes that are preceded by a percent sign (%), as in `printf`. The formatting string is passed as a parameter to the function.  
  
 **Format(** `nID` **)**  
 This form formats the value using the format string that contains special formatting codes that are preceded by a percent sign (%), as in `printf`. The formatting string is a resource. The ID of this string resource is passed as the parameter.  
  
### Example  
 [!code-cpp[NVC_ATLMFC_Utilities#15](../../atl-mfc-shared/codesnippet/cpp/coledatetimespan-class_4.cpp)]  
  
##  <a name="coledatetimespan__getdays"></a>  COleDateTimeSpan::GetDays  
 Retrieves the day portion of this date/time-span value.  
  
```
LONG GetDays() const throw();
```  
  
### Return Value  
 The day portion of this date/time-span value.  
  
### Remarks  
 The return values from this function range between approximately – 3,615,000 and 3,615,000.  
  
 For other functions that query the value of a `COleDateTimeSpan` object, see the following member functions:  
  
- [GetHours](#coledatetimespan__gethours)  
  
- [GetMinutes](#coledatetimespan__getminutes)  
  
- [GetSeconds](#coledatetimespan__getseconds)  
  
- [GetTotalDays](#coledatetimespan__gettotaldays)  
  
- [GetTotalHours](#coledatetimespan__gettotalhours)  
  
- [GetTotalMinutes](#coledatetimespan__gettotalminutes)  
  
- [GetTotalSeconds](#coledatetimespan__gettotalseconds)  
  
### Example  
 [!code-cpp[NVC_ATLMFC_Utilities#16](../../atl-mfc-shared/codesnippet/cpp/coledatetimespan-class_5.cpp)]  
  
##  <a name="coledatetimespan__gethours"></a>  COleDateTimeSpan::GetHours  
 Retrieves the hour portion of this date/time-span value.  
  
```
LONG GetHours() const throw();
```  
  
### Return Value  
 The hours portion of this date/time-span value.  
  
### Remarks  
 The return values from this function range between – 23 and 23.  
  
 For other functions that query the value of a `COleDateTimeSpan` object, see the following member functions:  
  
- [GetDays](#coledatetimespan__getdays)  
  
- [GetMinutes](#coledatetimespan__getminutes)  
  
- [GetSeconds](#coledatetimespan__getseconds)  
  
- [GetTotalDays](#coledatetimespan__gettotaldays)  
  
- [GetTotalHours](#coledatetimespan__gettotalhours)  
  
- [GetTotalMinutes](#coledatetimespan__gettotalminutes)  
  
- [GetTotalSeconds](#coledatetimespan__gettotalseconds)  
  
### Example  
 [!code-cpp[NVC_ATLMFC_Utilities#17](../../atl-mfc-shared/codesnippet/cpp/coledatetimespan-class_6.cpp)]  
  
##  <a name="coledatetimespan__getminutes"></a>  COleDateTimeSpan::GetMinutes  
 Retrieves the minute portion of this date/time-span value.  
  
```
LONG GetMinutes() const throw();
```  
  
### Return Value  
 The minutes portion of this date/time-span value.  
  
### Remarks  
 The return values from this function range between – 59 and 59.  
  
 For other functions that query the value of a `COleDateTimeSpan` object, see the following member functions:  
  
- [GetDays](#coledatetimespan__getdays)  
  
- [GetHours](#coledatetimespan__gethours)  
  
- [GetSeconds](#coledatetimespan__getseconds)  
  
- [GetTotalDays](#coledatetimespan__gettotaldays)  
  
- [GetTotalHours](#coledatetimespan__gettotalhours)  
  
- [GetTotalMinutes](#coledatetimespan__gettotalminutes)  
  
- [GetTotalSeconds](#coledatetimespan__gettotalseconds)  
  
### Example  
 [!code-cpp[NVC_ATLMFC_Utilities#18](../../atl-mfc-shared/codesnippet/cpp/coledatetimespan-class_7.cpp)]  
  
##  <a name="coledatetimespan__getseconds"></a>  COleDateTimeSpan::GetSeconds  
 Retrieves the second portion of this date/time-span value.  
  
```
LONG GetSeconds() const throw();
```  
  
### Return Value  
 The seconds portion of this date/time-span value.  
  
### Remarks  
 The return values from this function range between – 59 and 59.  
  
 For other functions that query the value of a `COleDateTimeSpan` object, see the following member functions:  
  
- [GetDays](#coledatetimespan__getdays)  
  
- [GetHours](#coledatetimespan__gethours)  
  
- [GetMinutes](#coledatetimespan__getminutes)  
  
- [GetTotalDays](#coledatetimespan__gettotaldays)  
  
- [GetTotalHours](#coledatetimespan__gettotalhours)  
  
- [GetTotalMinutes](#coledatetimespan__gettotalminutes)  
  
- [GetTotalSeconds](#coledatetimespan__gettotalseconds)  
  
### Example  
 [!code-cpp[NVC_ATLMFC_Utilities#19](../../atl-mfc-shared/codesnippet/cpp/coledatetimespan-class_8.cpp)]  
  
##  <a name="coledatetimespan__getstatus"></a>  COleDateTimeSpan::GetStatus  
 Gets the status (validity) of this `COleDateTimeSpan` object.  
  
```
DateTimeSpanStatus GetStatus() const throw();
```  
  
### Return Value  
 The status of this `COleDateTimeSpan` value.  
  
### Remarks  
 The return value is defined by the **DateTimeSpanStatus** enumerated type, which is defined within the `COleDateTimeSpan` class.  
  
 `enum DateTimeSpanStatus{`  
  
 `valid = 0,`  
  
 `invalid = 1,`  
  
 `null = 2,`  
  
 `};`  
  
 For a brief description of these status values, see the following list:  
  
- **COleDateTimeSpan::valid** Indicates that this `COleDateTimeSpan` object is valid.  
  
- **COleDateTimeSpan::invalid** Indicates that this `COleDateTimeSpan` object is invalid; that is, its value may be incorrect.  
  
- **COleDateTimeSpan::null** Indicates that this `COleDateTimeSpan` object is null, that is, that no value has been supplied for this object. (This is "null" in the database sense of "having no value," as opposed to the C++ **NULL**.)  
  
 The status of a `COleDateTimeSpan` object is invalid in the following cases:  
  
-   If this object has experienced an overflow or underflow during an arithmetic assignment operation, namely, `+=` or `-=`.  
  
-   If an invalid value was assigned to this object.  
  
-   If the status of this object was explicitly set to invalid using `SetStatus`.  
  
 For more information about the operations that may set the status to invalid, see [COleDateTimeSpan::operator +, -](../../atl-mfc-shared/reference/coledatetime-class.md#coledatetime__operator__add_-) and [COleDateTimeSpan::operator +=, -=](../../atl-mfc-shared/reference/coledatetime-class.md#coledatetime__operator__add_eq_-_eq).  
  
 For more information about the bounds for `COleDateTimeSpan` values, see the article [Date and Time: Automation Support](../../atl-mfc-shared/date-and-time-automation-support.md).  
  
##  <a name="coledatetimespan__gettotaldays"></a>  COleDateTimeSpan::GetTotalDays  
 Retrieves this date/time-span value expressed in days.  
  
```
double GetTotalDays() const throw();
```  
  
### Return Value  
 This date/time-span value expressed in days. Although this function is prototyped to return a double, it will always return an integer value.  
  
### Remarks  
 The return values from this function range between approximately – 3.65e6 and 3.65e6.  
  
 For other functions that query the value of a `COleDateTimeSpan` object, see the following member functions:  
  
- [GetDays](#coledatetimespan__getdays)  
  
- [GetHours](#coledatetimespan__gethours)  
  
- [GetMinutes](#coledatetimespan__getminutes)  
  
- [GetSeconds](#coledatetimespan__getseconds)  
  
- [GetTotalHours](#coledatetimespan__gettotalhours)  
  
- [GetTotalMinutes](#coledatetimespan__gettotalminutes)  
  
- [GetTotalSeconds](#coledatetimespan__gettotalseconds)  
  
### Example  
 [!code-cpp[NVC_ATLMFC_Utilities#20](../../atl-mfc-shared/codesnippet/cpp/coledatetimespan-class_9.cpp)]  
  
##  <a name="coledatetimespan__gettotalhours"></a>  COleDateTimeSpan::GetTotalHours  
 Retrieves this date/time-span value expressed in hours.  
  
```
double GetTotalHours() const throw();
```  
  
### Return Value  
 This date/time-span value expressed in hours. Although this function is prototyped to return a double, it will always return an integer value.  
  
### Remarks  
 The return values from this function range between approximately – 8.77e7 and 8.77e7.  
  
 For other functions that query the value of a `COleDateTimeSpan` object, see the following member functions:  
  
- [GetDays](#coledatetimespan__getdays)  
  
- [GetHours](#coledatetimespan__gethours)  
  
- [GetMinutes](#coledatetimespan__getminutes)  
  
- [GetSeconds](#coledatetimespan__getseconds)  
  
- [GetTotalDays](#coledatetimespan__gettotaldays)  
  
- [GetTotalMinutes](#coledatetimespan__gettotalminutes)  
  
- [GetTotalSeconds](#coledatetimespan__gettotalseconds)  
  
### Example  
 See the example for [GetTotalDays](#coledatetimespan__gettotaldays).  
  
##  <a name="coledatetimespan__gettotalminutes"></a>  COleDateTimeSpan::GetTotalMinutes  
 Retrieves this date/time-span value expressed in minutes.  
  
```
double GetTotalMinutes() const throw();
```  
  
### Return Value  
 This date/time-span value expressed in minutes. Although this function is prototyped to return a double, it will always return an integer value.  
  
### Remarks  
 The return values from this function range between approximately – 5.26e9 and 5.26e9.  
  
 For other functions that query the value of a `COleDateTimeSpan` object, see the following member functions:  
  
- [GetDays](#coledatetimespan__getdays)  
  
- [GetHours](#coledatetimespan__gethours)  
  
- [GetMinutes](#coledatetimespan__getminutes)  
  
- [GetSeconds](#coledatetimespan__getseconds)  
  
- [GetTotalDays](#coledatetimespan__gettotaldays)  
  
- [GetTotalHours](#coledatetimespan__gettotalhours)  
  
- [GetTotalSeconds](#coledatetimespan__gettotalseconds)  
  
### Example  
 See the example for [GetTotalDays](#coledatetimespan__gettotaldays).  
  
##  <a name="coledatetimespan__gettotalseconds"></a>  COleDateTimeSpan::GetTotalSeconds  
 Retrieves this date/time-span value expressed in seconds.  
  
```
double GetTotalSeconds() const throw();
```  
  
### Return Value  
 This date/time-span value expressed in seconds. Although this function is prototyped to return a double, it will always return an integer value.  
  
### Remarks  
 The return values from this function range between approximately – 3.16e11 to 3.16e11.  
  
 For other functions that query the value of a `COleDateTimeSpan` object, see the following member functions:  
  
- [GetDays](#coledatetimespan__getdays)  
  
- [GetHours](#coledatetimespan__gethours)  
  
- [GetMinutes](#coledatetimespan__getminutes)  
  
- [GetSeconds](#coledatetimespan__getseconds)  
  
- [GetTotalDays](#coledatetimespan__gettotaldays)  
  
- [GetTotalHours](#coledatetimespan__gettotalhours)  
  
- [GetTotalMinutes](#coledatetimespan__gettotalminutes)  
  
### Example  
 See the example for [GetTotalDays](#coledatetimespan__gettotaldays).  
  
##  <a name="coledatetimespan__m_span"></a>  COleDateTimeSpan::m_span  
 The underlying **double** value for this `COleDateTime` object.  
  
```
double m_span;
```  
  
### Remarks  
 This value expresses the date/time-span in days.  
  
> [!CAUTION]
>  Changing the value in the **double** data member will change the value of this `COleDateTimeSpan` object. It does not change the status of this `COleDateTimeSpan` object.  
  
##  <a name="coledatetimespan__m_status"></a>  COleDateTimeSpan::m_status  
 The type for this data member is the enumerated type **DateTimeSpanStatus**, which is defined within the `COleDateTimeSpan` class.  
  
```
DateTimeSpanStatus m_status;
```  
  
### Remarks  
 `enum DateTimeSpanStatus{`  
  
 `valid = 0,`  
  
 `invalid = 1,`  
  
 `null = 2,`  
  
 `};`  
  
 For a brief description of these status values, see the following list:  
  
- **COleDateTimeSpan::valid** Indicates that this `COleDateTimeSpan` object is valid.  
  
- **COleDateTimeSpan::invalid** Indicates that this `COleDateTimeSpan` object is invalid; that is, its value may be incorrect.  
  
- **COleDateTimeSpan::null** Indicates that this `COleDateTimeSpan` object is null, that is, that no value has been supplied for this object. (This is "null" in the database sense of "having no value," as opposed to the C++ **NULL**.)  
  
 The status of a `COleDateTimeSpan` object is invalid in the following cases:  
  
-   If this object has experienced an overflow or underflow during an arithmetic assignment operation, namely, `+=` or `-=`.  
  
-   If an invalid value was assigned to this object.  
  
-   If the status of this object was explicitly set to invalid using [SetStatus](#coledatetimespan__setstatus).  
  
 For more information about the operations that may set the status to invalid, see [COleDateTimeSpan::operator +, -](../../atl-mfc-shared/reference/coledatetime-class.md#coledatetime__operator__add_-) and [COleDateTimeSpan::operator +=, -=](../../atl-mfc-shared/reference/coledatetime-class.md#coledatetime__operator__add_eq_-_eq).  
  
> [!CAUTION]
>  This data member is for advanced programming situations. You should use the inline member functions [GetStatus](#coledatetimespan__getstatus) and [SetStatus](#coledatetimespan__setstatus). See `SetStatus` for further cautions regarding explicitly setting this data member.  
  
 For more information about the bounds for `COleDateTimeSpan` values, see the article [Date and Time: Automation Support](../../atl-mfc-shared/date-and-time-automation-support.md).  
  
##  <a name="coledatetimespan__operator__eq"></a>  COleDateTimeSpan::operator =  
 Copies a `COleDateTimeSpan` value.  
  
```
COleDateTimeSpan& operator=(double
dblSpanSrc) throw();
```  
  
### Remarks  
 This overloaded assignment operator copies the source date/time-span value into this `COleDateTimeSpan` object.  
  
##  <a name="coledatetimespan__operator__add_-"></a>  COleDateTimeSpan::operator +, -  
 Add, subtract, and change sign for `COleDateTimeSpan` values.  
  
```
COleDateTimeSpan operator+(const COleDateTimeSpan&
dateSpan) const throw();

COleDateTimeSpan operator-(const COleDateTimeSpan&
dateSpan) const throw();

COleDateTimeSpan operator-() const throw();
```  
  
### Remarks  
 The first two operators let you add and subtract date/time-span values. The third lets you change the sign of a date/time-span value.  
  
 If either of the operands is null, the status of the resulting `COleDateTimeSpan` value is null.  
  
 If either of the operands is invalid and the other is not null, the status of the resulting `COleDateTimeSpan` value is invalid.  
  
 For more information on the valid, invalid, and null status values, see the [m_status](#coledatetimespan__m_status) member variable.  
  
### Example  
 [!code-cpp[NVC_ATLMFC_Utilities#23](../../atl-mfc-shared/codesnippet/cpp/coledatetimespan-class_10.cpp)]  
  
##  <a name="coledatetimespan__operator__add_eq_-_eq"></a>  COleDateTimeSpan::operator +=, -=  
 Add and subtract a `COleDateTimeSpan` value from this `COleDateTimeSpan` value.  
  
```
COleDateTimeSpan& operator+=(const COleDateTimeSpan
dateSpan) throw();

COleDateTimeSpan& operator-=(const COleDateTimeSpan
dateSpan) throw();
```  
  
### Remarks  
 These operators let you add and subtract date/time-span values from this `COleDateTimeSpan` object. If either of the operands is null, the status of the resulting `COleDateTimeSpan` value is null.  
  
 If either of the operands is invalid and the other is not null, the status of the resulting `COleDateTimeSpan` value is invalid.  
  
 For more information on the valid, invalid, and null status values, see the [m_status](#coledatetimespan__m_status) member variable.  
  
### Example  
 [!code-cpp[NVC_ATLMFC_Utilities#24](../../atl-mfc-shared/codesnippet/cpp/coledatetimespan-class_11.cpp)]  
  
##  <a name="coledatetimespan__operator_double"></a>  COleDateTimeSpan::operator double  
 Converts this `COleDateTimeSpan` value to a **double**.  
  
```operator double() const throw();
```  
  
### Remarks  
 This operator returns the value of this `COleDateTimeSpan` value as a floating-point number of days.  
  
##  <a name="coledatetimespan__setdatetimespan"></a>  COleDateTimeSpan::SetDateTimeSpan  
 Sets the value of this date/time-span value.  
  
```
void SetDateTimeSpan(
    LONG
lDays,
 int
nHours,
    int
nMins,
 int
nSecs) throw();
```  
  
### Parameters  
 `lDays`, `nHours`, `nMins`, `nSecs`  
 Indicate the date-span and time-span values to be copied into this `COleDateTimeSpan` object.  
  
### Remarks  
 For functions that query the value of a `COleDateTimeSpan` object, see the following member functions:  
  
- [GetDays](#coledatetimespan__getdays)  
  
- [GetHours](#coledatetimespan__gethours)  
  
- [GetMinutes](#coledatetimespan__getminutes)  
  
- [GetSeconds](#coledatetimespan__getseconds)  
  
- [GetTotalDays](#coledatetimespan__gettotaldays)  
  
- [GetTotalHours](#coledatetimespan__gettotalhours)  
  
- [GetTotalMinutes](#coledatetimespan__gettotalminutes)  
  
- [GetTotalSeconds](#coledatetimespan__gettotalseconds)  
  
### Example  
 [!code-cpp[NVC_ATLMFC_Utilities#21](../../atl-mfc-shared/codesnippet/cpp/coledatetimespan-class_12.cpp)]  
  
##  <a name="coledatetimespan__setstatus"></a>  COleDateTimeSpan::SetStatus  
 Sets the status (validity) of this `COleDateTimeSpan` object.  
  
```
void SetStatus(DateTimeSpanStatus    status) throw();
```  
  
### Parameters  
 *status*  
 The new status value for this `COleDateTimeSpan` object.  
  
### Remarks  
 The *Status* parameter value is defined by the **DateTimeSpanStatus** enumerated type, which is defined within the `COleDateTimeSpan` class.  
  
 `enum DateTimeSpanStatus{`  
  
 `valid = 0,`  
  
 `invalid = 1,`  
  
 `null = 2,`  
  
 `};`  
  
 For a brief description of these status values, see the following list:  
  
- **COleDateTimeSpan::valid** Indicates that this `COleDateTimeSpan` object is valid.  
  
- **COleDateTimeSpan::invalid** Indicates that this `COleDateTimeSpan` object is invalid; that is, its value may be incorrect.  
  
- **COleDateTimeSpan::null** Indicates that this `COleDateTimeSpan` object is null, that is, that no value has been supplied for this object. (This is "null" in the database sense of "having no value," as opposed to the C++ **NULL**.)  
  
    > [!CAUTION]
    >  This function is for advanced programming situations. This function does not alter the data in this object. It will most often be used to set the status to `null` or **invalid**. Note that the assignment operator ( [operator =](#coledatetimespan__operator__eq)) and [SetDateTimeSpan](#coledatetimespan__setdatetimespan) do set the status of the object based on the source value(s).  
  
### Example  
 [!code-cpp[NVC_ATLMFC_Utilities#22](../../atl-mfc-shared/codesnippet/cpp/coledatetimespan-class_13.cpp)]  
  
## See Also  
 [COleDateTime Class](../../atl-mfc-shared/reference/coledatetime-class.md)   
 [CTime Class](../../atl-mfc-shared/reference/ctime-class.md)   
 [CTimeSpan Class](../../atl-mfc-shared/reference/ctimespan-class.md)   
 [Hierarchy Chart](../../mfc/hierarchy-chart.md)   
 [ATL/MFC Shared Classes](../../atl-mfc-shared/atl-mfc-shared-classes.md)


