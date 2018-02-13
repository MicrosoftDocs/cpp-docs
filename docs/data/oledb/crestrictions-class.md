---
title: "CRestrictions Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-windows"]
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: ["ATL::CRestrictions", "CRestrictions", "ATL.CRestrictions"]
dev_langs: ["C++"]
helpviewer_keywords: ["CRestrictions class"]
ms.assetid: 0aaa2364-641c-4318-b110-7446aada4b4f
caps.latest.revision: 12
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
ms.workload: ["cplusplus", "data-storage"]
---
# CRestrictions Class
A generic class that allows you to specify restrictions for schema rowsets.  
  
## Syntax

```cpp
template <class T, short nRestrictions, const GUID* pguid>  
class CRestrictions : 
        public CSchemaRowset <T, nRestrictions>  
```  
  
#### Parameters  
 `T`  
 The class used for the accessor.  
  
 `nRestrictions`  
 The number of restriction columns for the schema rowset.  
  
 `pguid`  
 A pointer to the GUID for the schema.  
  
## Members  
  
### Methods  
  
|||  
|-|-|  
|[Open](../../data/oledb/crestrictions-open.md)|Returns a result set according to the user-supplied restrictions.|  
  
## Requirements  
 **Header:** atldbsch.h  
  
## See Also  
 [OLE DB Consumer Templates](../../data/oledb/ole-db-consumer-templates-cpp.md)   
 [OLE DB Consumer Templates Reference](../../data/oledb/ole-db-consumer-templates-reference.md)