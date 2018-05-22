---
title: "FtmBase::DisconnectObject Method | Microsoft Docs"
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
  - "ftm/Microsoft::WRL::FtmBase::DisconnectObject"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "DisconnectObject method"
ms.assetid: 33253eec-3a65-4e72-8525-0249245a4790
caps.latest.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# FtmBase::DisconnectObject Method
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [FtmBase::DisconnectObject Method](https://docs.microsoft.com/cpp/windows/ftmbase-disconnectobject-method).  
  
  
Forcibly releases all external connections to an object. The object's server calls the object's implementation of this method prior to shutting down.  
  
## Syntax  
  
```  
STDMETHODIMP DisconnectObject(  
   __in DWORD dwReserved  
) override;  
```  
  
#### Parameters  
 `dwReserved`  
 Reserved for future use; must be zero.  
  
## Return Value  
 S_OK if successful; otherwise, an HRESULT that indicates the error.  
  
## Requirements  
 **Header:** ftm.h  
  
 **Namespace:** Microsoft::WRL  
  
## See Also  
 [FtmBase Class](../windows/ftmbase-class.md)

