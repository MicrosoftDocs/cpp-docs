---
title: "ICommandPropertiesImpl Class"
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
ms.assetid: b3cf6aea-527e-4f0d-96e0-669178b021a2
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
# ICommandPropertiesImpl Class
Provides an implementation of the [ICommandProperties](https://msdn.microsoft.com/en-us/library/ms723044.aspx) interface.  
  
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
|[GetProperties](../VS_visualcpp/ICommandPropertiesImpl--GetProperties.md)|Returns the list of properties in the Rowset property group that are currently requested for the rowset.|  
|[SetProperties](../VS_visualcpp/ICommandPropertiesImpl--SetProperties.md)|Sets properties in the Rowset property group.|  
  
## Remarks  
 This is mandatory on commands. The implementation is provided by a static function defined by the [BEGIN_PROPSET_MAP](../VS_visualcpp/BEGIN_PROPSET_MAP.md) macro.  
  
## Requirements  
 **Header:** atldb.h  
  
## See Also  
 [OLE DB Provider Templates](../VS_visualcpp/OLE-DB-Provider-Templates--C---.md)   
 [OLE DB Provider Template Architecture](../VS_visualcpp/OLE-DB-Provider-Template-Architecture.md)