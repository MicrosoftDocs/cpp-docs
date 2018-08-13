---
title: "AsyncBase::get_ErrorCode Method | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["async/Microsoft::WRL::AsyncBase::get_ErrorCode"]
dev_langs: ["C++"]
helpviewer_keywords: ["get_ErrorCode method"]
ms.assetid: 50b4f8a2-9a21-4ea0-bb5d-7ff524d62aea
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# AsyncBase::get_ErrorCode Method
Retrieves the error code for the current asynchronous operation.  
  
## Syntax  
  
```cpp  
STDMETHOD(  
   get_ErrorCode  
)(HRESULT* errorCode) override;  
```  
  
### Parameters  
 *errorCode*  
 The location where the current error code is stored.  
  
## Return Value  
 S_OK if successful; otherwise, E_ILLEGAL_METHOD_CALL if the current asynchronous operation is closed.  
  
## Requirements  
 **Header:** async.h  
  
 **Namespace:** Microsoft::WRL  
  
## See Also  
 [AsyncBase Class](../windows/asyncbase-class.md)