---
title: "ATL Operators | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "index-page "
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "operators [ATL]"
ms.assetid: 58ccd252-2869-45ee-8a5c-3ca40ee7f8a2
caps.latest.revision: 20
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# ATL Operators
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [ATL Operators](https://docs.microsoft.com/cpp/atl/reference/atl-operators).  
  
  
This section contains the reference topics for the ATL global operators.  
  
|Operator|Description|  
|--------------|-----------------|  
|[operator ==](#operator__eq_eq)|Compares two `CSid` objects or `SID` structures for equality.|  
|[operator !=](#operator__neq)|Compares two `CSid` objects or `SID` structures for inequality.|  
|[operator <](#operator__lt)|Tests if the `CSid` object or `SID` structure on the left side of the operator is less than the `CSid` object or `SID` structure on the right side (for STL compatibility).|  
|[operator >](#operator__gt)|Tests if the `CSid` object or `SID` structure on the left side of the operator is greater than the `CSid` object or `SID` structure on the right side (for STL compatibility).|  
|[operator <=](#operator__lt__eq)|Tests if the `CSid` object or `SID` structure on the left side of the operator is less than or equal to the `CSid` object or `SID` structure on the right side (for STL compatibility).|  
|[operator >=](#operator__gt__eq)|Tests if the `CSid` object or `SID` structure on the left side of the operator is greater than or equal to the `CSid` object or `SID` structure on the right side (for STL compatibility).|  
  
 These operators are all defined in the file atlsecurity.h.  
  
##  <a name="operator__eq_eq"></a>  operator ==  
 Compares `CSid` objects or `SID` (security identifier) structures for equality.  
  
```   
bool operator==(const CSid& lhs, const CSid& rhs) throw(); 
```  
  
### Parameters  
 `lhs`  
 The first `CSid` object or `SID` structure to compare.  
  
 `rhs`  
 The second `CSid` object or `SID` structure to compare.  
  
### Return Value  
 Returns **true** if the objects are equal, **false** if they are not equal.  
  
##  <a name="operator__neq"></a>  operator !=  
 Compares `CSid` objects or `SID` (security identifier) structures for inequality.  
  
```   
bool operator==(const CSid& lhs, const CSid& rhs) throw(); 
```  
  
### Parameters  
 `lhs`  
 The first `CSid` object or `SID` structure to compare.  
  
 `rhs`  
 The second `CSid` object or `SID` structure to compare.  
  
### Return Value  
 Returns **true** if the objects are not equal, **false** if they are equal.  
  
##  <a name="operator__lt"></a>  operator <  
 Tests if the `CSid` object or `SID` structure on the left side of the operator is less than the `CSid` object or `SID` structure on the right side (for STL compatibility).  
  
```   
bool operator<(const CSid& lhs, const CSid& rhs) throw(); 
```  
  
### Parameters  
 `lhs`  
 The first `CSid` object or `SID` structure to compare.  
  
 `rhs`  
 The second `CSid` object or `SID` structure to compare.  
  
### Return Value  
 Returns **true** if the address of the `lhs` object is less than the address of the `rhs` object, **false** otherwise.  
  
### Remarks  
 This operator acts on the address of the `CSid` object or `SID` structure, and is implemented to provide compatibility with STL collection classes.  
  
##  <a name="operator__gt"></a>  operator >  
 Tests if the `CSid` object or `SID` structure on the left side of the operator is greater than the `CSid` object or `SID` structure on the right side (for STL compatibility).  
  
```   
bool operator<(const CSid& lhs, const CSid& rhs) throw(); 
```  
  
### Parameters  
 `lhs`  
 The first `CSid` object or `SID` structure to compare.  
  
 `rhs`  
 The second `CSid` object or `SID` structure to compare.  
  
### Return Value  
 Returns **true** if the address of the `lhs` is greater than the address of the `rhs`, **false** otherwise.  
  
### Remarks  
 This operator acts on the address of the `CSid` object or `SID` structure, and is implemented to provide compatibility with STL collection classes.  
  
##  <a name="operator__lt__eq"></a>  operator <=  
 Tests if the `CSid` object or `SID` structure on the left side of the operator is less than or equal to the `CSid` object or `SID` structure on the right side (for STL compatibility).  
  
```   
bool operator<(const CSid& lhs, const CSid& rhs) throw(); 
```  
  
### Parameters  
 `lhs`  
 The first `CSid` object or `SID` structure to compare.  
  
 `rhs`  
 The second `CSid` object or `SID` structure to compare.  
  
### Return Value  
 Returns **true** if the address of the `lhs` is less than or equal to the address of the `rhs`, **false** otherwise.  
  
### Remarks  
 This operator acts on the address of the `CSid` object or `SID` structure, and is implemented to provide compatibility with STL collection classes.  
  
##  <a name="operator__gt__eq"></a>  operator >=  
 Tests if the `CSid` object or `SID` structure on the left side of the operator is greater than or equal to the `CSid` object or `SID` structure on the right side (for STL compatibility).  
  
```   
bool operator<(const CSid& lhs, const CSid& rhs) throw(); 
```  
  
### Parameters  
 `lhs`  
 The first `CSid` object or `SID` structure to compare.  
  
 `rhs`  
 The second `CSid` object or `SID` structure to compare.  
  
### Return Value  
 Returns **true** if the address of the `lhs` is greater than or equal to the address of the `rhs`, **false** otherwise.  
  
### Remarks  
 This operator acts on the address of the `CSid` object or `SID` structure, and is implemented to provide compatibility with STL collection classes.









