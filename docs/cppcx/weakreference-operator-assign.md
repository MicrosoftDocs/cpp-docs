---
title: "WeakReference::operator= | Microsoft Docs"
ms.custom: ""
ms.date: "12/30/2016"
ms.prod: "windows-client-threshold"
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "vccorlib/WeakReference::operator="
ms.assetid: 20b034d1-8f4f-46ae-81f0-73b76599f86b
caps.latest.revision: 2
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# WeakReference::operator=
Assigns a value to a WeakReference.  
  
## Syntax  
  
```cpp  
WeakReference& operator=(decltype(__nullptr));  
  
WeakReference& operator=(const WeakReference& __otherArg);  
  
WeakReference& operator=(WeakReference&& __otherArg);  
  
WeakReference& operator=(const volatile ::Platform::Object^ const __otherArg);  
  
```  
  
## Remarks  
 The last overload in the list above enables you to assign a ref class to a WeakReference variable. In this case the ref class is downcast to [Platform::Object](../cppcx/platform-object-class.md)^. You restore the original type later by specifying it as the argument for the type parameter in the [WeakReference::Resolve\<T>](../cppcx/weakreference-resolve-method-platform-namespace.md) member function.  
  
## Requirements  
 Windows 8.0 or later  
  
## See Also  
 [Platform::WeakReference Class](../cppcx/platform-weakreference-class.md)