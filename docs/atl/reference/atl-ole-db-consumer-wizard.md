---
description: "Learn more about: ATL OLE DB Consumer Wizard"
title: "ATL OLE DB Consumer Wizard"
ms.date: "07/02/2019"
helpviewer_keywords: ["ATL projects, adding ATL OLE DB consumers"]
ms.assetid: dcb68ed1-2224-422f-9f7b-108a74864204
---
# ATL OLE DB Consumer Wizard

::: moniker range="msvc-160"

This wizard is not available in Visual Studio 2019 and later.

::: moniker-end

::: moniker range="<=msvc-150"

This wizard sets up an OLE DB consumer class with the data bindings necessary to access the specified data source through the specified OLE DB provider.

> [!NOTE]
> This wizard requires you to click the **Data Source** button to select a data source before entering names in the `Class` and **.h file** fields.

## UIElement List

- **Data Source**

   The **Data Source** button lets you set up the specified data source using the specified OLE DB provider. When you click this button, the **Data Link Properties** dialog box appears. For more information on building connection strings and the **Data Link Properties** dialog box, see [Data Link API Overview](/previous-versions/windows/desktop/ms718102(v=vs.85)) in the Windows SDK documentation.

   The following additional information describes the tabs in the **Data Link Properties** dialog box.

  - **Provider** tab

      Select an appropriate provider to manage the connection to the data source. The type of provider is typically determined by the type of database to which you are connecting. Click the **Next** button or click the **Connection** tab.

  - **Connection** tab

      The contents of this tab depend on the provider you selected. Although there are many types of providers, this section covers connections for the two most common: SQL and ODBC data. The others are similar variations on the fields described here.

      For SQL data:

      1. **Select or enter a server name:** Click the drop-down list menu to display all registered data servers on the network, and select one.

      1. **Enter information to log on to the server:** Enter a user name and password to log on to the data server.

         > [!NOTE]
         > There is a security problem with the "Allow saving of password" feature of the Data Link Properties dialog box. In "Enter information to log on to the server," there are two radio buttons:
         >
         > - **Use Windows NT integrated security**
         > - **Use a specific user name and password**
         >
         > If you select **Use a specific user name and password**, you have the option of saving the password (using the check box for "Allow saving password"); however, this option is not secure. It is recommended that you select **Use Windows NT integrated security**; this option is secure because it encrypts the password.
         > There might be situations in which you want to select "Allow saving password." For example, if you are releasing a library with a private database solution, you should not access the database directly but instead use a middle-tier application to verify the user (through whatever authentication scheme you choose) and then limit the sort of data available to the user.

      1. **Select the database on the server:** Click the drop-down list menu to display all registered databases on the data server, and select one.

         \- or -

         **Attach a database file as a database name:** Specify a file to be used as the database; enter the explicit pathname.

      For ODBC data:

      1. **Specify the source of data:** You can use a data source name or a connection string.

         **Use data source name:** This drop-down list displays data sources registered in your machine. You can set up data sources ahead of time using the ODBC Data Source Administrator

         \- or -

         **Use connection string:** Either enter a connection string you have already obtained, or click the **Build** button; the **Select Data Source** dialog box appears. Select a file or machine data source and click **OK**.

         > [!NOTE]
         > You can obtain a connection string by viewing the properties of an existing connection in **Server Explorer**, or you can create a connection by double-clicking **Add Connection** in **Server Explorer**.

      1. **Enter information to log on to the server:** Enter a user name and password to log on to the data server.

      1. Enter the initial catalog to use.

      1. Click **Test Connection**; if the test succeeds, click **OK**. If not, check your logon information, try another database, or try another data server.

  - **Advanced** tab

      **Network settings:** Specify the **Impersonation level** (the level of impersonation that the server is allowed to use when impersonating the client; corresponds directly to RPC impersonation levels) and **Protection level** (the level of protection of data sent between client and server; corresponds directly to RPC protection levels).

      **Other:** In **Connect timeout**, specify the number of seconds of idle time allowed before a timeout occurs. In **Access permissions**, specify the access permissions on the data connection.

      For more information about advanced initialization properties, refer to the documentation provided with each specific OLE DB provider.

  - **All** tab

      This tab displays a summary of the initialization properties for the data source and connection you have specified. You can edit these values.

      Click **OK** to finish. The **Select Database Object** dialog box appears. From this dialog box, select the table, view, or stored procedure that the consumer will use.

- **Class**

   After you select a data source, this box is populated with a default class name based on the table or stored procedure that you selected (see **Select a data source** below). You can edit the class name.

- **.h file**

   After you select a data source, this box is populated with a default header class name based on the table or stored procedure that you selected (see **Select a data source** below). You can edit the header file's name or select an existing header file.

- **Attributed**

   This option specifies whether the wizard will create consumer classes using attributes or template declarations. When you select this option, the wizard uses attributes instead of template declarations (this is the default option). When you deselect this option, the wizard uses template declarations instead of attributes.

  - If you select a consumer **Type** of **Table**, the wizard uses the `db_source` and `db_table` attributes to create the table and table accessor class declarations, and uses `db_column` to create the column map. For example, it creates this map:

    ```cpp
    // Inject table class and table accessor class declarations
    [db_source("<initialization_string>"), db_table("dbo.Orders")]
    ...
    // Column map
    [ db_column(1, status=m_dwOrderIDStatus, length=m_dwOrderIDLength) ] LONG m_OrderID;
    [ db_column(2, status=m_dwCustomerIDStatus, length=m_dwCustomerIDLength) ] TCHAR m_CustomerID[6];
    ...
    ```

     instead of using the `CTable` template class to declare the table and table accessor class, and the BEGIN_COLUMN_MAP and END_COLUMN_MAP macros to create the column map, as in this example:

    ```cpp
    // Table accessor class
        class COrdersAccessor; // Table class
        class COrders : public CTable<CAccessor<COrdersAccessor>>;
    // ...
    // Column map
        BEGIN_COLUMN_MAP(COrderDetailsAccessor)
            COLUMN_ENTRY_LENGTH_STATUS(1, m_OrderID, m_dwOrderIDLength, m_dwOrderIDStatus)
            COLUMN_ENTRY_LENGTH_STATUS(2, m_CustomerID, m_dwCustomerIDLength, m_dwCustomerIDStatus)
            // ...
        END_COLUMN_MAP()
    ```

  - If you select a consumer **Type** of **Command**, the wizard uses the `db_source` and `db_command` attributes, and uses `db_column` to create the column map. For example, it creates this map:

    ```cpp
    [db_source("<initialization_string>"), db_command("SQL_command")]
    ...
    // Column map using db_column is the same as for consumer type of 'table'
    ```

     instead of using the command and command accessor class declarations in the command class' .h file, for example:

    ```cpp
    // Command accessor class:
        class CListOrdersAccessor;
    // Command class:
        class CListOrders : public CCommand<CAccessor<CListOrdersAccessor>>;
    // ...
    // Column map using BEGIN_COLUMN_MAP ... END_COLUMN_MAP is the same as
    // for consumer type of 'table'
    ```

     See [Basic mechanics of attributes](../../windows/attributes/cpp-attributes-com-net.md#basic-mechanics-of-attributes) for more information.

- **Type**

   Select one of these radio buttons to specify whether the consumer class will be derived from `CTable` or `CCommand` (default).

  - **Table**

      Select this option if you want to use `CTable` or `db_table` to create the table and table accessor class declarations.

  - **Command**

      Select this option if you want to use `CCommand` or `db_command` to create the command and command accessor class declarations. This is the default selection.

- **Support**

   Select the check boxes to specify the kinds of updates to be supported in the consumer (the default is none). Each of the following will set [DBPROP_IRowsetChange](/previous-versions/windows/desktop/ms715892(v=vs.85)) and the appropriate entries for [DBPROP_UPDATABILITY](/previous-versions/windows/desktop/ms722676(v=vs.85)) in the property set map.

  - **Change**

      Specifies that the consumer support updates of row data in the rowset.

  - **Insert**

      Specifies that the consumer support insertion of rows into the rowset.

  - **Delete**

      Specifies that the consumer support deletion of rows from the rowset.

::: moniker-end

## See also

[ATL OLE DB Consumer](../../atl/reference/adding-an-atl-ole-db-consumer.md)<br/>
[Adding Functionality with Code Wizards](../../ide/adding-functionality-with-code-wizards-cpp.md)<br/>
[Connection Strings and Data Links (OLE DB)](/previous-versions/windows/desktop/ms718376(v=vs.85))
