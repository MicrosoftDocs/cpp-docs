---
description: "Learn more about: Overriding a Dynamic Accessor"
title: "Overriding a Dynamic Accessor"
ms.date: "10/19/2018"
helpviewer_keywords: ["accessors [C++], dynamic", "dynamic accessors", "overriding, dynamic accessors"]
ms.assetid: cbefd156-6da5-490d-b795-c2d7d874f7ce
---
# Overriding a Dynamic Accessor

When you use a dynamic accessor such as `CDynamicAccessor`, the command `Open` method creates an accessor for you automatically, based on the column information of the opened rowset. You can override the dynamic accessor to control exactly how the columns are bound.

To override the dynamic accessor, pass **`false`** as the last parameter to the `CCommand::Open` method. This prevents `Open` from creating an accessor automatically. You can then call `GetColumnInfo` and call `AddBindEntry` for each column that you want to bind. The following code shows how to do it:

```cpp
USES_CONVERSION;
double   dblProductID;

CCommand<CDynamicAccessor> product;
// Open the table, passing false to prevent automatic binding
product.Open(session, _T("Select * FROM Products"), NULL, NULL, DBGUID_DEFAULT, false);


ULONG         nColumns;
DBCOLUMNINFO*   pColumnInfo;
// Get the column information from the opened rowset.
product.GetColumnInfo(&nColumns, &pColumnInfo);

// Bind the product ID as a double.
pColumnInfo[0].wType          = DBTYPE_R8;
pColumnInfo[0].ulColumnSize = 8;
product.AddBindEntry(pColumnInfo[0]);

// Bind the product name as it is.
product.AddBindEntry(pColumnInfo[1]);

// Bind the reorder level as a string.
pColumnInfo[8].wType          = DBTYPE_STR;
pColumnInfo[8].ulColumnSize = 10;
product.AddBindEntry(pColumnInfo[8]);

// You have finished specifying the bindings. Go ahead and bind.
product.Bind();
// Free the memory for the column information that was retrieved in
// previous call to GetColumnInfo.
CoTaskMemFree(pColumnInfo);


char*   pszProductName;
char*   pszReorderLevel;
bool   bRC;

// Loop through the records tracing out the information.
while (product.MoveNext() == S_OK)
{
   bRC = product.GetValue(1, &dblProductID);
   pszProductName   = (char*)product.GetValue(2);
   pszReorderLevel  = (char*)product.GetValue(9);

   ATLTRACE(_T("Override = %lf \"%s\" \"%s\"\n"), dblProductID,
      A2T(pszProductName), A2T(pszReorderLevel));
}
```

## See also

[Using Accessors](../../data/oledb/using-accessors.md)
