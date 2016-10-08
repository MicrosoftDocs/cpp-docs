---
title: "CDBPropSet Class"
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
ms.assetid: 54190149-c277-4679-b81a-ef484d4d1c00
caps.latest.revision: 11
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
# CDBPropSet Class
Inherits from the **DBPROPSET** structure and adds a constructor that initializes key fields as well as the `AddProperty` access method.  
  
## Syntax  
  
```  
class CDBPropSet : public tagDBPROPSET  
```  
  
## Members  
  
### Methods  
  
|||  
|-|-|  
|[AddProperty](../VS_visualcpp/CDBPropSet--AddProperty.md)|Adds a property to the property set.|  
|[CDBPropSet](../VS_visualcpp/CDBPropSet--CDBPropSet.md)|Constructor.|  
|[SetGUID](../VS_visualcpp/CDBPropSet--SetGUID.md)|Sets the **guidPropertySet** field of the **DBPROPSET** structure.|  
  
### Operators  
  
|||  
|-|-|  
|[operator =](../VS_visualcpp/CDBPropSet--operator-=.md)|Assigns the contents of one property set to another.|  
  
## Remarks  
 OLE DB providers and consumers use **DBPROPSET** structures to pass arrays of `DBPROP` structures. Each `DBPROP` structure represents a single property that can be set.  
  
## Requirements  
 **Header:** atldbcli.h  
  
## See Also  
 [OLE DB Consumer Templates](../VS_visualcpp/OLE-DB-Consumer-Templates--C---.md)   
 [OLE DB Consumer Templates Reference](../VS_visualcpp/OLE-DB-Consumer-Templates-Reference.md)   
 [CDBPropIDSet Class](../VS_visualcpp/CDBPropIDSet-Class.md)   
 [DBPROPSET Structure](https://msdn.microsoft.com/en-us/library/ms714367.aspx)   
 [DBPROP Structure](https://msdn.microsoft.com/en-us/library/ms717970.aspx)