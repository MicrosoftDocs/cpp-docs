---
title: "CComSafeArrayBound Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "ATL.CComSafeArrayBound"
  - "ATL::CComSafeArrayBound"
  - "CComSafeArrayBound"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CComSafeArrayBound class"
ms.assetid: dd6299db-5f84-4630-bbf0-f5add5318437
caps.latest.revision: 21
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
# CComSafeArrayBound Class
This class is a wrapper for a [SAFEARRAYBOUND](http://msdn.microsoft.com/en-us/303a9bdb-71d6-4f14-8747-84cf84936c6d) structure.  
  
## Syntax  
  
```
class CComSafeArrayBound : public SAFEARRAYBOUND
```  
  
## Members  
  
### Methods  
  
|||  
|-|-|  
|[CComSafeArrayBound](#ccomsafearraybound__ccomsafearraybound)|The constructor.|  
|[GetCount](#ccomsafearraybound__getcount)|Call this method to return the number of elements.|  
|[GetLowerBound](#ccomsafearraybound__getlowerbound)|Call this method to return the lower bound.|  
|[GetUpperBound](#ccomsafearraybound__getupperbound)|Call this method to return the upper bound.|  
|[SetCount](#ccomsafearraybound__setcount)|Call this method to set the number of elements.|  
|[SetLowerBound](#ccomsafearraybound__setlowerbound)|Call this method to set the lower bound.|  
  
### Operators  
  
|||  
|-|-|  
|[operator =](#ccomsafearraybound__operator_eq)|Sets the `CComSafeArrayBound` to a new value.|  
  
## Remarks  
 This class is a wrapper for the **SAFEARRAYBOUND** structure used by [CComSafeArray](../../atl/reference/ccomsafearray-class.md). It provides methods for querying and setting the upper and lower bounds of a single dimension of a `CComSafeArray` object and the number of elements it contains. A multidimensional `CComSafeArray` object uses an array of `CComSafeArrayBound` objects, one for each dimension. Therefore, when using methods such as [GetCount](#ccomsafearraybound__getcount), be aware that this method will not return the total number of elements in a multidimensional array.  
  
 **Header:** atlsafe.h  
  
## Requirements  
 **Header:** atlsafe.h  
  
##  <a name="ccomsafearraybound__ccomsafearraybound"></a>  CComSafeArrayBound::CComSafeArrayBound  
 The constructor.  
  
```
CComSafeArrayBound(ULONG ulCount = 0,  LONG lLowerBound = 0) throw();
```  
  
### Parameters  
 `ulCount`  
 The number of elements in the array.  
  
 `lLowerBound`  
 The lower bound from which the array is numbered.  
  
### Remarks  
 If the array is to be accessed from a Visual C++ program, it is recommended that the lower bound be defined as 0. It may be preferable to use a different lower bound value if the array is to be used with other languages, such as Visual Basic.  
  
##  <a name="ccomsafearraybound__getcount"></a>  CComSafeArrayBound::GetCount  
 Call this method to return the number of elements.  
  
```
ULONG GetCount() const throw();
```  
  
### Return Value  
 Returns the number of elements.  
  
### Remarks  
 If the associated `CComSafeArray` object represents a multidimensional array, this method will only return the total number of elements in the rightmost dimension. Use [CComSafeArray::GetCount](../../atl/reference/ccomsafearray-class.md#ccomsafearray__getcount) to obtain the total number of elements.  
  
##  <a name="ccomsafearraybound__getlowerbound"></a>  CComSafeArrayBound::GetLowerBound  
 Call this method to return the lower bound.  
  
```
LONG GetLowerBound() const throw();
```  
  
### Return Value  
 Returns the lower bound of the `CComSafeArrayBound` object.  
  
##  <a name="ccomsafearraybound__getupperbound"></a>  CComSafeArrayBound::GetUpperBound  
 Call this method to return the upper bound.  
  
```
LONG GetUpperBound() const throw();
```  
  
### Return Value  
 Returns the upper bound of the `CComSafeArrayBound` object.  
  
### Remarks  
 The upper bound depends on the number of elements and the lower bound value. For example, if the lower bound is 0 and the number of elements is 10, the upper bound will automatically be set to 9.  
  
##  <a name="ccomsafearraybound__operator_eq"></a>  CComSafeArrayBound::operator =  
 Sets the `CComSafeArrayBound` to a new value.  
  
```
CComSafeArrayBound& operator= (const CComSafeArrayBound& bound) throw();
CComSafeArrayBound& operator= (ULONG ulCount) throw();
```  
  
### Parameters  
 `bound`  
 A `CComSafeArrayBound` object.  
  
 `ulCount`  
 The number of elements.  
  
### Return Value  
 Returns a pointer to the `CComSafeArrayBound` object.  
  
### Remarks  
 The `CComSafeArrayBound` object can be assigned using an existing `CComSafeArrayBound`, or by supplying the number of elements, in which case the lower bound is set to 0 by default.  
  
##  <a name="ccomsafearraybound__setcount"></a>  CComSafeArrayBound::SetCount  
 Call this method to set the number of elements.  
  
```
ULONG SetCount(ULONG ulCount) throw();
```  
  
### Parameters  
 `ulCount`  
 The number of elements.  
  
### Return Value  
 Returns the number of elements in the `CComSafeArrayBound` object.  
  
##  <a name="ccomsafearraybound__setlowerbound"></a>  CComSafeArrayBound::SetLowerBound  
 Call this method to set the lower bound.  
  
```
LONG SetLowerBound(LONG lLowerBound) throw();
```  
  
### Parameters  
 `lLowerBound`  
 The lower bound.  
  
### Return Value  
 Returns the new lower bound of the `CComSafeArrayBound` object.  
  
### Remarks  
 If the array is to be accessed from a Visual C++ program, it is recommended that the lower bound be defined as 0. It may be preferable to use a different lower bound value if the array is to be used with other languages, such as Visual Basic.  
  
 The upper bound depends on the number of elements and the lower bound value. For example, if the lower bound is 0 and the number of elements is 10, the upper bound will automatically be set to 9.  
  
## See Also  
 [Class Overview](../../atl/atl-class-overview.md)
