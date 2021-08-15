---
description: "Learn more about: Adding an ATL OLE DB Consumer"
title: "Adding an ATL OLE DB Consumer"
ms.date: "05/09/2019"
helpviewer_keywords: ["ATL OLE DB consumers"]
ms.assetid: f940a513-4e42-4148-b521-dd0d7dc89fa2
---
# Adding an ATL OLE DB Consumer

::: moniker range="msvc-160"

The ATL OLE DB Consumer wizard is not available in Visual Studio 2019 and later. You can still add the functionality manually. For more information, see [Creating a Consumer Without Using a Wizard](../../data/oledb/creating-a-consumer-without-using-a-wizard.md).

::: moniker-end

::: moniker range="<=msvc-150"

Use this wizard to add an ATL OLE DB consumer to a project. An ATL OLE DB consumer consists of an OLE DB accessor class and data bindings necessary to access a data source. The project must have been created as an ATL COM application, or as an MFC or Win32 application that contains ATL support (which the ATL OLE DB Consumer Wizard adds automatically).

> [!NOTE]
> You can add an OLE DB consumer to an MFC project. If you do, the ATL OLE DB Consumer Wizard adds the necessary COM support to your project. This assumes that when you created the MFC project, you selected the **ActiveX controls** check box (in the **Advanced Features** page of the MFC Project Application Wizard), which is checked by default. Selecting this option ensures that the application calls `CoInitialize` and `CoUninitialize`. If you did not select **ActiveX controls** when you created the MFC project, you need to call `CoInitialize` and `CoUninitialize` in your main code.

## To add an ATL OLE DB consumer to your project

1. In **Class View**, right-click the project. On the shortcut menu, click **Add** and then click **Add Class**.

1. In the Visual C++ folder, double-click the **ATL OLE DB Consumer** icon or select it and click **Open**.

   The ATL OLE DB Consumer Wizard opens.

1. Define settings as described in [ATL OLE DB Consumer Wizard](../../atl/reference/atl-ole-db-consumer-wizard.md).

1. Click **Finish** to close the wizard. The newly created OLE DB consumer code will be inserted in your project.

::: moniker-end

## See also

[Adding Functionality with Code Wizards](../../ide/adding-functionality-with-code-wizards-cpp.md)
