---
title: "Platform::CallbackContext Enumeration | Microsoft Docs"
ms.custom: ""
ms.date: "12/30/2016"
ms.technology: "cpp-windows"
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: ["VCCORLIB/Platform::CallbackContext"]
dev_langs: ["C++"]
helpviewer_keywords: ["Platform::CallbackContext Enumeration"]
ms.assetid: 60e0c7cb-5d8f-482a-bdca-ca9335ae4899
caps.latest.revision: 3
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
ms.workload: ["cplusplus"]
---
# Platform::CallbackContext Enumeration
Specifies the thread context in which a callback function (event handler) executes.  
  
## Syntax  
  
```cpp  
enum class CallbackContext {};  
```  
  
### Members  
  
|Type Code|Description|  
|---------------|-----------------|  
|Any|The callback function can execute on any thread context.|  
|Same|The callback function can execute on only the thread context that started the asynchronous operation.|  
  
### Requirements  
 **Minimum supported client:** Windows 8  
  
 **Minimum supported server:** Windows Server 2012  
  
 **Namespace:** Platform  
  
 **Metadata:** platform.winmd