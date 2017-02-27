---
title: "Guid::operator() Operator | Microsoft Docs"
ms.custom: ""
ms.date: "12/30/2016"
ms.prod: "windows-client-threshold"  
ms.technology: ""
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "Platform/Platform::Guid::operator()"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Guid::operator()"
  - "Platform, Guid::operator()"
ms.assetid: 5df51e6a-11c0-414c-8613-06b45a952828
caps.latest.revision: 5
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# Guid::operator() Operator
Implicitly converts a [GUID structure](http://msdn.microsoft.com/library/windows/desktop/aa373931\(v=vs.85\).aspx)GUID to a Platform::Guid.  
  
## Syntax  
  
```cpp  
Platform::Guid operator()  
```  
  
## Return Value  
 A Guid struct.  
  
## Requirements  
 **Minimum supported client:** [!INCLUDE[win8](../cppcx/includes/win8-md.md)]  
  
 **Minimum supported server:** [!INCLUDE[winserver8](../cppcx/includes/winserver8-md.md)]  
  
 **Namespace:** Platform  
  
 **Metadata:** platform.winmd  
  
## See Also  
 [Platform::Guid value class](../cppcx/platform-guid-value-class.md)