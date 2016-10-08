---
title: "FtmBase::UnmarshalInterface Method"
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
ms.assetid: 6850a621-e9a6-4001-bc1e-bd5d1b121adc
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
# FtmBase::UnmarshalInterface Method
Initializes a newly created proxy and returns an interface pointer to that proxy.  
  
## Syntax  
  
```  
STDMETHODIMP UnmarshalInterface(  
   __in IStream *pStm,  
   __in REFIID riid,  
   __deref_out void **ppv  
) override;  
```  
  
#### Parameters  
 `pStm`  
 Pointer to the stream from which the interface pointer is to be unmarshaled.  
  
 `riid`  
 Reference to the identifier of the interface to be unmarshaled.  
  
 `ppv`  
 When this operation completes, the address of a pointer variable that receives the interface pointer requested in `riid`. If this operation is successful, *`ppv` contains the requested interface pointer of the interface to be unmarshaled.  
  
## Return Value  
 S_OK if successful; otherwise, E_NOINTERFACE or E_FAIL.  
  
## Requirements  
 **Header:** ftm.h  
  
 **Namespace:** Microsoft::WRL  
  
## See Also  
 [FtmBase Class](../VS_visualcpp/FtmBase-Class.md)