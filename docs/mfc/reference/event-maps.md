---
description: "Learn more about: Event Maps"
title: "Event Maps"
ms.date: "09/07/2019"
helpviewer_keywords: ["event maps [MFC]"]
ms.assetid: 1ed53aee-bc53-43cd-834a-6fb935c0d29b
---
# Event Maps

Whenever a control wishes to notify its container that some action (determined by the control developer) has happened (such as a keystroke, mouse click, or a change to the control's state) it calls an event-firing function. This function notifies the control container that some important action has occurred by firing the related event.

The Microsoft Foundation Class Library offers a programming model optimized for firing events. In this model, "event maps" are used to designate which functions fire which events for a particular control. Event maps contain one macro for each event. For example, an event map that fires a stock Click event might look like this:

[!code-cpp[NVC_MFCAxCtl#16](../../mfc/reference/codesnippet/cpp/event-maps_1.cpp)]

The `EVENT_STOCK_CLICK` macro indicates that the control will fire a stock Click event every time it detects a mouse click. For a more detailed listing of other stock events, see the article [ActiveX Controls: Events](../../mfc/mfc-activex-controls-events.md). Macros are also available to indicate custom events.

Although event-map macros are important, you generally do not insert them directly. This is because the **Properties** window (in **Class View**) automatically creates event-map entries in your source files when you use it to associate event-firing functions with events. Any time you want to edit or add an event-map entry, you can use the **Properties** window.

To support event maps, MFC provides the following macros:

## Event Map macros

### Event Map Declaration and Demarcation

|Name|Description|
|-|-|
|[DECLARE_EVENT_MAP](#declare_event_map)|Declares that an event map will be used in a class to map events to event-firing functions (must be used in the class declaration).|
|[BEGIN_EVENT_MAP](#begin_event_map)|Begins the definition of an event map (must be used in the class implementation).|
|[END_EVENT_MAP](#end_event_map)|Ends the definition of an event map (must be used in the class implementation).|

### Event Mapping Macros

|Name|Description|
|-|-|
|[EVENT_CUSTOM](#event_custom)|Indicates which event-firing function will fire the specified event.|
|[EVENT_CUSTOM_ID](#event_custom_id)|Indicates which event-firing function will fire the specified event, with a designated dispatch ID.|

### Message Mapping Macros

|Name|Description|
|-|-|
|[ON_OLEVERB](#on_oleverb)|Indicates a custom verb handled by the OLE control.|
|[ON_STDOLEVERB](#on_stdoleverb)|Overrides a standard verb mapping of the OLE control.|

## <a name="declare_event_map"></a> DECLARE_EVENT_MAP

Each `COleControl`-derived class in your program can provide an event map to specify the events your control will fire.

```cpp
DECLARE_EVENT_MAP()
```

### Remarks

Use the DECLARE_EVENT_MAP macro at the end of your class declaration. Then, in the .cpp file that defines the member functions for the class, use the BEGIN_EVENT_MAP macro, macro entries for each of the control's events, and the END_EVENT_MAP macro to declare the end of the event list.

For more information on event maps, see the article [ActiveX Controls: Events](../../mfc/mfc-activex-controls-events.md).

### Requirements

**Header** afxctl.h

## <a name="begin_event_map"></a> BEGIN_EVENT_MAP

Begins the definition of your event map.

```cpp
BEGIN_EVENT_MAP(theClass,  baseClass)
```

### Parameters

*theClass*<br/>
Specifies the name of the control class whose event map this is.

*baseClass*<br/>
Specifies the name of the base class of *theClass*.

### Remarks

In the implementation (.cpp) file that defines the member functions for your class, start the event map with the BEGIN_EVENT_MAP macro, then add macro entries for each of your events, and complete the event map with the END_EVENT_MAP macro.

For more information on event maps and the BEGIN_EVENT_MAP macro, see the article [ActiveX Controls: Events](../../mfc/mfc-activex-controls-events.md).

### Requirements

**Header** afxctl.h

## <a name="end_event_map"></a> END_EVENT_MAP

Use the END_EVENT_MAP macro to end the definition of your event map.

```cpp
END_EVENT_MAP()
```

### Requirements

**Header** afxctl.h

## <a name="event_custom"></a> EVENT_CUSTOM

Defines an event-map entry for a custom event.

```cpp
EVENT_CUSTOM(pszName, pfnFire,  vtsParams)
```

### Parameters

*pszName*<br/>
The name of the event.

*pfnFire*<br/>
The name of the event firing function.

*vtsParams*<br/>
A space-separated list of one or more constants specifying the function's parameter list.

### Remarks

The *vtsParams* parameter is a space-separated list of values from the `VTS_` constants. One or more of these values separated by spaces (not commas) specifies the function's parameter list. For example:

[!code-cpp[NVC_MFCActiveXControl#13](../../mfc/codesnippet/cpp/event-maps_2.cpp)]

specifies a list containing a 32-bit integer representing an RGB color value, followed by a pointer to the `IFontDisp` interface of an OLE font object.

The `VTS_` constants and their meanings are as follows:

|Symbol|Parameter type|
|------------|--------------------|
|VTS_I2|**`short`**|
|VTS_I4|**`long`**|
|VTS_R4|**`float`**|
|VTS_R8|**`double`**|
|VTS_COLOR|OLE_COLOR|
|VTS_CY|CURRENCY|
|VTS_DATE|DATE|
|VTS_BSTR|**`const`** __char\*__|
|VTS_DISPATCH|LPDISPATCH|
|VTS_FONT|`IFontDispatch*`|
|VTS_HANDLE|HANDLE|
|VTS_SCODE|SCODE|
|VTS_BOOL|BOOL|
|VTS_VARIANT|`const VARIANT*`|
|VTS_PVARIANT|`VARIANT*`|
|VTS_UNKNOWN|LPUNKNOWN|
|VTS_OPTEXCLUSIVE|OLE_OPTEXCLUSIVE|
|VTS_PICTURE|`IPictureDisp*`|
|VTS_TRISTATE|OLE_TRISTATE|
|VTS_XPOS_PIXELS|OLE_XPOS_PIXELS|
|VTS_YPOS_PIXELS|OLE_YPOS_PIXELS|
|VTS_XSIZE_PIXELS|OLE_XSIZE_PIXELS|
|VTS_YSIZE_PIXELS|OLE_YSIZE_PIXELS|
|TS_XPOS_HIMETRIC|OLE_XPOS_HIMETRIC|
|VTS_YPOS_HIMETRIC|OLE_YPOS_HIMETRIC|
|VTS_XSIZE_HIMETRIC|OLE_XSIZE_HIMETRIC|
|VTS_YSIZE_HIMETRIC|OLE_YSIZE_HIMETRIC|

> [!NOTE]
> Additional variant constants have been defined for all variant types, with the exception of VTS_FONT and VTS_PICTURE, that provide a pointer to the variant data constant. These constants are named using the `VTS_Pconstantname` convention. For example, VTS_PCOLOR is a pointer to a VTS_COLOR constant.

### Requirements

**Header** afxctl.h

## <a name="event_custom_id"></a> EVENT_CUSTOM_ID

Defines an event firing function for a custom event belonging to the dispatch ID specified by *dispid*.

```cpp
EVENT_CUSTOM_ID(
    pszName,
    dispid,
    pfnFire,
    vtsParams)
```

### Parameters

*pszName*<br/>
The name of the event.

*dispid*<br/>
The dispatch ID used by the control when firing the event.

*pfnFire*<br/>
The name of the event firing function.

*vtsParams*<br/>
A variable list of parameters passed to the control container when the event is fired.

### Remarks

The *vtsParams* argument is a space-separated list of values from the `VTS_` constants. One or more of these values separated by spaces, not commas, specifies the function's parameter list. For example:

[!code-cpp[NVC_MFCActiveXControl#13](../../mfc/codesnippet/cpp/event-maps_2.cpp)]

specifies a list containing a 32-bit integer representing an RGB color value, followed by a pointer to the `IFontDisp` interface of an OLE font object.

For a list of the `VTS_` constants, see [EVENT_CUSTOM](#event_custom).

### Requirements

**Header** afxctl.h

## <a name="on_oleverb"></a> ON_OLEVERB

This macro defines a message map entry that maps a custom verb to a specific member function of your control.

```cpp
ON_OLEVERB(idsVerbName,  memberFxn)
```

### Parameters

*idsVerbName*<br/>
The string resource ID of the verb's name.

*memberFxn*<br/>
The function called by the framework when the verb is invoked.

### Remarks

The resource editor can be used to create custom verb names that are added to your string table.

The function prototype for *memberFxn* is:

```cpp
BOOL memberFxn(
   LPMSG    lpMsg,
   HWND     hWndParent,
   LPCRECT  lpRect);
```

The values of the *lpMsg*, *hWndParent*, and *lpRect* parameters are taken from the corresponding parameters of the `IOleObject::DoVerb` member function.

### Requirements

**Header** afxole.h

## <a name="on_stdoleverb"></a> ON_STDOLEVERB

Use this macro to override the default behavior of a standard verb.

```cpp
ON_STDOLEVERB(iVerb, memberFxn)
```

### Parameters

*iVerb*<br/>
The standard verb index for the verb being overridden.

*memberFxn*<br/>
The function called by the framework when the verb is invoked.

### Remarks

The standard verb index is of the form `OLEIVERB_`, followed by an action. OLEIVERB_SHOW, OLEIVERB_HIDE, and OLEIVERB_UIACTIVATE are some examples of standard verbs.

See [ON_OLEVERB](#on_oleverb) for a description of the function prototype to be used as the *memberFxn* parameter.

### Requirements

**Header** afxole.h

## See also

[Macros and Globals](../../mfc/reference/mfc-macros-and-globals.md)
