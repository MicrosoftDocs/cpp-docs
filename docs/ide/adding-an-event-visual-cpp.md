---
description: "Learn more about: Add an event"
title: "Add an event"
ms.date: "11/12/2018"
f1_keywords: ["vc.codewiz.event.overview"]
helpviewer_keywords: ["ActiveX controls [C++], adding events to", "MFC ActiveX controls [C++], adding events", "events [C++], ActiveX controls", "add event wizard [C++]"]
ms.assetid: fe34832a-edfc-4f86-aacb-8df77001873d
---
# Add an event

From Class View, you can add an event using the [add event wizard](#add-event-wizard) only to the control class in your [MFC ActiveX control](../mfc/reference/creating-an-mfc-activex-control.md) project. If you want to add an event to another type of project, use the **Events** button in the [Properties window](/visualstudio/ide/reference/properties-window).

**To add an event to your MFC ActiveX control project:**

1. In Class View, expand the project node to display the classes in the project.

1. Right-click the project's control class.

1. On the shortcut menu, choose **Add**, and then choose **Add Event** to display the Add Event Wizard.

1. Provide the event information in the appropriate wizard boxes.

1. Select **Finish** to add the event to the project.

## In this section

- [Add event wizard](#add-event-wizard)

## Add event wizard

This wizard adds an event to an MFC ActiveX control project. You can specify your own event, customize a typical stock event, or select from a list of stock events.

- **Event name**

   Sets the name used by Automation clients to request an event from the class. Enter a name or select one from the list.

- **Event type**

   Indicates the type of event to add. Available only if you select from the **Event name** list.

   |Option|Description|
   |------------|-----------------|
   |**Stock**|Specifies that a stock event, such as a button click, will be implemented for this class. Stock events are defined in the Microsoft Foundation Class (MFC) Library.|
   |**Custom**|Specifies that you're using your own implementation of the event.|

- **Internal name**

   Sets the name of the member function that sends the event. Available only for custom events. The name is based on **Event name**. You can change the internal name if you want to provide a name different than **Event name**.

- **Parameter type**

   Sets the type for the **Parameter name**. Select the type from the list.

- **Parameter name**

   Sets the name of a parameter to pass through your event. After typing the name, you must select **Add** to add it the list of parameters.

   Once you select **Add**, the parameter name appears in **Parameter list**.

   > [!NOTE]
   > If you supply a parameter name and then select **Finish** before you select **Add**, then the parameter isn't added to the event. You must find the method and insert the parameter manually.

- **Add**

   Adds the parameter you specify in **Parameter name**, and its type, to **Parameter list**. Select **Add** to add a parameter to the list.

- **Remove**

   Removes the parameter you select in **Parameter list** from the list.

- **Parameter list**

   Displays all parameters and their types currently added for the method. As you add parameters, the wizard updates **Parameter list** to display each parameter with its type.
