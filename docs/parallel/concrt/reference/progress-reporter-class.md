---
title: "progress_reporter Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-windows"]
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: ["progress_reporter", "PPLTASKS/concurrency::progress_reporter", "PPLTASKS/concurrency::progress_reporter::progress_reporter", "PPLTASKS/concurrency::progress_reporter::report"]
dev_langs: ["C++"]
helpviewer_keywords: ["progress_reporter class"]
ms.assetid: b836efab-2d05-4649-b6fa-d15236f1f813
caps.latest.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
ms.workload: ["cplusplus"]
---
# progress_reporter Class
The progress reporter class allows reporting progress notifications of a specific type. Each progress_reporter object is bound to a particular asynchronous action or operation.  
  
## Syntax  
  
```
template<typename _ProgressType>
class progress_reporter;
```  
  
#### Parameters  
 `_ProgressType`  
 The payload type of each progress notification reported through the progress reporter.  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[progress_reporter](#ctor)||  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[report](#report)|Sends a progress report to the asynchronous action or operation to which this progress reporter is bound.|  
  
## Remarks  
 This type is only available to Windows Runtime apps.  
  
## Inheritance Hierarchy  
 `progress_reporter`  
  
## Requirements  
 **Header:** ppltasks.h  
  
 **Namespace:** concurrency  
  
##  <a name="ctor"></a> progress_reporter 

```
progress_reporter();
```  
  
##  <a name="report"></a> report 

 Sends a progress report to the asynchronous action or operation to which this progress reporter is bound.  
  
```
void report(const _ProgressType& val) const;
```  
  
### Parameters  
 `val`  
 The payload to report through a progress notification.  
  
## See Also  
 [concurrency Namespace](concurrency-namespace.md)
