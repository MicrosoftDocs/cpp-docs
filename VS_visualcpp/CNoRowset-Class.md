---
title: "CNoRowset Class"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: 55c6c7a4-9e3a-4775-a2dd-c8b333012fa6
caps.latest.revision: 8
manager: ghogen
translation.priority.ht: 
  - cs-cz
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - pl-pl
  - pt-br
  - ru-ru
  - tr-tr
  - zh-cn
  - zh-tw
---
# CNoRowset Class
Can be used as a template argument (`TRowset`) for [CCommand](../VS_visualcpp/CCommand-Class.md) or [CTable](../VS_visualcpp/CTable-Class.md).  
  
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
 [OLE DB Consumer Templates](../VS_visualcpp/OLE-DB-Consumer-Templates--C---.md)   
 [OLE DB Consumer Templates Reference](../VS_visualcpp/OLE-DB-Consumer-Templates-Reference.md)