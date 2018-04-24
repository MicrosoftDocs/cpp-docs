---
title: "IOpenRowsetImpl::OpenRowset | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
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
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# IOpenRowsetImpl::OpenRowset
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [IOpenRowsetImpl::OpenRowset](https://docs.microsoft.com/cpp/data/oledb/iopenrowsetimpl-openrowset).  
  
  
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
 See [IOpenRowset::OpenRowset](https://msdn.microsoft.com/library/ms716724.aspx) in the *OLE DB Programmer's Reference*.  
  
## Remarks  
 This method is not found in ATLDB.H. It is created by the ATL Object Wizard when you create a provider.  
  
## Requirements  
 **Header:** atldb.h  
  
## See Also  
 [IOpenRowsetImpl Class](../../data/oledb/iopenrowsetimpl-class.md)

