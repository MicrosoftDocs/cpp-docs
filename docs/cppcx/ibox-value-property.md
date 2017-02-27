---
title: "IBox::Value Property | Microsoft Docs"
ms.custom: ""
ms.date: "12/30/2016"
ms.prod: "windows-client-threshold"  
ms.technology: ""
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "Platform/Platform::IBox::Value"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Platform::IBox::Value"
ms.assetid: 8a1df4fb-8818-4191-a036-61fb2d783913
caps.latest.revision: 5
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# IBox::Value Property
Returns the value that was originally stored in this object.  
  
## Syntax  
  
```cpp  
property T Value {T get();}  
```  
  
#### Parameters  
 `T`  
 The type of the boxed value.  
  
## Property Value/Return Value  
 Returns the value that was originally stored in this object.  
  
## Remarks  
 For an example, see [Boxing](../cppcx/boxing-c-cx.md).  
  
## Requirements  
 **Minimum supported client:** [!INCLUDE[win8](../cppcx/includes/win8-md.md)]  
  
 **Minimum supported server:** [!INCLUDE[winserver8](../cppcx/includes/winserver8-md.md)]  
  
 **Namespace:** Platform  
  
 **Header** platform.winmd  
  
## See Also  
 [Platform::IBox Interface](../cppcx/platform-ibox-interface.md)