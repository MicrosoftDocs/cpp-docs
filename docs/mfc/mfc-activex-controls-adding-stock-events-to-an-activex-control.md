---
description: "Learn more about: MFC ActiveX Controls: Adding Stock Events to an ActiveX Control"
title: "MFC ActiveX Controls: Adding Stock Events to an ActiveX Control"
ms.date: "11/04/2016"
f1_keywords: ["EVENT__STOCK_ERROR", "EVENT__STOCK_READYSTATECHANGE", "ReadyStateChange", "EVENT__STOCK_MOUSEMOVE", "EVENT__STOCK_MOUSEUP", "EVENT__STOCK_DBLCLICK", "KeyPress", "EVENT__STOCK_KEYDOWN", "EVENT__STOCK", "EVENT__STOCK_MOUSEDOWN", "EVENT__STOCK_KEYPRESS", "EVENT__STOCK_CLICK", "EVENT__STOCK_KEYUP"]
helpviewer_keywords: ["MFC ActiveX controls [MFC], events", "KeyPress event", "FireDblClick event", "FireMouseDown event", "events [MFC], stock", "FireKeyPress event", "EVENT_STOCK_MOUSEMOVE event", "EVENT_STOCK_CLICK event", "FireClick event", "FireKeyUp event", "FireMouseUp event", "EVENT_STOCK_ERROREVENT event", "EVENT_STOCK_KEYDOWN event", "EVENT_STOCK_MOUSEDOWN event", "EVENT_STOCK_KEYPRESS macro [MFC]", "EVENT_STOCK_KEYUP event", "EVENT_STOCK_DBLCLICK event", "FireError event", "FireKeyDown event", "ReadyStateChange event", "EVENT_STOCK_MOUSEUP event", "FireMouseMove event", "EVENT_STOCK prefix", "EVENT_STOCK_READYSTATECHANGE event", "EVENT_STOCK_KEYPRESS event"]
ms.assetid: 3eeadc67-4b3d-4444-8caa-53054073988a
---
# MFC ActiveX Controls: Adding Stock Events to an ActiveX Control

Stock events differ from custom events in that they are automatically fired by class [COleControl](reference/colecontrol-class.md). `COleControl` contains predefined member functions that fire events resulting from common actions. Some common actions implemented by `COleControl` include single- and double-clicks on the control, keyboard events, and changes in the state of the mouse buttons. Event map entries for stock events are always preceded by the EVENT_STOCK prefix.

## <a name="_core_stock_events_supported_by_classwizard"></a> Stock Events Supported by the Add Event Wizard

The `COleControl` class provides ten stock events, listed in the following table. You can specify the events you want in your control using the [Add Event Wizard](../ide/adding-an-event-visual-cpp.md#add-event-wizard).

### Stock Events

|Event|Firing function|Comments|
|-----------|---------------------|--------------|
|Click|**void FireClick( )**|Fired when the control captures the mouse, any **BUTTONUP** (left, middle, or right) message is received, and the button is released over the control. The stock MouseDown and MouseUp events occur before this event.<br /><br /> Event map entry: **EVENT_STOCK_CLICK( )**|
|DblClick|**void FireDblClick( )**|Similar to Click but fired when a **BUTTONDBLCLK** message is received.<br /><br /> Event map entry: **EVENT_STOCK_DBLCLICK( )**|
|Error|**void FireError( SCODE**  *scode* **, LPCSTR**  `lpszDescription` **, UINT**  `nHelpID`  **= 0 )**|Fired when an error occurs within your ActiveX control outside of the scope of a method call or property access.<br /><br /> Event map entry: **EVENT_STOCK_ERROREVENT( )**|
|KeyDown|**void FireKeyDown( short**  `nChar` **, short**  `nShiftState`  **)**|Fired when a `WM_SYSKEYDOWN` or `WM_KEYDOWN` message is received.<br /><br /> Event map entry: **EVENT_STOCK_KEYDOWN( )**|
|KeyPress|**void FireKeyPress( short** <strong>\*</strong>  `pnChar`  **)**|Fired when a `WM_CHAR` message is received.<br /><br /> Event map entry: **EVENT_STOCK_KEYPRESS( )**|
|KeyUp|**void FireKeyUp( short**  `nChar` **, short**  `nShiftState`  **)**|Fired when a `WM_SYSKEYUP` or `WM_KEYUP` message is received.<br /><br /> Event map entry: **EVENT_STOCK_KEYUP( )**|
|MouseDown|**void FireMouseDown( short**  `nButton` **, short**  `nShiftState` **, float**  *x* **, float**  *y*  **)**|Fired if any **BUTTONDOWN** (left, middle, or right) is received. The mouse is captured immediately before this event is fired.<br /><br /> Event map entry: **EVENT_STOCK_MOUSEDOWN( )**|
|MouseMove|**void FireMouseMove( short**  `nButton` **, short**  `nShiftState` **, float**  *x* **, float**  *y*  **)**|Fired when a WM_MOUSEMOVE message is received.<br /><br /> Event map entry: **EVENT_STOCK_MOUSEMOVE( )**|
|MouseUp|**void FireMouseUp( short**  `nButton` **, short**  `nShiftState` **, float**  *x* **, float**  *y*  **)**|Fired if any **BUTTONUP** (left, middle, or right) is received. The mouse capture is released before this event is fired.<br /><br /> Event map entry: **EVENT_STOCK_MOUSEUP( )**|
|ReadyStateChange|**void FireReadyStateChange( )**|Fired when a control transitions to the next ready state due to the amount of data received.<br /><br /> Event map entry: **EVENT_STOCK_READYSTATECHANGE( )**|

## <a name="_core_adding_a_stock_event_using_classwizard"></a> Adding a Stock Event Using the Add Event Wizard

Adding stock events requires less work than adding custom events because the firing of the actual event is handled automatically by the base class, `COleControl`. The following procedure adds a stock event to a control that was developed using [MFC ActiveX Control Wizard](reference/mfc-activex-control-wizard.md). The event, called KeyPress, fires when a key is pressed and the control is active. This procedure can also be used to add other stock events. Substitute the selected stock event name for KeyPress.

#### To add the KeyPress stock event using the Add Event Wizard

1. Load your control's project.

1. In Class View, right-click your ActiveX control class to open the shortcut menu.

1. From the shortcut menu, click **Add** and then click **Add Event**.

   This opens the Add Event Wizard.

1. In the **Event Name** drop-down list, select `KeyPress`.

1. Click **Finish**.

## <a name="_core_classwizard_changes_for_stock_events"></a> Add Event Wizard Changes for Stock Events

Because stock events are handled by the control's base class, the Add Event Wizard does not change your class declaration in any way. It adds the event to the control's event map and makes an entry in its .IDL file. The following line is added to the control's event map, located in the control class implementation (.CPP) file:

[!code-cpp[NVC_MFC_AxUI#5](codesnippet/cpp/mfc-activex-controls-adding-stock-events-to-an-activex-control_1.cpp)]

Adding this code fires a KeyPress event when a WM_CHAR message is received and the control is active. The KeyPress event can be fired at other times by calling its firing function (for example, `FireKeyPress`) from within the control code.

The Add Event Wizard adds the following line of code to the control's .IDL file:

[!code-cpp[NVC_MFC_AxUI#6](codesnippet/cpp/mfc-activex-controls-adding-stock-events-to-an-activex-control_2.idl)]

This line associates the KeyPress event with its standard dispatch ID and allows the container to anticipate the KeyPress event.

## See also

[MFC ActiveX Controls](mfc-activex-controls.md)<br/>
[MFC ActiveX Controls: Methods](mfc-activex-controls-methods.md)<br/>
[COleControl Class](reference/colecontrol-class.md)
