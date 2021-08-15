---
description: "Learn more about: How to: Use a Drawing Tool"
title: "How to: Use a Drawing Tool"
ms.date: "02/15/2019"
f1_keywords: ["vc.editors.image.drawing"]
helpviewer_keywords: ["Image editor [C++], selecting drawing tools", "Image editor [C++], toolbar", "drawing tools", "Image editor [C++], drawing lines", "shapes, drawing", "colors [C++], brush", "brushes, colors", "brushes, creating custom", "images [C++], creating custom brushes", "graphics [C++], custom brushes", "custom brushes"]
ms.assetid: 1f8c6eef-7760-45a9-a5cb-9e15c6f91245
---
# How to: Use a Drawing Tool

The **Image Editor** has freehand drawing and erasing tools that all work in the same way. You select the tool and, if necessary, [select foreground and background colors](./image-editor-for-icons.md) and size and shape options. You then move the pointer to the image and click or drag to draw and erase.

## Drawing Tools

You can select drawing tools from either the **Image Editor** toolbar or the **Image** menu. When you select the **Eraser** tool, **Brush** tool, or **Airbrush** tool, the option selector displays that tool's options.

> [!TIP]
> Tool tips appear when you hover your cursor over the buttons on the [Image Editor toolbar](./image-editor-for-icons.md). These tips will help you identify the specific buttons mentioned here.

### To select and use a drawing tool from the Image Editor toolbar

1. Select a button on the **Image Editor** toolbar.

   - The **Eraser** tool paints over the image with the current background color when you press the left mouse button.

      > [!TIP]
      > Instead of using the **Eraser** tool, you may find it more convenient to draw in the background color with one of the drawing tools.

   - The **Pencil** tool draws freehand in a constant width of one pixel.

   - The **Brush** tool has various shapes and sizes.

   - The **Airbrush** tool randomly distributes color pixels around the center of the brush.

1. If necessary, select colors and a brush:

   - In the [Colors palette](./image-editor-for-icons.md), select the left mouse button to select a foreground color or the right mouse button to select a background color.

   - In the [Options selector](./image-editor-for-icons.md), select a shape representing the brush you want to use.

1. Point to the place on the image where you want to start drawing or painting. The pointer changes shape according to the tool you selected.

1. Press the left mouse button (for the foreground color) or the right mouse button (for the background color), and hold it down as you draw.

### To select and use a drawing tool from the Image menu

1. Go to menu **Image** > **Tools**.

1. On the cascading submenu, choose the tool you wish to use.

## Lines or Closed Figures

The **Image Editor** tools for drawing lines and closed figures all work in the same way: you place the insertion point at one point and drag to another. For lines, these points are the endpoints. For closed figures, these points are opposite corners of a rectangle bounding the figure.

Lines are drawn in a width determined by the current brush selection, and framed figures are drawn in a width determined by the current width selection. Lines and all figures, both framed and filled, are drawn in the current foreground color if you press the left mouse button, or in the current background color if you press the right mouse button.

### To draw a line

1. Use the [Image Editor toolbar](./image-editor-for-icons.md) or go to menu **Image**> **Tools** and choose the **Line** tool.

1. If necessary, select colors and a brush:

   - In the [Colors palette](./image-editor-for-icons.md), select the left mouse button to select a foreground color or the right mouse button to select a background color.

   - In the [Options selector](./image-editor-for-icons.md), select a shape representing the brush you want to use.

1. Place the pointer at the line's starting point.

1. Drag to the line's endpoint.

### To draw a closed figure

1. Use the **Image Editor** toolbar or go to menu **Image** > **Tools** and select a **Closed-Figure Drawing** tool.

   The **Closed-Figure Drawing** tools create figures as indicated on their respective buttons.

1. If necessary, select colors and a line width.

1. Move the pointer to one corner of the rectangular area in which you want to draw the figure.

1. Drag the pointer to the diagonally opposite corner.

## Custom Brushes

A custom brush is a rectangular portion of an image that you pick up and use like one of the **Image Editor**'s ready-made brushes. All operations you can perform on a selection, you can perform on a custom brush as well.

### To create a custom brush from a portion of an image

1. Select the part of the image that you want to use for a brush.

1. Hold the **Shift** key down, choose in the selection and drag it across the image, or go to menu **Image** > **Use Selection as Brush**.

   Your selection becomes a custom brush that distributes the colors in the selection across the image. Copies of the selection are left along the dragging path. The more slowly you drag, the more copies are made.

   > [!NOTE]
   > Selecting the **Use a Selection as Brush** without first selecting a portion of the image will use the whole image as a brush. The result of using a custom brush will also depend on whether you've selected an [Opaque or Transparent background](./image-editor-for-icons.md).

Pixels in a custom brush that match the current background color are normally transparent: they don't paint over the existing image. You can change this behavior so that background-color pixels paint over the existing image.

You can use the custom brush like a stamp or a stencil to create different special effects.

### To draw custom brush shapes in the background color

1. Select an opaque or transparent background.

1. Set the background color to the color in which you want to draw.

1. Position the custom brush where you want to draw.

1. Select the right mouse button. Any opaque regions of the custom brush are drawn in the background color.

### To double or halve the custom brush size

Press the **Plus Sign** (**+**) key to double the brush size, or the **Minus Sign** (**-**) key to halve it.

### To cancel the custom brush

Press **Esc** or choose another drawing tool.

## Requirements

None

## See also

[Image Editor for Icons](../windows/image-editor-for-icons.md)<br/>
[How to: Create an Icon or Other Image](../windows/creating-an-icon-or-other-image-image-editor-for-icons.md)<br/>
[How to: Edit an Image](../windows/selecting-an-area-of-an-image-image-editor-for-icons.md)<br/>
[How to: Work with Color](../windows/working-with-color-image-editor-for-icons.md)<br/>
[Accelerator Keys](../windows/accelerator-keys-image-editor-for-icons.md)<br/>
