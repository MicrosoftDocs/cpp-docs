---
description: "Learn more about: Creating a Simple Consumer"
title: "Creating a Simple Consumer"
ms.date: "05/09/2019"
helpviewer_keywords: ["OLE DB consumers, creating"]
ms.assetid: ae32d657-72ea-4db8-9839-75cb5cff68ae
---
# Creating a Simple Consumer

::: moniker range="msvc-160"

The ATL OLE DB Consumer wizard is not available in Visual Studio 2019 and later. You can still add the functionality manually. For more information, see [Creating a Consumer Without Using a Wizard](creating-a-consumer-without-using-a-wizard.md).

::: moniker-end

::: moniker range="<=msvc-150"

Use the **ATL Project Wizard** and **ATL OLE DB Consumer Wizard** to generate an OLE DB Templates consumer.

## To create a console application for an OLE DB consumer

1. On the **File** menu, click **New**, and then click **Project**.

   The **New Project** dialog box appears.

1. In the **Project Types** pane, click the **Installed** > **Visual C++** > **Windows Desktop** folder, and then click the **Windows Desktop Wizard** icon in the **Templates** pane. In the **Name** box, enter the name of your project, for example, *MyCons*.

1. Click **OK**.

   The **Windows Desktop Project** wizard appears.

1. On the **Application Settings** page, select **Console application**, and then select **Add common header files for ATL**.

1. Click **OK** to close the wizard and generate the project.

Next, use the **ATL OLE DB Consumer Wizard** to add an OLE DB consumer object.

## To create a consumer with the ATL OLE DB Consumer Wizard

1. In **Solution Explorer**, right-click the `MyCons` project.

1. On the shortcut menu, click **Add**, and then click **New Item**.

   The **Add New Item** dialog box appears.

1. In the **Categories** pane, click **Installed** > **Visual C++** > **ATL**, click the **ATL OLEDB Consumer** icon in the **Templates** pane, and then click **Add**.

   The **ATL OLEDB Consumer Wizard** appears.

1. Click the **Data Source** button.

   The **Data Link Properties** dialog box appears.

1. In the **Data Link Properties** dialog box, do the following:

   1. On the **Provider** tab, specify an OLE DB provider.

   1. On the **Connection** tab, specify the required information, such as server name, logon ID, and password for your data source and database on the server.

      > [!NOTE]
      > There is a security issue with the **Allow saving password** feature of the **Data Link Properties** dialog box. In **Enter information to log on to the server**, there are two radio buttons: **Use Windows NT integrated security** and **Use a specific user name and password**.

      > [!NOTE]
      > If you select **Use a specific user name and password**, you have the option of saving the password (using the **Allow saving password** check box); however, this option is not secure. It is recommended that you select **Use Windows NT integrated security**; this option uses Windows NT to verify your identity.

      > [!NOTE]
      > If you cannot use Windows NT integrated security, you should use a middle-tier application to prompt the user for the password or to store the password in a location with security mechanisms to help protect it (instead of in source code).

   1. After selecting your provider and other settings, click **Test Connection** to verify the selections made on the previous dialog box pages. If the **Results** box reports `Test connection succeeded`, click **OK** to create the data link.

   The **Select Database Object** dialog box appears.

1. Use the tree control to select a table, view, or stored procedure. For this example, select the `Products` table from the `Northwind` database.

1. Click **OK**. This returns you to the **ATL OLE DB Consumer Wizard**.

1. The wizard completes the names for `Class` and **.h file** based on the name of the table, view, or stored procedure that you selected. You can edit these names if you want.

1. Clear the **Attributed** check box so that the wizard creates the consumer code using [OLE DB Template classes](../../data/oledb/ole-db-consumer-templates-reference.md) instead of the default [OLE DB consumer attributes](../../windows/attributes/ole-db-consumer-attributes.md).

1. Under **Type**, select **Command**.

   The wizard creates a [CCommand](../../data/oledb/ccommand-class.md)-based consumer if you select **Command** or a [CTable](../../data/oledb/ctable-class.md)-based consumer if you select **Table**. The table or command class is named after the selected object, but you can edit the name.

1. Under **Support**, leave the **Change**, **Insert**, and **Delete** boxes cleared.

   Select the **Change**, **Insert**, and **Delete** check boxes to support the changing, inserting, and deleting of records in the rowset. For more information about writing data to the data store, see [Updating Rowsets](../../data/oledb/updating-rowsets.md).

1. Click **Finish** to create the consumer.

The wizard generates a command class and a user record class, as shown in [Consumer Wizard-Generated Classes](../../data/oledb/consumer-wizard-generated-classes.md). The command class will have the name that you entered in the `Class` box in the wizard (in this case, `CProducts`), and the user record class will have a name of the form "*ClassName*Accessor" (in this case, `CProductsAccessor`).

> [!NOTE]
> The wizard puts the following line into `Products.h`:

```cpp
#error Security Issue: The connection string may contain a password
```

> [!NOTE]
> This line prevents the consumer application from compiling and reminds you to check your connection string for hard-coded passwords. After checking your connection string, you can remove this line of code.

::: moniker-end

## See also

[Creating an OLE DB Consumer Using a Wizard](../../data/oledb/creating-an-ole-db-consumer-using-a-wizard.md)
