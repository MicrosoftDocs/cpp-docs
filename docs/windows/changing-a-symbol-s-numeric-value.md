---
title: "Changing a Symbol&#39;s Numeric Value | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "conceptual"
f1_keywords: ["vc.editors.symbol.changing.value"]
dev_langs: ["C++"]
helpviewer_keywords: ["[""numeric values"", ""symbols [C++], numeric values"", ""numeric values, changing symbols""]"]
ms.assetid: 468e903b-9c07-4251-ae09-3b6cb754cc2b
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# Changing a Symbol&#39;s Numeric Value

For symbols associated with a single resource, you can use the [Properties Window](/visualstudio/ide/reference/properties-window) to change the symbol value. You can use the [Resource Symbols dialog box](../windows/resource-symbols-dialog-box.md) to change the value of symbols not currently assigned to a resource. For more information, see [Changing Unassigned Symbols](../windows/changing-unassigned-symbols.md).

### To change a symbol value assigned to a single resource or object

1. In [Resource View](../windows/resource-view-window.md), select the resource.

   > [!NOTE]
   > If your project doesn't already contain an .rc file, please see [Creating a New Resource Script File](../windows/how-to-create-a-resource-script-file.md).

2. In the **Properties** window, type the symbol name followed by an equal sign and an integer in the **ID** box, for example:

    ```
    IDC_EDITNAME=5100
    ```

The new value is stored in the symbol header file the next time you save the project. Only the symbol name remains visible in the ID box; the equal sign and value are not displayed after they are validated.

For information on adding resources to managed projects, please see [Resources in Desktop Apps](/dotnet/framework/resources/index) in the *.NET Framework Developer's Guide*. For information on manually adding resource files to managed projects, accessing resources, displaying static resources, and assigning resources strings to properties,.

## Requirements

Win32

## See Also

[Symbol Value Restrictions](../windows/symbol-value-restrictions.md)  
[Predefined Symbol IDs](../windows/predefined-symbol-ids.md)