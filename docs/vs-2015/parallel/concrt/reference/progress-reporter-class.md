---
title: "progress_reporter Class | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "ppltasks/concurrency::progress_reporter"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "progress_reporter class"
ms.assetid: b836efab-2d05-4649-b6fa-d15236f1f813
caps.latest.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# progress_reporter Class
[!INCLUDE[blank_token](../../../includes/blank-token.md)]

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
|[progress_reporter::progress_reporter Constructor](#progress_reporter__progress_reporter_constructor)||  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[progress_reporter::report Method](#progress_reporter__report_method)|Sends a progress report to the asynchronous action or operation to which this progress reporter is bound.|  
  
## Remarks  
 This type is only available to Windows Store apps.  
  
## Inheritance Hierarchy  
 `progress_reporter`  
  
## Requirements  
 **Header:** ppltasks.h  
  
 **Namespace:** concurrency  
  
##  <a name="progress_reporter__progress_reporter_constructor"></a>  progress_reporter::progress_reporter Constructor  
  
```
progress_reporter();
```  
  
##  <a name="progress_reporter__report_method"></a>  progress_reporter::report Method  
 Sends a progress report to the asynchronous action or operation to which this progress reporter is bound.  
  
```
void report(const _ProgressType& val) const;
```  
  
### Parameters  
 `val`  
 The payload to report through a progress notification.  
  
## See Also  
 [concurrency Namespace](../../../parallel/concrt/reference/concurrency-namespace.md)
