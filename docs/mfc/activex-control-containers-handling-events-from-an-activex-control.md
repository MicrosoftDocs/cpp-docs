---
description: "Learn more about: ActiveX Control Containers: Handling Events from an ActiveX Control"
title: "ActiveX Control Containers: Handling Events from an ActiveX Control"
ms.date: "09/12/2018"
helpviewer_keywords: ["event handlers [MFC], ActiveX controls", "ActiveX control containers [MFC], event sinks", "event handling [MFC], ActiveX controls", "ON_EVENT macro [MFC]", "ActiveX controls [MFC], events [MFC]", "END_EVENTSINK_MAP macro, using", "events [MFC], ActiveX controls", "BEGIN_EVENTSINK_MAP macro"]
ms.assetid: f9c106db-052f-4e32-82ad-750646aa760b
---
# ActiveX Control Containers: Handling Events from an ActiveX Control

This article discusses using the **Properties** window (in **Class View**) to install event handlers for ActiveX controls in an ActiveX control container. The event handlers are used to receive notifications (from the control) of certain events and perform some action in response. This notification is called "firing" the event.

>[!IMPORTANT]
> ActiveX is a legacy technology that should not be used for new development. For more information about modern technologies that supersede ActiveX, see [ActiveX Controls](activex-controls.md).

> [!NOTE]
> This article uses a dialog-based ActiveX control container project named Container and an embedded control named Circ as examples in the procedures and code.

Using the Events button in the **Properties** window (in **Class View**), you can create a map of events that can occur in your ActiveX control container application. This map, called an "event sink map,'' is created and maintained by Visual C++ when you add event handlers to the control container class. Each event handler, implemented with an event map entry, maps a specific event to a container event handler member function. This event handler function is called when the specified event is fired by the ActiveX control object.

For more information on event sink maps, see [Event Sink Maps](reference/event-sink-maps.md) in the *Class Library Reference*.

## <a name="_core_event_handler_modifications_to_the_project"></a> Event Handler Modifications to the Project

When you use the **Properties** window to add event handlers, an event sink map is declared and defined in your project. The following statements are added to the control .CPP file the first time an event handler is added. This code declares an event sink map for the dialog box class (in this case, `CContainerDlg`):

[!code-cpp[NVC_MFC_AxCont#8](codesnippet/cpp/activex-control-containers-handling-events-from-an-activex-control_1.cpp)]
[!code-cpp[NVC_MFC_AxCont#9](codesnippet/cpp/activex-control-containers-handling-events-from-an-activex-control_2.cpp)]

As you use the **Properties** window to add events, an event map entry (`ON_EVENT`) is added to the event sink map and an event handler function is added to the container's implementation (.CPP) file.

The following example declares an event handler, called `OnClickInCircCtrl`, for the Circ control's `ClickIn` event:

[!code-cpp[NVC_MFC_AxCont#10](codesnippet/cpp/activex-control-containers-handling-events-from-an-activex-control_3.cpp)]

In addition, the following template is added to the `CContainerDlg` class implementation (.CPP) file for the event handler member function:

[!code-cpp[NVC_MFC_AxCont#11](codesnippet/cpp/activex-control-containers-handling-events-from-an-activex-control_4.cpp)]

For more information on event sink macros, see [Event Sink Maps](reference/event-sink-maps.md) in the *Class Library Reference*.

#### To create an event handler function

1. From Class View, select the dialog class that contains the ActiveX control. For this example, use `CContainerDlg`.

1. In the **Properties** window, click the **Events** button.

1. In the **Properties** window, select the control ID of the embedded ActiveX control. For this example, use `IDC_CIRCCTRL1`.

   The **Properties** window displays a list of events that can be fired by the embedded ActiveX control. Any member function shown in bold already has handler functions assigned to it.

1. Select the event you want the dialog class to handle. For this example, select **Click**.

1. From the drop-down list box on the right, select **\<Add> ClickCircctrl1**.

1. Double-click the new handler function from Class View to jump to the event handler code in the implementation (.CPP) file of `CContainerDlg`.

## See also

[ActiveX Control Containers](activex-control-containers.md)
