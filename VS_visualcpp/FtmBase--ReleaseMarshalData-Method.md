---
title: "FtmBase::ReleaseMarshalData Method"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: reference
ms.assetid: a94f9940-183a-4fde-8504-d223f346a0a9
caps.latest.revision: 3
manager: ghogen
translation.priority.ht: 
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - ru-ru
  - zh-cn
  - zh-tw
translation.priority.mt: 
  - cs-cz
  - pl-pl
  - pt-br
  - tr-tr
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
 [FtmBase Class](../VS_visualcpp/FtmBase-Class.md)