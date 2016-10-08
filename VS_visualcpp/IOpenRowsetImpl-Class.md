---
title: "IOpenRowsetImpl Class"
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
ms.assetid: d259cedc-1db4-41cf-bc9f-5030907ab486
caps.latest.revision: 10
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
# IOpenRowsetImpl Class
Provides implementation for the `IOpenRowset` interface.  
  
## Syntax  
  
```  
template <class SessionClass>  
class IOpenRowsetImpl : public IOpenRowset  
```  
  
#### Parameters  
 `SessionClass`  
 Your class, derived from `IOpenRowsetImpl`.  
  
## Members  
  
### Methods  
  
|||  
|-|-|  
|[CreateRowset](../VS_visualcpp/IOpenRowsetImpl--CreateRowset.md)|Creates a rowset object. Not called directly by user.|  
|[OpenRowset](../VS_visualcpp/IOpenRowsetImpl--OpenRowset.md)|Opens and returns a rowset that includes all rows from a single base table or index. (Not in ATLDB.H)|  
  
## Remarks  
 The [IOpenRowset](https://msdn.microsoft.com/en-us/library/ms716946.aspx) interface is mandatory for a session object. It opens and returns a rowset that includes all rows from a single base table or index.  
  
## Requirements  
 **Header:** atldb.h  
  
## See Also  
 [OLE DB Provider Templates](../VS_visualcpp/OLE-DB-Provider-Templates--C---.md)   
 [OLE DB Provider Template Architecture](../VS_visualcpp/OLE-DB-Provider-Template-Architecture.md)