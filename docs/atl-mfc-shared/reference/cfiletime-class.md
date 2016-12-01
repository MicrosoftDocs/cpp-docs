---
title: "CFileTime Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "ATL::CFileTime"
  - "CFileTime"
  - "ATL.CFileTime"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CFileTime class"
  - "shared classes, CFileTime"
ms.assetid: 1a358a65-1383-4124-b0d4-59b026e6860f
caps.latest.revision: 18
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
|[CFileTime::CFileTime](#cfiletime__cfiletime)|The constructor.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CFileTime::GetCurrentTime](#cfiletime__getcurrenttime)|Call this static function to retrieve a `CFileTime` object that represents the current system date and time.|  
|[CFileTime::GetTime](#cfiletime__gettime)|Call this method to retrieve the time from the `CFileTime` object.|  
|[CFileTime::LocalToUTC](#cfiletime__localtoutc)|Call this method to convert a local file time to a file time based on the Coordinated Universal Time (UTC).|  
|[CFileTime::SetTime](#cfiletime__settime)|Call this method to set the date and time stored by the `CFileTime` object.|  
|[CFileTime::UTCToLocal](#cfiletime__utctolocal)|Call this method to convert time based on the Coordinated Universal Time (UTC) to local file time.|  
  
### Public Operators  
  
|Name|Description|  
|----------|-----------------|  
|[CFileTime::operator -](#cfiletime__operator_-)|This operator is used to perform subtraction on a `CFileTime` or `CFileTimeSpan` object.|  
|[CFileTime::operator !=](#cfiletime__operator__neq)|This operator compares two `CFileTime` objects for inequality.|  
|[CFileTime::operator +](#cfiletime__operator__add)|This operator is used to perform addition on a `CFileTimeSpan` object.|  
|[CFileTime::operator +=](#cfiletime__operator__add_eq)|This operator is used to perform addition on a `CFileTimeSpan` object and assign the result to the current object.|  
|[CFileTime::operator &lt;](#cfiletime__operator__lt_)|This operator compares two `CFileTime` objects to determine the lesser.|  
|[CFileTime::operator &lt;=](#cfiletime__operator__lt__eq)|This operator compares two `CFileTime` objects to determine equality or the lesser.|  
|[CFileTime::operator =](#cfiletime__operator__eq)|The assignment operator.|  
|[CFileTime::operator -=](#cfiletime__operator_-_eq)|This operator is used to perform subtraction on a `CFileTimeSpan` object and assign the result to the current object.|  
|[CFileTime::operator ==](#cfiletime__operator__eq_eq)|This operator compares two `CFileTime` objects for equality.|  
|[CFileTime::operator &gt;](#cfiletime__operator__gt_)|This operator compares two `CFileTime` objects to determine the larger.|  
|[CFileTime::operator &gt;=](#cfiletime__operator__gt__eq)|This operator compares two `CFileTime` objects to determine equality or the larger.|  
  
### Public Constants  
  
|Name|Description|  
|----------|-----------------|  
|[CFileTime::Day](#cfiletime__day)|A static data member storing the number of 100-nanosecond intervals that make up one day.|  
|[CFileTime::Hour](#cfiletime__hour)|A static data member storing the number of 100-nanosecond intervals that make up one hour.|  
|[CFileTime::Millisecond](#cfiletime__millisecond)|A static data member storing the number of 100-nanosecond intervals that make up one millisecond.|  
|[CFileTime::Minute](#cfiletime__minute)|A static data member storing the number of 100-nanosecond intervals that make up one minute.|  
|[CFileTime::Second](#cfiletime__second)|A static data member storing the number of 100-nanosecond intervals that make up one second.|  
|[CFileTime::Week](#cfiletime__week)|A static data member storing the number of 100-nanosecond intervals that make up one week.|  
  
## Remarks  
 This class provides methods for managing the date and time values associated with the creation, access and modification of files. The methods and data of this class are frequently used in conjunction with `CFileTimeSpan` objects, which deal with relative time values.  
  
 The date and time value is stored as a 64-bit value representing the number of 100-nanosecond intervals since January 1, 1601. This is the Coordinated Universal Time (UTC) format.  
  
 The following static const member variables are provided to simplify calculations:  
  
|Member variable|Number of 100-nanosecond intervals|  
|---------------------|-----------------------------------------|  
|Millisecond|10,000|  
|Second|Millisecond * 1,000|  
|Minute|Second * 60|  
|Hour|Minute * 60|  
|Day|Hour * 24|  
|Week|Day * 7|  
  
 **Note** Not all file systems can record creation and last access time and not all file systems record them in the same manner. For example, on the Windows NT FAT file system, create time has a resolution of 10 milliseconds, write time has a resolution of 2 seconds, and access time has a resolution of 1 day (the access date). On NTFS, access time has a resolution of 1 hour. Furthermore, FAT records times on disk in local time, but NTFS records times on disk in UTC. For more information, see [File Times](http://msdn.microsoft.com/library/windows/desktop/ms724290).  
  
## Inheritance Hierarchy  
 `FILETIME`  
  
 `CFileTime`  
  
## Requirements  
 **Header:** atltime.h  
  
##  <a name="cfiletime__cfiletime"></a>  CFileTime::CFileTime  
 The constructor.  
  
```
CFileTime() throw();

CFileTime(const FILETIME& ft) throw();

CFileTime(ULONGLONG nTime) throw();
```  
  
### Parameters  
 `ft`  
 A [FILETIME](http://msdn.microsoft.com/library/windows/desktop/ms724284) structure.  
  
 `nTime`  
 The date and time expressed as a 64-bit value.  
  
### Remarks  
 The `CFileTime` object can be created using an existing date and time from a `FILETIME` structure, or expressed as a 64-bit value (in local or Coordinated Universal Time (UTC) time formats). The default constructor sets the time to 0.  
  
##  <a name="cfiletime__day"></a>  CFileTime::Day  
 A static data member storing the number of 100-nanosecond intervals that make up one day.  
  
```
static const ULONGLONG Day = Hour* 24;
```  
  
### Example  
 See the example for [CFileTime::Millisecond](#cfiletime__millisecond).  
  
##  <a name="cfiletime__getcurrenttime"></a>  CFileTime::GetCurrentTime  
 Call this static function to retrieve a `CFileTime` object that represents the current system date and time.  
  
```
static CFileTime GetCurrentTime() throw();
```  
  
### Return Value  
 Returns the current system date and time in Coordinated Universal Time (UTC) format.  
  
### Example  
 [!code-cpp[NVC_MFCFiles#41](../../atl-mfc-shared/reference/codesnippet/cpp/cfiletime-class_1.cpp)]  
  
##  <a name="cfiletime__gettime"></a>  CFileTime::GetTime  
 Call this method to retrieve the time from the `CFileTime` object.  
  
```
ULONGLONG GetTime() const throw();
```  
  
### Return Value  
 Returns the date and time as a 64-bit number, which may be in either local or Coordinated Universal Time (UTC) format.  
  
##  <a name="cfiletime__hour"></a>  CFileTime::Hour  
 A static data member storing the number of 100-nanosecond intervals that make up one hour.  
  
```
static const ULONGLONG Hour = Minute* 60;
```  
  
### Example  
 See the example for [CFileTime::Millisecond](#cfiletime__millisecond).  
  
##  <a name="cfiletime__localtoutc"></a>  CFileTime::LocalToUTC  
 Call this method to convert a local file time to a file time based on the Coordinated Universal Time (UTC).  
  
```
CFileTime LocalToUTC() const throw();
```  
  
### Return Value  
 Returns a `CFileTime` object containing the time in UTC format.  
  
### Example  
 See the example for [CFileTime::UTCToLocal](#cfiletime__utctolocal).  
  
##  <a name="cfiletime__millisecond"></a>  CFileTime::Millisecond  
 A static data member storing the number of 100-nanosecond intervals that make up one millisecond.  
  
```
static const ULONGLONG Millisecond = 10000;
```  
  
### Example  
 [!code-cpp[NVC_MFCFiles#44](../../atl-mfc-shared/reference/codesnippet/cpp/cfiletime-class_2.cpp)]  
  
##  <a name="cfiletime__minute"></a>  CFileTime::Minute  
 A static data member storing the number of 100-nanosecond intervals that make up one minute.  
  
```
static const ULONGLONG Minute = Second* 60;
```  
  
### Example  
 See the example for [CFileTime::Millisecond](#cfiletime__millisecond).  
  
##  <a name="cfiletime__operator_-"></a>  CFileTime::operator -  
 This operator is used to perform subtraction on a `CFileTime` or `CFileTimeSpan` object.  
  
```
CFileTime operator-(CFileTimeSpan span) const throw();

CFileTimeSpan operator-(CFileTime ft) const throw();
```  
  
### Parameters  
 `span`  
 A `CFileTimeSpan` object.  
  
 `ft`  
 A `CFileTime` object.  
  
### Return Value  
 Returns a `CFileTime` object or a `CFileTimeSpan` object representing the result of the time difference between the two objects.  
  
##  <a name="cfiletime__operator__neq"></a>  CFileTime::operator !=  
 This operator compares two `CFileTime` objects for inequality.  
  
```
bool operator!=(CFileTime ft) const throw();
```  
  
### Parameters  
 `ft`  
 The `CFileTime` object to be compared.  
  
### Return Value  
 Returns **true** if the item being compared is not equal to the `CFileTime` object, otherwise **false**.  
  
##  <a name="cfiletime__operator__add"></a>  CFileTime::operator +  
 This operator is used to perform addition on a `CFileTimeSpan` object.  
  
```
CFileTime operator+(CFileTimeSpan span) const throw();
```  
  
### Parameters  
 `span`  
 A `CFileTimeSpan` object.  
  
### Return Value  
 Returns a `CFileTime` object representing the result of the original time plus a relative time.  
  
##  <a name="cfiletime__operator__add_eq"></a>  CFileTime::operator +=  
 This operator is used to perform addition on a `CFileTimeSpan` object and assign the result to the current object.  
  
```
CFileTime& operator+=(CFileTimeSpan span) throw();
```  
  
### Parameters  
 `span`  
 A `CFileTimeSpan` object.  
  
### Return Value  
 Returns the updated `CFileTime` object, representing the result of the original time plus a relative time.  
  
##  <a name="cfiletime__operator__lt_"></a>  CFileTime::operator &lt;  
 This operator compares two `CFileTime` objects to determine the lesser.  
  
```
bool operator<(CFileTime ft) const throw();
```  
  
### Parameters  
 `ft`  
 The `CFileTime` object to be compared.  
  
### Return Value  
 Returns **true** if the first object is less (earlier in time) than the second, **false** otherwise.  
  
### Example  
 [!code-cpp[NVC_MFCFiles#43](../../atl-mfc-shared/reference/codesnippet/cpp/cfiletime-class_3.cpp)]  
  
##  <a name="cfiletime__operator__lt__eq"></a>  CFileTime::operator &lt;=  
 This operator compares two `CFileTime` objects to determine equality or the lesser.  
  
```
bool operator<=(CFileTime ft) const throw();
```  
  
### Parameters  
 `ft`  
 The `CFileTime` object to be compared.  
  
### Return Value  
 Returns **true** if the first object is less than (earlier in time) or equal to the second, otherwise **false**.  
  
##  <a name="cfiletime__operator__eq"></a>  CFileTime::operator =  
 The assignment operator.  
  
```
CFileTime& operator=(const FILETIME& ft) throw();
```  
  
### Parameters  
 `ft`  
 A `CFileTime` object containing the new time and date.  
  
### Return Value  
 Returns the updated `CFileTime` object.  
  
##  <a name="cfiletime__operator_-_eq"></a>  CFileTime::operator -=  
 This operator is used to perform subtraction on a `CFileTimeSpan` object and assign the result to the current object.  
  
```
CFileTime& operator-=(CFileTimeSpan span) throw();
```  
  
### Parameters  
 `span`  
 A `CFileTimeSpan` object containing the relative time to subtract.  
  
### Return Value  
 Returns the updated `CFileTime` object.  
  
##  <a name="cfiletime__operator__eq_eq"></a>  CFileTime::operator ==  
 This operator compares two `CFileTime` objects for equality.  
  
```
bool operator==(CFileTime ft) const throw();
```  
  
### Parameters  
 `ft`  
 The `CFileTime` object to compare.  
  
### Return Value  
 Returns **true** if the objects are equal, otherwise **false**.  
  
##  <a name="cfiletime__operator__gt_"></a>  CFileTime::operator &gt;  
 This operator compares two `CFileTime` objects to determine the larger.  
  
```
bool operator>(CFileTime ft) const throw();
```  
  
### Parameters  
 `ft`  
 The `CFileTime` object to be compared.  
  
### Return Value  
 Returns **true** if the first object is greater than (later in time) than the second, otherwise **false**.  
  
##  <a name="cfiletime__operator__gt__eq"></a>  CFileTime::operator &gt;=  
 This operator compares two `CFileTime` objects to determine equality or the larger.  
  
```
bool operator>=(CFileTime ft) const throw();
```  
  
### Parameters  
 `ft`  
 The `CFileTime` object to be compared.  
  
### Return Value  
 Returns **true** if the first object is greater than (later in time) or equal to the second, otherwise **false**.  
  
##  <a name="cfiletime__second"></a>  CFileTime::Second  
 A static data member storing the number of 100-nanosecond intervals that make up one day.  
  
```
static const ULONGLONG Second = Millisecond* 1000;
```  
  
### Example  
 See the example for [CFileTime::Millisecond](#cfiletime__millisecond).  
  
##  <a name="cfiletime__settime"></a>  CFileTime::SetTime  
 Call this method to set the date and time stored by the `CFileTime` object.  
  
```
void SetTime(ULONGLONG nTime) throw();
```  
  
### Parameters  
 `nTime`  
 The 64-bit value representing the date and time, in either local or Coordinated Universal Time (UTC) format.  
  
##  <a name="cfiletime__utctolocal"></a>  CFileTime::UTCToLocal  
 Call this method to convert time based on the Coordinated Universal Time (UTC) to local file time.  
  
```
CFileTime UTCToLocal() const throw();
```  
  
### Return Value  
 Returns a `CFileTime` object containing the time in local file time format.  
  
### Example  
 [!code-cpp[NVC_MFCFiles#42](../../atl-mfc-shared/reference/codesnippet/cpp/cfiletime-class_4.cpp)]  
  
##  <a name="cfiletime__week"></a>  CFileTime::Week  
 A static data member storing the number of 100-nanosecond intervals that make up one week.  
  
```
static const ULONGLONG Week = Day* 7;
```  
  
### Example  
 See the example for [CFileTime::Millisecond](#cfiletime__millisecond).  
  
## See Also  
 [FILETIME](http://msdn.microsoft.com/library/windows/desktop/ms724284)   
 [CFileTimeSpan Class](../../atl-mfc-shared/reference/cfiletimespan-class.md)   
 [Hierarchy Chart](../../mfc/hierarchy-chart.md)   
 [ATL/MFC Shared Classes](../../atl-mfc-shared/atl-mfc-shared-classes.md)


