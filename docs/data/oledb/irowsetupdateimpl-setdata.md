---
title: "IRowsetUpdateImpl::SetData | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-windows"]
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: ["SetData", "IRowsetUpdateImpl::SetData", "IRowsetUpdateImpl.SetData", "ATL::IRowsetUpdateImpl::SetData", "ATL.IRowsetUpdateImpl.SetData"]
dev_langs: ["C++"]
helpviewer_keywords: ["SetData method"]
ms.assetid: 7288a8d1-a7cf-4957-b832-0f3b18fd0da4
caps.latest.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
ms.workload: ["cplusplus", "data-storage"]
---
# IRowsetUpdateImpl::SetData
Sets data values in one or more columns.  
  
## Syntax  
  
```  
  
      STDMETHOD ( SetData )(  
   HROW hRow,  
   HACCESSOR hAccessor,  
   void* pSrcData   
);  
```  
  
#### Parameters  
 See [IRowsetChange::SetData](https://msdn.microsoft.com/en-us/library/ms721232.aspx) in the *OLE DB Programmer's Reference*.  
  
## Remarks  
 This method overrides the [IRowsetChangeImpl::SetData](../../data/oledb/irowsetchangeimpl-setdata.md) method but includes caching of original data to permit either immediate or deferred processing of the operation.  
  
## Requirements  
 **Header:** atldb.h  
  
## See Also  
 [IRowsetUpdateImpl Class](../../data/oledb/irowsetupdateimpl-class.md)