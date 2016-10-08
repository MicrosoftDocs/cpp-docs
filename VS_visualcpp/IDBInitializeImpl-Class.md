---
title: "IDBInitializeImpl Class"
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
ms.assetid: e4182f81-0443-44f5-a0d3-e7e075d6f883
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
# IDBInitializeImpl Class
Provides an implementation for the [IDBInitialize](https://msdn.microsoft.com/en-us/library/ms713706.aspx) interface.  
  
## Syntax  
  
```  
template <class T>  
class ATL_NO_VTABLE IDBInitializeImpl : public IDBInitialize  
```  
  
#### Parameters  
 `T`  
 Your class, derived from `IDBInitializeImpl`.  
  
## Members  
  
### Methods  
  
|||  
|-|-|  
|[IDBInitializeImpl](../VS_visualcpp/IDBInitializeImpl--IDBInitializeImpl.md)|The constructor.|  
  
### Interface Methods  
  
|||  
|-|-|  
|[Initialize](../VS_visualcpp/IDBInitializeImpl--Initialize.md)|Starts the provider.|  
|[Uninitialize](../VS_visualcpp/IDBInitializeImpl--Uninitialize.md)|Stops the provider.|  
  
### Data Members  
  
|||  
|-|-|  
|[m_dwStatus](../VS_visualcpp/IDBInitializeImpl--m_dwStatus.md)|Data source flags.|  
|[m_pCUtlPropInfo](../VS_visualcpp/IDBInitializeImpl--m_pCUtlPropInfo.md)|A pointer to implementation of DB Properties information.|  
  
## Remarks  
 A mandatory interface on data source objects and optional interface on enumerators.  
  
## Requirements  
 **Header:** atldb.h  
  
## See Also  
 [OLE DB Provider Templates](../VS_visualcpp/OLE-DB-Provider-Templates--C---.md)   
 [OLE DB Provider Template Architecture](../VS_visualcpp/OLE-DB-Provider-Template-Architecture.md)