---
title: "Implementing a Simple Consumer | Microsoft Docs"
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
  - "clients, creating"
  - "OLE DB consumers, implementing"
ms.assetid: 13828167-23a4-4e94-8b6c-878262fda464
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
# Implementing a Simple Consumer
The following topics show how to edit the files created by the MFC Application Wizard and ATL OLE DB Consumer Wizard to create a simple consumer. This example has the following parts:  
  
-   "Retrieving Data with the Consumer" shows how to implement code in the consumer that reads all the data, row by row, from a database table.  
  
-   "Adding Bookmark Support to the Consumer" shows how to add bookmark support to the consumer.  
  
-   "Adding XML Support to the Consumer" shows how to modify the consumer code to output the retrieved rowset data as XML data.  
  
> [!NOTE]
>  You can use the consumer application described in this section to test the MyProv and Provider sample providers.  
  
> [!NOTE]
>  To build a consumer application to test MyProv (the same provider described in [Enhancing the Simple Read-Only Provider](../../data/oledb/enhancing-the-simple-read-only-provider.md)), you must include bookmark support as described in "Adding Bookmark Support to the Consumer."  
  
> [!NOTE]
>  To build a consumer application to test Provider, leave out the bookmark support described in "Adding Bookmark Support to the Consumer" and skip to "Adding XML Support to the Consumer."  
  
## Retrieving Data with the Consumer  
  
#### To modify the console application to use the OLE DB consumer  
  
1.  In MyCons.cpp, change the main code by inserting the bold text as follows:  
  
    ```  
    // MyCons.cpp : Defines the entry point for the console application.  
    //  
    #include "stdafx.h"  
    #include "Products.h"  
    ...  
    int main(int argc, char* argv[])  
    {  
       HRESULT hr = CoInitialize(NULL);   // Instantiate rowset   CProducts rs;   hr = rs.OpenAll();   ATLASSERT( SUCCEEDED( hr ) );   hr = rs.MoveFirst();   // Iterate through the rowset   while( SUCCEEDED(hr) && hr != DB_S_ENDOFROWSET )   {      // Print out the column information for each row      printf("Product ID: %d, Name: %s, Unit Price: %d, Quantity per Unit: %d, Units in Stock %d, Reorder Level %d\n",             rs.m_ProductID, rs.m_ProductName, rs.m_UnitPrice, rs.m_QuantityPerUnit, rs.m_UnitsInStock, rs.m_ReorderLevel );      hr = rs.MoveNext();   }   rs.Close();   rs.ReleaseCommand();   CoUninitialize();  
  
       return 0;  
    }  
    ```  
  
## Adding Bookmark Support to the Consumer  
 A bookmark is a column that uniquely identifies rows in the table. Typically it is the key column, but not always; it is provider-specific. This section shows you how to add bookmark support. To do so, you need to do the following in the user record class:  
  
-   Instantiate the bookmarks. These are objects of type [CBookmark](../../data/oledb/cbookmark-class.md).  
  
-   Request a bookmark column from the provider by setting the **DBPROP_IRowsetLocate** property.  
  
-   Add a bookmark entry to the column map by using the [BOOKMARK_ENTRY](../../data/oledb/bookmark-entry.md) macro.  
  
 The previous steps give you bookmark support and a bookmark object with which to work. This code example demonstrates a bookmark as follows:  
  
-   Open a file for writing.  
  
-   Output rowset data to the file row by row.  
  
-   Move the rowset cursor to the bookmark by calling [MoveToBookmark](../../data/oledb/crowset-movetobookmark.md).  
  
-   Output the bookmarked row, appending it to the end of the file.  
  
> [!NOTE]
>  If you use this consumer application to test the Provider sample provider application, leave out the bookmark support described in this section.  
  
#### To instantiate the bookmark  
  
1.  The accessor needs to contain an object of type [CBookmark](../../data/oledb/cbookmark-class.md). The `nSize` parameter specifies the size of the bookmark buffer in bytes (typically 4 for 32-bit platforms and 8 for 64-bit platforms). Add the following declaration to the column data members in the user record class:  
  
    ```  
    //////////////////////////////////////////////////////////////////////  
    // Products.h  
    class CProductsAccessor  
    {  
    public:  
       CBookmark<4> m_bookmark;   // Add bookmark declaration  
       LONG m_ProductID;  
       ...  
    ```  
  
#### To request a bookmark column from the provider  
  
1.  Add the following code in the `GetRowsetProperties` method in the user record class:  
  
    ```  
    // Set the DBPROP_IRowsetLocate property.  
    void GetRowsetProperties(CDBPropSet* pPropSet)  
    {  
       pPropSet->AddProperty(DBPROP_CANFETCHBACKWARDS, true, DBPROPOPTIONS_OPTIONAL);  
       pPropSet->AddProperty(DBPROP_CANSCROLLBACKWARDS, true, DBPROPOPTIONS_OPTIONAL);  
       // Add DBPROP_IRowsetLocate property to support bookmarks   pPropSet->AddProperty(DBPROP_IRowsetLocate, true);  
    }  
    ```  
  
#### To add a bookmark entry to the column map  
  
1.  Add the following entry to the column map in the user record class:  
  
    ```  
    // Set a bookmark entry in the column map.  
    BEGIN_COLUMN_MAP(CProductsAccessor)  
       BOOKMARK_ENTRY(m_bookmark)   // Add bookmark entry  
       COLUMN_ENTRY_LENGTH_STATUS(1, m_ProductID, m_dwProductIDLength, m_dwProductIDStatus)  
       COLUMN_ENTRY_LENGTH_STATUS(2, m_ProductName, m_dwProductNameLength, m_dwProductNameStatus)  
    ...  
    END_COLUMN_MAP()  
    ```  
  
#### To use a bookmark in your main code  
  
1.  In the MyCons.cpp file from the console application you previously created, change the main code to read as follows. To use bookmarks, the main code needs to instantiate its own bookmark object (`myBookmark`); this is a different bookmark from the one in the accessor (`m_bookmark`).  
  
    ```  
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
       while( SUCCEEDED(hr) && hr != DB_S_ENDOFROWSET )  
       {  
          nCounter++;  
          if( nCounter == 5 )  
             myBookmark = rs.bookmark;  
          // Output the column information for each row:  
          outfile << rs.m_ProductID << rs.m_ProductName << lPrice << rs.m_QuantityPerUnit << rs.m_UnitsInStock << rs.m_ReorderLevel << endl;  
          hr = rs.MoveNext();  
       }  
  
       // Move cursor to bookmark  
       hr = rs.MoveToBookmark(myBookmark);  
  
       // Iterate through the rowset and output column data to output.txt row by row  
       // In the file, mark the beginning of this set of data:  
       outfile << "row dump starting from bookmarked row" << endl;  
       while( SUCCEEDED(hr) && hr != DB_S_ENDOFROWSET )  
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
  
## Adding XML Support to the Consumer  
 As discussed in [Accessing XML Data](../../data/oledb/accessing-xml-data.md), there are two ways to retrieve XML data from a data source: using [CStreamRowset](../../data/oledb/cstreamrowset-class.md) or using [CXMLAccessor](../../data/oledb/cxmlaccessor-class.md). This example uses `CStreamRowset`, which is more efficient, but requires you to have SQL Server 2000 running on the computer on which you execute this sample application.  
  
#### To modify the command class to inherit from CStreamRowset  
  
1.  In the consumer application you previously created, change your `CCommand` declaration to specify `CStreamRowset` as the rowset class as follows:  
  
    ```  
    class CProducts : public CCommand<CAccessor<CProductsAccessor>, CStreamRowset >  
    ```  
  
#### To modify the main code to retrieve and output the XML data  
  
1.  In the MyCons.cpp file from the console application you previously created, change the main code to read as follows:  
  
    ```  
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
  
       // Add variable declarations for the Read method to handle sequential stream data  
       CHAR buffer[1001];  // Pointer to buffer into which data stream is read  
       ULONG cbRead;       // Actual number of bytes read from the data stream  
  
       hr = rs.OpenAll();  
  
       // Open file output.txt for writing in overwrite mode  
       ofstream outfile( "C:\\output.txt", ios::out );  
  
       if (!outfile)      // Test for invalid file  
          return -1;  
  
       // The following loop reads 1000 bytes of the data stream at a time   
       // until it reaches the end of the data stream  
       for (;;)  
       {  
          // Read sequential stream data into buffer  
          HRESULT hr = rs.m_spStream->Read(buffer, 1000, &cbRead);  
          if (FAILED (hr))  
             break;  
          // Output buffer to file  
          buffer[cbRead] = 0;  
          outfile << buffer;  
          // Test for end of data stream  
          if (cbRead < 1000)  
             break;  
       }  
  
       rs.CloseAll();  
       CoUninitialize();  
  
       return 0;  
    }  
    ```  
  
## See Also  
 [Creating an OLE DB Consumer Using a Wizard](../../data/oledb/creating-an-ole-db-consumer-using-a-wizard.md)