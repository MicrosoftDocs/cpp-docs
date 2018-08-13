---
title: "HString::Operator= Operator | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["corewrappers/Microsoft::WRL::Wrappers::HString::operator="]
dev_langs: ["C++"]
ms.assetid: 8e68c1ff-bc57-4526-810e-af3c284b4e30
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# HString::Operator= Operator
Moves the value of another **HString** object to the current **HString** object.  
  
## Syntax  
  
```cpp  
HString& operator=(HString&& other) throw()  
```  
  
### Parameters  
 *other*  
 An existing **HString** object.  
  
## Remarks  
 The value of the existing *other* object is copied to the current **HString** object, and then the *other* object is destroyed.  
  
## Requirements  
 **Header:** corewrappers.h  
  
 **Namespace:** Microsoft::WRL::Wrappers  
  
## See Also  
 [HString Class](../windows/hstring-class.md)