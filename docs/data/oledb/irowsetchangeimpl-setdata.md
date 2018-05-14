---
title: "IRowsetChangeImpl::SetData | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-data"]
ms.topic: "reference"
f1_keywords: ["SetData", "IRowsetChangeImpl::SetData", "ATL.IRowsetChangeImpl.SetData", "IRowsetChangeImpl.SetData", "ATL::IRowsetChangeImpl::SetData"]
dev_langs: ["C++"]
helpviewer_keywords: ["SetData method"]
ms.assetid: 81e1dd0a-0518-440c-8808-cee76e4929c7
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "data-storage"]
---
# IRowsetChangeImpl::SetData
Sets data values in one or more columns.  
  
## Syntax  
  
```cpp
      STDMETHOD (SetData )(HROW hRow,  
   HACCESSOR hAccessor,  
   void* pSrcData);  
```  
  
#### Parameters  
 See [IRowsetChange::SetData](https://msdn.microsoft.com/en-us/library/ms721232.aspx) in the *OLE DB Programmer's Reference*.  
  
## Requirements  
 **Header:** atldb.h  
  
## See Also  
 [IRowsetChangeImpl Class](../../data/oledb/irowsetchangeimpl-class.md)