---
title: "AsyncResultType Enumeration | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "async/Microsoft::WRL::AsyncResultType"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "AsyncResultType enumeration"
ms.assetid: 4195d234-3f3f-4363-9118-6ad2a7551cf2
caps.latest.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# AsyncResultType Enumeration
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [AsyncResultType Enumeration](https://docs.microsoft.com/cpp/windows/asyncresulttype-enumeration).  
  
  
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

