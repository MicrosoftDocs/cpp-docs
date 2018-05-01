---
title: "AsyncBase::get_Id Method | Microsoft Docs"
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
  - "async/Microsoft::WRL::AsyncBase::get_Id"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "get_Id method"
ms.assetid: 591d8366-ea76-4deb-9278-9d3bc394a42b
caps.latest.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# AsyncBase::get_Id Method
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [AsyncBase::get_Id Method](https://docs.microsoft.com/cpp/windows/asyncbase-get-id-method).  
  
  
Retrieves the handle of the asynchronous operation.  
  
## Syntax  
  
```  
STDMETHOD(  
   get_Id  
)(unsigned int *id) override;  
```  
  
#### Parameters  
 `id`  
 The location where the handle is to be stored.  
  
## Return Value  
 S_OK if successful; otherwise, E_ILLEGAL_METHOD_CALL.  
  
## Remarks  
 This method implements IAsyncInfo::get_Id.  
  
## Requirements  
 **Header:** async.h  
  
 **Namespace:** Microsoft::WRL  
  
## See Also  
 [AsyncBase Class](../windows/asyncbase-class.md)

