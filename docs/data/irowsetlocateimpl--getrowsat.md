---
title: "IRowsetLocateImpl::GetRowsAt"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "article"
f1_keywords: 
  - "GetRowsAt"
  - "IRowsetLocateImpl.GetRowsAt"
  - "ATL::IRowsetLocateImpl::GetRowsAt"
  - "IRowsetLocateImpl::GetRowsAt"
  - "ATL.IRowsetLocateImpl.GetRowsAt"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "GetRowsAt method"
ms.assetid: 6aeb09dc-3aa8-4729-97a8-144dd27063f7
caps.latest.revision: 8
ms.author: "mblome"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
---
# IRowsetLocateImpl::GetRowsAt
Fetches rows starting with the row specified by an offset from a bookmark.  
  
## Syntax  
  
```  
  
      STDMETHOD ( GetRowsAt )(  
   HWATCHREGION /* hReserved1 */,  
   HCHAPTER hReserved2,  
   DBBKMARK cbBookmark,  
   const BYTE* pBookmark,  
   DBROWOFFSET lRowsOffset,  
   DBROWCOUNT cRows,  
   DBCOUNTITEM* pcRowsObtained,  
   HROW** prghRows   
);  
```  
  
#### Parameters  
 See [IRowsetLocate::GetRowsAt](https://msdn.microsoft.com/en-us/library/ms723031.aspx) in the *OLE DB Programmer's Reference*.  
  
## Remarks  
 To fetch from the cursor position instead, use [IRowset::GetRowsAt](https://msdn.microsoft.com/en-us/library/ms723031.aspx).  
  
 `IRowsetLocateImpl::GetRowsAt` does not change the cursor position.  
  
## Requirements  
 **Header:** atldb.h  
  
## See Also  
 [IRowsetLocateImpl Class](../data/irowsetlocateimpl-class.md)   
 [IRowsetLocateImpl::GetRowsByBookmark](../data/irowsetlocateimpl--getrowsbybookmark.md)