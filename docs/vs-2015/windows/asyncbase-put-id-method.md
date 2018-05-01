---
title: "AsyncBase::put_Id Method | Microsoft Docs"
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
  - "async/Microsoft::WRL::AsyncBase::put_Id"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "put_Id method"
ms.assetid: aebad85f-4774-42de-b625-a9cf5f65cb4e
caps.latest.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# AsyncBase::put_Id Method
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [AsyncBase::put_Id Method](https://docs.microsoft.com/cpp/windows/asyncbase-put-id-method).  
  
  
Sets the handle of the asynchronous operation.  
  
## Syntax  
  
```  
STDMETHOD(  
   put_Id  
)(const unsigned int id);  
```  
  
#### Parameters  
 `id`  
 A nonzero handle.  
  
## Return Value  
 S_OK if successful; otherwise, E_INVALIDARG or E_ILLEGAL_METHOD_CALL.  
  
## Requirements  
 **Header:** async.h  
  
 **Namespace:** Microsoft::WRL  
  
## See Also  
 [AsyncBase Class](../windows/asyncbase-class.md)

