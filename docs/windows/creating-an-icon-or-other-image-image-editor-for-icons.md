---
description: "Learn more about: How To: Create an Icon or Other Image"
title: "How To: Create an Icon or Other Image"
ms.date: "02/15/2019"
helpviewer_keywords: ["bitmaps [C++]", "images [C++], creating", "resources [C++], creating images", "bitmaps [C++], creating", "graphics [C++], creating", "Image editor [C++], creating images", "cursors [C++], creating", "image resources [C++], display devices", "icons [C++], creating", "cursors [C++], types", "icons [C++]", "Image editor [C++], icons and cursors", "cursors [C++]", "display devices [C++], creating icons for", "cursors [C++], hot spots", "icons [C++], types", "icons [C++], creating", "display devices [C++], creating image", "images [C++], creating for display devices", "icons [C++], inserting", "New <Device> Image Type dialog box [C++]", "Custom Image dialog box [C++]", "Open <Device> Image dialog box [C++]", "New Device Image command", "display devices [C++], adding images", "cursors [C++], adding", "icons, adding", "display devices [C++], copying images", "cursors [C++], copying", "icons, copying", "cursors [C++], deleting", "display devices [C++], deleting device image", "icons, erasing", "icons, deleting", "cursors [C++], undoing changes", "icons, undoing changes", "cursors [C++], screen regions", "inverse colors [C++], device images", "transparent regions, device images", "transparency, device images", "Image editor [C++], device images", "inverse regions, device images", "cursors [C++], transparent regions", "screen colors", "regions, transparent", "icons [C++], transparent regions", "display devices [C++], transparent and screen regions", "transparent regions in devices", "regions, inverse", "colors [C++], Image editor", "device projects [C++], transparent images", "icons [C++], screen regions", "256-color palette", "cursors [C++], color", "colors [C++], icons", "colors [C++], cursors", "icons, color", "colors [C++], icons and cursors", "color palettes, 256-color", "palettes, 256-color", "cursors [C++], hot spots", "hot spots", ".gif files [C++], saving bitmaps as", "jpg files [C++], saving bitmaps as", "jpeg files [C++], saving bitmaps as", ".jpg files [C++], saving bitmaps as", "Image editor [C++], converting image formats", "gif files [C++], saving bitmaps as", "bitmaps [C++], converting formats", ".jpeg files [C++], saving bitmaps as", "graphics [C++], converting formats", "images [C++], converting formats", "images [C++], stand-alone editing", "Image editor [C++], converting image formats", "graphics [C++], converting formats", "images [C++], converting formats"]
ms.assetid: 66db3fb2-cfc1-48a2-9bdd-53f61eb7ee30
---
# How To: Create an Icon or Other Image

You can create a new image, bitmap, icon, cursor, or toolbar, and then use the **Image Editor** to customize its appearance. You can also create a new bitmap patterned after a [resource template](./how-to-create-a-resource-script-file.md).

## Icons and Cursors: Image Resources for Display Devices

Icons and cursors are graphical resources that can contain multiple images in different sizes and color schemes for different types of display devices. A cursor also has a hot spot, the location Windows uses to track its position. Both icons and cursors are created and edited using the **Image Editor**, as are bitmaps and other images.

When you create a new icon or cursor, the **Image Editor** first creates an image of a standard type. The image is initially filled with the screen (transparent) color. If the image is a cursor, the hot spot is initially the upper-left corner with coordinates `0,0`.

By default, the **Image Editor** supports the creation of additional images for the devices shown in the following table. You can create images for other devices by typing width, height, and color-count parameters into the **Custom Image** dialog box.

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

### Create a device image (icon or cursor)

When you create a new icon or cursor resource, the **Image Editor** first creates an image in a specific style (32 × 32, 16 colors for icons and 32 × 32, Monochrome for cursors). You can then add images in different sizes and styles to the initial icon or cursor and edit each additional image, as needed, for the different display devices. You can also edit an image by using a cut-and-paste operation from an existing image type or from a bitmap created in a graphics program.

When you open the icon or cursor resource in the [Image Editor](../windows/image-editor-for-icons.md), the image most closely matching the current display device is opened by default.

> [!NOTE]
> If your project doesn't already contain an .rc file, see [Creating a New Resource Script File](../windows/how-to-create-a-resource-script-file.md).

The **New &lt;Device&gt; Image Type** dialog box enables you to create a new device image of a specified type. To open the **New \<Device> Image** dialog box, go to menu **Image** > **New Image Type**. The following properties included are **Target Image Type** and **Custom**.

The **Target Image Type** property lists the available image types where you select the image type you want to open:

:::row:::
   :::column span="":::
      16 x 16, 16 colors\
      32 x 32, 16 colors\
      48 x 48, 16 colors\
      64 x 64, 16 colors\
      96 x 96, 16 colors
   :::column-end:::
   :::column span="":::
      16 x 16, 256 colors\
      32 x 32, 256 colors\
      48 x 48, 256 colors\
      64 x 64, 256 colors\
      96 x 96, 256 colors
   :::column-end:::
   :::column span="":::
      16 x 16, Monochrome\
      32 x 32, Monochrome\
      48 x 48, Monochrome\
      64 x 64, Monochrome\
      96 x 96, Monochrome
   :::column-end:::
:::row-end:::

> [!NOTE]
> Any existing images will not be displayed in this list.

The **Custom** property opens the **Custom Image** dialog box in which you can create a new image with a custom size and number of colors.

The **Custom Image** dialog box enables you to create a new image with a custom size and number of colors. The following properties included are:

|Property|Description|
|---|---|
|**Width**|Provides a space for you to enter the width of the custom image in pixels (1 - 512, limit of 2048).|
|**Height**|Provides a space for you to enter the height for the custom image in pixels (1 - 512, limit of 2048).|
|**Colors**|Provides a space for you to choose the number of colors for the custom image: 2, 16, or 256.|

Use the **Open &lt;Device&gt; Image** dialog box to open device images in C++ projects. It lists existing device images in the current resource (images that are part of the current resource). The following property included is:

|Property|Description|
|---|---|
|**Current Images**|Lists the images included in the resource. Select the image type you want to open.|

#### To create a new icon or cursor

1. In [Resource View](how-to-create-a-resource-script-file.md#create-resources), right-click your *.rc* file, then choose **Insert Resource**. If you already have an existing image resource in your *.rc* file, such as a cursor, you can right-click the **Cursor** folder and select **Insert Cursor**.

1. In the [Insert Resource dialog box](./how-to-create-a-resource-script-file.md), select **Icon** or **Cursor** and choose **New**. For icons, this action creates an icon resource with a 32 × 32, 16-color icon. For cursors, a 32 × 32, Monochrome (2-color) image is created.

   If a plus sign (**+**) appears next to the image resource type in the **Insert Resource** dialog box, it means that toolbar templates are available. Select the plus sign to expand the list of templates, select a template, and choose **New**.

### To add an image for a different display device

1. Go to menu **Image** > **New Device Image**, or right-click in the **Image Editor** pane and choose **New Device Image**.

1. Select the type of image you want to add. You can also select **Custom** to create an icon whose size isn't available in the default list.

### To copy a device image

1. Go to menu **Image** > **Open Device Image** and choose an image from the current images list. For example, choose the 32 × 32, 16-color version of an icon.

1. Copy the currently displayed icon image (**Ctrl**+**C**).

1. Open a different image of the icon in another **Image Editor** window. For example, open the 16 × 16, 16-color version of the icon.

1. Paste the icon image (**Ctrl**+**V**) from one **Image Editor** window to the other. If you're pasting a larger size into a smaller size, you can use the icon handles to resize the image.

### To delete a device image

While the icon image is displayed in the **Image Editor**, go to menu **Image** > **Delete Device Image**. When you delete the last icon image in the resource, the resource is also deleted.

> [!NOTE]
> When you press the **Del** key, the images and colors you have drawn on an icon are deleted but the icon remains and you can now redesign it. If you press **Del** by mistake, press **Ctrl**+**Z** to undo the action.

### To create transparent or inverse regions in device images

In the [Image Editor](../windows/image-editor-for-icons.md), the initial icon or cursor image has a transparent attribute. Although icon and cursor images are rectangular, many don't appear so because parts of the image are transparent and the underlying image on the screen shows through the icon or cursor. When you drag an icon, parts of the image may appear in an inverted color. You create this effect by setting the screen color and inverse color in the [Colors window](./image-editor-for-icons.md).

The screen and inverse colors you apply to icons and cursors either shape and color the derived image or assign inverse regions. The colors indicate parts of the image that have those attributes. You can change the colors that represent the screen-color and inverse-color attributes in editing. These changes don't affect the appearance of the icon or cursor in your application.

> [!NOTE]
> The dialog boxes and menu commands you see might differ from those described in **Help** depending on your active settings or edition. To change your settings, go to menu **Tools** > **Import and Export Settings**. For more information, see [Personalize the Visual Studio IDE](/visualstudio/ide/personalizing-the-visual-studio-ide).

#### To create transparent or inverse regions

1. In the **Colors** window, choose the selector **Screen-Color** or **Inverse-Color**.

1. Apply the screen or inverse color onto your image using a drawing tool. For more information on drawing tools, see [Using a Drawing Tool](using-a-drawing-tool-image-editor-for-icons.md).

#### To change the screen or inverse color

1. Select either the **Screen-Color** selector or the **Inverse-Color** selector.

1. Choose a color from the **Colors** palette in the **Colors** window.

   The complementary color is automatically assigned for the other selector.

   > [!TIP]
   > If you double-click the **Screen-Color** or **Inverse-Color** selector, the [Custom Color Selector dialog box](./image-editor-for-icons.md) appears.

### Use the 256-color palette

Using the **Image Editor**, icons and cursors can be sized large (64 × 64) with a 256-color palette to choose from. After creating the resource, a device image style is selected.

#### To create a 256-color icon or cursor

1. In [Resource View](how-to-create-a-resource-script-file.md#create-resources), right-click your *.rc* file, then choose **Insert Resource**. If you already have an existing image resource in your *.rc* file, such as a cursor, you can right-click the **Cursor** folder and select **Insert Cursor**.

1. In the [Insert Resource dialog box](./how-to-create-a-resource-script-file.md), select **Icon** or **Cursor** and choose **New**.

1. Go to menu **Image** > **New Device Image** and select the 256-color image style you want.

#### To choose a color from the 256-color palette for large icons

To draw with a selection from the 256-color palette, you need to select the colors from the **Colors** palette in the [Colors window](./image-editor-for-icons.md).

1. Select the large icon or cursor, or create a new large icon or cursor.

1. Choose a color from the 256 colors displayed in the **Colors** palette in the **Colors** window.

   The color selected will become the current color in the **Colors** palette in the **Colors** window.

   > [!NOTE]
   > The initial palette used for 256-color images matches the palette returned by the `CreateHalftonePalette` Windows API. All icons intended for the Windows shell should use this palette to prevent flicker during palette realization.

### To set a cursor's hot spot

The hot spot of a cursor is the point to which Windows refers in tracking the cursor's position. By default, the hot spot is set to the upper-left corner of the cursor with coordinates `0,0`. The **Hotspot** property in the [Properties window](/visualstudio/ide/reference/properties-window) shows the hot spot coordinates.

1. On the [Image Editor toolbar](./image-editor-for-icons.md), choose the **Set Hotspot** tool.

1. Select the pixel you want to assign as the cursor's hot spot.

   The **Hotspot** property in the **Properties** window displays the new coordinates.

### To create and save a bitmap as a .gif or .jpeg

When you create a bitmap, the image is created in bitmap format (.bmp). You can, however, save the image as a GIF or JPEG or in other graphic formats.

> [!NOTE]
> This process doesn't apply to icons and cursors.

1. Go to menu **File** > **Open**, then select **File**.

1. In the **New File dialog box**, choose the **Visual C++** folder, then select **Bitmap File (.bmp)** in the **Templates** box and select **Open**.

   The bitmap opens in the **Image Editor**.

1. Make changes to your new bitmap as needed.

1. With the bitmap still open in the **Image Editor**, go to menu **File** > **Save *filename*.bmp As**.

1. In the **Save File As** dialog box, type the name you want to give the file and the extension that denotes the file format you want in the **File Name** box. For example, *myfile.gif*.

   > [!NOTE]
   > You must create or open the bitmap outside of your project in order to save it as another file format. If you create or open it within your project, the **Save As** command will be unavailable. For more information, see [Viewing Resources in a Resource Script File Outside of a Project (Standalone)](./how-to-create-a-resource-script-file.md).

1. Select **Save**.

### To convert an image from one format to another

You can open GIF or JPEG images in the **Image Editor** and save them as bitmaps. Also, you can open a bitmap file and save it as a GIF or JPEG. Images you work with need not be part of a project for editing in the development environment (see [stand-alone image editing](./selecting-an-area-of-an-image-image-editor-for-icons.md)).

1. Open the image in the **Image Editor**.

1. Go to menu **File** > **Save *filename* As**.

1. In the **Save File As** dialog box, in the **File name** box, type the file name and the extension that denotes the format you want.

1. Select **Save**.

### To add a new image resource to an unmanaged C++ project

1. In [Resource View](how-to-create-a-resource-script-file.md#create-resources), right-click your *.rc* file, then choose **Insert Resource**. If you already have an existing image resource in your *.rc* file, such as a cursor, you can simply right-click the **Cursor** folder and select **Insert Cursor**.

1. In the [Insert Resource dialog box](./how-to-create-a-resource-script-file.md), select the type of image resource you'd like to create (**Bitmap**, for example) then choose **New**.

   If a plus sign (**+**) appears next to the image resource type in the **Insert Resource** dialog box, it means that toolbar templates are available. Select the plus sign to expand the list of templates, select a template, and choose **New**.

### To add a new image resource to a project in a .NET programming language

1. In **Solution Explorer**, right-click the project folder (for example, *WindowsApplication1*).

1. From the shortcut menu, select **Add**, then choose **Add New Item**.

1. In the **Categories** pane, expand the **Local Project Items** folder, then choose **Resources**.

1. In the **Templates** pane, choose the resource type you'd like to add to your project.

   The resource is added to your project in **Solution Explorer** and the resource opens in the [Image Editor](../windows/image-editor-for-icons.md). You can now use all the tools available in the **Image Editor** to modify your image. For more information on adding images to a managed project, see [Loading a Picture at Design Time](/dotnet/framework/winforms/controls/how-to-load-a-picture-using-the-designer-windows-forms).

## Requirements

None

## See also

[Image Editor for Icons](../windows/image-editor-for-icons.md)<br/>
[How to: Edit an Image](../windows/selecting-an-area-of-an-image-image-editor-for-icons.md)<br/>
[How to: Use a Drawing Tool](../windows/using-a-drawing-tool-image-editor-for-icons.md)<br/>
[How to: Work with Color](../windows/working-with-color-image-editor-for-icons.md)<br/>
[Accelerator Keys](../windows/accelerator-keys-image-editor-for-icons.md)<br/>
<!--
[Converting Bitmaps to Toolbars](./toolbar-editor.md)<br/>
[Creating New Toolbars](./toolbar-editor.md)<br/>
[Icons](/windows/win32/menurc/icons)<br/>
[Cursors](/windows/win32/menurc/cursors)<br/>-->
