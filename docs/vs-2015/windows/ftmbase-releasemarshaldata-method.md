---
title: "FtmBase::ReleaseMarshalData Method | Microsoft Docs"
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
  - "ftm/Microsoft::WRL::FtmBase::ReleaseMarshalData"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ReleaseMarshalData method"
ms.assetid: a94f9940-183a-4fde-8504-d223f346a0a9
caps.latest.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# FtmBase::ReleaseMarshalData Method
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [FtmBase::ReleaseMarshalData Method](https://docs.microsoft.com/cpp/windows/ftmbase-releasemarshaldata-method).  
  
  
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

