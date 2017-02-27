---
title: "String::End Method | Microsoft Docs"
ms.custom: ""
ms.date: "12/30/2016"
ms.prod: "windows-client-threshold"  
ms.technology: ""
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "Platform/Platform::String::End"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Platform::String::End"
ms.assetid: c02ad0db-d35d-45f4-9b2a-cfc76716358e
caps.latest.revision: 3
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# String::End Method
Returns a pointer past the end of the current string.  
  
## Syntax  
  
```cpp  
  
char16* End()  
```  
  
## Return Value  
 A pointer to past the end of the current string.  
  
## Remarks  
 End() returns Begin()+Length.  
  
## Requirements  
 **Minimum supported client:** [!INCLUDE[win8](../cppcx/includes/win8-md.md)]  
  
 **Minimum supported server:** [!INCLUDE[winserver8](../cppcx/includes/winserver8-md.md)]  
  
 **Namespace:** Platform  
  
 **Metadata:** vccorlib.h  
  
## See Also  
 [Platform::String Class](../cppcx/platform-string-class.md)