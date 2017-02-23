---
title: "Platform::AccessDeniedException Class | Microsoft Docs"
ms.custom: ""
ms.date: "12/30/2016"
ms.prod: "windows-client-threshold"
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "Platform/Platform::AccessDeniedException"
  - "Platform/Platform::AccessDeniedException::AccessDeniedException"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Platform::AccessDeniedException"
ms.assetid: 6ae2155b-7b16-4587-8d2d-da05eab4c7e9
caps.latest.revision: 5
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# Platform::AccessDeniedException Class
Thrown when access to a resource or feature is denied.  
  
## Syntax  
  
```cpp  
public ref class AccessDeniedException : COMException,    IException,    IPrintable,   IEquatable  
```  
  
## Remarks  
 If you hit this exception, ensure that you have requested the appropriate capability and made the required declarations in the package manifest of your app. For more information, see [COMException](../cppcx/platform-comexception-class.md) class.  
  
## Requirements  
 **Minimum supported client:** [!INCLUDE[win8](../cppcx/includes/win8-md.md)]  
  
 **Minimum supported server:** [!INCLUDE[winserver8](../cppcx/includes/winserver8-md.md)]  
  
 **Namespace:** Platform  
  
 **Metadata:** platform.winmd  
  
## See Also  
 [Platform::COMException Class](../cppcx/platform-comexception-class.md)