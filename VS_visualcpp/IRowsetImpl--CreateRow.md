---
title: "IRowsetImpl::CreateRow"
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
ms.assetid: b01c430c-9484-4fef-a6cf-a2e8d9d99130
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
# IRowsetImpl::CreateRow
A helper method called by [GetNextRows](../VS_visualcpp/IRowsetImpl--GetNextRows.md) to allocate a new **HROW**.  
  
## Syntax  
  
```  
  
      HRESULT CreateRow(  
   DBROWOFFSET lRowsOffset,  
   DBCOUNTITEM& cRowsObtained,  
   HROW* rgRows   
);  
```  
  
#### Parameters  
 *lRowsOffset*  
 Cursor position of the row being created.  
  
 *cRowsObtained*  
 A reference passed back to the user indicating the number of rows created.  
  
 *rgRows*  
 An array of **HROW**s returned to the caller with the newly created row handles.  
  
## Remarks  
 If the row exists, this method calls [AddRefRows](../VS_visualcpp/IRowsetImpl--AddRefRows.md) and returns. Otherwise, it allocates a new instance of the RowClass template variable and adds it to [m_rgRowHandles](../VS_visualcpp/IRowsetImpl--m_rgRowHandles.md).  
  
## Requirements  
 **Header:** atldb.h  
  
## See Also  
 [IRowsetImpl Class](../VS_visualcpp/IRowsetImpl-Class.md)