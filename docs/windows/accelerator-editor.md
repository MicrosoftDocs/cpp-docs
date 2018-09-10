---
title: "Accelerator Editor (C++) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "conceptual"
f1_keywords: ["vc.editors.accelerator.F1"]
dev_langs: ["C++"]
helpviewer_keywords: ["accelerator tables [C++], editing", "tables [C++], accelerator key", "accelerator keys [C++]", "resource editors [C++], Accelerator editor", "keyboard shortcuts [C++], Accelerator editor"]
ms.assetid: 013c30b6-5d61-4f1c-acef-8bd15bed7060
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# Accelerator Editor (C++)

An accelerator table is a C++ Windows resource that contains a list of accelerator keys (also known as shortcut keys) and the command identifiers that are associated with them. A program can have more than one accelerator table.

Normally, accelerators are used as keyboard shortcuts for program commands that are also available on a menu or toolbar. However, you can use the accelerator table to define key combinations for commands that don't have a user-interface object associated with them.

You can use [Class View](/visualstudio/ide/viewing-the-structure-of-code) to hook accelerator key commands to code.

With the **Accelerator** editor, you can:

- [Set Accelerator Properties](../windows/setting-accelerator-properties.md)

- [Associate an Accelerator Key with a Menu Item](../windows/associating-an-accelerator-key-with-a-menu-item.md)

- [Edit Accelerator Tables](../windows/editing-accelerator-tables.md)

- [Use Predefined Accelerator Keys](../windows/predefined-accelerator-keys.md)

   > [!TIP]
   > While using the **Accelerator** editor, you can right-click to display a shortcut menu of frequently used commands. The commands available depend on what the pointer is pointing to.

   > [!NOTE]
   > Windows does not allow you to create empty accelerator tables. If you create an accelerator table with no entries, it is deleted automatically when you save the table.

For information on adding resources to managed projects, please see [Resources in Desktop Apps](/dotnet/framework/resources/index) in the *.NET Framework Developer's Guide*. For information on manually adding resource files to managed projects, accessing resources, displaying static resources, and assigning resource strings to properties, see [Creating Resource Files for Desktop Apps](/dotnet/framework/resources/creating-resource-files-for-desktop-apps). For information on globalization and localization of resources in managed apps, see [Globalizing and Localizing .NET Framework Applications](/dotnet/standard/globalization-localization/index).

## Requirements

Win32

## See Also

[Resource Editors](../windows/resource-editors.md)