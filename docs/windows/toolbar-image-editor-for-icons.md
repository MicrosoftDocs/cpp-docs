---
title: "Toolbar (C++ Image Editor for Icons)"
ms.date: "11/04/2016"
f1_keywords: ["vc.editors.bitmap", "vc.editors.icon", "vc.editors.texttool"]
helpviewer_keywords: ["Graphics toolbar", "Image editor [C++], toolbar", "Image editor [C++], Option selector", "Properties window", "Option selector, Image editor", "toolbars [C++], showing", "toolbars [C++], hiding", "text, adding to an image", "Text Tool dialog box [C++]", "Text Tool Font dialog box [C++]", "fonts, changing on an image", "text, on images"]
ms.assetid: a0af4209-6273-4106-a7c1-0edecc9b5755
---
# Toolbar (C++ Image Editor for Icons)

The **Image Editor** toolbar contains tools for drawing, painting, entering text, erasing, and manipulating views. It also contains an option selector, with which you can select options for using each tool. For example, you can choose from various brush widths, magnification factors, and line styles.

> [!NOTE]
> All tools available on the **Image Editor** toolbar are also available from the **Image** menu (under the **Tools** command).

![Image Editor toolbar](../mfc/media/vcimageeditortoolbar.gif "vcImageEditorToolbar")
Image Editor Toolbar

To use the **Image Editor** toolbar and **Option** selector, select the tool or option that you want.

> [!TIP]
> Tool tips appear when you hover your cursor over a toolbar button. These tips can help you identify the function of each button.

With the **Option** selector you can specify the width of a line, brush stroke, and more. The icon on the **Option** selector button changes depending on which tool you've selected.

![Drawing&#45;shape selector on the Image Editor toolbar](../mfc/media/vcimageeditortoolbaroptionselector.gif "vcImageEditorToolbarOptionSelector")
Option Selector on the Image Editor Toolbar

For information on adding resources to managed projects, see [Resources in Desktop Apps](/dotnet/framework/resources/index) in the *.NET Framework Developer's Guide*. For information on manually adding resource files to managed projects, accessing resources, displaying static resources, and assigning resource strings to properties, see [Creating Resource Files for Desktop Apps](/dotnet/framework/resources/creating-resource-files-for-desktop-apps). For information on globalization and localization of resources in managed apps, see [Globalizing and Localizing .NET Framework Applications](/dotnet/standard/globalization-localization/index).

## Use the Text Tool dialog box

Use the **Text Tool** dialog box to add text to a cursor, bitmap, or icon resource.

To access this dialog box, open the [Image Editor](../windows/window-panes-image-editor-for-icons.md). Select **Tools** from the **Image** menu, and then select the **Text Tool** command.

### Font button

Opens the **Text Tool Font** dialog box, in which you can change the font, style, or size of the cursor font. Changes are applied to the text displayed in the **Text** area.

To access this dialog box, select the **Font** button in the **Text Tool** dialog box. The properties available are:

|Property|Description|
|---|---|
|**Font**|Lists the available fonts.|
|**Font Style**|Lists the available styles for the specified font.|
|**Size**|Lists the available point sizes for the specified font.|
|**Sample**|Shows a sample of how text will appear with the specified font settings.|
|**Script**|Lists the available language scripts for the specified font. When you select a different language script, the character set for that language becomes available for creating multilingual documents.|

#### To change the font of text on an image

The following procedure is an example of how to add text to an icon in a Windows application and manipulate the font of your text.

1. Create a C++ Windows Forms Application. For details, see [Creating a Windows Application Project](/previous-versions/visualstudio/visual-studio-2010/42wc9kk5). An *app.ico* file is added to your project by default.

1. In **Solution Explorer**, double-click the file *app.ico*. The [Image Editor](../windows/image-editor-for-icons.md) will open.

1. From the **Image** menu, select **Tools** and then select **Text Tool**. The **Text Tool** dialog box will appear.

1. In the **Text Tool** dialog box, type *C++* in the empty text area. This text will appear in a resizable box located in the upper left corner of *app.ico*, in the **Image Editor**.

1. In the **Image Editor**, drag the resizable box to the center of app.ico, to improve the readability of your text.

1. In the **Text Tool** dialog box, select the **Font** button. The **Text Tool Font** dialog box will appear.

1. In the **Text Tool Font** dialog box, select **Times New Roman** from the list of available fonts that are listed in the **Font** list box.

1. Select **Bold** from the list of available font styles listed in the **Font style** list box.

1. Select **10** from the list of available point sizes listed in the **Size** list box.

1. Select the **OK** button. The **Text Tool Font** dialog box will close and the new font settings will apply to your text.

1. Select the **Close** button on the **Text Tool** dialog box. The resizable box around your text will disappear from the **Image Editor**.

### Text area

Displays the text that appears as part of the resource. Initially this area is empty.

> [!NOTE]
> If **Transparent Background** is set, only the text will be placed into the image. If **Opaque Background** is set, a bounding rectangle, filled with the [background color](../windows/selecting-foreground-or-background-colors-image-editor-for-icons.md), will be placed behind the text. For more information, see [Choosing Opaque and Transparent Backgrounds](../windows/choosing-a-transparent-or-opaque-background-image-editor-for-icons.md).

You can right-click on the **Text Tool** dialog box to access a default shortcut menu that contains a list of standard Windows commands.

## To display or hide the Image Editor toolbar

Since many of the drawing tools are available from the [keyboard](../windows/accelerator-keys-image-editor-for-icons.md), it's sometimes useful to hide the **Image Editor** toolbar.

On the **View** menu, select **Toolbars** then choose **Image Editor**.

   > [!NOTE]
   > Elements from this toolbar will appear unavailable when an image file from the current project or solution is not open in the **Image Editor**. See [Creating an Icon or Other Image](../windows/creating-an-icon-or-other-image-image-editor-for-icons.md), for information on adding image files to your projects.

## Requirements

None

## See also

- [Colors Window](../windows/colors-window-image-editor-for-icons.md)
- [Editing Graphical Resources](../windows/editing-graphical-resources-image-editor-for-icons.md)
- [Accelerator Keys](../windows/accelerator-keys-image-editor-for-icons.md)
