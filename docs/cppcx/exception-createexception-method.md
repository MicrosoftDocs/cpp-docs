---
title: "Exception::CreateException Method | Microsoft Docs"
ms.custom: ""
ms.date: "12/30/2016"
ms.prod: "windows-client-threshold"
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "Platform/Platform::Exception::CreateException"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Exception::CreateException Method"
ms.assetid: 70e72bb4-3fec-478d-af3d-9ec8762d2825
caps.latest.revision: 4
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# Exception::CreateException Method
Creates a Platform::Exception^ from a specified HRESULT value.  
  
## Syntax  
  
```cpp  
Exception^ CreateException(int32 hr)  
Exception^ CreateException(int32 hr, Platform::String^ message)  
```  
  
## Parameters  
 hr  
 An HRESULT value that you typically get from a call to a COM method. If the value is 0, which is equal to S_OK, this method throws [Platform::InvalidArgumentException](../cppcx/platform-invalidargumentexception-class.md) because COM methods that succeed should not throw exceptions.  
  
 message  
 A string that describes the error.  
  
## Return Value  
 An exception that represents the error HRESULT.  
  
## Remarks  
 Use this method to create an exception out of an HRESULT that is returned, for example, from a call to a COM interface method. You can use the overload that takes a String^ parameter to provide a custom message.  
  
 It is strongly recommended to use CreateException to create a strongly-typed exception rather than creating a [Platform::COMException](../cppcx/platform-comexception-class.md) that merely contains the HRESULT.  
  
## Requirements  
 **Minimum supported client:** [!INCLUDE[win8](../cppcx/includes/win8-md.md)]  
  
 **Minimum supported server:** [!INCLUDE[winserver8](../cppcx/includes/winserver8-md.md)]  
  
 **Namespace:** Platform  
  
 **Metadata:** platform.winmd  
  
## See Also  
 [Platform namespace](../cppcx/platform-namespace-c-cx.md)