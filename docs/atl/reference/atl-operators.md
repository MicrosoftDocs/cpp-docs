---
title: "ATL Operators | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
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
caps.latest.revision: 16
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
# ATL Operators
This section contains the reference topics for the ATL global operators.  
  
|Operator|Description|  
|--------------|-----------------|  
|[operator ==](#operator_eq_eq)|Compares two `CSid` objects or `SID` structures for equality.|  
|[operator !=](#operator_neq)|Compares two `CSid` objects or `SID` structures for inequality.|  
|[operator <](#operator_lt)|Tests if the `CSid` object or `SID` structure on the left side of the operator is less than the `CSid` object or `SID` structure on the right side (for STL compatibility).|  
|[operator >](#operator_gt)|Tests if the `CSid` object or `SID` structure on the left side of the operator is greater than the `CSid` object or `SID` structure on the right side (for STL compatibility).|  
|[operator <=](#operator_lt__eq)|Tests if the `CSid` object or `SID` structure on the left side of the operator is less than or equal to the `CSid` object or `SID` structure on the right side (for STL compatibility).|  
|[operator >=](#operator_gt__eq)|Tests if the `CSid` object or `SID` structure on the left side of the operator is greater than or equal to the `CSid` object or `SID` structure on the right side (for STL compatibility).|  
  
 These operators are all defined in the file atlsecurity.h.  
  
##  <a name="operator_eq_eq"></a>  operator ==  
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
  
##  <a name="operator_neq"></a>  operator !=  
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
  
##  <a name="operator_lt"></a>  operator <  
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
  
##  <a name="operator_gt"></a>  operator >  
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
  
##  <a name="operator_lt__eq"></a>  operator <=  
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
  
##  <a name="operator_gt__eq"></a>  operator >=  
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



