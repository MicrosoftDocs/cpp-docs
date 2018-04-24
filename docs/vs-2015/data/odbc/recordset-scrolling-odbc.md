---
title: "Recordset: Scrolling (ODBC) | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "recordsets [C++], end of"
  - "recordsets [C++], beginning of"
  - "navigation [C++], recordsets"
  - "recordsets [C++], moving to records"
  - "ODBC recordsets, scrolling"
  - "recordsets [C++], navigating"
  - "scrolling [C++], recordsets"
  - "Move method (recordsets)"
ms.assetid: f38d2dcb-1e88-4e41-af25-98b00c276be4
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Recordset: Scrolling (ODBC)
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Recordset: Scrolling (ODBC)](https://docs.microsoft.com/cpp/data/odbc/recordset-scrolling-odbc).  
  
  
This topic applies to the MFC ODBC classes.  
  
 After you open a recordset, you need to access the records to display values, do calculations, generate reports, and so on. Scrolling lets you move from record to record within your recordset.  
  
 This topic explains:  
  
-   [How to scroll from one record to another in a recordset](#_core_scrolling_from_one_record_to_another).  
  
-   [Under what circumstances scrolling is and is not supported](#_core_when_scrolling_is_supported).  
  
##  <a name="_core_scrolling_from_one_record_to_another"></a> Scrolling from One Record to Another  
 Class `CRecordset` provides the **Move** member functions for scrolling within a recordset. These functions move the current record by rowsets. If you have implemented bulk row fetching, a **Move** operation repositions the recordset by the size of the rowset. If you have not implemented bulk row fetching, a call to a **Move** function repositions the recordset by one record each time. For more information about bulk row fetching, see [Recordset: Fetching Records in Bulk (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md).  
  
> [!NOTE]
>  When moving through a recordset, deleted records might not be skipped. For more information, see the [IsDeleted](http://msdn.microsoft.com/library/45fbb3c3-6f3e-4775-8dce-cecbdf71af1e) member function.  
  
 In addition to the **Move** functions, `CRecordset` provides member functions for checking whether you have scrolled past the end or ahead of the beginning of your recordset.  
  
 To determine whether scrolling is possible in your recordset, call the `CanScroll` member function.  
  
#### To scroll  
  
1.  Forward one record or one rowset: call the [MoveNext](http://msdn.microsoft.com/library/abb9512d-e08f-4621-8799-aa7b36530b70) member function.  
  
2.  Backward one record or one rowset: call the [MovePrev](http://msdn.microsoft.com/library/eb871a03-706a-4306-a73c-13f4cacb799c) member function.  
  
3.  To the first record in the recordset: call the [MoveFirst](http://msdn.microsoft.com/library/c10a2106-70d8-45db-8ea0-6aecbd5174aa) member function.  
  
4.  To the last record in the recordset or to the last rowset: call the [MoveLast](http://msdn.microsoft.com/library/8add6d3c-66a2-42b3-a0e3-f2ae499ba2f9) member function.  
  
5.  *N* records relative to the current position: call the [Move](http://msdn.microsoft.com/library/2823a210-69f6-4f0a-a0fa-c2d5a98f0860) member function.  
  
#### To test for the end or the beginning of the recordset  
  
1.  Have you scrolled past the last record? Call the [IsEOF](http://msdn.microsoft.com/library/5801f1ad-b71a-4b1a-8e42-40abed92a21c) member function.  
  
2.  Have you scrolled ahead of the first record (moving backward)? Call the [IsBOF](http://msdn.microsoft.com/library/db4dcc52-54fd-4d6f-99d1-183d3741fff4) member function.  
  
 The following code example uses `IsBOF` and `IsEOF` to detect the limits of a recordset when scrolling in either direction.  
  
```  
// Open a recordset; first record is current  
CCustSet rsCustSet( NULL );  
rsCustSet.Open( );  
  
if( rsCustSet.IsBOF( ) )  
    return;  
    // The recordset is empty  
  
// Scroll to the end of the recordset, past  
// the last record, so no record is current  
while ( !rsCustSet.IsEOF( ) )  
    rsCustSet.MoveNext( );  
  
// Move to the last record  
rsCustSet.MoveLast( );  
  
// Scroll to beginning of the recordset, before  
// the first record, so no record is current  
while( !rsCustSet.IsBOF( ) )  
    rsCustSet.MovePrev( );  
  
// First record is current again  
rsCustSet.MoveFirst( );  
```  
  
 `IsEOF` returns a nonzero value if the recordset is positioned past the last record. `IsBOF` returns a nonzero value if the recordset is positioned ahead of the first record (before all records). In either case, there is no current record to operate on. If you call `MovePrev` when `IsBOF` is already **TRUE** or call `MoveNext` when `IsEOF` is already **TRUE**, the framework throws a `CDBException`. You can also use `IsBOF` and `IsEOF` to check for an empty recordset.  
  
 For more information about recordset navigation, see [Recordset: Bookmarks and Absolute Positions (ODBC)](../../data/odbc/recordset-bookmarks-and-absolute-positions-odbc.md).  
  
##  <a name="_core_when_scrolling_is_supported"></a> When Scrolling Is Supported  
 As originally designed, SQL provided only forward scrolling, but ODBC extends scrolling capabilities. The available level of support for scrolling depends on the ODBC drivers your application works with, your driver's ODBC API conformance level, and whether the ODBC Cursor Library is loaded into memory. For more information, see [ODBC](../../data/odbc/odbc-basics.md) and [ODBC: The ODBC Cursor Library](../../data/odbc/odbc-the-odbc-cursor-library.md).  
  
> [!TIP]
>  You can control whether the cursor library is used. See the `bUseCursorLib` and `dwOptions` parameters to [CDatabase::Open](http://msdn.microsoft.com/library/b4881066-daef-4aff-9190-6fc51e58612d).  
  
> [!NOTE]
>  Unlike the MFC DAO classes, the MFC ODBC classes do not provide a set of **Find** functions for locating the next (or previous) record that meets specified criteria.  
  
## See Also  
 [Recordset (ODBC)](../../data/odbc/recordset-odbc.md)   
 [CRecordset::CanScroll](http://msdn.microsoft.com/library/656bf9f5-5db8-42ac-b7dd-425201193e13)   
 [CRecordset::CheckRowsetError](http://msdn.microsoft.com/library/ad1e0895-c903-4594-b24a-95144f310c03)   
 [Recordset: Filtering Records (ODBC)](../../data/odbc/recordset-filtering-records-odbc.md)

