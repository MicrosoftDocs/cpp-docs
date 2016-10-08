---
title: "CAccessorRowset Class"
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
ms.assetid: bd4f58ed-cebf-4d43-8985-1e5fcbf06953
caps.latest.revision: 12
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
# CAccessorRowset Class
Encapsulates a rowset and its associated accessors in a single class.  
  
## Syntax  
  
```  
template <   
   class TAccessor = CNoAccessor,    
   template <typename T> class TRowset = CRowset    
>  
class CAccessorRowset :   
   public TAccessor,    
   public TRowset<TAccessor>  
```  
  
#### Parameters  
 `TAccessor`  
 An accessor class.  
  
 `TRowset`  
 A rowset class.  
  
## Members  
  
### Methods  
  
|||  
|-|-|  
|[Bind](../VS_visualcpp/CAccessorRowset--Bind.md)|Creates bindings (used when **bBind** is specified as false in [CCommand::Open](../VS_visualcpp/CCommand--Open.md)).|  
|[CAccessorRowset](../VS_visualcpp/CAccessorRowset--CAccessorRowset.md)|Constructor.|  
|[Close](../VS_visualcpp/CAccessorRowset--Close.md)|Closes the rowset and any accessors.|  
|[FreeRecordMemory](../VS_visualcpp/CAccessorRowset--FreeRecordMemory.md)|Frees any columns in the current record that need to be freed.|  
|[GetColumnInfo](../VS_visualcpp/CAccessorRowset--GetColumnInfo.md)|Implements [IColumnsInfo::GetColumnInfo](https://msdn.microsoft.com/en-us/library/ms722704.aspx).|  
  
## Remarks  
 Class `TAccessor` manages the accessor. Class *TRowset* manages the rowset.  
  
## Requirements  
 **Header:** atldbcli.h  
  
## See Also  
 [OLE DB Consumer Templates](../VS_visualcpp/OLE-DB-Consumer-Templates--C---.md)   
 [OLE DB Consumer Templates Reference](../VS_visualcpp/OLE-DB-Consumer-Templates-Reference.md)