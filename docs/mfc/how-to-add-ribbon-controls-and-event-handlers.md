---
description: "Learn more about: How to: Add Ribbon Controls and Event Handlers"
title: "How to: Add Ribbon Controls and Event Handlers"
ms.date: "11/04/2016"
helpviewer_keywords: ["event handlers [MFC], adding", "ribbon controls [MFC], adding"]
ms.assetid: b31f25bc-ede7-49c3-9e3c-dffe4e174a69
---
# How to: Add Ribbon Controls and Event Handlers

Ribbon controls are elements, such as buttons and combo boxes, that you add to panels. Panels are areas of the ribbon bar that display a group of related controls.

In this topic, you will open the Ribbon Designer, add a button, and then link an event that displays "Hello World".

### To open the Ribbon Designer

1. In Visual Studio, on the **View** menu, click **Resource View**.

1. In **Resource View**, double-click the ribbon resource to display it on the design surface.

### To add a Button and an Event Handler

1. From the **Toolbar**, click **Button** and drag it on to a panel in the design surface.

1. Right-click the button, and click **Add Event Handler**.

1. In the **Event Handler Wizard**, confirm the default settings and click **Add and Edit**. For more information, see [Event Handler Wizard](../ide/adding-an-event-handler-visual-cpp.md#event-handler-wizard).

1. In the code editor, add the following code into the handler function:

```
    MessageBox((LPCTSTR)L"Hello World");
```

## See also

[RibbonGadgets Sample: Ribbon Gadgets Application](../overview/visual-cpp-samples.md)<br/>
[Ribbon Designer (MFC)](ribbon-designer-mfc.md)
