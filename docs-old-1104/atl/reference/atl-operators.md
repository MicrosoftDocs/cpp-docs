---
title: "ATL Operators | Microsoft Docs"
ms.custom: ""
ms.date: "11/01/2016"
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
caps.latest.revision: 15
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
|[operator ==](../Topic/operator%20==%20\(ATL\).md)|Compares two `CSid` objects or `SID` structures for equality.|  
|[operator !=](../Topic/operator%20!=%20\(ATL\).md)|Compares two `CSid` objects or `SID` structures for inequality.|  
|[operator <](../Topic/operator%20%3C%20\(ATL\).md)|Tests if the `CSid` object or `SID` structure on the left side of the operator is less than the `CSid` object or `SID` structure on the right side (for STL compatibility).|  
|[operator >](../Topic/operator%20%3E%20\(ATL\).md)|Tests if the `CSid` object or `SID` structure on the left side of the operator is greater than the `CSid` object or `SID` structure on the right side (for STL compatibility).|  
|[operator <=](../Topic/operator%20%3C=%20\(ATL\).md)|Tests if the `CSid` object or `SID` structure on the left side of the operator is less than or equal to the `CSid` object or `SID` structure on the right side (for STL compatibility).|  
|[operator >=](../Topic/operator%20%3E=%20\(ATL\).md)|Tests if the `CSid` object or `SID` structure on the left side of the operator is greater than or equal to the `CSid` object or `SID` structure on the right side (for STL compatibility).|  
  
 These operators are all defined in the file atlsecurity.h.  
  
##  <a name="operator__eq_eq__atl_"></a>  operator ==  
 Compares `CSid` objects or `SID` (security identifier) structures for equality.  
  
```  
 
bool operator==(
    const CSid& 
lhs,Â  
    const CSid& 
rhs,Â) throw();

 
```  
  
### Parameters  
 `lhs`  
 The first `CSid` object or `SID` structure to compare.  
  
 `rhs`  
 The second `CSid` object or `SID` structure to compare.  
  
### Return Value  
 Returns **true** if the objects are equal, **false** if they are not equal.  
  
##  <a name="operator__neq__atl_"></a>  operator !=  
 Compares `CSid` objects or `SID` (security identifier) structures for inequality.  
  
```  
 
bool operator==(
    const CSid& 
lhs,Â  
    const CSid& 
rhs,Â) throw();

 
```  
  
### Parameters  
 `lhs`  
 The first `CSid` object or `SID` structure to compare.  
  
 `rhs`  
 The second `CSid` object or `SID` structure to compare.  
  
### Return Value  
 Returns **true** if the objects are not equal, **false** if they are equal.  
  
##  <a name="operator__lt___atl_"></a>  operator <  
 Tests if the `CSid` object or `SID` structure on the left side of the operator is less than the `CSid` object or `SID` structure on the right side (for STL compatibility).  
  
```  
 
bool operator<(
    const CSid& 
lhs,Â  
    const CSid& 
rhs,Â) throw();

 
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
  
##  <a name="operator__gt___atl_"></a>  operator >  
 Tests if the `CSid` object or `SID` structure on the left side of the operator is greater than the `CSid` object or `SID` structure on the right side (for STL compatibility).  
  
```  
 
bool operator<(
    const CSid& 
lhs,Â  
    const CSid& 
rhs,Â) throw();

 
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
  
##  <a name="operator__lt__eq__atl_"></a>  operator <=  
 Tests if the `CSid` object or `SID` structure on the left side of the operator is less than or equal to the `CSid` object or `SID` structure on the right side (for STL compatibility).  
  
```  
 
bool operator<(
    const CSid& 
lhs,Â  
    const CSid& 
rhs,Â) throw();

 
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
  
##  <a name="operator__gt__eq__atl_"></a>  operator >=  
 Tests if the `CSid` object or `SID` structure on the left side of the operator is greater than or equal to the `CSid` object or `SID` structure on the right side (for STL compatibility).  
  
```  
 
bool operator<(
    const CSid& 
lhs,  
    const CSid& 
rhs,Â) throw();

 
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



