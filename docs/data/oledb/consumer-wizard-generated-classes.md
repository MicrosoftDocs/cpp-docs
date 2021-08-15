---
description: "Learn more about: Consumer Wizard-Generated Classes"
title: "Consumer Wizard-Generated Classes"
ms.date: "05/09/2019"
helpviewer_keywords: ["user record classes in OLE DB consumer"]
ms.assetid: dba0538f-2afe-4354-8cbb-f202ea8ade5a
---
# Consumer Wizard-Generated Classes

::: moniker range="msvc-160"

The ATL OLE DB Consumer wizard is not available in Visual Studio 2019 and later. You can still add the functionality manually.

::: moniker-end

::: moniker range="<=msvc-150"

When you use the **ATL OLE DB Consumer Wizard** to generate a consumer, you have the choice of using OLE DB Templates or OLE DB attributes. In both cases, the wizard generates a command class and a user record class. The command class contains code to open the data source and rowset you specified in the wizard. The user record class contains a column map for the database table you selected. However, the generated code differs in each case:

- If you select a templated consumer, the wizard generates a command class and a user record class. The command class will have the name that you enter in the **Class** box in the wizard (for example, `CProducts`), and the user record class will have a name of the form "*ClassName*Accessor" (for example, `CProductsAccessor`). Both classes are placed in the consumer's header file.

- If you select an attributed consumer, the user record class will have a name of the form "_*ClassName*Accessor" and will be injected. That is, you'll be able to view only the command class in the text editor; you can only view the user record class as injected code. For information about viewing injected code, see [Debugging Injected Code](/visualstudio/debugger/how-to-debug-injected-code).

The following examples use a command class created on the `Products` table of the `Northwind` database to demonstrate the wizard-generated consumer code for the command class and user record class.

## Templated User Record Classes

If you create an OLE DB consumer using the OLE DB Templates (rather than the OLE DB attributes), the wizard generates code as described in this section.

### Column Data Members

The first part of the user record class includes the data member declarations and the status and length data members for each data-bound column. For information about these data members, see [Field Status Data Members in Wizard-Generated Accessors](../../data/oledb/field-status-data-members-in-wizard-generated-accessors.md).

> [!NOTE]
> If you modify the user record class or write your own consumer, the data variables must come before the status and length variables.

> [!NOTE]
> The ATL OLE DB Consumer Wizard uses the `DB_NUMERIC` type to bind numeric data types. It formerly used `DBTYPE_VARNUMERIC` (the format of which is described by the `DB_VARNUMERIC` type; see Oledb.h). If you do not use the wizard to create consumers, it is recommended that you use `DB_NUMERIC`.

```cpp
// Products.H : Declaration of the CProducts class

class CProductsAccessor
{
public:
   // Column data members:
   LONG m_ProductID;
   TCHAR m_ProductName[41];
   LONG m_SupplierID;
   LONG m_CategoryID;
   TCHAR m_QuantityPerUnit[21];
   CURRENCY m_UnitPrice;
   SHORT m_UnitsInStock;
   SHORT m_UnitsOnOrder;
   SHORT m_ReorderLevel;
   VARIANT_BOOL m_Discontinued;

   // Column status data members:
   DBSTATUS m_dwProductIDStatus;
   DBSTATUS m_dwProductNameStatus;
   DBSTATUS m_dwSupplierIDStatus;
   DBSTATUS m_dwCategoryIDStatus;
   DBSTATUS m_dwQuantityPerUnitStatus;
   DBSTATUS m_dwUnitPriceStatus;
   DBSTATUS m_dwUnitsInStockStatus;
   DBSTATUS m_dwUnitsOnOrderStatus;
   DBSTATUS m_dwReorderLevelStatus;
   DBSTATUS m_dwDiscontinuedStatus;

   // Column length data members:
   DBLENGTH m_dwProductIDLength;
   DBLENGTH m_dwProductNameLength;
   DBLENGTH m_dwSupplierIDLength;
   DBLENGTH m_dwCategoryIDLength;
   DBLENGTH m_dwQuantityPerUnitLength;
   DBLENGTH m_dwUnitPriceLength;
   DBLENGTH m_dwUnitsInStockLength;
   DBLENGTH m_dwUnitsOnOrderLength;
   DBLENGTH m_dwReorderLevelLength;
   DBLENGTH m_dwDiscontinuedLength;
```

### Rowset Properties

Next, the wizard sets rowset properties. If you selected **Change**, **Insert**, or **Delete** in the ATL OLE DB Consumer Wizard, the appropriate properties are set here (DBPROP_IRowsetChange is always set, then one or more of DBPROPVAL_UP_CHANGE, DBPROPVAL_UP_INSERT, and/or DBPROPVAL_UP_DELETE, respectively).

```cpp
void GetRowsetProperties(CDBPropSet* pPropSet)
{
   pPropSet->AddProperty(DBPROP_CANFETCHBACKWARDS, true, DBPROPOPTIONS_OPTIONAL);
   pPropSet->AddProperty(DBPROP_CANSCROLLBACKWARDS, true, DBPROPOPTIONS_OPTIONAL);
   pPropSet->AddProperty(DBPROP_IRowsetChange, true, DBPROPOPTIONS_OPTIONAL);
   pPropSet->AddProperty(DBPROP_UPDATABILITY, DBPROPVAL_UP_CHANGE | DBPROPVAL_UP_INSERT | DBPROPVAL_UP_DELETE);
}
```

### Command or Table Class

If you specify a command class, the wizard declares the command class; for templated code, the command looks like this:

```cpp
DEFINE_COMMAND_EX(CProductsAccessor, L" \
SELECT \
   ProductID, \
   ProductName, \
   SupplierID, \
   CategoryID, \
   QuantityPerUnit, \
   UnitPrice, \
   UnitsInStock, \
   UnitsOnOrder, \
   ReorderLevel, \
   Discontinued \
   FROM dbo.Products")
```

### Column Map

The wizard then generates the column bindings or column map. To fix several issues with some providers, the following code might bind columns in a different order than that reported by the provider.

```cpp
   BEGIN_COLUMN_MAP(CProductsAccessor)
      COLUMN_ENTRY_LENGTH_STATUS(1, m_ProductID, m_dwProductIDLength, m_dwProductIDStatus)
      COLUMN_ENTRY_LENGTH_STATUS(2, m_ProductName, m_dwProductNameLength, m_dwProductNameStatus)
      COLUMN_ENTRY_LENGTH_STATUS(3, m_SupplierID, m_dwSupplierIDLength, m_dwSupplierIDStatus)
      COLUMN_ENTRY_LENGTH_STATUS(4, m_CategoryID, m_dwCategoryIDLength, m_dwCategoryIDStatus)
      COLUMN_ENTRY_LENGTH_STATUS(5, m_QuantityPerUnit, m_dwQuantityPerUnitLength, m_dwQuantityPerUnitStatus)
      _COLUMN_ENTRY_CODE(6, DBTYPE_CY, _SIZE_TYPE(m_UnitPrice), 0, 0, offsetbuf(m_UnitPrice), offsetbuf(m_dwUnitPriceLength), offsetbuf(m_dwUnitPriceStatus))
      COLUMN_ENTRY_LENGTH_STATUS(7, m_UnitsInStock, m_dwUnitsInStockLength, m_dwUnitsInStockStatus)
      COLUMN_ENTRY_LENGTH_STATUS(8, m_UnitsOnOrder, m_dwUnitsOnOrderLength, m_dwUnitsOnOrderStatus)
      COLUMN_ENTRY_LENGTH_STATUS(9, m_ReorderLevel, m_dwReorderLevelLength, m_dwReorderLevelStatus)
      _COLUMN_ENTRY_CODE(10, DBTYPE_BOOL, _SIZE_TYPE(m_Discontinued), 0, 0, offsetbuf(m_Discontinued), offsetbuf(m_dwDiscontinuedLength), offsetbuf(m_dwDiscontinuedStatus))
   END_COLUMN_MAP()
};
```

### Class Declaration

Finally, the wizard generates a command class declaration such as the following:

```cpp
class CProducts : public CCommand<CAccessor<CProductsAccessor>>
```

## Attribute-Injected User Record Classes

If you create an OLE DB consumer using the database attributes ([db_command](../../windows/attributes/db-command.md) or [db_table](../../windows/attributes/db-table.md)), the attributes inject a user record class with a name of the form "_*ClassName*Accessor." For example, if you named your command class `COrders`, the user record class will be `_COrdersAccessor`. Although the user record class appears in **Class View**, double-clicking it navigates to the command or table class in the header file instead. In these cases, you can only view the actual declaration of the user record class by viewing the attribute-injected code.

There can be potential complications if you add or override methods in attributed consumers. For example, you could add a `_COrdersAccessor` constructor to the `COrders` declaration, but note that in reality this adds a constructor to the injected `COrdersAccessor` class. Such a constructor can initialize the columns/parameters, but you can't create a copy constructor this way, because it can't directly instantiate the `COrdersAccessor` object. If you need a constructor (or other method) directly on the `COrders` class, it's recommended that you define a new class deriving from `COrders` and add the necessary methods there.

In the following example, the wizard generates a declaration for the class `COrders`, but the user record class `COrdersAccessor` doesn't appear, because the attributes inject it.

```cpp
#define _ATL_ATTRIBUTES
#include <atlbase.h>
#include <atldbcli.h>
[
   db_source(L"your connection string"),
   db_command(L"Select ShipName from Orders;")
]
class COrders
{
public:

   // COrders()            // incorrect constructor name
   _COrdersAccessor()      // correct constructor name
   {
   }
      [db_column(1) ] TCHAR m_ShipName[41];
   };
```

The injected command class declaration looks like this:

```cpp
class CProducts : public CCommand<CAccessor<_CProductsAccessor>>
```

Most of the injected code is the same as or similar to the templated version. The main differences are in the injected methods, which are described in [Consumer Wizard-Generated Methods](../../data/oledb/consumer-wizard-generated-methods.md).

For information about viewing injected code, see [Debugging Injected Code](/visualstudio/debugger/how-to-debug-injected-code).

::: moniker-end

## See also

[Creating an OLE DB Consumer Using a Wizard](../../data/oledb/creating-an-ole-db-consumer-using-a-wizard.md)
