---
title: "Exception::Exception Constructor | Microsoft Docs"
ms.custom: ""
ms.date: "12/30/2016"
ms.prod: "windows-client-threshold"  
ms.technology: ""
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "Platform/Platform::Exception::Exception"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Exception::Exception Constructor"
ms.assetid: 173b434e-e3a8-41f5-904e-0e8fc0f21950
caps.latest.revision: 5
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# Exception::Exception Constructor
Intializes a new instance of the Exception class.  
  
## Syntax  
  
```cpp  
  
Exception(int32 hresult)  
Exception(int32 hresult, ::Platform::String^ message)  
```  
  
#### Parameters  
 `hresult`  
 The error HRESULT that is represented by the exception.  
  
 `message`  
 A user-specified message, such as prescriptive text, that is associated with the exception. In general you should prefer the second overload in order to provide a descriptive message that is as specific as possible about how and why the error has occurred.  
  
## Requirements  
 **Minimum supported client:** [!INCLUDE[win8](../cppcx/includes/win8-md.md)]  
  
 **Minimum supported server:** [!INCLUDE[winserver8](../cppcx/includes/winserver8-md.md)]  
  
 **Namespace:** Platform  
  
 **Metadata:** platform.winmd  
  
## See Also  
 [Platform namespace](../cppcx/platform-namespace-c-cx.md)