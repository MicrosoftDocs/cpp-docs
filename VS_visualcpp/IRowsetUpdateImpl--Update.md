---
title: "IRowsetUpdateImpl::Update"
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
ms.assetid: 9ec6884d-aa9c-4871-a803-c048f162403c
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
# IRowsetUpdateImpl::Update
Transmits any changes made to the row since the last fetch or update.  
  
## Syntax  
  
```  
  
      STDMETHOD ( Update )(  
   HCHAPTER /* hReserved */,  
   DBCOUNTITEM cRows,  
   const HROW rghRows[],  
   DBCOUNTITEM* pcRows,  
   HROW** prgRows,  
   DBROWSTATUS** prgRowStatus   
);  
```  
  
#### Parameters  
 `hReserved`  
 [in] Corresponds to the `hChapter` parameter in [IRowsetUpdate::Update](https://msdn.microsoft.com/en-us/library/ms719709.aspx).  
  
 For other parameters, see [IRowsetUpdate::Update](https://msdn.microsoft.com/en-us/library/ms719709.aspx) in the *OLE DB Programmer's Reference*.  
  
## Remarks  
 Changes are transmitted by calling [IRowsetChangeImpl::FlushData](../VS_visualcpp/IRowsetChangeImpl--FlushData.md). The consumer must call [CRowset::Update](../VS_visualcpp/CRowset--Update.md) for the changes to take effect. Set *prgRowstatus* to an appropriate value as described in [Row States](https://msdn.microsoft.com/en-us/library/ms722752.aspx) in the *OLE DB Programmer's Reference*.  
  
## Requirements  
 **Header:** atldb.h  
  
## See Also  
 [IRowsetUpdateImpl Class](../VS_visualcpp/IRowsetUpdateImpl-Class.md)