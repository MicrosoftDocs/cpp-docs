---
title: "Platform::Exception Class | Microsoft Docs"
ms.custom: ""
ms.date: "12/30/2016"
ms.prod: "windows-client-threshold"
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "Platform/Platform::Exception"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Platform::Exception Class"
ms.assetid: ca1d5a67-3a5a-48fe-8099-f9c38a2d2dce
caps.latest.revision: 6
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# Platform::Exception Class
Represents errors that occur during application execution. Custom exception classes can't be derived from `Platform::Exception`. If you require a custom exception, you can use `Platform::COMException` and specify an app-specific HRESULT.  
  
## Syntax  
  
```cpp  
public ref class Exception : Object,    IException,    IPrintable,    IEquatable  
```  
  
## Members  
 The `Exception` class inherits from the `Object` class and the `IException`, `IPrintable`, and `IEquatable` interfaces.  
  
 The `Exception` class also has the following kinds of members.  
  
### Constructors  
  
|Member|Description|  
|------------|-----------------|  
|[Exception::Exception Constructor](../cppcx/exception-exception-constructor.md)|Initializes a new instance of the `Exception` class.|  
  
### Methods  
 The `Exception` class inherits the `Equals()`, `Finalize()`,`GetHashCode()`,`GetType()`,`MemberwiseClose()`, and `ToString()` methods from the [Platform::Object Class](../cppcx/platform-object-class.md). The `Exception` class also has the following method.  
  
|Member|Description|  
|------------|-----------------|  
|[Exception::CreateException Method](../cppcx/exception-createexception-method.md)|Creates an exception that represents the specified HRESULT value.|  
  
### Properties  
 The Exception class also has the following properties.  
  
|Member|Description|  
|------------|-----------------|  
|[Exception::HResult Property](../cppcx/exception-hresult-property.md)|The HRESULT that corresponds to the exception.|  
|[Exception::Message Property](../cppcx/exception-message-property.md)|A message that describes the exception. This value is read-only and cannot be modified after the `Exception` is constructed.|  
  
## Requirements  
 **Minimum supported client:** [!INCLUDE[win8](../cppcx/includes/win8-md.md)]  
  
 **Minimum supported server:** [!INCLUDE[winserver8](../cppcx/includes/winserver8-md.md)]  
  
 **Namespace:** Platform  
  
 **Metadata:** platform.winmd  
  
## See Also  
 [Platform namespace](../cppcx/platform-namespace-c-cx.md)