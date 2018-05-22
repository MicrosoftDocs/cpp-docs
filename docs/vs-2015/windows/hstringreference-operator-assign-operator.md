---
title: "HStringReference::Operator= Operator | Microsoft Docs"
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
  - "corewrappers/Microsoft::WRL::Wrappers::HStringReference::operator="
dev_langs: 
  - "C++"
ms.assetid: ea100ed3-e566-4c9e-b6a8-f296088dea9c
caps.latest.revision: 4
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# HStringReference::Operator= Operator
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [HStringReference::Operator= Operator](https://docs.microsoft.com/cpp/windows/hstringreference-operator-assign-operator).  
  
  
Moves the value of another HStringReference object to the current HStringReference object.  
  
## Syntax  
  
```cpp  
HStringReference& operator=(HStringReference&& other) throw()  
```  
  
#### Parameters  
 `other`  
 An existing HStringReference object.  
  
## Remarks  
 The value of the existing `other` object is copied to the current HStringReference object, and then the `other` object is destroyed.  
  
## Requirements  
 **Header:** corewrappers.h  
  
 **Namespace:** Microsoft::WRL::Wrappers  
  
## See Also  
 [HStringReference Class](../windows/hstringreference-class.md)

