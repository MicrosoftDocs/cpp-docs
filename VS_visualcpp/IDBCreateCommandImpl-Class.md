---
title: "IDBCreateCommandImpl Class"
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
ms.assetid: eac4755e-1668-42e1-958e-a35620c385ae
caps.latest.revision: 9
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
# IDBCreateCommandImpl Class
Provides an implementation of the [IDBCreateCommand](https://msdn.microsoft.com/en-us/library/ms711625.aspx) interface.  
  
## Syntax  
  
```  
template <class T, class CommandClass >  
class ATL_NO_VTABLE IDBCreateCommandImpl   
   : public IDBCreateCommand  
```  
  
#### Parameters  
 `T`  
 The session object derived from `IDBCreateCommandImpl`.  
  
 `CommandClass`  
 Your command class.  
  
## Members  
  
### Interface Methods  
  
|||  
|-|-|  
|[CreateCommand](../VS_visualcpp/IDBCreateCommandImpl--CreateCommand.md)|Creates a new command.|  
  
## Remarks  
 An optional interface on the session object to obtain a new command.  
  
## Requirements  
 **Header:** atldb.h  
  
## See Also  
 [OLE DB Provider Templates](../VS_visualcpp/OLE-DB-Provider-Templates--C---.md)   
 [OLE DB Provider Template Architecture](../VS_visualcpp/OLE-DB-Provider-Template-Architecture.md)