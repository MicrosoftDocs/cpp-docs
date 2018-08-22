---
title: "Setting the Width of a Horizontal Scroll Bar | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "conceptual"
dev_langs: ["C++"]
helpviewer_keywords: ["list controls, scroll bar width", "CListBox::SetHorizontalExtent", "controls [C++], scroll bar", "scroll bars, displaying in controls", "horizontal scroll bar width", "CListBox class, scroll bar width", "scroll bars, width"]
ms.assetid: 51dad141-aa0b-46a3-a82c-46b80d603d94
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# Setting the Width of a Horizontal Scroll Bar

When you add a list box with a horizontal scroll bar to a dialog box using MFC classes, the scroll bar will not automatically appear in your application.

### To make the scroll bar appear

1. Set a maximum width for the widest element by calling [CListBox::SetHorizontalExtent](../mfc/reference/clistbox-class.md#sethorizontalextent) in your code.

   Without this value set, the scroll bar will not appear, even when the items in the list box are wider than the box.

For information on adding resources to managed projects, please see [Resources in Desktop Apps](/dotnet/framework/resources/index) in the *.NET Framework Developer's Guide*. For information on manually adding resource files to managed projects, accessing resources, displaying static resources, and assigning resource strings to properties, see [Creating Resource Files for Desktop Apps](/dotnet/framework/resources/creating-resource-files-for-desktop-apps). For information on globalization and localization of resources in managed apps, see [Globalizing and Localizing .NET Framework Applications](/dotnet/standard/globalization-localization/index).

## Requirements

MFC

## See Also

[Controls in Dialog Boxes](../windows/controls-in-dialog-boxes.md)  
[Controls](../mfc/controls-mfc.md)