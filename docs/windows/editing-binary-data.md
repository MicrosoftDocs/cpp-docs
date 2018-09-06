---
title: "Editing Binary Data (C++) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "conceptual"
f1_keywords: ["vc.editors.binary"]
dev_langs: ["C++"]
helpviewer_keywords: ["[""binary data, editing"", ""binary data""]"]
ms.assetid: 0fd429de-baf1-4871-b5e4-42bf868a3261
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# Editing Binary Data

### To edit a resource in the Binary editor

1. Select the byte you want to edit.

   The **Tab** key moves the focus between the hexadecimal and ASCII sections of the **Binary** editor. You can use the **Page Up** and **Page Down** keys to move through the resource one screen at a time.

2. Type the new value.

   The value changes immediately in both the hexadecimal and ASCII sections and focus shifts to the next value in line.

   > [!NOTE]
   > The **Binary** editor accepts changes automatically when you close the editor.

For information on adding resources to managed projects, please see [Resources in Desktop Apps](/dotnet/framework/resources/index) in the *.NET Framework Developer's Guide*. For information on manually adding resource files to managed projects, accessing resources, displaying static resources, and assigning resource strings to properties, see [Creating Resource Files for Desktop Apps](/dotnet/framework/resources/creating-resource-files-for-desktop-apps). For information on globalization and localization of resources in managed apps, see [Globalizing and Localizing .NET Framework Applications](/dotnet/standard/globalization-localization/index).

## Requirements

None

## See Also

[Binary Editor](binary-editor.md)