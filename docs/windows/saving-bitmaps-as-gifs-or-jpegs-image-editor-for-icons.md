---
title: "Saving Bitmaps as GIFs or JPEGs (Image Editor for Icons) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "conceptual"
f1_keywords: ["vc.editors.image.editing"]
dev_langs: ["C++"]
helpviewer_keywords: ["["".gif files [C++], saving bitmaps as"", ""jpg files [C++], saving bitmaps as"", ""jpeg files [C++], saving bitmaps as"", "".jpg files [C++], saving bitmaps as"", ""Image editor [C++], converting image formats"", ""gif files [C++], saving bitmaps as"", ""bitmaps [C++], converting formats"", "".jpeg files [C++], saving bitmaps as"", ""graphics [C++], converting formats"", ""images [C++], converting formats""]"]
ms.assetid: 115df69f-10fb-4e6f-906b-853c1e4a54af
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# Saving Bitmaps as GIFs or JPEGs (Image Editor for Icons)

When you create a bitmap, the image is created in bitmap format (.bmp). You can, however, save the image as a GIF or JPEG or in other graphic formats.

> [!NOTE]
> This process does not apply to icons and cursors.

### To create and save a bitmap as a .gif or .jpeg

1. From the **File** menu, choose **Open**, then click **File**.

2. In the **New File dialog box**, click the **Visual C++** folder, then select **Bitmap File (.bmp)** in the **Templates** box and click **Open**.

   The bitmap opens in the **Image** editor.

3. Make changes to your new bitmap as needed.

4. With the bitmap still open in the **Image** editor, click **Save *filename*.bmp As** on the **File** menu.

5. In the **Save File As** dialog box, type the name you want to give the file and the extension that denotes the file format you want in the **File Name** box. For example, *myfile.gif*.

   > [!NOTE]
   > You must create or open the bitmap outside of your project in order to save it as another file format. If you create or open it within your project, the **Save As** command will be unavailable. For more information, see [Viewing Resources in a Resource Script File Outside of a Project (Standalone)](../windows/how-to-open-a-resource-script-file-outside-of-a-project-standalone.md).

6. Click **Save**.

For information on adding resources to managed projects, please see [Resources in Desktop Apps](/dotnet/framework/resources/index) in the *.NET Framework Developer's Guide*. For information on manually adding resource files to managed projects, accessing resources, displaying static resources, and assigning resource strings to properties, see [Creating Resource Files for Desktop Apps](/dotnet/framework/resources/creating-resource-files-for-desktop-apps). For information on globalization and localization of resources in managed apps, see [Globalizing and Localizing .NET Framework Applications](/dotnet/standard/globalization-localization/index).

## See Also

[Editing Graphical Resources](../windows/editing-graphical-resources-image-editor-for-icons.md)  
[Image Editor for Icons](../windows/image-editor-for-icons.md)