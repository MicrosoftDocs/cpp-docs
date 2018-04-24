---
title: "HString::Operator= Operator | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "corewrappers/Microsoft::WRL::Wrappers::HString::operator="
dev_langs: 
  - "C++"
ms.assetid: 8e68c1ff-bc57-4526-810e-af3c284b4e30
caps.latest.revision: 4
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# HString::Operator= Operator
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [HString::Operator= Operator](https://docs.microsoft.com/cpp/windows/hstring-operator-assign-operator).  
  
  
Moves the value of another HString object to the current HString object.  
  
## Syntax  
  
```cpp  
HString& operator=(HString&& other) throw()  
```  
  
#### Parameters  
 `other`  
 An existing HString object.  
  
## Remarks  
 The value of the existing `other` object is copied to the current HString object, and then the `other` object is destroyed.  
  
## Requirements  
 **Header:** corewrappers.h  
  
 **Namespace:** Microsoft::WRL::Wrappers  
  
## See Also  
 [HString Class](../windows/hstring-class.md)

