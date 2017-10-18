---
title: "IRegistrar Interface | Microsoft Docs"
ms.custom: ""
ms.date: "2/1/2017"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-windows"]
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: ["IRegistrar", "ATLIFASE/ATL::IRegistrar", "ATLIFASE/ATL::IRegistrar::ResourceRegisterSz", "ATLIFASE/ATL::IRegistrar::ResourceUnregisterSz", "ATLIFASE/ATL::IRegistrar::FileRegister", "ATLIFASE/ATL::IRegistrar::FileUnregister", "ATLIFASE/ATL::IRegistrar::StringRegister", "ATLIFASE/ATL::IRegistrar::StringUnregister", "ATLIFASE/ATL::IRegistrar::ResourceRegister", "ATLIFASE/ATL::IRegistrar::ResourceUnregister"]
dev_langs: ["C++"]
helpviewer_keywords: ["Iregistrar Interface"]
ms.assetid: e88c04b7-0c93-4ae8-aeb9-ecd78f87421e
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# IRegistrar Interface
This interface is defined in atliface.h and is used internally by CAtlModule member functions such as [UpdateRegistryFromResourceD](catlmodule-class.md#updateregistryfromresourced).   
  
## Syntax  
  
```
typedef interface IRegistrar IRegistrar;
```  
## Remarks
See the topic [Using Replaceable Parameters (The Registrar's Preprocessor)](../../atl/using-replaceable-parameters-the-registrar-s-preprocessor.md) for more details.  

## Members  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[IRegistrar::ResourceRegisterSz](#resourceregistersz)|Registers the resource. |  
|[IRegistrar::ResourceUnregisterSz](#resourceunregistersz)| Unregisters the resource.|  
|[IRegistrar::FileRegister](#fileregister)|Registers the file.|  
|[IRegistrar::FileUnregister](#fileunregister)|Unregisters the file.|  
|[IRegistrar::StringRegister](#stringregister)|Registers the string.|  
|[IRegistrar::StringUnregister](#stringunregister)|Unregisters teh string|  
|[IRegistrar::ResourceRegister](#resourceregister)|Registers the resource.|  
|[IRegistrar::ResourceUnregister](#resourceunregister)|Unregisters the resource.| 
  

 
## Requirements  
 **Header:** atlifase.h  
  
##  <a name="resourceregistersz"></a>  IRegistrar::ResourceRegisterSz 
 Registers the resource.  
  
```
virtual HRESULT STDMETHODCALLTYPE ResourceRegisterSz( 
    /* [in] */ _In_z_ LPCOLESTR resFileName,
    /* [in] */ _In_z_ LPCOLESTR szID,
    /* [in] */ _In_z_ LPCOLESTR szType) = 0;
```  
  
 
  
##  <a name="resourceunregistersz"></a>  IRegistrar::ResourceUnregisterSz  
 Unregisters the resource.
  
```
virtual HRESULT STDMETHODCALLTYPE ResourceUnregisterSz( 
    /* [in] */ _In_z_ LPCOLESTR resFileName,
    /* [in] */ _In_z_ LPCOLESTR szID,
    /* [in] */ _In_z_ LPCOLESTR szType) = 0;
```  
  
  
##  <a name="fileregister"></a>  IRegistrar::FileRegister  
Registers the file.
  
```
virtual HRESULT STDMETHODCALLTYPE FileRegister( 
    /* [in] */ _In_z_ LPCOLESTR fileName) = 0;
```  
  
  
##  <a name="fileunregister"></a>  IRegistrar::FileUnregister  
Unregisters the file.

```
virtual HRESULT STDMETHODCALLTYPE FileUnregister( 
    */ _In_z_ LPCOLESTR fileName) = 0;
```  
  
 
##  <a name="stringregister"></a>  IRegistrar::StringRegister  
  Registers the specified string data.
```
virtual HRESULT STDMETHODCALLTYPE StringRegister( 
    /* [in] */ _In_z_ LPCOLESTR data) = 0;
```  
  
##  <a name="stringunregister"></a>  IRegistrar::StringUnregister
 Unregisters the specified string data.  
  
```
virtualHRESULT STDMETHODCALLTYPE StringUnregister( 
    /* [in] */ _In_z_ LPCOLESTR data) = 0;
```  

  
##  <a name="resourceregister"></a>  IRegistrar::ResourceRegister  
 Registers the resource.  
  
```
virtual HRESULT STDMETHODCALLTYPE ResourceRegister( 
    /* [in] */ _In_z_ LPCOLESTR resFileName,
    /* [in] */ _In_ UINT nID,
    /* [in] */ _In_z_ LPCOLESTR szType) = 0;
```  
   
  
##  <a name="resourceunregister"></a>  IRegistrar::ResourceUnregister  
 Unregisters the resource.  
  
```
virtualHRESULT STDMETHODCALLTYPE ResourceUnregister( 
    /* [in] */ _In_z_ LPCOLESTR resFileName,
    /* [in] */ _In_ UINT nID,
    /* [in] */ _In_z_ LPCOLESTR szType) = 0; 
```  
 
## See Also  
 [Using Replaceable Parameters (The Registrar's Preprocessor)](../../atl/using-replaceable-parameters-the-registrar-s-preprocessor.md)  
 [Class Overview](../../atl/atl-class-overview.md)   
 [Module Classes](../../atl/atl-module-classes.md)   
 [Registry Component (Registrar)](../../atl/atl-registry-component-registrar.md)  
