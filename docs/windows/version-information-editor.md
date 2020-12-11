---
description: "Learn more about: Version Information Editor (C++)"
title: "Version Information Editor (C++)"
ms.date: "02/14/2019"
f1_keywords: ["vc.editors.version.F1", "vc.editors.version"]
helpviewer_keywords: ["Version Information editor [C++], about Version Information editor", "editors, Version Information", "resource editors [C++], Version Information editor", "version information resources [C++]", "resources [C++], editing version information", "languages, version information", "New Version Info Block", "blocks, adding", "resources [C++], adding version information", "version information, adding for languages", "blocks, deleting", "version information, deleting blocks", "resources [C++], deleting version information", "VerQueryValue", "version information, accessing from within programs", "GetFileVersionInfo", "version information"]
ms.assetid: 772e6f19-f765-4cec-9521-0ad3eeb99f9b
---
# Version Information Editor (C++)

Version information consists of company and product identification, a product release number, and copyright and trademark notification. With the **Version Information Editor**, you create and maintain this data, which is stored in the version information resource. The version information resource is not required by an application, but it's a useful place to collect information that identifies the application. Version information is also used by setup APIs.

> [!NOTE]
> The Windows standard is to have only one version resource, named VS_VERSION_INFO.

A version information resource has an upper block and one or more lower blocks: a single fixed-information block at the top and one or more version information blocks at the bottom (for other languages and/or character sets). The top block has both editable numeric boxes and selectable drop-down lists. The lower blocks have only editable text boxes.

> [!NOTE]
> While using the **Version Information Editor**, in many instances you can right-click to display a shortcut menu of resource-specific commands. For example, if you select while pointing to a block header entry, the shortcut menu shows the **New Version Block Info** and **Delete Version Block Info** commands.

## How To

The **Version Information Editor** enables you:

### To edit a string in a version information resource

Select the item once to choose it, then again to begin editing it. Make changes directly in the **Version Information** table or in the [Properties window](/visualstudio/ide/reference/properties-window). The changes you make will be reflected in both places.

When editing the `FILEFLAGS` key in the **Version Information Editor**, notice you can't set the **Debug**, **Private Build**, or **Special Build** properties in the **Properties** window for .rc files:

- The **Version Information Editor** sets the **Debug** property with a `#ifdef` in the resource script, based on the `_DEBUG` build flag.

- If the `Private Build` key has a **Value** set in the **Version Information** table, the corresponding **Private Build** property in the **Properties** window for the `FILEFLAGS` key will be **True**. If **Value** is empty, the property will be **False**. Likewise, the **Special Build** key in the **Version Information** table is tied to the **Special Build** property for the `FILEFLAGS` key.

You can sort the information sequence of the string block by selecting either the **Key** or the **Value** column headings. These headings automatically rearrange the information into the selected sequence.

### To add version information for another language (new version info block)

1. Open a version information resource by double-clicking it in [Resource View](how-to-create-a-resource-script-file.md#create-resources).

1. Right-click within the version information table and choose **New Version Info Block**.

   This command adds an additional information block to the current version information resource and opens its corresponding properties in the [Properties window](/visualstudio/ide/reference/properties-window).

1. In the **Properties** window, choose the appropriate language and character set for your new block.

### To delete a version information block

1. Open the version information resource by double-clicking its icon in [Resource View](how-to-create-a-resource-script-file.md#create-resources).

1. Right-click the block header you wish to delete and choose **Delete Version Info Block**.

   This command deletes the selected header and leaves the rest of the version information intact. You can't undo the action.

### To access version information from within your program

If you want to access the version information from within your program, use the [GetFileVersionInfo](/windows/win32/api/winver/nf-winver-getfileversioninfow) function and the [VerQueryValue](/windows/win32/api/winver/nf-winver-verqueryvaluew) function.

## Requirements

Win32

## See also

[Resource Editors](../windows/resource-editors.md)<br/>
[Menus and Other Resources](/windows/win32/menurc/resources)<br/>
[Version Information (Windows)](/windows/win32/menurc/version-information)
