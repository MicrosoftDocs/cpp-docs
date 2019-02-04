---
title: "Version Information Editor (C++)"
ms.date: "11/04/2016"
f1_keywords: ["vc.editors.version.F1", "vc.editors.version"]
helpviewer_keywords: ["Version Information editor [C++], about Version Information editor", "editors, Version Information", "resource editors [C++], Version Information editor", "version information resources [C++]", "resources [C++], editing version information", "languages, version information", "New Version Info Block", "blocks, adding", "resources [C++], adding version information", "version information, adding for languages", "blocks, deleting", "version information, deleting blocks", "resources [C++], deleting version information", "VerQueryValue", "version information, accessing from within programs", "GetFileVersionInfo", "version information"]
ms.assetid: 772e6f19-f765-4cec-9521-0ad3eeb99f9b
---
# Version Information Editor (C++)

Version information consists of company and product identification, a product release number, and copyright and trademark notification. With the **Version Information** editor, you create and maintain this data, which is stored in the version information resource. The version information resource is not required by an application, but it's a useful place to collect information that identifies the application. Version information is also used by setup APIs.

A version information resource has an upper block and one or more lower blocks: a single fixed-information block at the top and one or more version information blocks at the bottom (for other languages and/or character sets). The top block has both editable numeric boxes and selectable drop-down lists. The lower blocks have only editable text boxes.

> [!NOTE]
> The Windows standard is to have only one version resource, named VS_VERSION_INFO.

For information on adding resources to managed projects, see [Resources in Desktop Apps](/dotnet/framework/resources/index) in the *.NET Framework Developer's Guide*. For information on manually adding resource files to managed projects, accessing resources, displaying static resources, and assigning resource strings to properties, see [Creating Resource Files for Desktop Apps](/dotnet/framework/resources/creating-resource-files-for-desktop-apps). For information on globalization and localization of resources in managed apps, see [Globalizing and Localizing .NET Framework Applications](/dotnet/standard/globalization-localization/index).

The **Version Information** editor enables you:

## To edit a string in a version information resource

Select the item once to choose it, then again to begin editing it. Make the changes directly in the **Version Information** table or in the [Properties window](/visualstudio/ide/reference/properties-window). The changes you make will be reflected in both places.

   > [!NOTE]
   > When editing the `FILEFLAGS` key in the **Version Information** editor, you'll notice you cannot set the **Debug**, **Private Build**, or **Special Build** properties (in the **Properties** window) for .rc files:

   - The **Version Information** editor sets the **Debug** property with a `#ifdef` in the resource script, based on the `_DEBUG` build flag.

   - If the `Private Build` key has a **Value** set in the **Version Information** table, the corresponding **Private Build** property (in the **Properties** window) for the `FILEFLAGS` key will be **True**. If the **Value** is empty, the property will be **False**. Likewise, the **Special Build** key (in the **Version Information** table) is tied to the **Special Build** property for the `FILEFLAGS` key.

You can sort the information sequence of the string block by clicking either the **Key** or the **Value** column headings. These headings automatically rearrange the information into the selected sequence.

## To add version information for another language (new version info block)

1. Open a version information resource by double-clicking it in [Resource View](../windows/resource-view-window.md).

   > [!NOTE]
   > If your project doesn't already contain an .rc file, please see [Creating a New Resource Script File](../windows/how-to-create-a-resource-script-file.md).

1. Right-click within the version information table and choose **New Version Info Block** from the shortcut menu.

   This command adds an additional information block to the current version information resource and opens its corresponding properties in the [Properties window](/visualstudio/ide/reference/properties-window).

1. In the **Properties** window, choose the appropriate language and character set for your new block.

## To delete a version information block

1. Open the version information resource by double-clicking its icon in [Resource View](../windows/resource-view-window.md).

   > [!NOTE]
   > If your project doesn't already contain an .rc file, please see [Creating a New Resource Script File](../windows/how-to-create-a-resource-script-file.md).

1. Right-click the block header you wish to delete then choose **Delete Version Info Block** from the shortcut menu.

   This command deletes the selected header and leaves the rest of the version information intact. You can't undo the action.

## To access version information from within your program

1. If you want to access the version information from within your program, use the [GetFileVersionInfo](/windows/desktop/api/winver/nf-winver-getfileversioninfoa) function and the [VerQueryValue](/windows/desktop/api/winver/nf-winver-verqueryvaluea) function.

   > [!NOTE]
   > While using the **Version Information** editor, in many instances you can right-click to display a shortcut menu of resource-specific commands. For example, if you select while pointing to a block header entry, the shortcut menu shows the **New Version Block Info** and **Delete Version Block Info** commands.

## Requirements

Win32

## See also

[Resource Editors](../windows/resource-editors.md)<br/>
[Menus and Other Resources](https://msdn.microsoft.com/library/windows/desktop/ms632583.aspx)<br/>
[Version Information (Windows)](https://msdn.microsoft.com/library/windows/desktop/ms646981.aspx)
