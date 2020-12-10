---
description: "Learn more about: Using a Common Control as a Child Window"
title: "Using a Common Control as a Child Window"
ms.date: "11/04/2016"
helpviewer_keywords: ["controls [MFC], using as child windows", "windows [MFC], common controls as", "child windows [MFC], common controls as", "common controls [MFC], child windows", "Windows common controls [MFC], child windows"]
ms.assetid: 608f7d47-7854-4fce-bde9-856c51e76753
---
# Using a Common Control as a Child Window

Any of the Windows common controls can be used as a child window of any other window. The following procedure describes how to create a common control dynamically and then work with it.

### To use a common control as a child window

1. Define the control in the related class or handler.

1. Use the control's override of the [CWnd::Create](../mfc/reference/cwnd-class.md#create) method to create the Windows control.

1. After the control has been created (as early as the `OnCreate` handler if you subclass the control), you can manipulate the control using its member functions. See the descriptions of individual controls at [Controls](../mfc/controls-mfc.md) for details on methods.

1. When you are finished with the control, use [CWnd::DestroyWindow](../mfc/reference/cwnd-class.md#destroywindow) to destroy the control.

## See also

[Making and Using Controls](../mfc/making-and-using-controls.md)<br/>
[Controls](../mfc/controls-mfc.md)
