---
title: "ComPtr::AsIID Method | Microsoft Docs"
ms.custom: ""
ms.date: "07/11/2018"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["client/Microsoft::WRL::ComPtr::AsIID"]
dev_langs: ["C++"]
helpviewer_keywords: ["AsIID method"]
ms.assetid: d5a3cdb2-796d-4410-966a-847c0e8fb226
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# ComPtr::AsIID Method
Returns a **ComPtr** object that represents the interface identified by the specified interface ID.  
  
## Syntax  
  
```  
WRL_NOTHROW HRESULT AsIID(  
   REFIID riid,  
   _Out_ ComPtr<IUnknown>* p  
) const;  
```  
  
#### Parameters  
 *riid*  
 An interface ID.  
  
 *p*  
 If the object has an interface whose ID equals *riid*, a doubly-indirect pointer to the interface specified by the *riid* parameter; otherwise, a pointer to `IUnknown`.  
  
## Return Value  
 S_OK if successful; otherwise, an HRESULT that indicates the error.  
  
## Requirements  
 **Header:** client.h  
  
 **Namespace:** Microsoft::WRL  
  
## See Also  
 [ComPtr Class](../windows/comptr-class.md)