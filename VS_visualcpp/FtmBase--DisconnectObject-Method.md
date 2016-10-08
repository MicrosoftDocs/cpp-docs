---
title: "FtmBase::DisconnectObject Method"
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
ms.assetid: 33253eec-3a65-4e72-8525-0249245a4790
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
# FtmBase::DisconnectObject Method
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
 [FtmBase Class](../VS_visualcpp/FtmBase-Class.md)