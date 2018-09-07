---
title: "Predefined Symbol IDs | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "conceptual"
dev_langs: ["C++"]
helpviewer_keywords: ["symbols, predefined IDs", "predefined symbol IDs"]
ms.assetid: 91a5d610-1a04-47e8-b8a4-63ad650a90df
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# Predefined Symbol IDs

When you begin a new project, depending on the project type, some symbol IDs are predefined for your use. These symbol IDs support the various libraries and project types such as MFC. They represent common tasks that are usually included in any application, or actions of hardware items, such as a mouse or printer.

These symbol IDs become important when working with resources. They are available when you edit Accelerator tables; some of them are already associated with virtual keys. They are also available to you through the [Properties window](/visualstudio/ide/reference/properties-window). You can assign any of the predefined symbol IDs to new resources, or you can assign accelerator keys to them, and the functionality associated with the symbol ID automatically associates with that key combination.

These libraries have predefined symbols that will appear as part of the project:

- [MFC Predefined Symbols](../windows/mfc-predefined-symbols.md)

- [ATL Predefined Symbols](../windows/atl-predefined-symbols.md)

- [Win32 Predefined Symbols](../windows/win32-predefined-symbols.md)

   > [!NOTE]
   > Predefined symbols are always read-only.

## Requirements

Win32, MFC, or ATL

## See Also

[Symbols: Resource Identifiers](../windows/symbols-resource-identifiers.md)