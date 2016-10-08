---
title: "IRowsetIdentityImpl Class"
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
ms.assetid: 56821edf-e045-40c8-96bd-231552cd5799
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
# IRowsetIdentityImpl Class
Implements the OLE DB [IRowsetIdentity](https://msdn.microsoft.com/en-us/library/ms715913.aspx) interface, which enables testing for row identity.  
  
## Syntax  
  
```  
template <class T, class RowClass = CSimpleRow>  
class ATL_NO_VTABLE IRowsetIdentityImpl   
   : public IRowsetIdentity  
```  
  
#### Parameters  
 `T`  
 A class derived from `IRowsetIdentityImpl`.  
  
 `RowClass`  
 The storage unit for the **HROW**.  
  
## Members  
  
### Methods  
  
|||  
|-|-|  
|[IsSameRow](../VS_visualcpp/IRowsetIdentityImpl--IsSameRow.md)|Compares two row handles to see if they refer to the same row.|  
  
## Requirements  
 **Header:** atldb.h  
  
## See Also  
 [OLE DB Provider Templates](../VS_visualcpp/OLE-DB-Provider-Templates--C---.md)   
 [OLE DB Provider Template Architecture](../VS_visualcpp/OLE-DB-Provider-Template-Architecture.md)