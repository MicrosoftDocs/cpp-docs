---
title: "HString::Operator&lt; Operator | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["corewrappers/Microsoft::WRL::Wrappers::HString::operator<"]
dev_langs: ["C++"]
ms.assetid: 48a051cb-4609-42be-b48c-d35fc99d1eab
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# HString::Operator&lt; Operator
Indicates whether the first parameter is less than the second parameter.  
  
## Syntax  
  
```cpp  
inline bool operator<(  
    const HString& lhs,   
    const HString& rhs) throw()  
```  
  
#### Parameters  
 *lhs*  
 The first parameter to compare. *lhs* can be a reference to an **HString**.  
  
 *rhs*  
 The second parameter to compare. *rhs* can be a reference to an **HString**.  
  
## Return Value  
 **true** if the *lhs* parameter is less than the *rhs* parameter; otherwise, **false**.  
  
## Requirements  
 **Header:** corewrappers.h  
  
 **Namespace:** Microsoft::WRL::Wrappers  
  
## See Also  
 [HString Class](../windows/hstring-class.md)