---
description: "Learn more about: Database Support, MFC Application Wizard"
title: "Database Support, MFC Application Wizard"
ms.date: "11/04/2016"
f1_keywords: ["vc.appwiz.mfc.exe.database"]
helpviewer_keywords: ["MFC Application Wizard, database support"]
ms.assetid: 9ddf4558-fd41-4ac7-8d9b-c93d9c68ab59
---
# Database Support, MFC Application Wizard

This page provides options that allow you to specify the level of database support (plus a data source, if necessary) for your project.

- **Database support**

   Sets the level of database support for your project.

   |Option|Description|
   |------------|-----------------|
   |**None**|Provides no database support. This is the default option.|
   |**Header files only**|Provides the basic level of database support for your application. If you select ODBC support under **Client type**, the MFC Application Wizard includes in your project the header file AFXDB.H. It adds link libraries, but it does not create any database-specific classes. You can create recordsets later and use them to examine and update records. If you select OLE DB support under **Client type**, the following header files are included: ATLBASE.H AFXOLEDB.H ATLPLUS.H|
   |**Database view without file support**|Includes database header files, link libraries, a record view and a recordset. (Available only for applications with the **Document/view architecture support** option selected in the [Application Type](../../mfc/reference/application-type-mfc-application-wizard.md) page.) This option includes document support but no serialization support. If you choose to include a database view, you must specify the source of the data.|
   |**Database view with file support**|Includes database header files, link libraries, a record view and a recordset. (Available only for applications with the **Document/view architecture support** option selected in the **Application Type** page.) This option supports document serialization, which you can use, for example, to update a user profile file. Database applications typically operate on a per-record basis rather than on a per-file basis and so do not need serialization. However, you may have a special use for serialization. If you choose to include a database view, you must specify the source of the data.|

   > [!NOTE]
   > Under **Database Support**, if you select either **Database view without file support** or **Database view with file support**, the view class derivation differs, depending on your **Client type** selection, as follows:

  - If you select **ODBC** under **Client type**, then the application's view class derives from [CRecordView](../../mfc/reference/crecordview-class.md). This class is associated with a [CRecordset](../../mfc/reference/crecordset-class.md)-derived class, which the MFC Application Wizard also creates for you. This option gives you a form-based application in which the record view is used to view and update records through its recordset.

  - If you select **OLE DB** under **Client type**, then the view class derives from [COleDBRecordView](../../mfc/reference/coledbrecordview-class.md), and it is associated with a [CTable](../../data/oledb/ctable-class.md) or [CCommand](../../data/oledb/ccommand-class.md)-derived class.

- **Client type**

   Indicates whether your project uses OLE DB or ODBC classes.

   |Option|Description|
   |------------|-----------------|
   |**OLE DB**|When this option is selected, clicking the **Data Source** button invokes the **Data Link Properties** wizard to help you create a connection to an OLE DB data source.|
   |**ODBC**|When this option is selected, clicking the **Data Source** button invokes the **Select Data Source** wizard to help you create a connection to an ODBC data source.|

- **Data Source**

   > [!NOTE]
   > The ATL OLE DB Consumer wizard and MFC ODBC Consumer wizard are not available in Visual Studio 2019 and later. You can still add the functionality manually. For more information, see [Creating a Consumer Without Using a Wizard](../../data/oledb/creating-a-consumer-without-using-a-wizard.md).

   Click the **Data Source** button to set up a data source using the specified driver or provider and database. If you selected OLE DB in the **Client type** option, this button displays the **Data Link Properties** dialog box. If you selected ODBC in the **Client type** option, this button provides the **Select Data Source** dialog box. This option is available only if you choose to include a database view in your application.

   |Option|Description|
   |------------|-----------------|
   |**Data Link Properties** (OLE DB)|Establishes the specified data source using the specified OLE DB provider. You must specify the OLE DB provider, the location of the data, the data source, logon ID, and (optionally) a password. For details on this dialog box, see **Data source** in [ATL OLE DB Consumer Wizard](../../atl/reference/atl-ole-db-consumer-wizard.md).|
   |**Select Data Source** (ODBC)|Establishes the specified data source using the specified ODBC driver. You must select a data source name to choose a table for the data source. The wizard binds all columns of the table to the member variables of a `CRecordset`-derived class. For details on this dialog box, see **Data source** in [MFC ODBC Consumer Wizard](../../mfc/reference/mfc-odbc-consumer-wizard.md).|

- **Generate attributed database class**

   Available for OLE DB client only. Specifies whether the database classes in the generated project use attributes.

- **Bind all columns**

   Available for ODBC client only. Specifies whether all columns in the selected table are bound. If you select this box, all columns are bound; if you do not select this box, no columns are bound, and you must bind them manually in the recordset class.

- **Type**

   Available for ODBC client only. Specifies whether the recordset is a dynaset or a snapshot, as described in the following table.

   |Option|Description|
   |------------|-----------------|
   |**Dynaset**|Specifies that the recordset is a dynaset. A dynaset is the result of a query that provides an indexed view into the queried database's data. A dynaset caches only an integral index to the original data and thus offers a performance gain over a snapshot. The index points directly to each record found as a result of a query and indicates if a record is removed. You also have access to updated information in the queried records.|
   |**Snapshot**|Specifies that the recordset is a snapshot. A snapshot is the result of a query and is a view into a database at one point in time. All records found as a result of the query are cached, so you do not see any changes to the original records.|

## See also

[MFC Application Wizard](../../mfc/reference/mfc-application-wizard.md)
