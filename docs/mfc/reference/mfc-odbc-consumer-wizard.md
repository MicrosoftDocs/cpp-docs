---
description: "Learn more about: MFC ODBC Consumer Wizard"
title: "MFC ODBC Consumer Wizard"
ms.date: "08/29/2019"
helpviewer_keywords: ["wizards [MFC]"]
ms.assetid: f64a890b-a252-4887-88a1-782a7cd4ff3d
---
# MFC ODBC Consumer Wizard

::: moniker range="msvc-160"

This wizard is not available in Visual Studio 2019 and later.

::: moniker-end

::: moniker range="<=msvc-150"

This wizard sets up an ODBC recordset class and the data bindings necessary to access the specified data source.

## UIElement List

- **Data Source**

  The **Data Source** button lets you set up the specified data source using the specified ODBC driver. For more information about data source files (DSN), see [File Data Sources](/sql/odbc/reference/file-data-sources) in the ODBC SDK.

  The **Select Data Source** dialog box has two tabs:

  - **File Data Source** tab:

     The **Look in** box specifies the directory in which to select files to be used as data sources. The default is \Program Files\Common Files\ODBC\Data Sources. The existing file data sources (.dsn files) appear in the main list box. You can either set up the data sources ahead of time using the **File DSN** tab on the [ODBC Data Source Administrator](/sql/odbc/admin/odbc-data-source-administrator), or create new ones using this dialog box.

     To create a new file data source from this dialog box, click `New` to specify a DSN name; the **Create New Data Source** dialog box appears. In the **Create New Data Source** dialog box, select an appropriate driver and click `Next`; click **Browse**, and select the name of the file to be used as a data source (you have to select "All Files" to view non-DSN files, such as .xls files); click `Next`, and then click **Finish**. (If you selected a non-DSN file, you will get a driver-specific dialog box, such as "ODBC Microsoft Excel Setup," which will convert the file to a DSN.)

     > [!NOTE]
     > You can also create a new file data source beforehand using the ODBC Data Source Administrator. From the **Start** menu, select **Settings**, **Control Panel**, **Administrative Tools**, **Data Sources (ODBC)**, and then **ODBC Data Source Administrator**.

     The **DSN Name** box allows you to specify a name for the file data source. You must ensure that the DSN name ends with the appropriate file extension, such as .xls for Excel files or .mdb for Access files.

     For more information on DSNs, see [File Data Sources](/sql/odbc/reference/file-data-sources) in the ODBC SDK.

  - **Machine Data Source** tab:

     This tab lists system and User DATA sources. User data sources are specific to a user on this machine. System data sources can be used by all users on this machine or on a systemwide service. See [Machine Data Sources](/sql/odbc/reference/machine-data-sources) in the ODBC SDK

     For more information on ODBC data sources, see [Data Sources](/sql/odbc/reference/data-sources) in the ODBC SDK.

  Click **OK** to finish. The **Select Database Object** dialog box appears. From this dialog box, select the table or view that the consumer will use. Note that you can select multiple views and tables by holding the control key while clicking on the items. Click **OK** to finish.

- **Class**

   The name of the consumer class, based by default on the name of the file or machine data source that you selected.

- **.h file**

   The name of the consumer class header file, based by default on the name of the file or machine data source that you selected.

- **.cpp file**

   The name of the consumer class implementation file, based by default on the name of the file or machine data source that you selected.

- **Type**

   Specifies whether the recordset is a dynaset (default) or a snapshot.

  - **Dynaset**: Specifies that the recordset is a dynaset. A dynaset is the result of a query that provides an indexed view into the queried database's data. A dynaset caches only an integral index to the original data and thus offers a performance gain over a snapshot. The index points directly to each record found as a result of a query and indicates if a record is removed. You also have access to updated information in the queried records. This is the default.

  - **Snapshot**: Specifies that the recordset is a snapshot. A snapshot is the result of a query and is a view into a database at one point in time. All records found as a result of the query are cached, so you do not see any changes to the original records.

- **Bind all columns**

   Specifies whether all columns in the selected table are bound. If you select this box (default), all columns are bound; if you do not select this box, no columns are bound, and you must bind them manually in the recordset class.

::: moniker-end

## See also

[MFC ODBC Consume](../../mfc/reference/adding-an-mfc-odbc-consumer.md)<br/>
[Adding Functionality with Code Wizards](../../ide/adding-functionality-with-code-wizards-cpp.md)
