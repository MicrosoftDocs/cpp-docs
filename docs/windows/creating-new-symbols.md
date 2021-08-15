---
description: "Learn more about: How to: Create Symbols (C++)"
title: "How to: Create Symbols (C++)"
ms.date: "02/14/2019"
f1_keywords: ["vc.editors.symbol.creating", "vc.editors.symbol.managing", "vc.editors.resourcesymbols", "vc.editors.symbol.resource"]
helpviewer_keywords: ["New Symbol dialog box [C++]", "symbols [C++], creating", "resources [C++], viewing", "resource symbols", "symbols [C++], viewing", "New Symbol dialog box [C++]", "Resource Symbols dialog box [C++]", "Change Symbol dialog box [C++]", "resource symbols", "View Use button", "resource editors [C++], resource symbols"]
ms.assetid: 35168d31-3af6-4ecd-9362-3707d47b53f3
---
# How to: Create Symbols (C++)

When you're beginning a new project, you may find it convenient to map out the symbol names you need before creating the resources to which they'll be assigned.

> [!NOTE]
> If your project doesn't already contain an .rc file, see [How to: Create Resources](../windows/how-to-create-a-resource-script-file.md).

The **Resource Symbols** dialog box allows you to add new resource symbols, change the symbols that are displayed, or skip to the location in the source code where a symbol is in use.

The dialog box contains the following properties:

|Property|Description|
|--------------------------|------------------------------------------|
|**Name**|Displays the name of the symbol.<br/><br/>For more information, see [Symbol Name Restrictions](./changing-a-symbol-or-symbol-name-id.md).|
|**Value**|Displays the numeric value of the symbol.<br/><br/>For more information, see [Symbol Value Restrictions](./changing-a-symbol-or-symbol-name-id.md).|
|**In Use**|When selected, specifies that the symbol is being used by one or more resources.<br/><br/>The resource or resources are listed in the **Used by** box.|
|**Show read-only symbols**|When selected, displays read-only resources.<br/><br/>By default, the **Resource Symbol** dialog box displays only the modifiable resources in your resource script file, but with this option selected, modifiable resources appear in bold text and read-only resources appear in plain text.|
|**Used by**|Displays the resource or resources using the symbol selected in the symbols list.<br/><br/>To move to the editor for a given resource, select the resource in the **Used by** box and choose **View Use**.|
|**New**|Opens the **New Symbol** dialog box that enables you to define the name and, if necessary, a value for a new symbolic resource identifier.|
|**Change**|Opens the **Change Symbol** dialog box that allows you to change the name or value of a symbol.<br/><br/>If the symbol is for a control or resource in use, the symbol can be changed only from the corresponding resource editor. For more information, see [Manage Symbols](./changing-a-symbol-or-symbol-name-id.md).|
|**View Use**|Opens the resource that contains the symbol in the corresponding resource editor.|

## Create Symbols

### To create a new symbol

1. In the **Resource Symbols** dialog box, choose **New**.

1. In the **Name** box, type a symbol name.

1. Accept the assigned symbol value or type a new value in the **Value** box.

1. Select **OK** to add the new symbol to the symbol list.

> [!NOTE]
> If you type a symbol name that already exists, a message box appears stating that a symbol with that name is already defined. You can't define two or more symbols with the same name, but you can define different symbols with the same numeric value.

## To view resource symbols

In [Resource View](how-to-create-a-resource-script-file.md#create-resources), right-click your *.rc* file and select **Resource Symbols** to view a resource symbol table in the **Resource Symbols** dialog box.

> [!NOTE]
> To see predefined symbols, check the **Show read-only symbols** check box.

### To open the resource editor for a given symbol

When you're browsing symbols in the **Resource Symbols**, you may want more information on how a particular symbol is used. The **View Use** button provides a quick way to get this information.

1. In the **Resource Symbols** dialog box in the **Name** box, select a symbol.

1. In the **Used By** box, select the resource type that interests you.

1. Select the **View Use** button.

   The resource appears in the appropriate editor window.

## Requirements

Win32

## See also

[Resource Identifiers (Symbols)](../windows/symbols-resource-identifiers.md)<br/>
[How to: Manage Symbols](../windows/changing-a-symbol-or-symbol-name-id.md)<br/>
[Predefined Symbol IDs](../windows/predefined-symbol-ids.md)<br/>
