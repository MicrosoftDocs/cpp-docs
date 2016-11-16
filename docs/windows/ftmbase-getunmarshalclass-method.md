---
title: "FtmBase::GetUnmarshalClass Method | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "ftm/Microsoft::WRL::FtmBase::GetUnmarshalClass"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "GetUnmarshalClass method"
ms.assetid: 535fc539-5b97-4967-b158-f7568f13d341
caps.latest.revision: 3
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
translation.priority.ht: 
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "ru-ru"
  - "zh-cn"
  - "zh-tw"
translation.priority.mt: 
  - "cs-cz"
  - "pl-pl"
  - "pt-br"
  - "tr-tr"
---
# FtmBase::GetUnmarshalClass Method
Gets the CLSID that COM uses to locate the DLL containing the code for the corresponding proxy. COM loads this DLL to create an uninitialized instance of the proxy.  
  
## Syntax  
  
```  
STDMETHODIMP GetUnmarshalClass(  
   __in REFIID riid,  
   __in_opt void *pv,  
   __in DWORD dwDestContext,  
   __reserved void *pvDestContext,  
   __in DWORD mshlflags,  
   __out CLSID *pCid  
) override;  
```  
  
#### Parameters  
 `riid`  
 Reference to the identifier of the interface to be marshaled.  
  
 `pv`  
 Pointer to the interface to be marshaled; can be NULL if the caller does not have a pointer to the desired interface.  
  
 `dwDestContext`  
 Destination context where the specified interface is to be unmarshaled.  
  
 Specify one or more MSHCTX enumeration values.  
  
 Unmarshaling can occur either in another apartment of the current process (MSHCTX_INPROC) or in another process on the same computer as the current process (MSHCTX_LOCAL).  
  
 `pvDestContext`  
 Reserved for future use; must be NULL.  
  
 `mshlflags`  
 When this operation completes, pointer to the CLSID to be used to create a proxy in the client process.  
  
 `pCid`  
  
## Return Value  
 S_OK if successful; otherwise, S_FALSE.  
  
## Requirements  
 **Header:** ftm.h  
  
 **Namespace:** Microsoft::WRL  
  
## See Also  
 [FtmBase Class](../windows/ftmbase-class.md)