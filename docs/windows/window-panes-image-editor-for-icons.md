---
title: "Window Panes (Image Editor for Icons)"
ms.date: "11/04/2016"
f1_keywords: ["vc.editors.bitmap", "vc.editors.icon"]
helpviewer_keywords: ["graphics editor [C++]", "Image editor [C++], panes", "Image editor [C++], magnification", "grids, pixel", "pixel grid, Image editor", "Image editor [C++], pixel grid", "Image editor [C++], grid settings", "grid settings, Image editor"]
ms.assetid: d66ea5b3-e2e2-4fc4-aa99-f50022cc690e
---
# Window Panes (Image Editor for Icons)

The **Image Editor** window typically displays an image in two panes separated by a splitter bar. One view is actual size and the other is enlarged (the default enlargement factor is 6). The views in these two panes are updated automatically: changes you make in one pane are immediately shown in the other. The two panes make it easy for you to work on an enlarged view of your image, in which you can distinguish individual pixels and, at the same time, observe the effect of your work on the actual-size view of the image.

The left pane uses as much space as is needed (up to half of the **Image** window) to display the 1:1 magnification view (the default) of your image. The right pane displays the zoomed image (6:1 magnification by default). You can change the magnification in each pane using the **Magnify** tool on the [Image Editor toolbar](../windows/toolbar-image-editor-for-icons.md) or by using the accelerator keys.

You can enlarge the smaller pane of the **Image Editor** window and use the two panes to show different regions of a large image. Select inside the pane to choose it.

You can change the relative sizes of the panes by positioning the pointer on the split bar and moving the split bar to the right or left. The split bar can move all the way to either side if you want to work on only one pane.

If the **Image Editor** pane is enlarged by a factor of 4 or greater, you can display a pixel grid that delimits the individual pixels in the image.

For information on adding resources to managed projects, see [Resources in Desktop Apps](/dotnet/framework/resources/index) in the *.NET Framework Developer's Guide*. For information on manually adding resource files to managed projects, accessing resources, displaying static resources, and assigning resource strings to properties, see [Creating Resource Files for Desktop Apps](/dotnet/framework/resources/creating-resource-files-for-desktop-apps). For information on globalization and localization of resources in managed apps, see [Globalizing and Localizing .NET Framework Applications](/dotnet/standard/globalization-localization/index).

## To change the magnification factor

By default, the **Image** editor displays the view in the left pane at actual size and the view in the right pane at 6 times actual size. The magnification factor (seen in the status bar at the bottom of the workspace) is the ratio between the actual size of the image and the displayed size. The default factor is 6 and the range is from 1 to 10.

1. Select the **Image Editor** pane whose magnification factor you want to change.

1. On the [Image Editor toolbar](../windows/toolbar-image-editor-for-icons.md), select the arrow to the right of the [Magnify tool](../windows/toolbar-image-editor-for-icons.md) and select the magnification-factor from the submenu: **1X**, **2X**, **6X**, or **8X**.

   > [!NOTE]
   > To select a magnification factor other than those listed in the **Magnify** tool, use the accelerator keys.

## To display or hide the pixel grid

For all **Image Editor** panes with a magnification factor of 4 or greater, you can display a grid that delimits the individual pixels in the image.

1. On the **Image** menu, select **Grid Settings**.

1. Select the **Pixel Grid** check box to display the grid, or clear the box to hide the grid.

> [!TIP]
> Tool tips appear when you hover your cursor over a toolbar button. These tips can help you identify the function of each button.

## Requirements

None

## See also

- [Accelerator Keys](../windows/accelerator-keys-image-editor-for-icons.md)
- [Image Editor for Icons](../windows/image-editor-for-icons.md)
