---
title: "Platform::IntPtr value class | Microsoft Docs"
ms.custom: ""
ms.date: "12/30/2016"
ms.prod: "windows-client-threshold"
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "Platform/Platform::IntPtr"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Platform::IntPtr Struct"
ms.assetid: 6c0326e8-edfd-4e53-a963-240b845dcde8
caps.latest.revision: 4
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# Platform::IntPtr value class
Represents an signed pointer or handle, and whose size is platform-specific (32-bit or 64-bit).  
  
## Syntax  
  
```cpp  
public value struct IntPtr  
```  
  
## Members  
 IntPtr has the following members:  
  
|Member|Description|  
|------------|-----------------|  
|[IntPtr::IntPtr Constructor](../cppcx/intptr-intptr-constructor.md)|Initializes a new instance of IntPtr.|  
|[IntPtr::op_explicit Operator](../cppcx/intptr-op-explicit-operator.md)|Converts the specified parameter to an IntPtr or a pointer to an IntPtr value.|  
|[IntPtr::ToInt32 Method](../cppcx/intptr-toint32-method.md)|Converts the current IntPtr to a 32-bit integer.|  
  
## Requirements  
 **Minimum supported client:** [!INCLUDE[win8](../cppcx/includes/win8-md.md)]  
  
 **Minimum supported server:** [!INCLUDE[winserver8](../cppcx/includes/winserver8-md.md)]  
  
 **Namespace:** Platform  
  
 **Metadata:** platform.winmd  
  
## See Also  
 [Platform namespace](../cppcx/platform-namespace-c-cx.md)