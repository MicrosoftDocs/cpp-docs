---
title: "CNoRowset Class | Microsoft Docs"
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
  - "ATL.CNoRowset"
  - "ATL::CNoRowset<TAccessor>"
  - "CNoRowset"
  - "ATL.CNoRowset<TAccessor>"
  - "ATL::CNoRowset"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CNoRowset class"
ms.assetid: 55c6c7a4-9e3a-4775-a2dd-c8b333012fa6
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CNoRowset Class
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [CNoRowset Class](https://docs.microsoft.com/cpp/data/oledb/cnorowset-class).  
  
  
Can be used as a template argument (`TRowset`) for [CCommand](../../data/oledb/ccommand-class.md) or [CTable](../../data/oledb/ctable-class.md).  
  
## Syntax  
  
```  
template <class TAccessor = CAccessorBase>  
class CNoRowset  
```  
  
#### Parameters  
 `TAccessor`  
 An accessor class. The default is `CAccessorBase`.  
  
## Remarks  
 Use `CNoRowset` as a template argument if the command does not return a rowset.  
  
 `CNoRowset` implements the following stub methods, each of which correspond to other accessor class methods:  
  
-   **BindFinished** - Indicates when binding is complete (returns `S_OK`).  
  
-   **Close** - Releases rows and the current IRowset interface.  
  
-   `GetIID` - Retrieves the interface ID of a connection point.  
  
-   **GetInterface** - Retrieves an interface.  
  
-   `GetInterfacePtr` - Retrieves an encapsulated interface pointer.  
  
-   **SetAccessor** - Sets a pointer to the accessor.  
  
-   **SetupOptionalRowsetInterfaces** - Sets up optional interfaces for the rowset.  
  
## Requirements  
 **Header:** atldbcli.h  
  
## See Also  
 [OLE DB Consumer Templates](../../data/oledb/ole-db-consumer-templates-cpp.md)   
 [OLE DB Consumer Templates Reference](../../data/oledb/ole-db-consumer-templates-reference.md)

