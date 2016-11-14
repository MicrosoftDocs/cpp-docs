---
title: "IRowsetInfoImpl::GetReferencedRowset | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "ATL::IRowsetInfoImpl::GetReferencedRowset"
  - "GetReferencedRowset"
  - "ATL.IRowsetInfoImpl.GetReferencedRowset"
  - "IRowsetInfoImpl.GetReferencedRowset"
  - "IRowsetInfoImpl::GetReferencedRowset"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "GetReferencedRowset method"
ms.assetid: 94d2155c-9da0-4c19-a37c-bc35716359fd
caps.latest.revision: 8
author: "mikeblome"
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
# IRowsetInfoImpl::GetReferencedRowset
Returns an interface pointer to the rowset to which a bookmark applies.  
  
## Syntax  
  
```  
  
      STDMETHOD ( GetReferencedRowset )(  
   DBORDINAL iOrdinal,  
   REFIID riid,  
   IUnknown** ppReferencedRowset   
);  
```  
  
#### Parameters  
 See [IRowsetInfo::GetReferencedRowset](https://msdn.microsoft.com/en-us/library/ms721145.aspx) in the *OLE DB Programmer's Reference*. The *iOrdinal* parameter must be a bookmark column.  
  
## Requirements  
 **Header:** atldb.h  
  
## See Also  
 [IRowsetInfoImpl Class](../../data/oledb/irowsetinfoimpl-class.md)   
 [IRowsetInfoImpl::GetSpecification](../../data/oledb/irowsetinfoimpl-getspecification.md)   
 [IRowsetInfoImpl::GetProperties](../../data/oledb/irowsetinfoimpl-getproperties.md)