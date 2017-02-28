---
title: "Exception::Message Property | Microsoft Docs"
ms.custom: ""
ms.date: "12/30/2016"
ms.prod: "windows-client-threshold"  
ms.technology: ""
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "Platform/Platform::Exception::Message"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Exception::Message Property"
ms.assetid: ad1199cd-0889-4803-ad0d-a3a7b3c51891
caps.latest.revision: 10
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# Exception::Message Property
Message that describes the error.  
  
## Syntax  
  
```cpp  
public:property String^ Message;  
```  
  
## Property Value  
 In exceptions that originate in the Windows Runtime, this is a system-supplied description of the error.  
  
## Remarks  
 In [!INCLUDE[win8](../cppcx/includes/win8-md.md)], this property is read-only because exceptions in that version of the Windows Runtime are transported across the ABI only as HRESULTS. In [!INCLUDE[win81](../cppcx/includes/win81-md.md)], richer exception information is transported across the ABI and you can provide a custom message that other components can access programmatically. For more information, see [Exceptions (C++/CX)](../cppcx/exceptions-c-cx.md).  
  
## Requirements  
 **Minimum supported client:** [!INCLUDE[win8](../cppcx/includes/win8-md.md)]  
  
 **Minimum supported server:** [!INCLUDE[winserver8](../cppcx/includes/winserver8-md.md)]  
  
 **Namespace:** Platform  
  
 **Metadata:** platform.winmd  
  
## See Also  
 [Platform::Exception Class](../cppcx/platform-exception-class.md)