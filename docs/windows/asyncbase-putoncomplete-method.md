---
title: "AsyncBase::PutOnComplete Method | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["async/Microsoft::WRL::AsyncBase::PutOnComplete"]
dev_langs: ["C++"]
helpviewer_keywords: ["PutOnComplete method"]
ms.assetid: 1c469ff9-b2df-4637-bf05-01a617043149
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
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
 *completeHandler*  
 The address to which the completion event handler is set.  
  
## Return Value  
 S_OK if successful; otherwise, E_ILLEGAL_METHOD_CALL.  
  
## Requirements  
 **Header:** async.h  
  
 **Namespace:** Microsoft::WRL  
  
## See Also  
 [AsyncBase Class](../windows/asyncbase-class.md)