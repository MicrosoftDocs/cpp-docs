---
title: "HStringReference::Operator&lt; Operator | Microsoft Docs"
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
  - "corewrappers/Microsoft::WRL::Wrappers::HStringReference::operator<"
dev_langs: 
  - "C++"
ms.assetid: 55aa48e8-7c96-4123-9ebe-42b4cd8b9377
caps.latest.revision: 4
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# HStringReference::Operator&lt; Operator
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [HStringReference::Operator&lt; Operator](https://docs.microsoft.com/cpp/windows/hstringreference-operator-less-than-operator).  
  
  
Indicates whether the first parameter is less than the second parameter.  
  
## Syntax  
  
```cpp  
  
inline bool operator<(  
    const HStringReference& lhs,   
    const HStringReference& rhs) throw()  
```  
  
#### Parameters  
 `lhs`  
 The first parameter to compare. `lhs` can be a reference to an HStringReference.  
  
 `rhs`  
 The second parameter to compare.  `rhs` can be a reference to an HStringReference.  
  
## Return Value  
 `true` if the `lhs` parameter is less than the `rhs` parameter; otherwise, `false`.  
  
## Requirements  
 **Header:** corewrappers.h  
  
 **Namespace:** Microsoft::WRL::Wrappers  
  
## See Also  
 [HStringReference Class](../windows/hstringreference-class.md)

