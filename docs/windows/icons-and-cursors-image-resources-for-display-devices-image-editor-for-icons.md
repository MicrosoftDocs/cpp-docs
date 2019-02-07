---
title: "Icons and Cursors: Image Resources for Display Devices (C++ Image Editor for Icons)"
ms.date: "11/04/2016"
f1_keywords: ["vc.editors.icon", "vc.editors.newimagetype", "vc.editors.customimage", "vc.editors.opendeviceimage", "vc.editors.image.editing"]
helpviewer_keywords: ["cursors [C++], creating", "image resources [C++], display devices", "icons [C++], creating", "cursors [C++], types", "icons [C++]", "Image editor [C++], icons and cursors", "cursors [C++]", "display devices [C++], creating icons for", "cursors [C++], hot spots", "icons [C++], types", "icons [C++], creating", "display devices [C++], creating image", "images [C++], creating for display devices", "icons [C++], inserting", "New <Device> Image Type dialog box [C++]", "Custom Image dialog box [C++]", "Open <Device> Image dialog box [C++]", "New Device Image command", "display devices [C++], adding images", "cursors [C++], adding", "icons, adding", "display devices [C++], copying images", "cursors [C++], copying", "icons, copying", "cursors [C++], deleting", "display devices [C++], deleting device image", "icons, erasing", "icons, deleting", "cursors [C++], undoing changes", "icons, undoing changes", "cursors [C++], screen regions", "inverse colors [C++], device images", "transparent regions, device images", "transparency, device images", "Image editor [C++], device images", "inverse regions, device images", "cursors [C++], transparent regions", "screen colors", "regions, transparent", "icons [C++], transparent regions", "display devices [C++], transparent and screen regions", "transparent regions in devices", "regions, inverse", "colors [C++], Image editor", "device projects [C++], transparent images", "icons [C++], screen regions", "256-color palette", "cursors [C++], color", "colors [C++], icons", "colors [C++], cursors", "icons, color", "colors [C++], icons and cursors", "color palettes, 256-color", "palettes, 256-color", "cursors [C++], hot spots", "hot spots"]
ms.assetid: 8f0809a8-0cf0-4da9-b23d-51f28bf15f5b
---
# Icons and Cursors: Image Resources for Display Devices (C++ Image Editor for Icons)

Icons and cursors are graphical resources that can contain multiple images in different sizes and color schemes for different types of display devices. Also, a cursor has a "hot spot," the location Windows uses to track its position. Both icons and cursors are created and edited using the **Image** editor, as are bitmaps and other images.

When you create a new icon or cursor, the **Image** editor first creates an image of a standard type. The image is initially filled with the screen (transparent) color. If the image is a cursor, the hot spot is initially the upper-left corner (coordinates 0,0).

By default, the **Image** editor supports the creation of additional images for the devices shown in the following table. You can create images for other devices by typing width, height, and color-count parameters into the [Custom Image dialog box](custom-image-dialog-box-image-editor-for-icons.md).

> [!NOTE]
> Using the **Image Editor**, you can view 32-bit images, but you cannot edit them.

|Color|Width (pixels)|Height (pixels)|
|-----------|----------------------|-----------------------|
|Monochrome|16|16|
|Monochrome|32|32|
|Monochrome|48|48|
|Monochrome|64|64|
|Monochrome|96|96|
|16|16|16|
|16|32|32|
|16|64|64|
|16|48|48|
|16|96|96|
|256|16|16|
|256|32|32|
|256|48|48|
|256|64|64|
|256|96|96|

## Create a device image (icon or cursor)

When you create a new icon or cursor resource, the **Image** editor first creates an image in a specific style (32 × 32, 16 colors for icons and 32 × 32, Monochrome for cursors). You can then add images in different sizes and styles to the initial icon or cursor and edit each additional image, as needed, for the different display devices. You can also edit an image by using a cut-and-paste operation from an existing image type or from a bitmap created in a graphics program.

When you open the icon or cursor resource in the [Image editor](../windows/image-editor-for-icons.md), the image most closely matching the current display device is opened by default.

### New &lt;Device&gt; Image Type dialog box

The **New &lt;Device&gt; Image Type** dialog box enables you to create a new device image of a specified type. To open the **New \<Device> Image** dialog box, select **New Image Type** on the **Image** menu. The following properties included are **Target Image Type** and **Custom**.

#### Target Image Type

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

#### Custom

Opens the **Custom Image** dialog box in which you can create a new image with a custom size and number of colors.

The **Custom Image** dialog box enables you to create a new image with a custom size and number of colors. The following properties included are:

|Property|Description|
|---|---|
|**Width**|Provides a space for you to enter the width of the custom image in pixels (1 - 512, limit of 2048).|
|**Height**|Provides a space for you to enter the height for the custom image in pixels (1 - 512, limit of 2048).|
|**Colors**|Provides a space for you to choose the number of colors for the custom image: 2, 16, or 256.|

### Open &lt;Device&gt; Image dialog box

Use the **Open &lt;Device&gt; Image** dialog box to open device images in C++ projects. It lists existing device images in the current resource (images that are part of the current resource). The following property included is:

|Property|Description|
|---|---|
|**Current Images**|Lists the images included in the resource. Select the image type you want to open.|

### To create a new icon or cursor

1. In [Resource View](../windows/resource-view-window.md), right-click your .rc file, then choose **Insert Resource** from the shortcut menu. (If you already have an existing image resource in your .rc file, such as a cursor, you can right-click the **Cursor** folder and select **Insert Cursor** from the shortcut menu.)

   > [!NOTE]
   > If your project doesn't already contain an .rc file, see [Creating a New Resource Script File](../windows/how-to-create-a-resource-script-file.md).

1. In the [Insert Resource dialog box](../windows/add-resource-dialog-box.md), select **Icon** or **Cursor** and choose **New**. For icons, this action creates an icon resource with a 32 × 32, 16-color icon. For cursors, a 32 × 32, Monochrome (2-color) image is created.

   If a plus sign (**+**) appears next to the image resource type in the **Insert Resource** dialog box, it means that toolbar templates are available. Select the plus sign to expand the list of templates, select a template, and choose **New**.

## Add an image for a different display device

1. On the **Image** menu, select **New Device Image** (or right-click in the **Image Editor** pane and choose **New Device Image** from the shortcut menu).

1. Select the type of image you want to add. You can also select **Custom** to create an icon whose size isn't available in the default list.

## Copy a device image

1. On the **Image** menu, select **Open Device Image** and choose an image from the current images list. For example, choose the 32 × 32, 16-color version of an icon.

1. Copy the currently displayed icon image (**Ctrl**+**C**).

1. Open a different image of the icon in another **Image Editor** window. For example, open the 16 × 16, 16-color version of the icon.

1. Paste the icon image (**Ctrl**+**V**) from one **Image Editor** window to the other. If you're pasting a larger size into a smaller size, you can use the icon handles to resize the image.

## Delete a device image

While the icon image is displayed in the **Image** editor, select **Delete Device Image** from the **Image** menu. When you delete the last icon image in the resource, the resource is also deleted.

   > [!NOTE]
   > When you press the **Del** key, the images and colors you have drawn on an icon are deleted but the icon remains; you can now redesign it. If you press **Del** by mistake, you can press **Ctrl**+**Z** to undo the action.

## Create transparent or inverse regions in device images

In the [Image editor](../windows/image-editor-for-icons.md), the initial icon or cursor image has a transparent attribute. Although icon and cursor images are rectangular, many don't appear so because parts of the image are transparent; the underlying image on the screen shows through the icon or cursor. When you drag an icon, parts of the image may appear in an inverted color. You create this effect by setting the screen color and inverse color in the [Colors window](../windows/colors-window-image-editor-for-icons.md).

The screen and inverse colors you apply to icons and cursors either shape and color the derived image or assign inverse regions. The colors indicate parts of the image that have those attributes. You can change the colors that represent the screen-color and inverse-color attributes in editing. These changes don't affect the appearance of the icon or cursor in your application.

> [!NOTE]
> The dialog boxes and menu commands you see might differ from those described in **Help** depending on your active settings or edition. To change your settings, choose **Import and Export Settings** on the **Tools** menu. For more information, see [Personalize the Visual Studio IDE](/visualstudio/ide/personalizing-the-visual-studio-ide).

### To create transparent or inverse regions

1. In the **Colors** window, select the **Screen-Color** selector or the **Inverse-Color** selector.

1. Apply the screen or inverse color onto your image using a drawing tool. For more information on drawing tools, see [Using a Drawing Tool](using-a-drawing-tool-image-editor-for-icons.md).

### To change the screen or inverse color

1. Select either the **Screen-Color** selector or the **Inverse-Color** selector.

1. Choose a color from the **Colors** palette in the **Colors** window.

   The complementary color is automatically assigned for the other selector.

   > [!TIP]
   > If you double-click the **Screen-Color** or **Inverse-Color** selector, the [Custom Color Selector dialog box](../windows/custom-color-selector-dialog-box-image-editor-for-icons.md) appears.

## Use the 256-color palette

Using the **Image** editor, icons and cursors can be sized large (64 × 64) with a 256-color palette to choose from. After creating the resource, a device image style is selected.

### To create a 256-color icon or cursor

1. In [Resource View](../windows/resource-view-window.md), right-click your .rc file, then choose **Insert Resource** from the shortcut menu. (If you already have an existing image resource in your .rc file, such as a cursor, you can right-click the **Cursor** folder and select **Insert Cursor** from the shortcut menu.)

   > [!NOTE]
   > If your project doesn't already contain an .rc file, please see [Creating a New Resource Script File](../windows/how-to-create-a-resource-script-file.md).

1. In the [Insert Resource dialog box](../windows/add-resource-dialog-box.md), select **Icon** or **Cursor** and choose **New**.

1. On the **Image** menu, select **New Device Image**.

1. Select the 256-color image style you want.

### To choose a color from the 256-color palette for large icons

To draw with a selection from the 256-color palette, you need to select the colors from the **Colors** palette in the [Colors window](../windows/colors-window-image-editor-for-icons.md).

1. Select the large icon or cursor, or create a new large icon or cursor.

1. Choose a color from the 256 colors displayed in the **Colors** palette in the **Colors** window.

   The color selected will become the current color in the **Colors** palette in the **Colors** window.

   > [!NOTE]
   > The initial palette used for 256-color images matches the palette returned by the `CreateHalftonePalette` Windows API. All icons intended for the Windows shell should use this palette to prevent flicker during palette realization.

## Set a cursor&#39;s hot spot

The hot spot of a cursor is the point to which Windows refers in tracking the cursor's position. By default, the hot spot is set to the upper-left corner of the cursor (coordinates 0,0). The **Hotspot** property in the [Properties window](/visualstudio/ide/reference/properties-window) shows the hot spot coordinates.

### To set a cursor's hot spot

1. On the [Image Editor toolbar](../windows/toolbar-image-editor-for-icons.md), choose the **Set Hotspot** tool.

1. Select the pixel you want to assign as the cursor's hot spot.

   The **Hotspot** property in the **Properties** window displays the new coordinates.

   > [!TIP]
   > Tool tips appear when you hover your cursor over a toolbar button. These tips can help you identify the function of each button.

For information on adding resources to managed projects, see [Resources in Desktop Apps](/dotnet/framework/resources/index) in the *.NET Framework Developer's Guide*. For information on manually adding resource files to managed projects, accessing resources, displaying static resources, and assigning resource strings to properties, see [Creating Resource Files for Desktop Apps](/dotnet/framework/resources/creating-resource-files-for-desktop-apps). For information on globalization and localization of resources in managed apps, see [Globalizing and Localizing .NET Framework Applications](/dotnet/standard/globalization-localization/index).

## Requirements

None

## See also

[Image Menu](../windows/image-menu-image-editor-for-icons.md)<br/>
[Image Editor for Icons](../windows/image-editor-for-icons.md)<br/>
[Icons](/windows/desktop/menurc/icons)<br/>
[Cursors](/windows/desktop/menurc/cursors)<br/>
[Accelerator Keys](../windows/accelerator-keys-image-editor-for-icons.md)<br/>
