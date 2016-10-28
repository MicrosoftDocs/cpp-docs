---
title: "IOpenRowsetImpl::OpenRowset"
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
  - "OpenRowset"
  - "IOpenRowsetImpl::OpenRowset"
  - "IOpenRowsetImpl.OpenRowset"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "OpenRowset method"
ms.assetid: 2ece8d6c-d165-4f1d-b155-8609bbb60eb6
caps.latest.revision: 8
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
# IOpenRowsetImpl::OpenRowset
Opens and returns a rowset that includes all rows from a single base table or index.  
  
## Syntax  
  
```  
  
      HRESULT OpenRowset(  
   IUnknown* pUnkOuter,  
   DBID* pTableID,  
   DBID* pIndexID,  
   REFIID riid,  
   ULONG cPropertySets,  
   DBPROPSET rgPropertySets[],  
   IUnknown** ppRowset   
);  
```  
  
#### Parameters  
 See [IOpenRowset::OpenRowset](https://msdn.microsoft.com/en-us/library/ms716724.aspx) in the *OLE DB Programmer's Reference*.  
  
## Remarks  
 This method is not found in ATLDB.H. It is created by the ATL Object Wizard when you create a provider.  
  
## Requirements  
 **Header:** atldb.h  
  
## See Also  
 [IOpenRowsetImpl Class](../data/iopenrowsetimpl-class.md)