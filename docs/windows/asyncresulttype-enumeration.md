---
title: "AsyncResultType Enumeration | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["async/Microsoft::WRL::AsyncResultType"]
dev_langs: ["C++"]
helpviewer_keywords: ["AsyncResultType enumeration"]
ms.assetid: 4195d234-3f3f-4363-9118-6ad2a7551cf2
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# AsyncResultType Enumeration
Specifies the type of result returned by the GetResults() method.  
  
## Syntax  
  
```  
enum AsyncResultType;  
```  
  
## Members  
  
### Values  
  
|Name|Description|  
|----------|-----------------|  
|`MultipleResults`|A set of multiple results, which are presented progressively between Start state and before Close() is called.|  
|`SingleResult`|A single result, which is presented after the Complete event occurs.|  
  
## Requirements  
 **Header:** async.h  
  
 **Namespace:** Microsoft::WRL  
  
## See Also  
 [Microsoft::WRL Namespace](../windows/microsoft-wrl-namespace.md)