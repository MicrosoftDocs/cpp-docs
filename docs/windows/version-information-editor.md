---
title: "Version Information Editor (C++)"
ms.date: "11/04/2016"
f1_keywords: ["vc.editors.version.F1"]
helpviewer_keywords: ["Version Information editor [C++], about Version Information editor", "editors, Version Information", "resource editors [C++], Version Information editor"]
ms.assetid: 772e6f19-f765-4cec-9521-0ad3eeb99f9b
---
# Version Information Editor (C++)

Version information consists of company and product identification, a product release number, and copyright and trademark notification. With the **Version Information** editor, you create and maintain this data, which is stored in the version information resource. The version information resource is not required by an application, but it is a useful place to collect information that identifies the application. Version information is also used by setup APIs.

A version information resource has an upper block and one or more lower blocks: a single fixed-information block at the top and one or more version information blocks at the bottom (for other languages and/or character sets). The top block has both editable numeric boxes and selectable drop-down lists. The lower blocks have only editable text boxes.

> [!NOTE]
> The Windows standard is to have only one version resource, named VS_VERSION_INFO.

The **Version Information** editor enables you to:

- [Edit a string in a version information resource](../windows/editing-a-string-in-a-version-information-resource.md)

- [Add version information for another language (new version info block)](../windows/adding-version-information-for-another-language.md)

- [Delete a version information block](../windows/deleting-a-version-information-block.md)

- [Access version information from within your program](../windows/accessing-version-information-from-within-your-program.md)

   > [!NOTE]
   > While using the **Version Information** editor, in many instances you can right-click to display a shortcut menu of resource-specific commands. For example, if you click while pointing to a block header entry, the shortcut menu shows the **New Version Block Info** and **Delete Version Block Info** commands.

For information on adding resources to managed projects, please see [Resources in Desktop Apps](/dotnet/framework/resources/index) in the *.NET Framework Developer's Guide*. For information on manually adding resource files to managed projects, accessing resources, displaying static resources, and assigning resource strings to properties, see [Creating Resource Files for Desktop Apps](/dotnet/framework/resources/creating-resource-files-for-desktop-apps). For information on globalization and localization of resources in managed apps, see [Globalizing and Localizing .NET Framework Applications](/dotnet/standard/globalization-localization/index).

## Requirements

Win32

## See Also

[Resource Editors](../windows/resource-editors.md)<br/>
[Menus and Other Resources](https://msdn.microsoft.com/library/windows/desktop/ms632583.aspx)