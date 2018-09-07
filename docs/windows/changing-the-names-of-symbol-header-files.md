---
title: "Changing the Names of Symbol Header Files | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "conceptual"
f1_keywords: ["vc.editors.symbol.changing.header"]
dev_langs: ["C++"]
helpviewer_keywords: ["resource files, multiple", "Resource Includes dialog box", "symbol header files, changing names", "symbol header files", "header files, changing names", "names [C++], symbol header files", "symbols, symbol header files", "Resource.h"]
ms.assetid: b948284a-7899-402e-ab12-9f2c8480ca9d
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# Changing the Names of Symbol Header Files

Normally all symbol definitions are saved in `Resource.h`. However, you may need to change this include filename so that you can, for example, work with more than one resource file in the same directory.

### To change the name of the resource symbol header file

1. In [Resource View](../windows/resource-view-window.md), right-click your .rc file and choose [Resource Includes](../windows/resource-includes-dialog-box.md) from the shortcut menu.

   > [!NOTE]
   > If your project doesn't already contain an .rc file, please see [Creating a New Resource Script File](../windows/how-to-create-a-resource-script-file.md).

2. In the **Symbol header file** box, type the new name for the include file.

For information on adding resources to managed projects, please see [Resources in Desktop Apps](/dotnet/framework/resources/index) in the *.NET Framework Developer's Guide*.

## Requirements

Win32

## See Also

[Viewing Resource Symbols](../windows/viewing-resource-symbols.md)  
[Predefined Symbol IDs](../windows/predefined-symbol-ids.md)