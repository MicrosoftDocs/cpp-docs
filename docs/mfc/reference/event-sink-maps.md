---
description: "Learn more about: Event Sink Maps"
title: "Event Sink Maps"
ms.date: "11/04/2016"
helpviewer_keywords: ["event sink maps [MFC]"]
ms.assetid: a9757eb2-5f4a-45ec-a2cd-ce5eec85b16f
---
# Event Sink Maps

When an embedded OLE control fires an event, the control's container receives the event using a mechanism, called an "event sink map," supplied by MFC. This event sink map designates handler functions for each specific event, as well as parameters of those events. For more information on event sink maps, see the article [ActiveX Control Containers](../../mfc/activex-control-containers.md).

### Event Sink Maps

|Name|Description|
|-|-|
|[BEGIN_EVENTSINK_MAP](#begin_eventsink_map)|Starts the definition of an event sink map.|
|[DECLARE_EVENTSINK_MAP](#declare_eventsink_map)|Declares an event sink map.|
|[END_EVENTSINK_MAP](#end_eventsink_map)|Ends the definition of an event sink map.|
|[ON_EVENT](#on_event)|Defines an event handler for a specific event.|
|[ON_EVENT_RANGE](#on_event_range)|Defines an event handler for a specific event fired from a set of OLE controls.|
|[ON_EVENT_REFLECT](#on_event_reflect)|Receives events fired by the control before they are handled by the control's container.|
|[ON_PROPNOTIFY](#on_propnotify)|Defines a handler for handling property notifications from an OLE control.|
|[ON_PROPNOTIFY_RANGE](#on_propnotify_range)|Defines a handler for handling property notifications from a set of OLE controls.|
|[ON_PROPNOTIFY_REFLECT](#on_propnotify_reflect)|Receives property notifications sent by the control before they are handled by the control's container.|

## <a name="begin_eventsink_map"></a> BEGIN_EVENTSINK_MAP

Begins the definition of your event sink map.

```
BEGIN_EVENTSINK_MAP(theClass, baseClass)
```

### Parameters

*theClass*<br/>
Specifies the name of the control class whose event sink map this is.

*baseClass*<br/>
Specifies the name of the base class of *theClass*.

### Remarks

In the implementation (.cpp) file that defines the member functions for your class, start the event sink map with the BEGIN_EVENTSINK_MAP macro, then add macro entries for each event to be notified of, and complete the event sink map with the END_EVENTSINK_MAP macro.

For more information on event sink maps and OLE control containers, see the article [ActiveX Control Containers](../../mfc/activex-control-containers.md).

### Requirements

  **Header** afxdisp.h

## <a name="declare_eventsink_map"></a> DECLARE_EVENTSINK_MAP

An OLE container can provide an event sink map to specify the events your container will be notified of.

```
DECLARE_EVENTSINK_MAP()
```

### Remarks

Use the DECLARE_EVENTSINK_MAP macro at the end of your class declaration. Then, in the .CPP file that defines the member functions for the class, use the BEGIN_EVENTSINK_MAP macro, macro entries for each of the events to be notified of, and the END_EVENTSINK_MAP macro to declare the end of the event sink list.

For more information on event sink maps, see the article [ActiveX Control Containers](../../mfc/activex-control-containers.md).

### Requirements

  **Header** afxwin.h

## <a name="end_eventsink_map"></a> END_EVENTSINK_MAP

Ends the definition of your event sink map.

```
END_EVENTSINK_MAP()
```

### Requirements

  **Header** afxdisp.h

## <a name="on_event"></a> ON_EVENT

Use the ON_EVENT macro to define an event handler function for an event fired by an OLE control.

```
ON_EVENT(theClass, id, dispid, pfnHandler,  vtsParams)
```

### Parameters

*theClass*<br/>
The class to which this event sink map belongs.

*id*<br/>
The control ID of the OLE control.

*dispid*<br/>
The dispatch ID of the event fired by the control.

*pfnHandler*<br/>
Pointer to a member function that handles the event. This function should have a BOOL return type, and parameter types that match the event's parameters (see *vtsParams*). The function should return TRUE to indicate the event was handled; otherwise FALSE.

*vtsParams*<br/>
A sequence of **VTS_** constants that specifies the types of the parameters for the event. These are the same constants that are used in dispatch map entries such as DISP_FUNCTION.

### Remarks

The *vtsParams* argument is a space-separated list of values from the **VTS_** constants. One or more of these values separated by spaces (not commas) specifies the function's parameter list. For example:

[!code-cpp[NVC_MFCAutomation#11](../../mfc/codesnippet/cpp/event-sink-maps_1.cpp)]

specifies a list containing a short integer followed by a BOOL.

For a list of the **VTS_** constants, see [EVENT_CUSTOM](event-maps.md#event_custom).

### Requirements

  **Header** afxdisp.h

## <a name="on_event_range"></a> ON_EVENT_RANGE

Use the ON_EVENT_RANGE macro to define an event handler function for an event fired by any OLE control having a control ID within a contiguous range of IDs.

```
ON_EVENT_RANGE(theClass, idFirst, idLast, dispid, pfnHandler,  vtsParams)
```

### Parameters

*theClass*<br/>
The class to which this event sink map belongs.

*idFirst*<br/>
The control ID of the first OLE control in the range.

*idLast*<br/>
The control ID of the last OLE control in the range.

*dispid*<br/>
The dispatch ID of the event fired by the control.

*pfnHandler*<br/>
Pointer to a member function that handles the event. This function should have a BOOL return type, a first parameter of type UINT (for the control ID), and additional parameter types that match the event's parameters (see *vtsParams*). The function should return TRUE to indicate the event was handled; otherwise FALSE.

*vtsParams*<br/>
A sequence of **VTS_** constants that specifies the types of the parameters for the event. The first constant should be of type VTS_I4, for the control ID. These are the same constants that are used in dispatch map entries such as DISP_FUNCTION.

### Remarks

The *vtsParams* argument is a space-separated list of values from the **VTS_** constants. One or more of these values separated by spaces (not commas) specifies the function's parameter list. For example:

[!code-cpp[NVC_MFCAutomation#11](../../mfc/codesnippet/cpp/event-sink-maps_1.cpp)]

specifies a list containing a short integer followed by a BOOL.

For a list of the **VTS_** constants, see [EVENT_CUSTOM](event-maps.md#event_custom).

### Example

The following example demonstrates an event handler, for the MouseDown event, implemented for three controls ( IDC_MYCTRL1 through IDC_MYCTRL3). The event handler function, `OnRangeMouseDown`, is declared in the header file of the dialog class ( `CMyDlg`) as:

[!code-cpp[NVC_MFCAutomation#12](../../mfc/codesnippet/cpp/event-sink-maps_2.h)]

The code below is defined in the implementation file of the dialog class.

[!code-cpp[NVC_MFCAutomation#13](../../mfc/codesnippet/cpp/event-sink-maps_3.cpp)]

### Requirements

  **Header** afxdisp.h

## <a name="on_event_reflect"></a> ON_EVENT_REFLECT

The ON_EVENT_REFLECT macro, when used in the event sink map of an OLE control's wrapper class, receives events fired by the control before they are handled by the control's container.

```
ON_EVENT_REFLECT(theClass,  dispid, pfnHandler,  vtsParams)
```

### Parameters

*theClass*<br/>
The class to which this event sink map belongs.

*dispid*<br/>
The dispatch ID of the event fired by the control.

*pfnHandler*<br/>
Pointer to a member function that handles the event. This function should have a BOOL return type and parameter types that match the event's parameters (see *vtsParams*). The function should return TRUE to indicate the event was handled; otherwise FALSE.

*vtsParams*<br/>
A sequence of **VTS_** constants that specifies the types of the parameters for the event. These are the same constants that are used in dispatch map entries such as DISP_FUNCTION.

### Remarks

The *vtsParams* argument is a space-separated list of values from the **VTS_** constants.

One or more of these values separated by spaces (not commas) specifies the function's parameter list. For example:

[!code-cpp[NVC_MFCAutomation#11](../../mfc/codesnippet/cpp/event-sink-maps_1.cpp)]

specifies a list containing a short integer followed by a BOOL.

For a list of the **VTS_** constants, see [EVENT_CUSTOM](event-maps.md#event_custom).

### Requirements

  **Header** afxdisp.h

## <a name="on_propnotify"></a> ON_PROPNOTIFY

Use the ON_PROPNOTIFY macro to define an event sink map entry for handling property notifications from an OLE control.

```
ON_PROPNOTIFY(theClass, id, dispid, pfnRequest, pfnChanged)
```

### Parameters

*theClass*<br/>
The class to which this event sink map belongs.

*id*<br/>
The control ID of the OLE control.

*dispid*<br/>
The dispatch ID of the property involved in the notification.

*pfnRequest*<br/>
Pointer to a member function that handles the `OnRequestEdit` notification for this property. This function should have a BOOL return type and a **BOOL**<strong>\*</strong> parameter. This function should set the parameter to TRUE to allow the property to change and FALSE to disallow. The function should return TRUE to indicate the notification was handled; otherwise FALSE.

*pfnChanged*<br/>
Pointer to a member function that handles the `OnChanged` notification for this property. The function should have a BOOL return type and a UINT parameter. The function should return TRUE to indicate that notification was handled; otherwise FALSE.

### Remarks

The *vtsParams* argument is a space-separated list of values from the **VTS_** constants. One or more of these values separated by spaces (not commas) specifies the function's parameter list. For example:

[!code-cpp[NVC_MFCAutomation#11](../../mfc/codesnippet/cpp/event-sink-maps_1.cpp)]

specifies a list containing a short integer followed by a BOOL.

For a list of the **VTS_** constants, see [EVENT_CUSTOM](event-maps.md#event_custom).

## <a name="on_propnotify_range"></a> ON_PROPNOTIFY_RANGE

Use the ON_PROPNOTIFY_RANGE macro to define an event sink map entry for handling property notifications from any OLE control having a control ID within a contiguous range of IDs.

```

ON_PROPNOTIFY_RANGE(theClass, idFirst, idLast, dispid, pfnRequest, pfnChanged)
```

### Parameters

*theClass*<br/>
The class to which this event sink map belongs.

*idFirst*<br/>
The control ID of the first OLE control in the range.

*idLast*<br/>
The control ID of the last OLE control in the range.

*dispid*<br/>
The dispatch ID of the property involved in the notification.

*pfnRequest*<br/>
Pointer to a member function that handles the `OnRequestEdit` notification for this property. This function should have a `BOOL` return type and `UINT` and `BOOL*` parameters. The function should set the parameter to TRUE to allow the property to change and FALSE to disallow. The function should return TRUE to indicate that notification was handled; otherwise FALSE.

*pfnChanged*<br/>
Pointer to a member function that handles the `OnChanged` notification for this property. The function should have a `BOOL` return type and a `UINT` parameter. The function should return TRUE to indicate that notification was handled; otherwise FALSE.

### Requirements

  **Header** afxdisp.h

## <a name="on_propnotify_reflect"></a> ON_PROPNOTIFY_REFLECT

The ON_PROPNOTIFY_REFLECT macro, when used in the event sink map of an OLE control's wrapper class, receives property notifications sent by the control before they are handled by the control's container.

```

ON_PROPNOTIFY_REFLECT(theClass, dispid, pfnRequest, pfnChanged)
```

### Parameters

*theClass*<br/>
The class to which this event sink map belongs.

*dispid*<br/>
The dispatch ID of the property involved in the notification.

*pfnRequest*<br/>
Pointer to a member function that handles the `OnRequestEdit` notification for this property. This function should have a BOOL return type and a **BOOL**<strong>\*</strong> parameter. This function should set the parameter to TRUE to allow the property to change and FALSE to disallow. The function should return TRUE to indicate the notification was handled; otherwise FALSE.

*pfnChanged*<br/>
Pointer to a member function that handles the `OnChanged` notification for this property. The function should have a BOOL return type and no parameters. The function should return TRUE to indicate the notification was handled; otherwise FALSE.

### Requirements

  **Header** afxdisp.h

## See also

[Macros and Globals](../../mfc/reference/mfc-macros-and-globals.md)
