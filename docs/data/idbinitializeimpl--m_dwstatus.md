---
title: "IDBInitializeImpl::m_dwStatus"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "article"
f1_keywords: 
  - "ATL::IDBInitializeImpl::m_dwStatus"
  - "IDBInitializeImpl.m_dwStatus"
  - "ATL.IDBInitializeImpl.m_dwStatus"
  - "IDBInitializeImpl::m_dwStatus"
  - "IDBInitializeImpl<T>::m_dwStatus"
  - "ATL.IDBInitializeImpl<T>.m_dwStatus"
  - "ATL::IDBInitializeImpl<T>::m_dwStatus"
  - "m_dwStatus"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "m_dwStatus"
ms.assetid: 7621ccff-ca60-4b75-9c6a-c104bd0e2038
caps.latest.revision: 10
ms.author: "mblome"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
---
# IDBInitializeImpl::m_dwStatus
Data source flags.  
  
## Syntax  
  
```  
  
DWORD m_dwStatus;  
  
```  
  
## Remarks  
 These flags specify or indicate the status of various attributes for the data source object. Contains one or more of the following `enum` values:  
  
 `enum DATASOURCE_FLAGS {`  
  
 `DSF_MASK_INIT     = 0xFFFFF00F,`  
  
 `DSF_PERSIST_DIRTY = 0x00000001,`  
  
 `DSF_INITIALIZED   = 0x00000010,`  
  
 `};`  
  
|||  
|-|-|  
|**DSF_MASK_INIT**|A mask to enable restoration of the uninitialized state.|  
|**DSF_PERSIST_DIRTY**|Set if data source object requires persistence (that is, if there have been changes).|  
|**DSF_INITIALIZED**|Set if data source has been initialized.|  
  
## Requirements  
 **Header:** atldb.h  
  
## See Also  
 [IDBInitializeImpl Class](../data/idbinitializeimpl-class.md)   
 [IDBInitializeImpl::IDBInitializeImpl](../data/idbinitializeimpl--idbinitializeimpl.md)   
 [IDBInitializeImpl::Uninitialize](../data/idbinitializeimpl--uninitialize.md)