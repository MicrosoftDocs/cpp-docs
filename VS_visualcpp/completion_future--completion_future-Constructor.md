---
title: "completion_future::completion_future Constructor"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: 472755a4-baa2-4892-836b-9ff4b80747dc
caps.latest.revision: 5
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
# completion_future::completion_future Constructor
Initializes a new instance of the `completion_future` class.  
  
## Syntax  
  
```  
completion_future();  
  
completion_future(  
    const completion_future& _Other );  
  
completion_future(  
    completion_future&& _Other );  
```  
  
#### Parameters  
 `_Other`  
 The `completion_future` object to copy or move.  
  
## Overloads List  
  
|Name|Description|  
|----------|-----------------|  
|`completion_future();`|Initializes a new instance of the `completion_future` Class|  
|`completion_future(const completion_future& _Other);`|Initializes a new instance of the `completion_future` class by copying a constructor.|  
|`completion_future(completion_future&& _Other);`|Initializes a new instance of the `completion_future` class by moving a constructor.|  
  
## Requirements  
 **Header:** amprt.h  
  
 **Namespace:** concurrency  
  
## See Also  
 [completion_future Class](../VS_visualcpp/completion_future-Class.md)