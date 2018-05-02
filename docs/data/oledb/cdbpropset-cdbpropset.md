---
title: "CDBPropSet::CDBPropSet | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-data"]
ms.topic: "reference"
f1_keywords: ["CDBPropSet.CDBPropSet", "CDBPropSet::CDBPropSet", "ATL::CDBPropSet::CDBPropSet", "ATL.CDBPropSet.CDBPropSet"]
dev_langs: ["C++"]
helpviewer_keywords: ["CDBPropSet class, constructor"]
ms.assetid: 02ae5d9e-c067-47ca-8111-a03e86b5626b
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "data-storage"]
---
# CDBPropSet::CDBPropSet
The constructor. Initializes the **rgProperties**, **cProperties**, and **guidPropertySet** fields of the [DBPROPSET](https://msdn.microsoft.com/en-us/library/ms714367.aspx) structure.  
  
## Syntax  
  
```cpp
      CDBPropSet(const GUID& guid);  

CDBPropSet(const CDBPropSet& propset);  

CDBPropSet();  
```  
  
#### Parameters  
 `guid`  
 [in] A GUID used to initialize the **guidPropertySet** field.  
  
 *propset*  
 [in] Another `CDBPropSet` object for copy construction.  
  
## Requirements  
 **Header:** atldbcli.h  
  
## See Also  
 [CDBPropSet Class](../../data/oledb/cdbpropset-class.md)   
 [CDBPropSet::SetGUID](../../data/oledb/cdbpropset-setguid.md)   
 [DBPROP Structure](https://msdn.microsoft.com/en-us/library/ms717970.aspx)