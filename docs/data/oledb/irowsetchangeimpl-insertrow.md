---
title: "IRowsetChangeImpl::InsertRow | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "ATL.IRowsetChangeImpl.InsertRow"
  - "InsertRow"
  - "IRowsetChangeImpl.InsertRow"
  - "ATL::IRowsetChangeImpl::InsertRow"
  - "IRowsetChangeImpl::InsertRow"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "InsertRow method"
ms.assetid: 93027be3-921e-438e-a19a-6e5aadb813eb
caps.latest.revision: 10
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
# IRowsetChangeImpl::InsertRow
Creates and initializes a new row in the rowset.  
  
## Syntax  
  
```  
  
      STDMETHOD ( InsertRow )(  
   HCHAPTER /* hReserved */,  
   HACCESSOR hAccessor,  
   void* pData,  
   HROW* phRow   
);  
```  
  
#### Parameters  
 See [IRowsetChange::InsertRow](https://msdn.microsoft.com/en-us/library/ms716921.aspx) in the *OLE DB Programmer's Reference*.  
  
## Requirements  
 **Header:** atldb.h  
  
## See Also  
 [IRowsetChangeImpl Class](../../data/oledb/irowsetchangeimpl-class.md)