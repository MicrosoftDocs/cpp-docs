---
title: "Event::operator= Operator | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
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
caps.latest.revision: 3
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
translation.priority.ht: 
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "ru-ru"
  - "zh-cn"
  - "zh-tw"
translation.priority.mt: 
  - "cs-cz"
  - "pl-pl"
  - "pt-br"
  - "tr-tr"
---
# Event::operator= Operator
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