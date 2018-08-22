---
title: "Assigning Access Keys to Menu Commands | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "conceptual"
dev_langs: ["C++"]
helpviewer_keywords: ["access keys [C++], checking", "menus, shortcut keys", "keyboard shortcuts [C++], command assignments", "access keys [C++], assigning", "mnemonics, adding to menus", "keyboard shortcuts [C++], uniqueness checking", "mnemonics, uniqueness checking", "Check Mnemonics command"]
ms.assetid: fbcf1a00-af6a-4171-805a-0ac01d4e8b0d
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# Assigning Access Keys to Menu Commands

You can assign an access key (a mnemonic that allows the user to select the menu with the keyboard) to your menus and menu commands.

### To assign an access (shortcut) key to a menu command

1. Type an ampersand (`&`) in front of a letter in the menu name or command name to specify that letter as the corresponding access key. For example "&File" sets **Alt**+**F** as the shortcut key for the **File** menu in applications written for Microsoft Windows.

   The menu item will provide a visible cue that one of the letters has a shortcut key assigned to it. The letter following the ampersand will appear underlined (contingent on the operating system).

   > [!NOTE]
   > Make sure all the access keys on a menu are unique by right-clicking your menu and choosing **Check Mnemonics** from the shortcut menu.

For information on adding resources to managed projects, please see [Resources in Desktop Apps](/dotnet/framework/resources/index) in the *.NET Framework Developer's Guide*. For information on manually adding resource files to managed projects, accessing resources, displaying static resources, and assigning resource strings to properties, see [Creating Resource Files for Desktop Apps](/dotnet/framework/resources/creating-resource-files-for-desktop-apps). For information on globalization and localization of resources in managed apps, see [Globalizing and Localizing .NET Framework Applications](/dotnet/standard/globalization-localization/index).

## Requirements

Win32

## See Also

[Menu Editor](../windows/menu-editor.md)