---
title: "CSimpleRow::Compare"
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
ms.assetid: 0bb65f09-c7bc-449b-aa4e-c828cac13510
caps.latest.revision: 8
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
# CSimpleRow::Compare
Compares two rows to see if they refer to the same row instance.  
  
## Syntax  
  
```  
  
      HRESULT Compare(   
   CSimpleRow* pRow    
);  
```  
  
#### Parameters  
 `pRow`  
 A pointer to a `CSimpleRow` object.  
  
## Return Value  
 An `HRESULT` value, usually `S_OK`, indicating the two rows are the same row instance, or **S_FALSE**, indicating the two rows are different. See [IRowsetIdentity::IsSameRow](https://msdn.microsoft.com/en-us/library/ms719629.aspx) in the *OLE DB Programmer's Reference* for other possible return values.  
  
## Requirements  
 **Header:** atldb.h  
  
## See Also  
 [CSimpleRow Class](../VS_visualcpp/CSimpleRow-Class.md)   
 [CSimpleRow::ReleaseRow](../VS_visualcpp/CSimpleRow--ReleaseRow.md)   
 [IRowsetImpl::RefRows](../VS_visualcpp/IRowsetImpl--RefRows.md)