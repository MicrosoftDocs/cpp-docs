---
title: "Using Bookmarks | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "rowsets, bookmarks"
  - "OLE DB provider templates, bookmarks"
  - "bookmarks, OLE DB"
  - "OLE DB providers, bookmark support"
ms.assetid: 7fa1d1a8-5063-4aa9-93ee-815bb9c98fae
caps.latest.revision: 7
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
# Using Bookmarks
Before you open the rowset, you must tell the provider that you want to use bookmarks. To do this, set the **DBPROP_BOOKMARKS** property to **true** in your property set. The provider retrieves bookmarks as column zero, so you must use the special macro `BOOKMARK_ENTRY` and the `CBookmark` class if you are using a static accessor. `CBookmark` is a template class where the argument is the length in bytes of the bookmark buffer. The length of the buffer required for a bookmark depends on the provider. If you are using the ODBC OLE DB provider, as shown in the following example, the buffer must be 4 bytes.  
  
```  
class CProducts  
{  
public:  
   CBookmark<4>   bookmark;  
  
   BEGIN_COLUMN_MAP(CProducts)  
      BOOKMARK_ENTRY(bookmark)  
   END_COLUMN_MAP()  
};  
  
CDBPropSet propset(DBPROPSET_ROWSET);  
propset.AddProperty(DBPROP_BOOKMARKS, true);  
  
CTable<CAccessor<CProducts> > product;  
product.Open(session, "Products", &propset);  
```  
  
 If you use `CDynamicAccessor`, the buffer is dynamically allocated at run time. In this case, you can use a specialized version of `CBookmark` for which you do not specify a buffer length. Use the function `GetBookmark` to retrieve the bookmark from the current record, as shown in this code sample:  
  
```  
CTable<CDynamicAccessor> product;  
CBookmark<>              bookmark;  
CDBPropSet propset(DBPROPSET_ROWSET);  
  
propset.AddProperty(DBPROP_BOOKMARKS, true);  
product.Open(session, "Products", &propset);  
product.MoveNext();  
product.GetBookmark(&bookmark);  
```  
  
 For information about supporting bookmarks in providers, see [Provider Support for Bookmarks](../../data/oledb/provider-support-for-bookmarks.md).  
  
## See Also  
 [Using Accessors](../../data/oledb/using-accessors.md)