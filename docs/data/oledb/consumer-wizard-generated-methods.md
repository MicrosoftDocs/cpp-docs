---
description: "Learn more about: Consumer Wizard-Generated Methods"
title: "Consumer Wizard-Generated Methods"
ms.date: "05/09/2019"
helpviewer_keywords: ["OLE DB consumers, wizard-generated classes and methods"]
ms.assetid: d80ee51c-8bb3-4dca-8760-5808e0fb47b4
---
# Consumer Wizard-Generated Methods

::: moniker range="msvc-160"

The ATL OLE DB Consumer wizard is not available in Visual Studio 2019 and later. You can still add the functionality manually.

::: moniker-end

::: moniker range="<=msvc-150"

The **ATL OLE DB Consumer Wizard** and the **MFC Application Wizard** generate certain functions of which you should be aware. Some methods are implemented differently in attributed projects, so there are a few caveats; each case is covered below. For information about viewing injected code, see [Debugging Injected Code](/visualstudio/debugger/how-to-debug-injected-code).

- `OpenAll` opens the data source, rowsets, and turns on bookmarks if they're available.

- `CloseAll` closes all open rowsets and releases all command executions.

- `OpenRowset` is called by `OpenAll` to open the consumer's rowset or rowsets.

- `GetRowsetProperties` retrieves a pointer to the rowset's property set with which properties can be set.

- `OpenDataSource` opens the data source using the initialization string you specified in the **Data Link Properties** dialog box.

- `CloseDataSource` closes the data source in an appropriate manner.

## OpenAll and CloseAll

```cpp
HRESULT OpenAll();

void CloseAll();
```

The following example shows how you can call `OpenAll` and `CloseAll` when you execute the same command repeatedly. Compare the code example in [CCommand::Close](./ccommand-class.md#close), which shows a variation that calls `Close` and `ReleaseCommand` instead of `CloseAll`.

```cpp
int main(int argc, char* argv[])
{
   HRESULT hr;

   hr = CoInitialize(NULL);

   CCustOrdersDetail rs;      // Your CCommand-derived class
   rs.m_OrderID = 10248;      // Open order 10248
   hr = rs.OpenAll();         // (Open also executes the command)
   hr = rs.MoveFirst();         // Move to the first row and print it
   printf( "Name: %s, Unit Price: %d, Quantity: %d, Discount %d, Extended Price %d\n", rs.m_ProductName, rs.m_UnitPrice.int64, rs.m_Quantity, rs.m_Discount, rs.m_ExtendedPrice.int64 );

   // Close the first command execution
   rs.Close();

   rs.m_OrderID = 10249;      // Open order 10249 (a new order)
   hr = rs.Open();            // (Open also executes the command)
   hr = rs.MoveFirst();         // Move to the first row and print it
   printf( "Name: %s, Unit Price: %d, Quantity: %d, Discount %d, Extended Price %d\n", rs.m_ProductName, rs.m_UnitPrice.int64, rs.m_Quantity, rs.m_Discount, rs.m_ExtendedPrice.int64 );

   // Close the second command execution;
   // Instead of rs.CloseAll() you could call
   // rs.Close() and rs.ReleaseCommand():
   rs.CloseAll();

   CoUninitialize();
   return 0;
}
```

### Remarks

If you define a `HasBookmark` method, the `OpenAll` code sets the `DBPROP_IRowsetLocate` property; make sure you only do this if your provider supports that property.

## OpenRowset

```cpp
// OLE DB Template version:
HRESULT OpenRowset(DBPROPSET* pPropSet = NULL)
// Attribute-injected version:
HRESULT OpenRowset(const CSession& session, LPCWSTR szCommand = NULL);
```

`OpenAll` calls this method to open the rowset or rowsets in the consumer. Typically, you don't need to call `OpenRowset` unless you want to work with multiple data sources/sessions/rowsets. `OpenRowset` is declared in the command or table class header file:

```cpp
// OLE DB Template version:
HRESULT OpenRowset(DBPROPSET *pPropSet = NULL)
{
   HRESULT hr = Open(m_session, NULL, pPropSet);
   #ifdef _DEBUG
   if(FAILED(hr))
      AtlTraceErrorRecords(hr);
   #endif
   return hr;
}
```

The attributes implement this method differently. This version takes a session object and a command string that defaults to the command string specified in db_command, although you can pass a different one. If you define a `HasBookmark` method, the `OpenRowset` code sets the `DBPROP_IRowsetLocate` property; make sure you only do this if your provider supports that property.

```cpp
// Attribute-injected version:
HRESULT OpenRowset(const CSession& session, LPCWSTR szCommand=NULL)
{

   DBPROPSET *pPropSet = NULL;
   CDBPropSet propset(DBPROPSET_ROWSET);
   __if_exists(HasBookmark)

   {
      propset.AddProperty(DBPROP_IRowsetLocate, true);
      pPropSet= &propset;
      }
...
}
```

## GetRowsetProperties

```cpp
void GetRowsetProperties(CDBPropSet* pPropSet);
```

This method retrieves a pointer to the rowset's property set; you can use this pointer to set properties such as `DBPROP_IRowsetChange`. `GetRowsetProperties` is used in the user record class as follows. You can modify this code to set additional rowset properties:

```cpp
void GetRowsetProperties(CDBPropSet* pPropSet)
{
   pPropSet->AddProperty(DBPROP_CANFETCHBACKWARDS, true, DBPROPOPTIONS_OPTIONAL);
   pPropSet->AddProperty(DBPROP_CANSCROLLBACKWARDS, true, DBPROPOPTIONS_OPTIONAL);
   pPropSet->AddProperty(DBPROP_IRowsetChange, true, DBPROPOPTIONS_OPTIONAL);
   pPropSet->AddProperty(DBPROP_UPDATABILITY, DBPROPVAL_UP_CHANGE | DBPROPVAL_UP_INSERT | DBPROPVAL_UP_DELETE);
}
```

### Remarks

You shouldn't define a global `GetRowsetProperties` method because it could conflict with the one defined by the wizard. This is a wizard-generated method that you get with templated and attributed projects; the attributes don't inject this code.

## OpenDataSource and CloseDataSource

```cpp
HRESULT OpenDataSource();

void CloseDataSource();
```

### Remarks

The wizard defines the methods `OpenDataSource` and `CloseDataSource`; `OpenDataSource` calls [CDataSource::OpenFromInitializationString](./cdatasource-class.md#openfrominitializationstring).

::: moniker-end

## See also

[Creating an OLE DB Consumer Using a Wizard](../../data/oledb/creating-an-ole-db-consumer-using-a-wizard.md)
