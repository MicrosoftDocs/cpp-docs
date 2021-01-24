---
description: "Learn more about: Data Source: Programmatically Configuring an ODBC Data Source"
title: "Data Source: Programmatically Configuring an ODBC Data Source"
ms.date: "11/04/2016"
f1_keywords: ["SQLConfigDataSource"]
helpviewer_keywords: ["ODBC data sources, configuring", "SQLConfigDataSource method example", "ODBC connections, configuring", "configuring ODBC data sources"]
ms.assetid: b8cabe9b-9e12-4d73-ae36-7cb12dee3213
---
# Data Source: Programmatically Configuring an ODBC Data Source

This topic explains how you can configure Open Database Connectivity (ODBC) data source names programmatically. This gives you flexibility to access data without forcing the user to explicitly use the ODBC Administrator or other programs to specify the names of data sources.

Typically, a user runs ODBC Administrator to create a data source if the associated database management system (DBMS) supports this operation.

When creating a Microsoft Access ODBC data source through ODBC Administrator, you are given two choices: you can select an existing .mdb file or you can create a new .mdb file. There is no programmatic way of creating the .mdb file from your MFC ODBC application. Therefore, if your application requires that you place data into a Microsoft Access data source (.mdb file), you most likely want to have an empty .mdb file that you can use or copy whenever you need it.

However, many DBMSs allow programmatic data source creation. Some data sources maintain a directory specification for databases. That is, a directory is the data source and each table within the data source is stored in a separate file (in the case of dBASE, each table is a .dbf file). Drivers for other ODBC databases, such as Microsoft Access and SQL Server, require that some specific criteria be satisfied before a data source can be established. For example, when using the SQL Server ODBC driver, you need to have established a SQL Server computer.

## <a name="_core_sqlconfigdatasource_example"></a> SQLConfigDataSource Example

The following example uses the `::SQLConfigDataSource` ODBC API function to create a new Excel data source called New Excel Data Source:

```
SQLConfigDataSource(NULL,ODBC_ADD_DSN, "Excel Files (*.xls)",
                   "DSN=New Excel Data Source\0"
                   "Description=New Excel Data Source\0"
                   "FileType=Excel\0"
                   "DataDirectory=C:\\EXCELDIR\0"
                   "MaxScanRows=20\0");
```

Note that the data source is actually a directory (C:\EXCELDIR); this directory must exist. The Excel driver uses directories as its data sources and files as the individual tables (one table per .xls file).

For more information about creating tables, see [Data Source: Programmatically Creating a Table in an ODBC Data Source](../../data/odbc/data-source-programmatically-creating-a-table-in-an-odbc-data-source.md).

The following information discusses the parameters that need to be passed to the `::SQLConfigDataSource` ODBC API function. To use `::SQLConfigDataSource`, you must include the Odbcinst.h header file and use the Odbcinst.lib import library. Also, Odbccp32.dll must be in the path at run time (or Odbcinst.dll for 16 bit).

You can create an ODBC data source name using ODBC Administrator or a similar utility. However, sometimes it is desirable to create a data source name directly from your application to obtain access without requiring the user to run a separate utility.

ODBC Administrator (typically installed in Control Panel) creates a new data source by putting entries in the Windows registry (or, for 16 bit, in the Odbc.ini file). The ODBC Driver Manager queries this file to obtain the required information about the data source. It is important to know what information needs to be placed in the registry because you need to supply it with the call to `::SQLConfigDataSource`.

Although this information could be written directly to the registry without using `::SQLConfigDataSource`, any application that does so is relying on the current technique that the Driver Manager uses to maintain its data. If a later revision to the ODBC Driver Manager implements record keeping about data sources in a different way, any application that uses this technique is broken. It is generally advisable to use an API function when one is provided. For example, your code is portable from 16 bit to 32 bit if you use the `::SQLConfigDataSource` function, because the function correctly writes to the Odbc.ini file or to the registry.

## <a name="_core_sqlconfigdatasource_parameters"></a> SQLConfigDataSource Parameters

The following explains the parameters of the `::SQLConfigDataSource` function. Much of the information is taken from the ODBC API *Programmer's Reference* supplied with Visual C++ version 1.5 and later.

### <a name="_core_function_prototype"></a> Function Prototype

```
BOOL SQLConfigDataSource(HWND hwndParent,UINT fRequest, LPCSTR lpszDriver, LPCSTR lpszAttributes);
```

### Remarks

#### <a name="_core_parameters_and_usage"></a> Parameters and Usage

*hwndParent*<br/>
The window specified as the owner of any dialog boxes that either the ODBC Driver Manager or the specific ODBC driver creates to obtain additional information from the user about the new data source. If the *lpszAttributes* parameter does not supply enough information, a dialog box appears. The *hwndParent* parameter might be NULL.

*lpszDriver*<br/>
The driver description. This is the name presented to users rather than the physical driver name (the DLL).

*lpszAttributes*<br/>
List of attributes in the form "keyname=value". These strings are separated by null terminators with two consecutive null terminators at the end of the list. These attributes are primarily default driver-specific entries, which go into the registry for the new data source. One important key that is not mentioned in the ODBC API reference for this function is "DSN" ("data source name"), which specifies the name of the new data source. The rest of the entries are specific to the driver for the new data source. Often it is not necessary to supply all of the entries because the driver can prompt the user with dialog boxes for the new values. (Set *hwndParent* to NULL to cause this.) You might want to explicitly supply default values so that the user is not prompted.

#### To determine the description of a driver for the lpszDriver parameter using ODBC Administrator

1. Run ODBC Administrator.

1. Click **Add**.

This gives you a list of installed drivers and their descriptions. Use this description as the *lpszDriver* parameter. Note that you use the entire description, such as "Excel Files (*.xls)", including the file name extension and parentheses if they exist in the description.

As an alternative, you can examine the registry (or, for 16 bit, the file Odbcinst.ini), which contains a list of all driver entries and descriptions under the registry key "ODBC Drivers" (or the section [ODBC Drivers] in Odbcinst.ini).

One way to find the keynames and values for the *lpszAttributes* parameter is to examine the Odbc.ini file for an already configured data source (perhaps one that has been configured by ODBC Administrator).

#### To find keynames and values for the lpszAttributes parameter

1. Run the Windows registry editor (or, for 16 bit, open the Odbc.ini file).

1. Find the ODBC data sources information using one of the following:

   - For 32 bit, find the key **HKEY_CURRENT_USER\Software\ODBC\ODBC.INI\ODBC Data Sources** in the left pane.

      The right pane lists entries of the form: "pub: REG_SZ:*\<data source name>*", where *\<data source name>* is a data source that has already been configured with the desired settings for the driver you intend to use. Select the data source you want, for example, SQL Server. The items following the string "pub:" are, in order, the keyname and value to use in your *lpszAttributes* parameter.

   - For 16 bit, find the section in the Odbc.ini file marked by [*\<data source name>*].

      The lines following this line are of the form "keyname=value". These are exactly the entries to use in your *lpszAttributes* parameter.

You might also want to examine the documentation for the specific driver you are going to use. You can find useful information in the online Help for the driver, which you can access by running ODBC Administrator. These Help files are usually placed in the WINDOWS\SYSTEM directory for Windows NT, Windows 3.1, or Windows 95.

#### To obtain online Help for your ODBC driver

1. Run ODBC Administrator.

1. Click **Add**.

1. Select the driver name.

1. Click **OK**.

When ODBC Administrator displays the information for creating a new data source for that particular driver, click **Help**. This opens the Help file for that particular driver, which generally contains important information concerning the use of the driver.

## See also

[Data Source (ODBC)](../../data/odbc/data-source-odbc.md)
