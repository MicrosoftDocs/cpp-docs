---
title: "IRowsetImpl::GetData"
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
ms.assetid: cb15f1cc-bd25-4b74-93c3-db71aa93829c
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
# IRowsetImpl::GetData
Retrieves data from the rowset's copy of the row.  
  
## Syntax  
  
```  
  
      STDMETHOD( GetData )(  
   HROW hRow,  
   HACCESSOR hAccessor,  
   void* pDstData   
);  
```  
  
#### Parameters  
 See [IRowset::GetData](https://msdn.microsoft.com/en-us/library/ms716988.aspx) in the *OLE DB Programmer's Reference*.  
  
 Some parameters correspond to *OLE DB Programmer's Reference* parameters of different names, which are described in **IRowset::GetData**:  
  
|OLE DB Template parameters|*OLE DB Programmer's Reference* parameters|  
|--------------------------------|------------------------------------------------|  
|*pDstData*|`pData`|  
  
## Remarks  
 Also handles data conversion using the OLE DB data conversion DLL.  
  
## Requirements  
 **Header:** atldb.h  
  
## See Also  
 [IRowsetImpl Class](../VS_visualcpp/IRowsetImpl-Class.md)