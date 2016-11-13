---
title: "CRowset::FindNextRow | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "ATL.CRowset.FindNextRow"
  - "CRowset<TAccessor>.FindNextRow"
  - "ATL::CRowset::FindNextRow"
  - "CRowset::FindNextRow"
  - "CRowset<TAccessor>::FindNextRow"
  - "CRowset.FindNextRow"
  - "ATL.CRowset<TAccessor>.FindNextRow"
  - "ATL::CRowset<TAccessor>::FindNextRow"
  - "FindNextRow"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "FindNextRow method"
ms.assetid: 36484df9-3625-4f15-bf69-db73a8d91c55
caps.latest.revision: 10
author: "mikeblome"
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
# CRowset::FindNextRow
Finds the next matching row after the specified bookmark.  
  
## Syntax  
  
```  
  
      HRESULT FindNextRow(   
   DBCOMPAREOP op,   
   BYTE* pData,   
   DBTYPE wType,   
   DBLENGTH nLength,   
   BYTE bPrecision,   
   BYTE bScale,   
   BOOL bSkipCurrent = TRUE,   
   CBookmarkBase* pBookmark = NULL    
) throw( );  
```  
  
#### Parameters  
 `op`  
 [in] The operation to use in comparing row values. For values, see [IRowsetFind::FindNextRow](https://msdn.microsoft.com/en-us/library/ms723091.aspx).  
  
 `pData`  
 [in] A pointer to the value to be matched.  
  
 `wType`  
 [in] Indicates the data type of the value part of the buffer. For information about type indicators, see [Data Types](https://msdn.microsoft.com/en-us/library/ms723969.aspx) in the *OLE DB Programmer's Reference* in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
 `nLength`  
 [in] The length, in bytes, of the consumer data structure allocated for the data value. For details, see the description of **cbMaxLen** in [DBBINDING Structures](https://msdn.microsoft.com/en-us/library/ms716845.aspx) in the *OLE DB Programmer's Reference.*  
  
 `bPrecision`  
 [in] The maximum precision used when getting data. Used only if `wType` is `DBTYPE_NUMERIC`. For more information, see [Conversions involving DBTYPE_NUMERIC or DBTYPE_DECIMAL](https://msdn.microsoft.com/en-us/library/ms719714.aspx) in the *OLE DB Programmer's Reference*.  
  
 `bScale`  
 [in] The scale used when getting data. Used only if `wType` is `DBTYPE_NUMERIC` or **DBTYPE_DECIMAL**. For more information, see [Conversions involving DBTYPE_NUMERIC or DBTYPE_DECIMAL](https://msdn.microsoft.com/en-us/library/ms719714.aspx) in the *OLE DB Programmer's Reference*.  
  
 *bSkipCurrent*  
 [in] The number of rows from the bookmark at which to start a search.  
  
 `pBookmark`  
 [in] The bookmark for position at which to start a search.  
  
## Return Value  
 A standard `HRESULT`.  
  
## Remarks  
 This method requires the optional interface **IRowsetFind**, which might not be supported on all providers; if this is the case, the method returns **E_NOINTERFACE**. You must also set **DBPROP_IRowsetFind** to `VARIANT_TRUE` before calling **Open** on the table or command containing the rowset.  
  
 For information about using bookmarks in consumers, see [Using Bookmarks](../../data/oledb/using-bookmarks.md).  
  
## Requirements  
 **Header:** atldbcli.h  
  
## See Also  
 [CRowset Class](../../data/oledb/crowset-class.md)   
 [DBBINDING Structures](https://msdn.microsoft.com/en-us/library/ms716845.aspx)