---
title: "Creating a Device Image (Image Editor for Icons)"
ms.date: "11/04/2016"
f1_keywords: ["vc.editors.icon", "vc.editors.newimagetype", "vc.editors.customimage", "vc.editors.opendeviceimage"]
helpviewer_keywords: ["cursors [C++], creating", "icons [C++], creating", "display devices [C++], creating image", "images [C++], creating for display devices", "icons [C++], inserting", "New <Device> Image Type dialog box [C++]", "Custom Image dialog box [C++]", "Open <Device> Image dialog box [C++]"]
ms.assetid: 5a536928-32df-4ace-beb1-1521ce3b871f
---
# Creating a Device Image (Image Editor for Icons)

When you create a new icon or cursor resource, the **Image** editor first creates an image in a specific style (32 × 32, 16 colors for icons and 32 × 32, Monochrome for cursors). You can then add images in different sizes and styles to the initial icon or cursor and edit each additional image, as needed, for the different display devices. You can also edit an image by using a cut-and-paste operation from an existing image type or from a bitmap created in a graphics program.

When you open the icon or cursor resource in the [Image editor](../windows/image-editor-for-icons.md), the image most closely matching the current display device is opened by default.

For information on adding resources to managed projects, see [Resources in Desktop Apps](/dotnet/framework/resources/index) in the *.NET Framework Developer's Guide*. For information on manually adding resource files to managed projects, accessing resources, displaying static resources, and assigning resource strings to properties, see [Creating Resource Files for Desktop Apps](/dotnet/framework/resources/creating-resource-files-for-desktop-apps). For information on globalization and localization of resources in managed apps, see [Globalizing and Localizing .NET Framework Applications](/dotnet/standard/globalization-localization/index).

## New &lt;Device&gt; Image Type dialog box

The **New &lt;Device&gt; Image Type** dialog box enables you to create a new device image of a specified type. To open the **New \<Device> Image** dialog box, select **New Image Type** on the **Image** menu. The following properties included are **Target Image Type** and **Custom**.

### Target Image Type

Lists the available image types. Select the image type you want to open:

||||
|-|-|-|
|- 16 x 16, 16 colors|- 48 x 48, 16 colors|- 96 x 96, 16 colors|
|- 16 x 16, 256 colors|- 48 x 48, 256 colors|- 96 x 96, 256 colors|
|- 16 x 16, Monochrome|- 48 x 48, Monochrome|- 96 x 96, Monochrome|
|- 32 x 32, 16 colors|- 64 x 64, 16 colors||
|- 32 x 32, 256 colors|- 64 x 64, 256 colors||
|- 32 x 32, Monochrome|- 64 x 64, Monochrome||

> [!NOTE]
> Any existing images will not be displayed in this list.

### Custom

Opens the **Custom Image** dialog box in which you can create a new image with a custom size and number of colors.

The **Custom Image** dialog box enables you to create a new image with a custom size and number of colors. The following properties included are:

|Property|Description|
|---|---|
|**Width**|Provides a space for you to enter the width of the custom image in pixels (1 - 512, limit of 2048).|
|**Height**|Provides a space for you to enter the height for the custom image in pixels (1 - 512, limit of 2048).|
|**Colors**|Provides a space for you to choose the number of colors for the custom image: 2, 16, or 256.|

## Open &lt;Device&gt; Image dialog box

Use the **Open &lt;Device&gt; Image** dialog box to open device images in C++ projects. It lists existing device images in the current resource (images that are part of the current resource). The following property included is:

|Property|Description|
|---|---|
|**Current Images**|Lists the images included in the resource. Select the image type you want to open.|

## To create a new icon or cursor

1. In [Resource View](../windows/resource-view-window.md), right-click your .rc file, then choose **Insert Resource** from the shortcut menu. (If you already have an existing image resource in your .rc file, such as a cursor, you can right-click the **Cursor** folder and select **Insert Cursor** from the shortcut menu.)

   > [!NOTE]
   > If your project doesn't already contain an .rc file, please see [Creating a New Resource Script File](../windows/how-to-create-a-resource-script-file.md).

1. In the [Insert Resource dialog box](../windows/add-resource-dialog-box.md), select **Icon** or **Cursor** and choose **New**. For icons, this action creates an icon resource with a 32 × 32, 16-color icon. For cursors, a 32 × 32, Monochrome (2-color) image is created.

   If a plus sign (**+**) appears next to the image resource type in the **Insert Resource** dialog box, it means that toolbar templates are available. Select the plus sign to expand the list of templates, select a template, and choose **New**.

## Requirements

None

## See Also

[Icons and Cursors: Image Resources for Display Devices](../windows/icons-and-cursors-image-resources-for-display-devices-image-editor-for-icons.md)<br/>
[Accelerator Keys](../windows/accelerator-keys-image-editor-for-icons.md)<br/>
[Icons and Cursors: Image Resources for Display Devices](../windows/icons-and-cursors-image-resources-for-display-devices-image-editor-for-icons.md)<br/>
[Image Menu](../windows/image-menu-image-editor-for-icons.md)<br/>
[Image Editor for Icons](../windows/image-editor-for-icons.md)<br/>
