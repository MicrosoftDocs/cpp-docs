---
description: "Learn more about: Implementing a Simple Consumer"
title: "Implementing a Simple Consumer"
ms.date: "08/19/2019"
helpviewer_keywords: ["OLE DB consumers, implementing"]
ms.assetid: 13828167-23a4-4e94-8b6c-878262fda464
---
# Implementing a Simple Consumer

::: moniker range="msvc-160"

The ATL OLE DB Consumer wizard is not available in Visual Studio 2019 and later. You can still add the functionality manually. For more information, see [Creating a Consumer Without Using a Wizard](creating-a-consumer-without-using-a-wizard.md).

::: moniker-end

::: moniker range="<=msvc-150"

The following topics show how to edit the files created by the **MFC Application Wizard** and **ATL OLE DB Consumer Wizard** to create a simple consumer. This example has the following parts:

- [Retrieving Data with the Consumer](#retrieve) shows how to implement code in the consumer that reads all the data, row by row, from a database table.

- [Adding Bookmark Support to the Consumer](#bookmark) shows how to add bookmark support to the consumer.

> [!NOTE]
> You can use the consumer application described in this section to test the `MyProv` and `Provider` sample providers.

> [!NOTE]
> To build a consumer application to test `MyProv` (the same provider described in [Enhancing the Simple Read-Only Provider](../../data/oledb/enhancing-the-simple-read-only-provider.md)), you must include bookmark support as described in [Adding Bookmark Support to the Consumer](#bookmark).

## <a name="retrieve" ></a> Retrieving Data with the Consumer

### To modify the console application to use the OLE DB consumer

1. In `MyCons.cpp`, change the main code by inserting the bold text as follows:

    ```cpp
    // MyCons.cpp : Defines the entry point for the console application.
    //
    #include "pch.h" // "stdafx.h" in Visual Studio 2017 and earlier
    #include "Products.h"
    ...
    int main(int argc, char* argv[])
    {
       HRESULT hr = CoInitialize(NULL);   // Instantiate rowset
       CProducts rs;
       hr = rs.OpenAll();
       ATLASSERT(SUCCEEDED(hr ) );
       hr = rs.MoveFirst();   // Iterate through the rowset
       while(SUCCEEDED(hr) && hr != DB_S_ENDOFROWSET )   {      // Print out the column information for each row
         printf("Product ID: %d, Name: %s, Unit Price: %d, Quantity per Unit: %d, Units in Stock %d, Reorder Level %d\n",
           rs.m_ProductID, rs.m_ProductName, rs.m_UnitPrice, rs.m_QuantityPerUnit, rs.m_UnitsInStock, rs.m_ReorderLevel );
         hr = rs.MoveNext();   }
       rs.Close();
       rs.ReleaseCommand();
       CoUninitialize();

       return 0;
    }
    ```

## <a name="bookmark" ></a> Adding Bookmark Support to the Consumer

A bookmark is a column that uniquely identifies rows in the table. Typically it's the key column, but not always; it's provider-specific. This section shows you how to add bookmark support. To do so, you need to do the following steps in the user record class:

- Instantiate the bookmarks. These are objects of type [CBookmark](../../data/oledb/cbookmark-class.md).

- Request a bookmark column from the provider by setting the `DBPROP_IRowsetLocate` property.

- Add a bookmark entry to the column map by using the [BOOKMARK_ENTRY](./macros-and-global-functions-for-ole-db-consumer-templates.md#bookmark_entry) macro.

The previous steps give you bookmark support and a bookmark object with which to work. This code example demonstrates a bookmark as follows:

- Open a file for writing.

- Output rowset data to the file row by row.

- Move the rowset cursor to the bookmark by calling [MoveToBookmark](./crowset-class.md#movetobookmark).

- Output the bookmarked row, appending it to the end of the file.

> [!NOTE]
> If you use this consumer application to test the `Provider` sample provider application, leave out the bookmark support described in this section.

### To instantiate the bookmark

1. The accessor needs to hold an object of type [CBookmark](../../data/oledb/cbookmark-class.md). The *nSize* parameter specifies the size of the bookmark buffer in bytes (typically 4 for 32-bit platforms and 8 for 64-bit platforms). Add the following declaration to the column data members in the user record class:

    ```cpp
    //////////////////////////////////////////////////////////////////////
    // Products.h
    class CProductsAccessor
    {
    public:
       CBookmark<4> m_bookmark;   // Add bookmark declaration
       LONG m_ProductID;
       ...
    ```

### To request a bookmark column from the provider

1. Add the following code in the `GetRowsetProperties` method in the user record class:

    ```cpp
    // Set the DBPROP_IRowsetLocate property.
    void GetRowsetProperties(CDBPropSet* pPropSet)
    {
       pPropSet->AddProperty(DBPROP_CANFETCHBACKWARDS, true, DBPROPOPTIONS_OPTIONAL);
       pPropSet->AddProperty(DBPROP_CANSCROLLBACKWARDS, true, DBPROPOPTIONS_OPTIONAL);
       // Add DBPROP_IRowsetLocate property to support bookmarks   pPropSet->AddProperty(DBPROP_IRowsetLocate, true);
    }
    ```

### To add a bookmark entry to the column map

1. Add the following entry to the column map in the user record class:

    ```cpp
    // Set a bookmark entry in the column map.
    BEGIN_COLUMN_MAP(CProductsAccessor)
       BOOKMARK_ENTRY(m_bookmark)   // Add bookmark entry
       COLUMN_ENTRY_LENGTH_STATUS(1, m_ProductID, m_dwProductIDLength, m_dwProductIDStatus)
       COLUMN_ENTRY_LENGTH_STATUS(2, m_ProductName, m_dwProductNameLength, m_dwProductNameStatus)
    ...
    END_COLUMN_MAP()
    ```

### To use a bookmark in your main code

1. In the `MyCons.cpp` file from the console application you previously created, change the main code to read as follows. To use bookmarks, the main code needs to instantiate its own bookmark object (`myBookmark`); this is a different bookmark from the one in the accessor (`m_bookmark`).

    ```cpp
    ///////////////////////////////////////////////////////////////////////
    // MyCons.cpp : Defines the entry point for the console application.
    //

    #include "stdafx.h"
    #include "Products.h"
    #include <iostream>
    #include <fstream>
    using namespace std;

    int _tmain(int argc, _TCHAR* argv[])
    {
       HRESULT hr = CoInitialize(NULL);

       // Instantiate rowset
       CProducts rs;

       hr = rs.OpenAll();
       hr = rs.MoveFirst();

       // Cast CURRENCY m_UnitPrice to a long value
       LONGLONG lPrice = rs.m_UnitPrice.int64;

       // Open file output.txt for writing in overwrite mode
       ofstream outfile( "C:\\output.txt", ios::out );

       if (!outfile)      // Test for invalid file
          return -1;

       // Instantiate a bookmark object myBookmark for the main code
       CBookmark<4> myBookmark;
       int nCounter = 0;

       // Iterate through the rowset and output column data to output.txt row by row
       // In the file, mark the beginning of this set of data:
       outfile << "initial row dump" << endl;
       while(SUCCEEDED(hr) && hr != DB_S_ENDOFROWSET )
       {
          nCounter++;
          if(nCounter == 5 )
             myBookmark = rs.m_bookmark;
          // Output the column information for each row:
          outfile << rs.m_ProductID << rs.m_ProductName << lPrice << rs.m_QuantityPerUnit << rs.m_UnitsInStock << rs.m_ReorderLevel << endl;
          hr = rs.MoveNext();
       }

       // Move cursor to bookmark
       hr = rs.MoveToBookmark(myBookmark);

       // Iterate through the rowset and output column data to output.txt row by row
       // In the file, mark the beginning of this set of data:
       outfile << "row dump starting from bookmarked row" << endl;
       while(SUCCEEDED(hr) && hr != DB_S_ENDOFROWSET )
       {
          // Output the column information for each row
          outfile << rs.m_ProductID << rs.m_ProductName << lPrice << rs.m_QuantityPerUnit << rs.m_UnitsInStock << rs.m_ReorderLevel << endl;
          hr = rs.MoveNext();
       }

       rs.CloseAll();
       CoUninitialize();

       return 0;
    }
    ```

For more information about bookmarks, see [Using Bookmarks](../../data/oledb/using-bookmarks.md). Examples of bookmarks are also shown in [Updating Rowsets](../../data/oledb/updating-rowsets.md).

::: moniker-end

## See also

[Creating an OLE DB Consumer Using a Wizard](../../data/oledb/creating-an-ole-db-consumer-using-a-wizard.md)
