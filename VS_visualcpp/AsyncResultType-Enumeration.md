---
title: "AsyncResultType Enumeration"
ms.custom: na
ms.date: 10/04/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: reference
ms.assetid: 4195d234-3f3f-4363-9118-6ad2a7551cf2
caps.latest.revision: 3
manager: ghogen
translation.priority.ht: 
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - ru-ru
  - zh-cn
  - zh-tw
translation.priority.mt: 
  - cs-cz
  - pl-pl
  - pt-br
  - tr-tr
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
 [Microsoft::WRL Namespace](../VS_visualcpp/Microsoft--WRL-Namespace.md)