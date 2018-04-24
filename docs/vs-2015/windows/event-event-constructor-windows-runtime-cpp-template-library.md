---
title: "Event::Event Constructor (Windows Runtime C++ Template Library) | Microsoft Docs"
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
  - "corewrappers/Microsoft::WRL::Wrappers::Event::Event"
dev_langs: 
  - "C++"
ms.assetid: 21495297-9612-4095-9256-16e168cc0021
caps.latest.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Event::Event Constructor (Windows Runtime C++ Template Library)
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [Event::Event Constructor (Windows Runtime C++ Template Library)](https://docs.microsoft.com/cpp/windows/event-event-constructor-windows-runtime-cpp-template-library).  
  
  
Initializes a new instance of the Event class.  
  
## Syntax  
  
```  
explicit Event(  
   HANDLE h = HandleT::Traits::GetInvalidValue()  
);  
WRL_NOTHROW Event(  
   _Inout_ Event&& h  
);  
```  
  
#### Parameters  
 `h`  
 Handle to an event. By default, `h` is initialized to `nullptr`.  
  
## Requirements  
 **Header:** corewrappers.h  
  
 **Namespace:** Microsoft::WRL::Wrappers  
  
## See Also  
 [Event Class (Windows Runtime C++ Template Library)](../windows/event-class-windows-runtime-cpp-template-library.md)

