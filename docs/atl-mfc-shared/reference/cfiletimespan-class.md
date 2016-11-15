---
title: "CFileTimeSpan Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CFileTimeSpan"
  - "ATL.CFileTimeSpan"
  - "ATL::CFileTimeSpan"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "shared classes, CFileTimeSpan"
  - "CFileTimeSpan class"
ms.assetid: 5856fb39-9c82-4027-8ccf-8760890491ec
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
|[CFileTimeSpan::CFileTimeSpan](#cfiletimespan__cfiletimespan)|The constructor.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CFileTimeSpan::GetTimeSpan](#cfiletimespan__gettimespan)|Call this method to retrieve the time span from the `CFileTimeSpan` object.|  
|[CFileTimeSpan::SetTimeSpan](#cfiletimespan__settimespan)|Call this method to set the time span of the `CFileTimeSpan` object.|  
  
### Public Operators  
  
|Name|Description|  
|----------|-----------------|  
|[CFileTimeSpan::operator -](#cfiletimespan__operator_-)|Performs subtraction on a `CFileTimeSpan` object.|  
|[CFileTimeSpan::operator !=](#cfiletimespan__operator__neq)|Compares two `CFileTimeSpan` objects for inequality.|  
|[CFileTimeSpan::operator +](#cfiletimespan__operator__add)|Performs addition on a `CFileTimeSpan` object.|  
|[CFileTimeSpan::operator +=](#cfiletimespan__operator__add_eq)|Performs addition on a `CFileTimeSpan` object and assign the result to the current object.|  
|[CFileTimeSpan::operator &lt;](#cfiletimespan__operator__lt_)|Compares two `CFileTimeSpan` objects to determine the lesser.|  
|[CFileTimeSpan::operator &lt;=](#cfiletimespan__operator__lt__eq)|Compares two `CFileTimeSpan` objects to determine equality or the lesser.|  
|[CFileTimeSpan::operator =](#cfiletimespan__operator__eq)|The assignment operator.|  
|[CFileTimeSpan::operator -=](#cfiletimespan__operator_-_eq)|Performs subtraction on a `CFileTimeSpan` object and assign the result to the current object.|  
|[CFileTimeSpan::operator ==](#cfiletimespan__operator__eq_eq)|Compares two `CFileTimeSpan` objects for equality.|  
|[CFileTimeSpan::operator &gt;](#cfiletimespan__operator__gt_)|Compares two `CFileTimeSpan` objects to determine the larger.|  
|[CFileTimeSpan::operator &gt;=](#cfiletimespan__operator__gt__eq)|Compares two `CFileTimeSpan` objects to determine equality or the larger.|  
  
## Remarks  
 This class provides methods for managing relative periods of time often encountered when performing operations concerning when a file was created, last accessed or last modified. The methods of this class are frequently used in conjunction with [CFileTime class](../../atl-mfc-shared/reference/cfiletime-class.md) objects.  
  
## Example  
 See the example for [CFileTime::Millisecond](../../atl-mfc-shared/reference/cfiletime-class.md#cfiletime__millisecond).  
  
## Requirements  
 **Header:** atltime.h  
  
##  <a name="cfiletimespan__cfiletimespan"></a>  CFileTimeSpan::CFileTimeSpan  
 The constructor.  
  
```
CFileTimeSpan() throw();

CFileTimeSpan(const CFileTimeSpan& span) throw();

CFileTimeSpan(LONGLONG nSpan) throw();
```  
  
### Parameters  
 `span`  
 An existing `CFileTimeSpan` object.  
  
 `nSpan`  
 A period of time in milliseconds.  
  
### Remarks  
 The `CFileTimeSpan` object can be created using an existing `CFileTimeSpan` object, or expressed as a 64-bit value. The default constructor sets the time span to 0.  
  
##  <a name="cfiletimespan__gettimespan"></a>  CFileTimeSpan::GetTimeSpan  
 Call this method to retrieve the time span from the `CFileTimeSpan` object.  
  
```
LONGLONG GetTimeSpan() const throw();
```  
  
### Return Value  
 Returns the time span in milliseconds.  
  
##  <a name="cfiletimespan__operator_-"></a>  CFileTimeSpan::operator -  
 Performs subtraction on a **CFileTimeSpan** object.  
  
```
CFileTimeSpan operator-(CFileTimeSpan span) const throw();
```  
  
### Parameters  
 `span`  
 A `CFileTimeSpan` object.  
  
### Return Value  
 Returns a `CFileTimeSpan` object representing the result of the difference between two time spans.  
  
##  <a name="cfiletimespan__operator__neq"></a>  CFileTimeSpan::operator !=  
 Compares two `CFileTimeSpan` objects for inequality.  
  
```
bool operator!=(CFileTimeSpan span) const throw();
```  
  
### Parameters  
 `span`  
 The `CFileTimeSpan` object to be compared.  
  
### Return Value  
 Returns **true** if the item being compared is not equal to the `CFileTimeSpan` object; otherwise **false**.  
  
##  <a name="cfiletimespan__operator__add"></a>  CFileTimeSpan::operator +  
 Performs addition on a `CFileTimeSpan` object.  
  
```
CFileTimeSpan operator+(CFileTimeSpan span) const throw();
```  
  
### Parameters  
 `span`  
 A `CFileTimeSpan` object.  
  
### Return Value  
 Returns a `CFileTimeSpan` object containing the sum of the two time spans.  
  
##  <a name="cfiletimespan__operator__add_eq"></a>  CFileTimeSpan::operator +=  
 Performs addition on a `CFileTimeSpan` object and assigns the result to the current object.  
  
```
CFileTimeSpan& operator+=(CFileTimeSpan span) throw();
```  
  
### Parameters  
 `span`  
 A `CFileTimeSpan` object.  
  
### Return Value  
 Returns the updated `CFileTimeSpan` object containing the sum of the two time spans.  
  
##  <a name="cfiletimespan__operator__lt_"></a>  CFileTimeSpan::operator &lt;  
 Compares two `CFileTimeSpan` objects to determine the lesser.  
  
```
bool operator<(CFileTimeSpan span) const throw();
```  
  
### Parameters  
 `span`  
 The `CFileTimeSpan` object to be compared.  
  
### Return Value  
 Returns **true** if the first object is less (that is, represents a shorter time period) than the second, otherwise **false**.  
  
##  <a name="cfiletimespan__operator__lt__eq"></a>  CFileTimeSpan::operator &lt;=  
 Compares two `CFileTimeSpan` objects to determine equality or the lesser.  
  
```
bool operator<=(CFileTimeSpan span) const throw();
```  
  
### Parameters  
 `span`  
 The `CFileTimeSpan` object to be compared.  
  
### Return Value  
 Returns **true** if the first object is less than (that is, represents a shorter time period) or equal to the second, otherwise **false**.  
  
##  <a name="cfiletimespan__operator__eq"></a>  CFileTimeSpan::operator =  
 The assignment operator.  
  
```
CFileTimeSpan& operator=(const CFileTimeSpan& span) throw();
```  
  
### Parameters  
 `span`  
 A `CFileTimeSpan` object.  
  
### Return Value  
 Returns the updated `CFileTimeSpan` object.  
  
##  <a name="cfiletimespan__operator_-_eq"></a>  CFileTimeSpan::operator -=  
 Performs subtraction on a `CFileTimeSpan` object and assigns the result to the current object.  
  
```
CFileTimeSpan& operator-=(CFileTimeSpan span) throw();
```  
  
### Parameters  
 `span`  
 A `CFileTimeSpan` object.  
  
### Return Value  
 Returns the updated `CFileTimeSpan` object.  
  
##  <a name="cfiletimespan__operator__eq_eq"></a>  CFileTimeSpan::operator ==  
 Compares two `CFileTimeSpan` objects for equality.  
  
```
bool operator==(CFileTimeSpan span) const throw();
```  
  
### Parameters  
 `span`  
 The `CFileTimeSpan` object to be compared.  
  
### Return Value  
 Returns **true** if the objects are equal, otherwise **false**.  
  
##  <a name="cfiletimespan__operator__gt_"></a>  CFileTimeSpan::operator &gt;  
 Compares two `CFileTimeSpan` objects to determine the larger.  
  
```
bool operator>(CFileTimeSpan span) const throw();
```  
  
### Parameters  
 `span`  
 The `CFileTimeSpan` object to be compared.  
  
### Return Value  
 Returns **true** if the first object is greater than (that is, represents a longer time period) than the second, otherwise **false**.  
  
##  <a name="cfiletimespan__operator__gt__eq"></a>  CFileTimeSpan::operator &gt;=  
 Compares two `CFileTimeSpan` objects to determine equality or the larger.  
  
```
bool operator>=(CFileTimeSpan span) const throw();
```  
  
### Parameters  
 `span`  
 The `CFileTimeSpan` object to be compared.  
  
### Return Value  
 Returns **true** if the first object is greater than (that is, represents a longer time period) or equal to the second, otherwise **false**.  
  
##  <a name="cfiletimespan__settimespan"></a>  CFileTimeSpan::SetTimeSpan  
 Call this method to set the time span of the `CFileTimeSpan` object.  
  
```
void SetTimeSpan(LONGLONG nSpan) throw();
```  
  
### Parameters  
 `nSpan`  
 The new value for the time span in milliseconds.  
  
## See Also  
 [FILETIME](http://msdn.microsoft.com/library/windows/desktop/ms724284)   
 [CFileTime Class](../../atl-mfc-shared/reference/cfiletime-class.md)   
 [Hierarchy Chart](../../mfc/hierarchy-chart.md)   
 [ATL/MFC Shared Classes](../../atl-mfc-shared/atl-mfc-shared-classes.md)


