---
description: "Learn more about: Using Bookmarks"
title: "Using Bookmarks"
ms.date: "10/24/2018"
helpviewer_keywords: ["rowsets, bookmarks", "OLE DB provider templates, bookmarks", "bookmarks, OLE DB", "OLE DB providers, bookmark support"]
ms.assetid: 7fa1d1a8-5063-4aa9-93ee-815bb9c98fae
---
# Using Bookmarks

Before you open the rowset, you must tell the provider that you want to use bookmarks. To do this, set the `DBPROP_BOOKMARKS` property to **`true`** in your property set. The provider retrieves bookmarks as column zero, so you must use the special macro BOOKMARK_ENTRY and the `CBookmark` class if you're using a static accessor. `CBookmark` is a template class where the argument is the length in bytes of the bookmark buffer. The length of the buffer required for a bookmark depends on the provider. If you're using the ODBC OLE DB provider, as shown in the following example, the buffer must be 4 bytes.

```cpp
class CProducts
{
public:
   CBookmark<4> bookmark;

   BEGIN_COLUMN_MAP(CProducts)
      BOOKMARK_ENTRY(bookmark)
   END_COLUMN_MAP()
};
```

Then, used by the following code:

```cpp
CDBPropSet propset(DBPROPSET_ROWSET);
propset.AddProperty(DBPROP_BOOKMARKS, true);

CTable<CAccessor<CProducts>> product;
CSession session;
product.Open(session, "Products", &propset);
```

If you use `CDynamicAccessor`, the buffer is dynamically set at run time. In this case, you can use a specialized version of `CBookmark` for which you don't specify a buffer length. Use the function `GetBookmark` to retrieve the bookmark from the current record, as shown in this code sample:

```cpp
CTable<CDynamicAccessor> product;
CBookmark<> bookmark;
CDBPropSet propset(DBPROPSET_ROWSET);
CSession session;

propset.AddProperty(DBPROP_BOOKMARKS, true);
product.Open(session, "Products", &propset);
product.MoveNext();
product.GetBookmark(&bookmark);
```

For information about supporting bookmarks in providers, see [Provider Support for Bookmarks](../../data/oledb/provider-support-for-bookmarks.md).

## See also

[Using Accessors](../../data/oledb/using-accessors.md)
