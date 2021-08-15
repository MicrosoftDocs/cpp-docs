---
description: "Learn more about: Using an Existing ADO Recordset"
title: "Using an Existing ADO Recordset"
ms.date: "11/04/2016"
helpviewer_keywords: ["ADO recordsets [C++]", "OLE DB consumer templates, ADO recordsets", "recordsets [C++], using in OLE DB"]
ms.assetid: a9b1de8a-d379-49b1-a26e-578741e9f6a8
---
# Using an Existing ADO Recordset

To mix OLE DB consumer templates and Active Data Objects (ADO), use ADO to open a recordset (corresponding to a rowset in the OLE DB Consumer Templates). When you have a recordset, do the following to connect to an OLE DB rowset:

1. Call `QueryInterface` for the `IRowset` and `IAccessor` pointers.

    ```cpp
    IRowset* lpRowset = NULL;
    IAccessor* lpAccessor = NULL;
    lpUnk->QueryInterface(IID_IRowset, (void**)&lpRowset);
    lpUnk->QueryInterface(IID_IAccessor, (void**)&lpAccessor);
    ```

    > [!NOTE]
    > *lpUnk* points to the `IUnknown` object of the ADO recordset.

1. Attach the accessor and rowset to their appropriate OLE DB consumer template classes.

    ```cpp
    CRowset rs;
    CAccessor accessor;

    accessor.AddAccessorInfo(0ul);      // 0 is the ordinal of an ADO accessor
    rs.m_spRowset.Attach(lpRowset);      // use the Attach method of CComPtr<>
    rs.SetAccessor(accessor);
    ```

## See also

[Using Accessors](../../data/oledb/using-accessors.md)
