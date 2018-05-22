---
title: "Event::operator= Operator | Microsoft Docs"
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
  - "corewrappers/Microsoft::WRL::Wrappers::Event::operator="
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "operator= operator"
ms.assetid: d8fe9820-8856-4899-9553-56226bdc4945
caps.latest.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Event::operator= Operator
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [Event::operator= Operator](https://docs.microsoft.com/cpp/windows/event-operator-assign-operator).  
  
  
Assigns the specified Event reference to the current Event instance.  
  
## Syntax  
  
```  
WRL_NOTHROW Event& operator=(  
   _Inout_ Event&& h  
);  
```  
  
#### Parameters  
 `h`  
 An rvalue-reference to an Event instance.  
  
## Return Value  
 A pointer to the current Event instance.  
  
## Requirements  
 **Header:** corewrappers.h  
  
 **Namespace:** Microsoft::WRL::Wrappers  
  
## See Also  
 [Event Class (Windows Runtime C++ Template Library)](../windows/event-class-windows-runtime-cpp-template-library.md)

