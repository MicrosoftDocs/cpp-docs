---
title: "Viewing Resource Symbols (C++)"
ms.date: "11/04/2016"
f1_keywords: ["vc.editors.symbol.managing", "vc.editors.resourcesymbols"]
helpviewer_keywords: ["resources [C++], viewing", "resource symbols", "symbols [C++], viewing", "New Symbol dialog box [C++]", "Resource Symbols dialog box [C++]", "Change Symbol dialog box [C++]"]
ms.assetid: 4bcc06d9-7d36-486a-8a37-71da0541643c
---
# Viewing Resource Symbols

The **Resource Symbols** C++ dialog box allows you to add new resource symbols, change the symbols that are displayed, or skip to the location in the source code where a symbol is in use.

The dialog box contains the following properties:

|Property|Description|
|---|---|
|**Name**|Displays the name of the symbol. For more information, see [Symbol Name Restrictions](../windows/symbol-name-restrictions.md).|
|**Value**|Displays the numeric value of the symbol. For more information, see [Symbol Value Restrictions](../windows/symbol-value-restrictions.md).|
|**In Use**|When selected, specifies that the symbol is being used by one or more resources. The resource or resources are listed in the Used by box.|
|**Show read-only symbols**|When selected, displays read-only resources. By default, the **Resource Symbol** dialog box displays only the modifiable resources in your resource script file, but with this option selected, modifiable resources appear in bold text and read-only resources appear in plain text.|
|**Used by**|Displays the resource or resources using the symbol selected in the symbols list. To move to the editor for a given resource, select the resource in the **Used By** box and click **View Use**. For more information, see [Opening the Resource Editor for a Given Symbol](../windows/opening-the-resource-editor-for-a-given-symbol.md).|
|**New**|Opens the **New Symbol** dialog box, which enables you to define the name and, if necessary, a value for a new symbolic resource identifier. For more information, see [Creating New Symbols](../windows/creating-new-symbols.md).|
|**Change**|Opens the **Change Symbol** dialog box, which allows you to change the name or value of a symbol. If the symbol is for a control or resource in use, the symbol can be changed only from the corresponding resource editor. For more information, see [Changing Unassigned Symbols](../windows/changing-unassigned-symbols.md).|
|**View Use**|Opens the resource that contains the symbol in the corresponding resource editor. For more information, see [Opening the Resource Editor for a Given Symbol](../windows/opening-the-resource-editor-for-a-given-symbol.md).|

## To view resource symbols

1. In [Resource View](../windows/resource-view-window.md), right-click your .rc file.

   > [!NOTE]
   > If your project doesn't already contain an .rc file, please see [Creating a New Resource Script File](../windows/how-to-create-a-resource-script-file.md).

1. Select **Resource Symbols** from the shortcut menu to view a resource symbol table in the **Resource Symbols** dialog box.

   > [!NOTE]
   > To see predefined symbols, check the **Show read-only symbols** check box.

## Requirements

Win32

## See also

- [Symbols: Resource Identifiers](../windows/symbols-resource-identifiers.md)
