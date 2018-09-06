---
title: "Toolbar Editor (C++) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "conceptual"
f1_keywords: ["vc.editors.toolbar.F1"]
dev_langs: ["C++"]
helpviewer_keywords: ["[""resource editors [C++], Toolbar editor"", ""editors, toolbars"", ""toolbars [C++], editing"", ""Toolbar editor""]"]
ms.assetid: aa9f0adf-60f6-4f79-ab05-bc330f15ec43
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# Toolbar Editor (C++)

The **Toolbar** editor enables you to create C++ toolbar resources and convert bitmaps into toolbar resources. The **Toolbar** editor uses a graphical display to show a toolbar and buttons that closely resemble how they will look in a finished application.

With the **Toolbar** editor, you can:

- [Create new toolbars and buttons](../windows/creating-new-toolbars.md)

- [Convert bitmaps to toolbar resources](../windows/converting-bitmaps-to-toolbars.md)

- [Create, move, and edit toolbar buttons](../windows/creating-moving-and-editing-toolbar-buttons.md)

- [Create Tool Tips](../windows/creating-a-tool-tip-for-a-toolbar-button.md)

The **Toolbar** editor window shows two views of a button image, the same as the Image editor window. A split bar separates the two panes. You can drag the split bar from side to side to change the relative sizes of the panes. The active pane displays a selection border. Above the two views of the image is the subject toolbar.

![Toolbar Editor](../mfc/media/vctoolbareditor.gif "vcToolbarEditor")  
Toolbar Editor

The **Toolbar** editor is similar to the **Image** editor in functionality. The menu items, graphic tools, and bitmap grid are the same as those in the **Image** editor. There is a menu command on the **Image** menu to allow you to switch between the **Toolbar** editor and the **Image** editor. For more information on using the **Graphics** toolbar, **Colors** palette, or **Image** menu, see [Image Editor](../windows/image-editor-for-icons.md).

For information on adding resources to managed projects, please see [Resources in Desktop Apps](/dotnet/framework/resources/index) in the *.NET Framework Developer's Guide*. For information on manually adding resource files to managed projects, accessing resources, displaying static resources, and assigning resource strings to properties, see [Creating Resource Files for Desktop Apps](/dotnet/framework/resources/creating-resource-files-for-desktop-apps). For information on globalization and localization of resources in managed apps, see [Globalizing and Localizing .NET Framework Applications](/dotnet/standard/globalization-localization/index).

## Requirements

MFC or ATL

## See Also

[Resource Editors](../windows/resource-editors.md)  
[Menus and Other Resources](https://msdn.microsoft.com/library/windows/desktop/ms632583.aspx)