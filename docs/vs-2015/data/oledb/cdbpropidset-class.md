---
title: "CDBPropIDSet Class | Microsoft Docs"
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
  - "CDBPropIDSet"
  - "ATL.CDBPropIDSet"
  - "ATL::CDBPropIDSet"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CDBPropIDSet class"
ms.assetid: 52bb806c-9581-494d-9af7-50d8a4834805
caps.latest.revision: 12
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CDBPropIDSet Class
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [CDBPropIDSet Class](https://docs.microsoft.com/cpp/data/oledb/cdbpropidset-class).  
  
  
Inherits from the **DBPROPIDSET** structure and adds a constructor that initializes key fields as well as the [AddPropertyID](../../data/oledb/cdbpropidset-addpropertyid.md) access method.  
  
## Syntax  
  
```  
class CDBPropIDSet : public tagDBPROPIDSET  
```  
  
## Members  
  
### Methods  
  
|||  
|-|-|  
|[AddPropertyID](../../data/oledb/cdbpropidset-addpropertyid.md)|Adds a property to the property ID set.|  
|[CDBPropIDSet](../../data/oledb/cdbpropidset-cdbpropidset.md)|Constructor.|  
|[SetGUID](../../data/oledb/cdbpropidset-setguid.md)|Sets the GUID of the property ID set.|  
  
### Operators  
  
|||  
|-|-|  
|[operator =](../../data/oledb/cdbpropidset-operator-equal.md)|Assigns the contents of one property ID set to another.|  
  
## Remarks  
 OLE DB consumers use **DBPROPIDSET** structures to pass an array of property IDs for which the consumer wants to get property information. The properties identified in a single [DBPROPIDSET](https://msdn.microsoft.com/library/ms717981.aspx) structure belong to one property set.  
  
## Requirements  
 **Header:** atldbcli.h  
  
## See Also  
 [OLE DB Consumer Templates](../../data/oledb/ole-db-consumer-templates-cpp.md)   
 [OLE DB Consumer Templates Reference](../../data/oledb/ole-db-consumer-templates-reference.md)

