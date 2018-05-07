---
title: "FtmBase::ReleaseMarshalData Method | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["ftm/Microsoft::WRL::FtmBase::ReleaseMarshalData"]
dev_langs: ["C++"]
helpviewer_keywords: ["ReleaseMarshalData method"]
ms.assetid: a94f9940-183a-4fde-8504-d223f346a0a9
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# FtmBase::ReleaseMarshalData Method
Destroys a marshaled data packet.  
  
## Syntax  
  
```  
STDMETHODIMP ReleaseMarshalData(  
   __in IStream *pStm  
) override;  
```  
  
#### Parameters  
 `pStm`  
 Pointer to a stream that contains the data packet to be destroyed.  
  
## Return Value  
 S_OK if successful; otherwise, an HRESULT that indicates the error.  
  
## Requirements  
 **Header:** ftm.h  
  
 **Namespace:** Microsoft::WRL  
  
## See Also  
 [FtmBase Class](../windows/ftmbase-class.md)