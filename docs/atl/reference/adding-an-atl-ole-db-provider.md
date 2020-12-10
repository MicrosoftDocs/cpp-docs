---
description: "Learn more about: Adding an ATL OLE DB Provider"
title: "Adding an ATL OLE DB Provider"
ms.date: "05/09/2019"
helpviewer_keywords: ["OLE DB, adding ATL OLE DB provider to projects", "ATL projects, adding ATL OLE DB providers", "ATL OLE DB providers"]
ms.assetid: 26fba1e3-880f-4bc6-90e5-2096a48a3a6c
---
# Adding an ATL OLE DB Provider

::: moniker range="msvc-160"

The ATL OLE DB Provider wizard is not available in Visual Studio 2019 and later.

::: moniker-end

::: moniker range="<=msvc-150"

Use this wizard to add an ATL OLE DB provider to a project. An ATL OLE DB provider consists of a data source, session, command, and rowset classes. The project must have been created as an ATL COM application.

## To add an ATL OLE DB provider to your project

1. In **Class View**, right-click the project. On the shortcut menu, click **Add** and then click **Add Class**.

1. In the **Visual C++** folder, double-click the **ATL OLE DB Provider** icon or select it and click **Open**.

   The ATL OLE DB Provider Wizard opens.

1. Define settings as described in [ATL OLE DB Provider Wizard](../../atl/reference/atl-ole-db-provider-wizard.md).

1. Click **Finish** to close the wizard, which will insert the newly created OLE DB provider code in your project.

::: moniker-end

## See also

[Adding Functionality with Code Wizards](../../ide/adding-functionality-with-code-wizards-cpp.md)
