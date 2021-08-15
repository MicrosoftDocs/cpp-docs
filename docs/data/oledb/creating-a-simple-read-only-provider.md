---
description: "Learn more about: Creating a Simple Read-Only Provider"
title: "Creating a Simple Read-Only Provider"
ms.date: "05/09/2019"
helpviewer_keywords: ["OLE DB providers, creating", "OLE DB provider templates, creating providers"]
ms.assetid: ade8ccdd-9ea4-4e46-a964-18460c2a2401
---
# Creating a Simple Read-Only Provider

::: moniker range="msvc-160"

The ATL OLE DB Provider wizard is not available in Visual Studio 2019 and later.

::: moniker-end

::: moniker range="<=msvc-150"

When you've created an OLE DB provider using the **ATL Project Wizard** and **ATL OLE DB Provider Wizard**, you can add other functionality that you want to support. Start designing your provider by examining what kind of data you'll be sending to the consumer and under what conditions. It's especially important to determine whether you need to support commands, transactions, and other optional objects. A good design up front will speed implementation and testing.

The example is presented in two parts:

- The first part shows how to [create a simple read-only provider](../../data/oledb/implementing-the-simple-read-only-provider.md) that reads a pair of strings.

- The second part shows how to [enhance the simple read-only provider](../../data/oledb/enhancing-the-simple-read-only-provider.md) by adding the `IRowsetLocate` interface.

::: moniker-end

## See also

[Creating an OLE DB Provider](../../data/oledb/creating-an-ole-db-provider.md)<br/>
