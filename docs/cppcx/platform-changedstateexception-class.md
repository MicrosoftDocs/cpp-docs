---
title: "Platform::ChangedStateException Class | Microsoft Docs"
ms.custom: ""
ms.date: "12/30/2016"
ms.prod: "windows-client-threshold"  
ms.technology: ""
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "VCCORLIB/Platform::ChangedStateException"
  - "VCCORLIB/Platform::ChangedStateException::ChangedStateException"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Platform::ChangedStateException"
ms.assetid: f894beac-9e80-4fac-ac25-89f1dbc0a6a4
caps.latest.revision: 4
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# Platform::ChangedStateException Class
Thrown when the internal state of an object has changed, thereby invalidating the results of the method.  
  
## Syntax  
  
```cpp  
public ref class ChangedStateException : COMException,    IException,    IPrintable,    IEquatable  
```  
  
### Remarks  
 One example where this exception is thrown is when methods of a collection iterator or a collection view are called after the parent collection has changed, invalidating the results of the method.  
  
 For more information, see the [COMException](../cppcx/platform-comexception-class.md) class.  
  
### Requirements  
 **Minimum supported client:** [!INCLUDE[win8](../cppcx/includes/win8-md.md)]  
  
 **Minimum supported server:** [!INCLUDE[winserver8](../cppcx/includes/winserver8-md.md)]  
  
 **Namespace:** Platform  
  
 **Metadata:** platform.winmd  
  
## See Also  
 [Platform::COMException Class](../cppcx/platform-comexception-class.md)