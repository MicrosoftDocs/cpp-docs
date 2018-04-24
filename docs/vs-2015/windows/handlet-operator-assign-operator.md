---
title: "HandleT::operator= Operator | Microsoft Docs"
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
  - "corewrappers/Microsoft::WRL::Wrappers::HandleT::operator="
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "operator= operator"
ms.assetid: 9e42dcca-30fa-4e8b-8954-802fd64a5595
caps.latest.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# HandleT::operator= Operator
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [HandleT::operator= Operator](https://docs.microsoft.com/cpp/windows/handlet-operator-assign-operator).  
  
  
Moves the value of the specified HandleT object to the current HandleT object.  
  
## Syntax  
  
```  
HandleT& operator=(  
   _Inout_ HandleT&& h  
);  
```  
  
#### Parameters  
 `h`  
 An rvalue-reference to a handle.  
  
## Return Value  
 A reference to the current HandleT object.  
  
## Remarks  
 This operation invalidates the HandleT object specified by parameter `h`.  
  
## Requirements  
 **Header:** corewrappers.h  
  
 **Namespace:** Microsoft::WRL::Wrappers  
  
## See Also  
 [HandleT Class](../windows/handlet-class.md)

