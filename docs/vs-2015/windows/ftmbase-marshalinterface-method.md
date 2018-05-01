---
title: "FtmBase::MarshalInterface Method | Microsoft Docs"
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
  - "ftm/Microsoft::WRL::FtmBase::MarshalInterface"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "MarshalInterface method"
ms.assetid: fc8421b4-06e4-4925-b908-c285fe4790d2
caps.latest.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# FtmBase::MarshalInterface Method
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [FtmBase::MarshalInterface Method](https://docs.microsoft.com/cpp/windows/ftmbase-marshalinterface-method).  
  
  
Writes into a stream the data required to initialize a proxy object in some client process.  
  
## Syntax  
  
```  
STDMETHODIMP MarshalInterface(  
   __in IStream *pStm,  
   __in REFIID riid,  
   __in_opt void *pv,  
   __in DWORD dwDestContext,  
   __reserved void *pvDestContext,  
   __in DWORD mshlflags  
) override;  
```  
  
#### Parameters  
 `pStm`  
 Pointer to the stream to be used during marshaling.  
  
 `riid`  
 Reference to the identifier of the interface to be marshaled. This interface must be derived from the IUnknown interface.  
  
 `pv`  
 Pointer to the interface pointer to be marshaled; can be NULL if the caller does not have a pointer to the desired interface.  
  
 `dwDestContext`  
 Destination context where the specified interface is to be unmarshaled.  
  
 Specify one or more MSHCTX enumeration values.  
  
 Unmarshaling can occur in another apartment of the current process (MSHCTX_INPROC) or in another process on the same computer as the current process (MSHCTX_LOCAL).  
  
 `pvDestContext`  
 Reserved for future use; must be zero.  
  
 `mshlflags`  
 Specifies whether the data to be marshaled is to be transmitted back to the client process — the typical case — or written to a global table, where it can be retrieved by multiple clients.  
  
## Return Value  
 S_OK  
 The interface pointer was marshaled successfully.  
  
 E_NOINTERFACE  
 The specified interface is not supported.  
  
 STG_E_MEDIUMFULL  
 The stream is full.  
  
 E_FAIL  
 The operation failed.  
  
## Requirements  
 **Header:** ftm.h  
  
 **Namespace:** Microsoft::WRL  
  
## See Also  
 [FtmBase Class](../windows/ftmbase-class.md)

