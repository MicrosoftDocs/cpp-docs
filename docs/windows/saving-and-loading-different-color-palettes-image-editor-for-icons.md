---
title: "Saving and Loading Different Color Palettes (Image Editor for Icons)"
ms.date: "11/04/2016"
f1_keywords: ["vc.editors.image.color", "vc.editors.loadcolorpalette"]
helpviewer_keywords: ["color palettes [C++]", "palettes", "palettes, Image editor", "colors [C++], Image editor", "Image editor [C++], palettes", "color palettes", "Load Palette Colors dialog box [C++]"]
ms.assetid: 694b6346-e606-4f19-aa01-9b4ceb47f423
---
# Saving and Loading Different Color Palettes (Image Editor for Icons)

You can save and load a **Colors** palette that contains [customized colors](../windows/customizing-or-changing-colors-image-editor-for-icons.md). (By default, the **Colors** palette most recently used is automatically loaded when you start Visual Studio.)

> [!TIP]
> Since the **Image** editor has no means to restore the default **Colors** palette, you should save the default **Colors** palette under a name such as *standard.pal* or *default.pal* so that you can easily restore the default settings.

Use the **Load Palette Colors** dialog box to load special color palettes to use in your C++ project. The following properties included are:

|Property|Description|
|---|---|
|**Look in**|Specifies the location where you want to locate a file or folder. Select the arrow to choose another location, or select the folder icon on the toolbar to move up levels.|
|**File name**|Provides a space for you to type the name of the file you want to open. To quickly find a file you've previously opened, select the file name in the drop-down list, if available.<br/><br/>If you're searching for a file, you can use asterisks (*) as wildcards. For example, you can type \*.\* to see a list of all files. You can also type the full path of a file, for example, C:\My Documents\MyColorPalette.pal or \\\NetworkServer\MyFolder\MyColorPalette.pal.|
|**Files of type**|Lists the types of files to display. Palette (*.pal) is the default file type for color palettes.|

## To save a custom colors palette

1. From the **Image** menu, choose **Save Palette**.

1. Navigate to the directory where you want to save the palette, and type a name for the palette.

1. Select **Save**.

## To load a custom colors palette

1. From the **Image** menu, choose **Load Palette**.

1. In the **Load Color Palette** dialog box, navigate to the correct directory and select the palette you want to load. **Color** palettes are saved with a .pal file extension.

## Requirements

None

## See also

- [Accelerator Keys](../windows/accelerator-keys-image-editor-for-icons.md)
- [Working with Color](../windows/working-with-color-image-editor-for-icons.md)
- [Image Editor for Icons](../windows/image-editor-for-icons.md)
