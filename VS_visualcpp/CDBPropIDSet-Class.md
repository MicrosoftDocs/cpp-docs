---
title: "CDBPropIDSet Class"
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
ms.assetid: 52bb806c-9581-494d-9af7-50d8a4834805
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
# CDBPropIDSet Class
Inherits from the **DBPROPIDSET** structure and adds a constructor that initializes key fields as well as the [AddPropertyID](../VS_visualcpp/CDBPropIDSet--AddPropertyID.md) access method.  
  
## Syntax  
  
```  
class CDBPropIDSet : public tagDBPROPIDSET  
```  
  
## Members  
  
### Methods  
  
|||  
|-|-|  
|[AddPropertyID](../VS_visualcpp/CDBPropIDSet--AddPropertyID.md)|Adds a property to the property ID set.|  
|[CDBPropIDSet](../VS_visualcpp/CDBPropIDSet--CDBPropIDSet.md)|Constructor.|  
|[SetGUID](../VS_visualcpp/CDBPropIDSet--SetGUID.md)|Sets the GUID of the property ID set.|  
  
### Operators  
  
|||  
|-|-|  
|[operator =](../VS_visualcpp/CDBPropIDSet--operator-=.md)|Assigns the contents of one property ID set to another.|  
  
## Remarks  
 OLE DB consumers use **DBPROPIDSET** structures to pass an array of property IDs for which the consumer wants to get property information. The properties identified in a single [DBPROPIDSET](https://msdn.microsoft.com/en-us/library/ms717981.aspx) structure belong to one property set.  
  
## Requirements  
 **Header:** atldbcli.h  
  
## See Also  
 [OLE DB Consumer Templates](../VS_visualcpp/OLE-DB-Consumer-Templates--C---.md)   
 [OLE DB Consumer Templates Reference](../VS_visualcpp/OLE-DB-Consumer-Templates-Reference.md)