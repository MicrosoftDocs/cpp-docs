---
title: "IRowsetLocateImpl::Compare | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "ATL.IRowsetLocateImpl.Compare"
  - "IRowsetLocateImpl::Compare"
  - "IRowsetLocateImpl.Compare"
  - "ATL::IRowsetLocateImpl::Compare"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Compare method"
ms.assetid: 6f84052c-c68c-480a-982f-03748faa7d5d
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# IRowsetLocateImpl::Compare
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [IRowsetLocateImpl::Compare](https://docs.microsoft.com/cpp/data/oledb/irowsetlocateimpl-compare).  
  
  
Compares two bookmarks.  
  
## Syntax  
  
```  
  
      STDMETHOD ( Compare )(  
   HCHAPTER /* hReserved */,  
   DBBKMARK cbBookmark1,  
   const BYTE* pBookmark1,  
   DBBKMARK cbBookmark2,  
   const BYTE* pBookmark2,  
   DBCOMPARE* pComparison   
);  
```  
  
#### Parameters  
 See [IRowsetLocate::Compare](https://msdn.microsoft.com/library/ms709539.aspx) in the *OLE DB Programmer's Reference*.  
  
## Remarks  
 Either of the bookmarks can be a standard OLE DB-defined [standard bookmark](https://msdn.microsoft.com/library/ms712954.aspx) (**DBBMK_FIRST**, **DBBMK_LAST**, or **DBBMK_INVALID**). The value returned in `pComparison` indicates the relationship between the two bookmarks:  
  
-   **DBCOMPARE_LT** (`cbBookmark1` is before `cbBookmark2`.)  
  
-   **DBCOMPARE_EQ** (`cbBookmark1` is equal to `cbBookmark2`.)  
  
-   **DBCOMPARE_GT** (`cbBookmark1` is after `cbBookmark2`.)  
  
-   **DBCOMPARE_NE** (The bookmarks are equal and not ordered.)  
  
-   **DBCOMPARE_NOTCOMPARABLE** (The bookmarks cannot be compared.)  
  
## Requirements  
 **Header:** atldb.h  
  
## See Also  
 [IRowsetLocateImpl Class](../../data/oledb/irowsetlocateimpl-class.md)

