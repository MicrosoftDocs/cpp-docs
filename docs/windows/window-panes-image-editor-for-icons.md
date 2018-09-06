---
title: "Window Panes (Image Editor for Icons) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "conceptual"
f1_keywords: ["vc.editors.bitmap", "vc.editors.icon"]
dev_langs: ["C++"]
helpviewer_keywords: ["[""graphics editor [C++]"", ""Image editor [C++], panes""]"]
ms.assetid: d66ea5b3-e2e2-4fc4-aa99-f50022cc690e
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# Window Panes (Image Editor for Icons)

The **Image Editor** window typically displays an image in two panes separated by a splitter bar. One view is actual size and the other is enlarged (the default enlargement factor is 6). The views in these two panes are updated automatically: changes you make in one pane are immediately shown in the other. The two panes make it easy for you to work on an enlarged view of your image, in which you can distinguish individual pixels and, at the same time, observe the effect of your work on the actual-size view of the image.

The left pane uses as much space as is needed (up to half of the **Image** window) to display the 1:1 magnification view (the default) of your image. The right pane displays the zoomed image (6:1 magnification by default). You can [change the magnification](../windows/changing-the-magnification-factor-image-editor-for-icons.md) in each pane using the **Magnify** tool on the [Image Editor toolbar](../windows/toolbar-image-editor-for-icons.md) or by using the accelerator keys.

You can enlarge the smaller pane of the **Image Editor** window and use the two panes to show different regions of a large image. Click in the pane to select it.

You can change the relative sizes of the panes by positioning the pointer on the split bar and moving the split bar to the right or left. The split bar can move all the way to either side if you want to work on only one pane.

If the **Image Editor** pane is enlarged by a factor of 4 or greater, you can [display a pixel grid](../windows/displaying-or-hiding-the-pixel-grid-image-editor-for-icons.md) that delimits the individual pixels in the image.

For information on adding resources to managed projects, please see [Resources in Desktop Apps](/dotnet/framework/resources/index) in the *.NET Framework Developer's Guide*. For information on manually adding resource files to managed projects, accessing resources, displaying static resources, and assigning resource strings to properties, see [Creating Resource Files for Desktop Apps](/dotnet/framework/resources/creating-resource-files-for-desktop-apps). For information on globalization and localization of resources in managed apps, see [Globalizing and Localizing .NET Framework Applications](/dotnet/standard/globalization-localization/index).

## Requirements

None

## See Also

[Accelerator Keys](../windows/accelerator-keys-image-editor-for-icons.md)  
[Image Editor for Icons](../windows/image-editor-for-icons.md)