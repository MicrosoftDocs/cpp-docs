---
title: "ICommandPropertiesImpl Class | Microsoft Docs"
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
  - "ICommandPropertiesImpl"
  - "ATL.ICommandPropertiesImpl"
  - "ATL::ICommandPropertiesImpl"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ICommandPropertiesImpl class"
ms.assetid: b3cf6aea-527e-4f0d-96e0-669178b021a2
caps.latest.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# ICommandPropertiesImpl Class
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [ICommandPropertiesImpl Class](https://docs.microsoft.com/cpp/data/oledb/icommandpropertiesimpl-class).  
  
  
Provides an implementation of the [ICommandProperties](https://msdn.microsoft.com/library/ms723044.aspx) interface.  
  
## Syntax  
  
```  
template <class T, class PropClass = T>  
class ATL_NO_VTABLE ICommandPropertiesImpl   
   : public ICommandProperties, public CUtlProps<PropClass>  
```  
  
#### Parameters  
 `T`  
 Your class, derived from  
  
 `PropClass`  
 Your properties class.  
  
## Members  
  
### Interface Methods  
  
|||  
|-|-|  
|[GetProperties](../../data/oledb/icommandpropertiesimpl-getproperties.md)|Returns the list of properties in the Rowset property group that are currently requested for the rowset.|  
|[SetProperties](../../data/oledb/icommandpropertiesimpl-setproperties.md)|Sets properties in the Rowset property group.|  
  
## Remarks  
 This is mandatory on commands. The implementation is provided by a static function defined by the [BEGIN_PROPSET_MAP](../../data/oledb/begin-propset-map.md) macro.  
  
## Requirements  
 **Header:** atldb.h  
  
## See Also  
 [OLE DB Provider Templates](../../data/oledb/ole-db-provider-templates-cpp.md)   
 [OLE DB Provider Template Architecture](../../data/oledb/ole-db-provider-template-architecture.md)

