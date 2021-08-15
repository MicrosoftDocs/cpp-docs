---
description: "Learn more about: Creating the Provider"
title: "Creating the Provider"
ms.date: "05/09/2019"
helpviewer_keywords: ["OLE DB providers, creating"]
ms.assetid: 2506ba8f-010d-4231-aac1-387432f7b6b9
---
# Creating the Provider

::: moniker range="msvc-160"

The ATL OLE DB Provider wizard is not available in Visual Studio 2019 and later.

::: moniker-end

::: moniker range="<=msvc-150"

## To create an OLE DB provider with the ATL OLE DB Provider Wizard

1. Right-click the project.

1. On the shortcut menu, click **Add**, and then click **Add Class**.

1. In the **Add Class** dialog box, under **Installed** > **Visual C++** > **ATL**, select the **ATL OLEDB Provider** icon, and then click **Open**.

1. In the **ATL OLE DB Provider Wizard**, enter a short name for your provider in the **Short Name** box. The following topics use the short name *Custom*, but you can use another name. The other name boxes populate according to the name you enter.

1. Edit the other name boxes, if needed. In addition to the object and file names, you can edit the following:

   - **Coclass**: The name that COM uses to create the provider.

   - **ProgID**: The programmatic identifier, which is a text string that can be used instead of a GUID.

   - **Version**: Used with the ProgID and Coclass to generate a version-dependent programmatic ID.

1. Click **Finish**.

::: moniker-end

## See also

[Creating an OLE DB Provider](../../data/oledb/creating-an-ole-db-provider.md)
