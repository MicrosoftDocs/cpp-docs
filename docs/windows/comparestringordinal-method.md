---
title: "CompareStringOrdinal Method | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["corewrappers/Microsoft::WRL::Wrappers::Details::CompareStringOrdinal"]
dev_langs: ["C++"]
ms.assetid: ffa997fd-8cd7-40a5-b9e7-f55d40b072f4
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# CompareStringOrdinal Method
Supports the WRL infrastructure and is not intended to be used directly from your code.  
  
## Syntax  
  
```cpp  
inline INT32 CompareStringOrdinal(  
   HSTRING lhs,   
   HSTRING rhs)  
```  
  
### Parameters  
 *lhs*  
 The first HSTRING to compare.  
  
 *rhs*  
 The second HSTRING to compare.  
  
## Return Value  
  
|Value|Condition|  
|-----------|---------------|  
|-1|*lhs* is less than *rhs*.|  
|0|*lhs* equals *rhs*.|  
|1|*lhs* is greater than *rhs*.|  
  
## Remarks  
 Compares two specified HSTRING objects and returns an integer that indicates their relative position in a sort order.  
  
## Requirements  
 **Header:** corewrappers.h  
  
 **Namespace:** Microsoft::WRL::Wrappers::Details  
  
## See Also  
 [Microsoft::WRL::Wrappers::Details Namespace](../windows/microsoft-wrl-wrappers-details-namespace.md)