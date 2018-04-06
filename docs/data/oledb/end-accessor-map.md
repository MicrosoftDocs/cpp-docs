---
title: "END_ACCESSOR_MAP | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-windows"]
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: ["END_ACCESSOR_MAP"]
dev_langs: ["C++"]
helpviewer_keywords: ["END_ACCESSOR_MAP macro"]
ms.assetid: ede813c7-46c9-48a6-aa1a-8ebf38e92023
caps.latest.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
ms.workload: ["cplusplus", "data-storage"]
---
# END_ACCESSOR_MAP
Marks the end of the accessor map entries.  
  
## Syntax  
  
```cpp
END_ACCESSOR_MAP()  
  
```  
  
## Remarks  
 For multiple accessors on a rowset, you need to specify `BEGIN_ACCESSOR_MAP` and use the `BEGIN_ACCESSOR` macro for each individual accessor. The `BEGIN_ACCESSOR` macro is completed with the `END_ACCESSOR` macro. The `BEGIN_ACCESSOR_MAP` macro is completed with the `END_ACCESSOR_MAP` macro.  
  
## Example  
 See [BEGIN_ACCESSOR_MAP](../../data/oledb/begin-accessor-map.md).  
  
## Requirements  
 **Header:** atldbcli.h  
  
## See Also  
 [Macros and Global Functions for OLE DB Consumer Templates](../../data/oledb/macros-and-global-functions-for-ole-db-consumer-templates.md)   
 [BEGIN_ACCESSOR_MAP](../../data/oledb/begin-accessor-map.md)   
 [BEGIN_ACCESSOR](../../data/oledb/begin-accessor.md)