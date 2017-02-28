---
title: "Platform::NotImplementedException Class | Microsoft Docs"
ms.custom: ""
ms.date: "12/30/2016"
ms.prod: "windows-client-threshold"  
ms.technology: ""
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "Platform/Platform::NotImplementedException"
  - "Platform/Platform::NotImplementedException::NotImplementedException"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Platform::NotImplementedException"
ms.assetid: 6da26cc2-dde8-4aea-aa85-67aac55cf97b
caps.latest.revision: 3
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# Platform::NotImplementedException Class
Thrown when an interface member is not been implemented in a derived type.  
  
## Syntax  
  
```cpp  
public ref class NotImplementedException : COMException,    IException,    IPrintable,    IEquatable  
```  
  
## Remarks  
 For more information, see the [COMException](../cppcx/platform-comexception-class.md) class.  
  
## Requirements  
 **Minimum supported client:** [!INCLUDE[win8](../cppcx/includes/win8-md.md)]  
  
 **Minimum supported server:** [!INCLUDE[winserver8](../cppcx/includes/winserver8-md.md)]  
  
 **Namespace:** Platform  
  
 **Metadata:** platform.winmd  
  
## See Also  
 [Platform::COMException Class](../cppcx/platform-comexception-class.md)