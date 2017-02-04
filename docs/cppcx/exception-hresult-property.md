---
title: "Exception::HResult Property | Microsoft Docs"
ms.custom: ""
ms.date: "12/30/2016"
ms.prod: "windows-client-threshold"
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "Platform/Platform::Exception::HResult"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Exception::HResult Property"
ms.assetid: 24ef008d-6884-4b8b-9556-41bfa6e1edf1
caps.latest.revision: 4
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# Exception::HResult Property
The HRESULT that corresponds to the exception.  
  
## Syntax  
  
```cpp  
public:property int HResult {    int get();}  
```  
  
## Property Value  
 An HRESULT value.  
  
## Remarks  
 Most exceptions start out as COM errors, which are returned as HRESULT values. C++/CX converts these values into Platform::Exception^ objects, and this property stores the value of the original error code.  
  
## Requirements  
 **Minimum supported client:** [!INCLUDE[win8](../cppcx/includes/win8-md.md)]  
  
 **Minimum supported server:** [!INCLUDE[winserver8](../cppcx/includes/winserver8-md.md)]  
  
 **Namespace:** Platform  
  
 **Metadata:** platform.winmd  
  
## See Also  
 [Platform::Exception Class](../cppcx/platform-exception-class.md)