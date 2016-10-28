---
title: "AsyncBase::PutOnComplete Method"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "reference"
f1_keywords: 
  - "async/Microsoft::WRL::AsyncBase::PutOnComplete"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "PutOnComplete method"
ms.assetid: 1c469ff9-b2df-4637-bf05-01a617043149
caps.latest.revision: 3
ms.author: "mblome"
manager: "ghogen"
translation.priority.ht: 
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "ru-ru"
  - "zh-cn"
  - "zh-tw"
translation.priority.mt: 
  - "cs-cz"
  - "pl-pl"
  - "pt-br"
  - "tr-tr"
---
# AsyncBase::PutOnComplete Method
Sets the address of the completion event handler to the specified value.  
  
## Syntax  
  
```  
STDMETHOD(  
   PutOnComplete  
)(TComplete* completeHandler);  
```  
  
#### Parameters  
 `completeHandler`  
 The address to which the completion event handler is set.  
  
## Return Value  
 S_OK if successful; otherwise, E_ILLEGAL_METHOD_CALL.  
  
## Requirements  
 **Header:** async.h  
  
 **Namespace:** Microsoft::WRL  
  
## See Also  
 [AsyncBase Class](../windows/asyncbase-class.md)