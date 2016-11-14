---
title: "IRowsetLocateImpl Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "IRowsetLocateImpl"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "providers, bookmarks"
  - "IRowsetLocateImpl class"
  - "bookmarks, OLE DB"
ms.assetid: a8aa3149-7ce8-4976-a680-2da193fd3234
caps.latest.revision: 11
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
# IRowsetLocateImpl Class
Implements the OLE DB [IRowsetLocate](https://msdn.microsoft.com/en-us/library/ms721190.aspx) interface, which fetches arbitrary rows from a rowset.  
  
## Syntax  
  
```  
template <  
   class T,   
   class RowsetInterface,   
   class RowClass = CSimpleRow,   
   class MapClass = CAtlMap < RowClass::KeyType, RowClass* >,   
   class BookmarkKeyType = LONG,   
   class BookmarkType = LONG,   
   class BookmarkMapClass = CAtlMap < RowClass::KeyType, RowClass* >  
>  
class ATL_NO_VTABLE IRowsetLocateImpl : public IRowsetImpl<  
   T,   
   RowsetInterface,   
   RowClass,   
   MapClass  
>  
```  
  
#### Parameters  
 `T`  
 A class derived from `IRowsetLocateImpl`.  
  
 `RowsetInterface`  
 A class derived from `IRowsetImpl`.  
  
 `RowClass`  
 The storage unit for the **HROW**.  
  
 `MapClass`  
 The storage unit for all row handles held by the provider.  
  
 `BookmarkKeyType`  
 The type of the bookmark, such as a LONG or a string. Ordinary bookmarks must have a length of at least two bytes. (Single-byte length is reserved for the OLE DB [standard bookmarks](https://msdn.microsoft.com/en-us/library/ms712954.aspx)**DBBMK_FIRST**, **DBBMK_LAST**, and **DBBMK_INVALID**.)  
  
 `BookmarkType`  
 The mapping mechanism for maintaining bookmark-to-data relationships.  
  
 `BookmarkMapClass`  
 The storage unit for all row handles held by the bookmark.  
  
## Members  
  
### Interface Methods  
  
|||  
|-|-|  
|[Compare](../../data/oledb/irowsetlocateimpl-compare.md)|Compares two bookmarks.|  
|[GetRowsAt](../../data/oledb/irowsetlocateimpl-getrowsat.md)|Fetches rows starting with the row specified by an offset from a bookmark.|  
|[GetRowsByBookmark](../../data/oledb/irowsetlocateimpl-getrowsbybookmark.md)|Fetches the rows that match the specified bookmarks.|  
|[Hash](../../data/oledb/irowsetlocateimpl-hash.md)|Returns hash values for the specified bookmarks.|  
  
### Data Members  
  
|||  
|-|-|  
|[m_rgBookmarks](../../data/oledb/irowsetlocateimpl-m-rgbookmarks.md)|An array of bookmarks.|  
  
## Remarks  
 `IRowsetLocateImpl` is the OLE DB Templates implementation of the [IRowsetLocate](https://msdn.microsoft.com/en-us/library/ms721190.aspx) interface. `IRowsetLocate` is used to fetch arbitrary rows from a rowset. A rowset that does not implement this interface is a `sequential` rowset. When `IRowsetLocate` is present on a rowset, column 0 is the bookmark for the rows; reading this column will obtain a bookmark value that can be used to reposition to the same row.  
  
 `IRowsetLocateImpl` is used to implement bookmark support in providers. Bookmarks are placeholders (indices on a rowset) that enable the consumer to return quickly to a row, allowing high-speed access to data. The provider determines what bookmarks can uniquely identify a row. Using `IRowsetLocateImpl` methods, you can compare bookmarks, fetch rows by offset, fetch rows by bookmark, and return hash values for bookmarks.  
  
 To support OLE DB bookmarks in a rowset, make the rowset inherit from this class.  
  
 For information on implementing bookmark support, see [Provider Support for Bookmarks](../../data/oledb/provider-support-for-bookmarks.md) in the *Visual C++ Programmer's Guide* and [Bookmarks](https://msdn.microsoft.com/en-us/library/ms709728.aspx) in the *OLE DB Programmer's Reference* in the `Platform``SDK`.  
  
## Requirements  
 **Header**: atldb.h  
  
## See Also  
 [OLE DB Provider Templates](../../data/oledb/ole-db-provider-templates-cpp.md)   
 [OLE DB Provider Template Architecture](../../data/oledb/ole-db-provider-template-architecture.md)   
 [IRowsetLocate:IRowset](https://msdn.microsoft.com/en-us/library/ms721190.aspx)   
 [Provider Support for Bookmarks](../../data/oledb/provider-support-for-bookmarks.md)   
 [Bookmarks](https://msdn.microsoft.com/en-us/library/ms709728.aspx)