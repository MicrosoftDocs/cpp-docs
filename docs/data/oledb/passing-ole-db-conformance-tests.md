---
description: "Learn more about: Passing OLE DB Conformance Tests"
title: "Passing OLE DB Conformance Tests"
ms.date: "11/04/2016"
helpviewer_keywords: ["testing, OLE DB providers", "testing providers", "conformance testing", "conformance testing [OLE DB]", "OLE DB providers, testing"]
ms.assetid: d1a4f147-2edd-476c-b452-0e6a0ac09891
---
# Passing OLE DB Conformance Tests

To make providers more consistent, the Data Access SDK provides a set of OLE DB conformance tests. The tests check all aspects of your provider and give you reasonable assurance that your provider functions as expected. You can find the OLE DB conformance tests on the Microsoft Data Access SDK. This section focuses on things you should do to pass the conformance tests. For information about running the OLE DB conformance tests, see the SDK.

## Running the Conformance Tests

In Visual C++ 6.0, the OLE DB provider templates added a number of hooking functions to allow you to check values and properties. Most of these functions were added in response to the conformance tests.

> [!NOTE]
> You need to add several validation functions for your provider to pass the OLE DB conformance tests.

This provider requires two validation routines. The first routine, `CRowsetImpl::ValidateCommandID`, is part of your rowset class. It's called during the creation of the rowset by the provider templates. The sample uses this routine to tell consumers that it doesn't support indexes. The first call is to `CRowsetImpl::ValidateCommandID` (note that the provider uses the `_RowsetBaseClass` typedef added in the interface map for `CCustomRowset` in [Provider Support for Bookmarks](../../data/oledb/provider-support-for-bookmarks.md), so you don't have to type that long line of template arguments). Next, return DB_E_NOINDEX if the index parameter isn't NULL (this indicates the consumer wants to use an index on us). For more information about command IDs, see the OLE DB specification and look for `IOpenRowset::OpenRowset`.

The following code is the `ValidateCommandID` validation routine:

```cpp
/////////////////////////////////////////////////////////////////////
// CustomRS.H
// Class: CCustomRowset

HRESULT ValidateCommandID(DBID* pTableID, DBID* pIndexID)
{
   HRESULT hr = _RowsetBaseClass::ValidateCommandID(pTableID, pIndexID);
   if (hr != S_OK)
      return hr;

   if (pIndexID != NULL)
      return DB_E_NOINDEX;    // Doesn't support indexes

   return S_OK;
}
```

The provider templates call the `OnPropertyChanged` method whenever someone changes a property on the DBPROPSET_ROWSET group. If you want to handle properties for other groups, you add them to the appropriate object (that is, DBPROPSET_SESSION checks go in the `CCustomSession` class).

The code first checks to see whether the property is linked to another. If the property is being chained, it sets the DBPROP_BOOKMARKS property to `True`. Appendix C of the OLE DB specification contains information about properties. This information also tells you whether the property is chained to another one.

You might also want to add the `IsValidValue` routine to your code. The templates call `IsValidValue` when trying to set a property. You would override this method if you require additional processing when setting a property value. You can have one of these methods for each property set.

## See also

[Advanced Provider Techniques](../../data/oledb/advanced-provider-techniques.md)
