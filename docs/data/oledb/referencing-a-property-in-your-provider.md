---
description: "Learn more about: Referencing a Property in Your Provider"
title: "Referencing a Property in Your Provider"
ms.date: "11/04/2016"
helpviewer_keywords: ["OLE DB providers, properties", "references, to properties in providers", "referencing properties in providers"]
ms.assetid: bfbb3851-5eed-467a-a179-4a97a9515525
---
# Referencing a Property in Your Provider

Find the property group and property ID for the property you want. For more information, see [OLE DB Properties](/previous-versions/windows/desktop/ms722734(v=vs.85)) in the **OLE DB Programmer's Reference**.

The following example assumes that you're trying to get a property from the rowset. The code for using the session or command is similar, but uses a different interface.

Create a [CDBPropSet](../../data/oledb/cdbpropset-class.md) object using the property group as the parameter to the constructor. For example:

```cpp
CDBPropSet propset(DBPROPSET_ROWSET);
```

Call [AddProperty](./cdbpropset-class.md#addproperty), passing it the property ID and a value to be assigned to the property. The type of the value depends on the property you're using.

```cpp
CDBPropSet propset(DBPROPSET_ROWSET);

propset.AddProperty(DBPROP_IRowsetChange, true);

propset.AddProperty(DBPROP_UPDATABILITY, DBPROPVAL_UP_INSERT | DBPROPVAL_UP_CHANGE | DBPROPVAL_UP_DELETE);
```

Use the `IRowset` interface to call `GetProperties`. Pass the property set as a parameter. Here is the final code:

```cpp
CAgentRowset<CCustomCommand>* pRowset = (CAgentRowset<CCustomCommand>*) pThis;

CComQIPtr<IRowsetInfo, &IID_IRowsetInfo> spRowsetProps = pRowset;

DBPROPIDSET set;
set.AddPropertyID(DBPROP_BOOKMARKS);

DBPROPSET* pPropSet = NULL;
ULONG ulPropSet = 0;

HRESULT hr;

if (spRowsetProps)
   hr = spRowsetProps->GetProperties(1, &set, &ulPropSet, &pPropSet);

if (pPropSet)
{
   CComVariant var = pPropSet->rgProperties[0].vValue;
   CoTaskMemFree(pPropSet->rgProperties);
   CoTaskMemFree(pPropSet);

   if (SUCCEEDED(hr) && (var.boolVal == VARIANT_TRUE))
   {
      ...  // Use property here
   }
}
```

## See also

[Working with OLE DB Provider Templates](../../data/oledb/working-with-ole-db-provider-templates.md)
