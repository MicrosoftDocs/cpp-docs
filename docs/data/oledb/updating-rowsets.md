---
description: "Learn more about: Updating Rowsets"
title: "Updating Rowsets"
ms.date: "05/09/2019"
helpviewer_keywords: ["rowsets, updating data", "updating data, rowsets", "updating rowsets", "rowsets"]
ms.assetid: 39588758-5c72-4254-a10d-cc2b1f473357
---
# Updating Rowsets

A basic database operation is to update, or write data to, the data store. In OLE DB, the update mechanism is simple: your consumer application sets the values of bound data members and then writes those values to the rowset; the consumer then requests that the provider update the data store.

Consumers can complete the following kinds of updates on rowset data: setting column values within a row, inserting a row, and deleting a row. To complete these operations, the OLE DB Template class [CRowset](../../data/oledb/crowset-class.md) implements the [IRowsetChange](/previous-versions/windows/desktop/ms715790(v=vs.85)) interface and overrides the following interface methods:

- [SetData](./crowset-class.md#setdata) changes column values in a row of a rowset; it equates to the SQL UPDATE command.

- [Insert](./crowset-class.md#insert) inserts a row into a rowset; it equates to the SQL INSERT command.

- [Delete](./crowset-class.md#delete) deletes rows from a rowset; it equates to the SQL DELETE command.

## Supporting Update Operations

> [!NOTE]
> The ATL OLE DB Consumer wizard is not available in Visual Studio 2019 and later. You can still add the functionality manually. For more information, see [Creating a Consumer Without Using a Wizard](creating-a-consumer-without-using-a-wizard.md).

When you create a consumer with the **ATL OLE DB Consumer Wizard**, you can support the update operations by selecting one or more of the three check boxes **Change**, **Insert**, and **Delete**. If you select these options, the wizard modifies the code appropriately to support the type of changes you choose. However, if you don't use the wizard, you need to set the following rowset properties to `VARIANT_TRUE` to support updates:

- `DBPROPVAL_UP_CHANGE` allows you to change the data values in a row.

- `DBPROPVAL_UP_INSERT` allows you to insert a row.

- `DBPROPVAL_UP_DELETE` allows you to delete a row.

You set the properties as follows:

```cpp
CDBPropSet ps(DBPROPSET_ROWSET);

ps.AddProperty(DBPROP_IRowsetChange, true);
ps.AddProperty(DBPROP_UPDATABILITY, DBPROPVAL_UP_CHANGE | DBPROPVAL_UP_INSERT | DBPROPVAL_UP_DELETE);
```

Change, insert, or delete operations might fail if one or more columns isn't writable. Modify your cursor map to correct this issue.

## Setting Data in Rows

[CRowset::SetData](./crowset-class.md#setdata) sets data values in one or more columns of the current row. The following code sets the values of data members bound to the columns `Name` and `Units in Stock` of the table `Products` and then calls `SetData` to write those values to the 100th row of the rowset:

```cpp
// Instantiate a rowset based on the user record class
CTable<CAccessor<CProductAccessor>> product;
CSession session;

// Open the rowset and move to the 100th row
product.Open(session, "Product", &ps, 1);  // ps is the property set
product.MoveToBookmark(&bookmark, 0);      // Assume that bookmark is set to 100th row

// Change the values of columns "Name" and "Units in Stock" in the current row of the Product table
_tcscpy_s(product.m_ProductName, product.m_sizeOfProductName, _T( "Candle" ) );

product.m_UnitsInStock = 10000;

// Set the data
HRESULT hr = product.SetData();
```

## Inserting Rows into Rowsets

[CRowset::Insert](./crowset-class.md#insert) creates and initializes a new row using data from the accessor. `Insert` creates an entirely new row after the current row; you need to specify whether to increment the current row to the next row or leave it unchanged. You do this by setting the *bGetRow* parameter:

```cpp
HRESULT Insert(int nAccessor = 0, bool bGetRow = false)
```

- **`false`** (the default value) specifies that the current row increment to the next row (in which case it points to the inserted row).

- **`true`** specifies that the current row stay where it is.

The following code sets the values of data members bound to the columns of the table `Products` and then calls `Insert` to insert a new row with those values after the 100th row of the rowset. It's recommended that you set all column values to avoid undefined data in the new row:

```cpp
// Instantiate a rowset based on the user record class
CTable<CAccessor<CProductAccessor>> product;
CSession session;

// Open the rowset and move to the 100th row
product.Open(session, "Product", &ps, 1);  // ps is the property set
product.MoveToBookmark(&bookmark, 0);      // Assume that bookmark is set to 100th row

// Set the column values for a row of the Product table, then insert the row
product.m_ProductID = 101;
_tcscpy_s(product.m_ProductName, product.m_sizeOfProductName, _T( "Candle" ) );

product.m_SupplierID = 27857;
product.m_CategoryID = 372;
_tcscpy_s(product.m_QuantityPerUnit, product.m_sizeOfQuantityPerUnit, _T( "Pack of 10" ) );

product.m_UnitPrice = 20;
product.m_UnitsInStock = 10000;
product.m_UnitsOnOrder = 5201;
product.m_ReorderLevel = 5000;
product.m_Discontinued = false;

// You must also initialize the status and length fields before setting/inserting data
// Set the column status values
m_dwProductIDStatus = DBSTATUS_S_OK;
m_dwProductNameStatus = DBSTATUS_S_OK;
m_dwSupplierIDStatus = DBSTATUS_S_OK;
m_dwCategoryIDStatus = DBSTATUS_S_OK;
m_dwQuantityPerUnitStatus = DBSTATUS_S_OK;
m_dwUnitPriceStatus = DBSTATUS_S_OK;
m_dwUnitsInStockStatus = DBSTATUS_S_OK;
m_dwUnitsOnOrderStatus = DBSTATUS_S_OK;
m_dwReorderLevelStatus = DBSTATUS_S_OK;
m_dwDiscontinuedStatus = DBSTATUS_S_OK;

// Set the column length value for column data members that are not fixed-length types.
// The value should be the length of the string that you are setting.
m_dwProductNameLength = 6;             // "Candle" has 6 characters
m_dwQuantityPerUnitLength = 10;        // "Pack of 10" has 10 characters

// Insert the data
HRESULT hr = product.Insert();
```

For a more detailed example, see [CRowset::Insert](./crowset-class.md#insert).

For more information about setting the status and length data members, see [Field Status Data Members in Wizard-Generated Accessors](../../data/oledb/field-status-data-members-in-wizard-generated-accessors.md).

## Deleting Rows from Rowsets

[CRowset::Delete](./crowset-class.md#delete) deletes the current row from the rowset. The following code calls `Delete` to remove the 100th row of the rowset:

```cpp
// Instantiate a rowset based on the user record class
CTable<CAccessor<CProductAccessor>> product;
CSession session;

// Open the rowset and move to the 100th row
product.Open(session, "Product", &ps, 1);  // ps is the property set
product.MoveToBookmark(&bookmark, 0);      // Assume that bookmark is set to 100th row

// Delete the row
HRESULT hr = product.Delete();
```

## Immediate and Deferred Updates

Unless you specify otherwise, calls to the `SetData`, `Insert`, and `Delete` methods update the data store immediately. You can, however, defer updates so that the consumer stores all changes in a local cache and then transfers them to the data store when you call one of the following update methods:

- [CRowset::Update](./crowset-class.md#update) transfers any pending changes made to the current row since the last fetch or `Update` call on it.

- [CRowset::UpdateAll](./crowset-class.md#updateall) transfers any pending changes made to all rows since the last fetch or `Update` call on it.

Update, as used by the update methods, has the specific meaning of making changes on command and isn't to be confused with the SQL **UPDATE** command (`SetData` is equivalent to the SQL **UPDATE** command).

Deferred updates are useful, for example, in situations such as a series of banking transactions; if one transaction is canceled, you can undo the change, because you don't send the series of changes until after the last one is committed. Also, the provider can bundle the changes into one network call, which is more efficient.

To support deferred updates, you must set the `DBPROP_IRowsetChange` property along with the properties described in **Supporting Update Operations**:

```cpp
pPropSet->AddProperty(DBPROP_IRowsetUpdate, true);
```

When you call `Update` or `UpdateAll`, the methods transfer changes from the local cache to the data store and then wipe out the local cache. Because update transfers changes only for the current row, it's important that your application keeps track of which row to update and when to update it. The following example shows how to update two consecutive rows:

```cpp
// Instantiate a rowset based on the user record class
CTable<CAccessor<CProductAccessor>> product;
CSession session;

// Open the rowset and move to the 100th row
product.Open(session, "Product", &ps, 1);  // ps is the property set
product.MoveToBookmark(&bookmark, 0);      // Assume that bookmark is set to 100th row

// Change the values of columns "Name" and "Units in Stock" in the 100th row of the Product table
_tcscpy_s(product.m_ProductName, product.m_sizeOfProductName, _T( "Wick" ) );

product.m_UnitsInStock = 10000;

HRESULT hr = product.SetData();  // No changes made to row 100 yet
product.Update();                 // Update row 100 now

// Change the values of columns "Name" and "Units in Stock" in the 101st row of the Product table
product.MoveNext();

_tcscpy_s(product.m_ProductName, product.m_sizeOfProductName _T( "Wax" ) );

product.m_UnitsInStock = 500;

HRESULT hr = product.SetData();  // No changes made to row 101 yet
product.Update();                 // Update row 101 now
```

To ensure that pending changes are transferred, you should call `Update` before moving to another row. However, when this is tedious or inefficient, for example, when your application needs to update hundreds of rows, you can use `UpdateAll` to update all the rows at once.

For example, if the first `Update` call were missing from the above code, row 100 would stay unchanged, while row 101 would be changed. After that point, your application would either have to call `UpdateAll` or move back to row 100 and call `Update` for that row to be updated.

Finally, one main reason to defer changes is to be able to undo them. Calling [CRowset::Undo](./crowset-class.md#undo) rolls back the state of the local change cache to the state of the data store before any pending changes were made. It's important to note that `Undo` doesn't roll back the state of the local cache by one step (the state before only the latest change); instead, it clears the local cache for that row. Also, `Undo` affects only the current row.

## See also

[Working with OLE DB Consumer Templates](../../data/oledb/working-with-ole-db-consumer-templates.md)<br/>
[CRowset Class](../../data/oledb/crowset-class.md)<br/>
[IRowsetChange](/previous-versions/windows/desktop/ms715790(v=vs.85))<br/>
