---
title: "String::IsFastPass Method | Microsoft Docs"
ms.custom: ""
ms.date: "12/30/2016"
ms.prod: "windows-client-threshold"  
ms.technology: ""
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "Platform/Platform::String::IsFastPass"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Platform::String::IsFastPass"
ms.assetid: 0a8c2db7-e44f-45fe-9570-3dc82fbbacdd
caps.latest.revision: 4
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# String::IsFastPass Method
Indicates whether the current String object is is participating in a *fast pass* operation. In a fast pass operation, reference counting is suspended.  
  
## Syntax  
  
```cpp  
  
bool IsFastPass();  
```  
  
## Return Value  
 `true` if the current String object is fast-past; otherwise, `false`.  
  
## Remarks  
 In a call to a function where a reference-counted object is a parameter, and the called function only reads that object, the compiler can safely suspend reference counting and improve calling performance. There is nothing useful that your code can do with this property. The system handles all the details.  
  
## Requirements  
 **Minimum supported client:** [!INCLUDE[win8](../cppcx/includes/win8-md.md)]  
  
 **Minimum supported server:** [!INCLUDE[winserver8](../cppcx/includes/winserver8-md.md)]  
  
 **Namespace:** Platform  
  
 **Metadata:** vccorlib.h  
  
## See Also  
 [Platform::String Class](../cppcx/platform-string-class.md)