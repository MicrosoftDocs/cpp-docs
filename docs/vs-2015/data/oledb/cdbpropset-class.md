---
title: "CDBPropSet Class | Microsoft Docs"
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
  - "CDBPropSet"
  - "ATL.CDBPropSet"
  - "ATL::CDBPropSet"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CDBPropSet class"
ms.assetid: 54190149-c277-4679-b81a-ef484d4d1c00
caps.latest.revision: 13
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CDBPropSet Class
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [CDBPropSet Class](https://docs.microsoft.com/cpp/data/oledb/cdbpropset-class).  
  
  
Inherits from the **DBPROPSET** structure and adds a constructor that initializes key fields as well as the `AddProperty` access method.  
  
## Syntax  
  
```  
class CDBPropSet : public tagDBPROPSET  
```  
  
## Members  
  
### Methods  
  
|||  
|-|-|  
|[AddProperty](../../data/oledb/cdbpropset-addproperty.md)|Adds a property to the property set.|  
|[CDBPropSet](../../data/oledb/cdbpropset-cdbpropset.md)|Constructor.|  
|[SetGUID](../../data/oledb/cdbpropset-setguid.md)|Sets the **guidPropertySet** field of the **DBPROPSET** structure.|  
  
### Operators  
  
|||  
|-|-|  
|[operator =](../../data/oledb/cdbpropset-operator-equal.md)|Assigns the contents of one property set to another.|  
  
## Remarks  
 OLE DB providers and consumers use **DBPROPSET** structures to pass arrays of `DBPROP` structures. Each `DBPROP` structure represents a single property that can be set.  
  
## Requirements  
 **Header:** atldbcli.h  
  
## See Also  
 [OLE DB Consumer Templates](../../data/oledb/ole-db-consumer-templates-cpp.md)   
 [OLE DB Consumer Templates Reference](../../data/oledb/ole-db-consumer-templates-reference.md)   
 [CDBPropIDSet Class](../../data/oledb/cdbpropidset-class.md)   
 [DBPROPSET Structure](https://msdn.microsoft.com/library/ms714367.aspx)   
 [DBPROP Structure](https://msdn.microsoft.com/library/ms717970.aspx)

