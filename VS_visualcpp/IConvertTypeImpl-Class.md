---
title: "IConvertTypeImpl Class"
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
ms.assetid: 7f81e79e-7d3f-4cbe-b93c-d632a94b15f6
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
# IConvertTypeImpl Class
Provides an implementation of the [IConvertType](https://msdn.microsoft.com/en-us/library/ms715926.aspx) interface.  
  
## Syntax  
  
```  
template <class T>  
class ATL_NO_VTABLE IConvertTypeImpl   
   : public IConvertType, public CConvertHelper  
```  
  
#### Parameters  
 `T`  
 Your class, derived from `IConvertTypeImpl`.  
  
## Members  
  
### Interface Methods  
  
|||  
|-|-|  
|[CanConvert](../VS_visualcpp/IConvertTypeImpl--CanConvert.md)|Gives information on the availability of type conversions on a command or on a rowset.|  
  
## Remarks  
 This interface is mandatory on commands, rowsets, and index rowsets. **IConvertTypeImpl** implements the interface by delegating to the conversion object supplied by OLE DB.  
  
## Requirements  
 **Header:** atldb.h  
  
## See Also  
 [OLE DB Provider Templates](../VS_visualcpp/OLE-DB-Provider-Templates--C---.md)   
 [OLE DB Provider Template Architecture](../VS_visualcpp/OLE-DB-Provider-Template-Architecture.md)