---
description: "Learn more about: DHTML Event Maps"
title: "DHTML Event Maps"
ms.date: "11/04/2016"
f1_keywords: ["vc.macros.shared"]
helpviewer_keywords: ["event map macros [MFC]", "DHTML [MFC], event map macros", "macros [MFC], DHTML event map", "DHTML events [MFC], event map", "DHTML events [MFC]"]
ms.assetid: 9a2c8ae7-7216-4a5e-bc60-6b98695be0c6
---
# DHTML Event Maps

The following macros can be used to handle DHTML events.

## DHTML Event Map Macros

The following macros can be used to handle DHTML events in [CDHtmlDialog](../../mfc/reference/cdhtmldialog-class.md)-derived classes.

|Name|Description|
|-|-|
|[BEGIN_DHTML_EVENT_MAP](#begin_dhtml_event_map)|Marks the start of the DHTML event map.|
|[BEGIN_DHTML_EVENT_MAP_INLINE](#begin_dhtml_event_map_inline)|Marks the start of the DHTML event map.|
|[DECLARE_DHTML_EVENT_MAP](#declare_dhtml_event_map)|Declares the DHTML event map.|
|[DHTML_EVENT](#dhtml_event)|Used to handle an event at the document level for a single HTML element.|
|[DHTML_EVENT_AXCONTROL](#dhtml_event_axcontrol)|Used to handle an event fired by an ActiveX control.|
|[DHTML_EVENT_CLASS](#dhtml_event_class)|Used to handle an event at the document level for all HTML elements with a particular CSS class.|
|[DHTML_EVENT_ELEMENT](#dhtml_event_element)|Used to handle an event at the element level.|
|[DHTML_EVENT_ONAFTERUPDATE](#dhtml_event_onafterupdate)|Used to handle the `onafterupdate` event from an HTML element.|
|[DHTML_EVENT_ONBEFOREUPDATE](#dhtml_event_onbeforeupdate)|Used to handle the `onbeforeupdate` event from an HTML element.|
|[DHTML_EVENT_ONBLUR](#dhtml_event_onblur)|Used to handle the `onblur` event from an HTML element.|
|[DHTML_EVENT_ONCHANGE](#dhtml_event_onchange)|Used to handle the `onchange` event from an HTML element.|
|[DHTML_EVENT_ONCLICK](#dhtml_event_onclick)|Used to handle the `onclick` event from an HTML element.|
|[DHTML_EVENT_ONDATAAVAILABLE](#dhtml_event_ondataavailable)|Used to handle the `ondataavailable` event from an HTML element.|
|[DHTML_EVENT_ONDATASETCHANGED](#dhtml_event_ondatasetchanged)|Used to handle the `ondatasetchanged` event from an HTML element.|
|[DHTML_EVENT_ONDATASETCOMPLETE](#dhtml_event_ondatasetcomplete)|Used to handle the `ondatasetcomplete` event from an HTML element.|
|[DHTML_EVENT_ONDBLCLICK](#dhtml_event_ondblclick)|Used to handle the `ondblclick` event from an HTML element.|
|[DHTML_EVENT_ONDRAGSTART](#dhtml_event_ondragstart)|Used to handle the `ondragstart` event from an HTML element.|
|[DHTML_EVENT_ONERRORUPDATE](#dhtml_event_onerrorupdate)|Used to handle the `onerrorupdate` event from an HTML element.|
|[DHTML_EVENT_ONFILTERCHANGE](#dhtml_event_onfilterchange)|Used to handle the `onfilterchange` event from an HTML element.|
|[DHTML_EVENT_ONFOCUS](#dhtml_event_onfocus)|Used to handle the `onfocus` event from an HTML element.|
|[DHTML_EVENT_ONHELP](#dhtml_event_onhelp)|Used to handle the `onhelp` event from an HTML element.|
|[DHTML_EVENT_ONKEYDOWN](#dhtml_event_onkeydown)|Used to handle the `onkeydown` event from an HTML element.|
|[DHTML_EVENT_ONKEYPRESS](#dhtml_event_onkeypress)|Used to handle the `onkeypress` event from an HTML element.|
|[DHTML_EVENT_ONKEYUP](#dhtml_event_onkeyup)|Used to handle the `onkeyup` event from an HTML element.|
|[DHTML_EVENT_ONMOUSEDOWN](#dhtml_event_onmousedown)|Used to handle the `onmousedown` event from an HTML element.|
|[DHTML_EVENT_ONMOUSEMOVE](#dhtml_event_onmousemove)|Used to handle the `onmousemove` event from an HTML element.|
|[DHTML_EVENT_ONMOUSEOUT](#dhtml_event_onmouseout)|Used to handle the `onmouseout` event from an HTML element.|
|[DHTML_EVENT_ONMOUSEOVER](#dhtml_event_onmouseover)|Used to handle the `onmouseover` event from an HTML element.|
|[DHTML_EVENT_ONMOUSEUP](#dhtml_event_onmouseup)|Used to handle the `onmouseup` event from an HTML element.|
|[DHTML_EVENT_ONRESIZE](#dhtml_event_onresize)|Used to handle the `onresize` event from an HTML element.|
|[DHTML_EVENT_ONROWENTER](#dhtml_event_onrowenter)|Used to handle the `onrowenter` event from an HTML element.|
|[DHTML_EVENT_ONROWEXIT](#dhtml_event_onrowexit)|Used to handle the `onrowexit` event from an HTML element.|
|[DHTML_EVENT_ONSELECTSTART](#dhtml_event_onselectstart)|Used to handle the `onselectstart` event from an HTML element.|
|[DHTML_EVENT_TAG](#dhtml_event_tag)|Used to handle an event at the document level for all elements with a particular HTML tag.|
|[END_DHTML_EVENT_MAP](#end_dhtml_event_map)|Marks the end of the DHTML event map.|
|[END_DHTML_EVENT_MAP_INLINE](#end_dhtml_event_map_inline)|Marks the end of the DHTML event map. |

## URL Event Map Macros

The following macros can be used to handle DHTML events in [CMultiPageDHtmlDialog](../../mfc/reference/cmultipagedhtmldialog-class.md)-derived classes.

|Name|Description|
|-|-|
|[BEGIN_DHTML_URL_EVENT_MAP](#begin_dhtml_url_event_map)|Marks the start of the multipage DHTML and URL event map.|
|[BEGIN_EMBED_DHTML_EVENT_MAP](#begin_embed_dhtml_event_map)|Marks the start of an embedded DHTML event map.|
|[BEGIN_URL_ENTRIES](#begin_url_entries)|Marks the start of a URL event entry map.|
|[DECLARE_DHTML_URL_EVENT_MAP](#declare_dhtml_url_event_map)|Declares the multipage DHTML and URL event map.|
|[END_DHTML_URL_EVENT_MAP](#end_dhtml_url_event_map)|Marks the end of the multipage DHTML and URL event map.|
|[END_EMBED_DHTML_EVENT_MAP](#end_embed_dhtml_event_map)|Marks the end of an embedded DHTML event map.|
|[END_URL_ENTRIES](#end_url_entries)|Marks the end of a URL event entry map.|
|[URL_EVENT_ENTRY](#url_event_entry)|Maps a URL or HTML resource to a page in a multipage dialog.|

### Requirements

  **Header** afxdhtml.h

## <a name="begin_dhtml_event_map"></a> BEGIN_DHTML_EVENT_MAP

Marks the beginning of the DHTML event map when placed in the source file for the class identified by `className`.

```cpp
BEGIN_DHTML_EVENT_MAP(className)
```

### Parameters

*className*<br/>
The name of the class containing the DHTML event map. This class should derive directly or indirectly from [CDHtmlDialog](../../mfc/reference/cdhtmldialog-class.md) and include the [DECLARE_DHTML_EVENT_MAP](#declare_dhtml_event_map) macro within its class definition.

### Remarks

Add a DHTML event map to your class to provide information to `CDHtmlDialog` that can be used to route events fired by HTML elements or ActiveX controls in a web page to handler functions in your class.

Place the BEGIN_DHTML_EVENT_MAP macro in the class's implementation (.cpp) file followed by DHTML_EVENT macros for the events the class is to handle (for example, DHTML_EVENT_ONMOUSEOVER for mouseover events). Use the [END_DHTML_EVENT_MAP](#end_dhtml_event_map) macro to mark the end of the event map. These macros implement the following function:

`virtual const DHtmlEventMapEntry* GetDHtmlEventMap();`

### Requirements

  **Header** afxdhtml.h

## <a name="begin_dhtml_event_map_inline"></a> BEGIN_DHTML_EVENT_MAP_INLINE

Marks the beginning of the DHTML event map within the class definition for *className*.

```cpp
BEGIN_DHTML_EVENT_MAP_INLINE(className)
```

### Parameters

*className*<br/>
The name of the class containing the DHTML event map. This class should derive directly or indirectly from [CDHtmlDialog](../../mfc/reference/cdhtmldialog-class.md) and include the [DECLARE_DHTML_EVENT_MAP](#declare_dhtml_event_map) macro within its class definition.

### Remarks

Add a DHTML event map to your class to provide information to `CDHtmlDialog` that can be used to route events fired by HTML elements or ActiveX controls in a web page to handler functions in your class.

Place the BEGIN_DHTML_EVENT_MAP macro in the class's definition (.h) file followed by DHTML_EVENT macros for the events the class is to handle (for example, DHTML_EVENT_ONMOUSEOVER for mouseover events). Use the [END_DHTML_EVENT_MAP_INLINE](#end_dhtml_event_map_inline) macro to mark the end of the event map. These macros implement the following function:

`virtual const DHtmlEventMapEntry* GetDHtmlEventMap();`

### Requirements

  **Header** afxdhtml.h

## <a name="declare_dhtml_event_map"></a> DECLARE_DHTML_EVENT_MAP

Declares a DHTML event map in a class definition.

```cpp
DECLARE_DHTML_EVENT_MAP()
```

### Remarks

This macro is to be used in the definition of [CDHtmlDialog](../../mfc/reference/cdhtmldialog-class.md)-derived classes.

Use [BEGIN_DHTML_EVENT_MAP](#begin_dhtml_event_map) or [BEGIN_DHTML_EVENT_MAP_INLINE](#begin_dhtml_event_map_inline) to implement the map.

[DECLARE_DHTML_EVENT_MAP](#declare_dhtml_event_map) declares the following function:

`virtual const DHtmlEventMapEntry* GetDHtmlEventMap( );`

### Requirements

  **Header** afxdhtml.h

## <a name="dhtml_event"></a> DHTML_EVENT

Handles (at the document level) an event identified by *dispid* originated by the HTML element identified by *elemName*.

```cpp
DHTML_EVENT(dispid, elemName,  memberFxn)
```

### Parameters

*dispid*<br/>
The DISPID of the event to be handled.

*elemName*<br/>
An LPCWSTR holding the ID of the HTML element sourcing the event, or NULL to handle document events.

*memberFxn*<br/>
The handler function for the event.

### Remarks

Use this macro to add an entry to the [DHTML event map](#begin_dhtml_event_map_inline) in your class.

### Requirements

  **Header** afxdhtml.h

## <a name="dhtml_event_axcontrol"></a> DHTML_EVENT_AXCONTROL

Handles the event identified by *dispid* fired by the ActiveX control identified by *controlName*.

```cpp
DHTML_EVENT_AXCONTROL(dispid, controlName,  memberFxn)
```

### Parameters

*dispid*<br/>
The dispatch ID of the event to be handled.

*controlName*<br/>
An LPCWSTR holding the HTML ID of the control firing the event.

*memberFxn*<br/>
The handler function for the event.

### Remarks

Use this macro to add an entry to the [DHTML event map](#begin_dhtml_event_map_inline) in your class.

### Requirements

  **Header** afxdhtml.h

## <a name="dhtml_event_class"></a> DHTML_EVENT_CLASS

Handles (at the document level) an event identified by *dispid* originated by any HTML element with the CSS class identified by *elemName*.

```cpp
DHTML_EVENT_CLASS(dispid, elemName,  memberFxn)
```

### Parameters

*dispid*<br/>
The dispatch ID of the event to be handled.

*elemName*<br/>
An LPCWSTR holding the CSS class of the HTML elements sourcing the event.

*memberFxn*<br/>
The handler function for the event.

### Remarks

Use this macro to add an entry to the [DHTML event map](#begin_dhtml_event_map_inline) in your class.

### Requirements

  **Header** afxdhtml.h

## <a name="dhtml_event_element"></a> DHTML_EVENT_ELEMENT

Handles (at the element identified by *elemName*) an event identified by *dispid*.

```cpp
DHTML_EVENT_ELEMENT(dispid, elemName,  memberFxn)
```

### Parameters

*dispid*<br/>
The dispatch ID of the event to be handled.

*elemName*<br/>
An LPCWSTR holding the ID of the HTML element sourcing the event.

*memberFxn*<br/>
The handler function for the event.

### Remarks

Use this macro to add an entry to the [DHTML event map](#begin_dhtml_event_map_inline) in your class.

If this macro is used to handle nonbubbling events, the source of the event will be the element identified by *elemName*.

If this macro is used to handle bubbling events, the element identified by *elemName* may not be the source of the event (the source could be any element contained by *elemName*).

### Requirements

  **Header** afxdhtml.h

## <a name="dhtml_event_onafterupdate"></a> DHTML_EVENT_ONAFTERUPDATE

Handles (at the document level) the `onafterupdate` event originated by the HTML element identified by *elemName*.

```cpp
DHTML_EVENT_ONAFTERUPDATE(elemName, memberFxn)
```

### Parameters

*elemName*<br/>
An LPCWSTR holding the ID of the HTML element sourcing the event.

*memberFxn*<br/>
The handler function for the event.

### Remarks

Use this macro to add an entry to the [DHTML event map](#begin_dhtml_event_map_inline) in your class.

### Requirements

  **Header** afxdhtml.h

## <a name="dhtml_event_onbeforeupdate"></a> DHTML_EVENT_ONBEFOREUPDATE

Handles (at the document level) the `onbeforeupdate` event originated by the HTML element identified by *elemName*.

```cpp
DHTML_EVENT_ONBEFOREUPDATE(elemName, memberFxn)
```

### Parameters

*elemName*<br/>
An LPCWSTR holding the ID of the HTML element sourcing the event.

*memberFxn*<br/>
The handler function for the event.

### Remarks

Use this macro to add an entry to the [DHTML event map](#begin_dhtml_event_map_inline) in your class.

### Requirements

  **Header** afxdhtml.h

## <a name="dhtml_event_onblur"></a> DHTML_EVENT_ONBLUR

Handles (at the element level) the `onblur` event. This is a nonbubbling event.

```cpp
DHTML_EVENT_ONBLUR(elemName, memberFxn)
```

### Parameters

*elemName*<br/>
An LPCWSTR holding the ID of the HTML element sourcing the event.

*memberFxn*<br/>
The handler function for the event.

### Remarks

Use this macro to add an entry to the [DHTML event map](#begin_dhtml_event_map_inline) in your class.

### Requirements

  **Header** afxdhtml.h

## <a name="dhtml_event_onchange"></a> DHTML_EVENT_ONCHANGE

Handles (at the element level) the `onchange` event. This is a nonbubbling event.

```cpp
DHTML_EVENT_ONCHANGE(elemName, memberFxn)
```

### Parameters

*elemName*<br/>
An LPCWSTR holding the ID of the HTML element sourcing the event.

*memberFxn*<br/>
The handler function for the event.

### Remarks

Use this macro to add an entry to the [DHTML event map](#begin_dhtml_event_map_inline) in your class.

### Requirements

  **Header** afxdhtml.h

## <a name="dhtml_event_onclick"></a> DHTML_EVENT_ONCLICK

Handles (at the document level) the `onclick` event originated by the HTML element identified by *elemName*.

```cpp
DHTML_EVENT_ONCLICK(elemName, memberFxn)
```

### Parameters

*elemName*<br/>
An LPCWSTR holding the ID of the HTML element sourcing the event.

*memberFxn*<br/>
The handler function for the event.

### Remarks

Use this macro to add an entry to the [DHTML event map](#begin_dhtml_event_map_inline) in your class.

### Requirements

  **Header** afxdhtml.h

## <a name="dhtml_event_ondataavailable"></a> DHTML_EVENT_ONDATAAVAILABLE

Handles (at the document level) the `ondataavailable` event originated by the HTML element identified by *elemName*.

```cpp
DHTML_EVENT_ONDATAAVAILABLE(elemName, memberFxn)
```

### Parameters

*elemName*<br/>
An LPCWSTR holding the ID of the HTML element sourcing the event.

*memberFxn*<br/>
The handler function for the event.

### Remarks

Use this macro to add an entry to the [DHTML event map](#begin_dhtml_event_map_inline) in your class.

### Requirements

  **Header** afxdhtml.h

## <a name="dhtml_event_ondatasetchanged"></a> DHTML_EVENT_ONDATASETCHANGED

Handles (at the document level) the `ondatasetchanged` event originated by the HTML element identified by *elemName*.

```cpp
DHTML_EVENT_ONDATASETCHANGED(elemName, memberFxn)
```

### Parameters

*elemName*<br/>
An LPCWSTR holding the ID of the HTML element sourcing the event.

*memberFxn*<br/>
The handler function for the event.

### Remarks

Use this macro to add an entry to the [DHTML event map](#begin_dhtml_event_map_inline) in your class.

### Requirements

  **Header** afxdhtml.h

## <a name="dhtml_event_ondatasetcomplete"></a> DHTML_EVENT_ONDATASETCOMPLETE

Handles (at the document level) the `ondatasetcomplete` event originated by the HTML element identified by `elemName`.

```cpp
DHTML_EVENT_ONDATASETCOMPLETE(elemName, memberFxn)
```

### Parameters

*elemName*<br/>
An LPCWSTR holding the ID of the HTML element sourcing the event.

*memberFxn*<br/>
The handler function for the event.

### Remarks

Use this macro to add an entry to the [DHTML event map](#begin_dhtml_event_map_inline) in your class.

### Requirements

  **Header** afxdhtml.h

## <a name="dhtml_event_ondblclick"></a> DHTML_EVENT_ONDBLCLICK

Handles (at the document level) the `ondblclick` event originated by the HTML element identified by *elemName*.

```cpp
DHTML_EVENT_ONDBLCLICK(elemName, memberFxn)
```

### Parameters

*elemName*<br/>
An LPCWSTR holding the ID of the HTML element sourcing the event.

*memberFxn*<br/>
The handler function for the event.

### Remarks

Use this macro to add an entry to the [DHTML event map](#begin_dhtml_event_map_inline) in your class.

### Requirements

  **Header** afxdhtml.h

## <a name="dhtml_event_ondragstart"></a> DHTML_EVENT_ONDRAGSTART

Handles (at the document level) the `ondragstart` event originated by the HTML element identified by *elemName*.

```cpp
DHTML_EVENT_ONDRAGSTART(elemName, memberFxn)
```

### Parameters

*elemName*<br/>
An LPCWSTR holding the ID of the HTML element sourcing the event.

*memberFxn*<br/>
The handler function for the event.

### Remarks

Use this macro to add an entry to the [DHTML event map](#begin_dhtml_event_map_inline) in your class.

### Requirements

  **Header** afxdhtml.h

## <a name="dhtml_event_onerrorupdate"></a> DHTML_EVENT_ONERRORUPDATE

Handles (at the document level) the `onerrorupdate` event originated by the HTML element identified by *elemName*.

```cpp
DHTML_EVENT_ONERRORUPDATE(elemName, memberFxn)
```

### Parameters

*elemName*<br/>
An LPCWSTR holding the ID of the HTML element sourcing the event.

*memberFxn*<br/>
The handler function for the event.

### Remarks

Use this macro to add an entry to the [DHTML event map](#begin_dhtml_event_map_inline) in your class.

### Requirements

  **Header** afxdhtml.h

## <a name="dhtml_event_onfilterchange"></a> DHTML_EVENT_ONFILTERCHANGE

Handles (at the document level) the `onfilterchange` event originated by the HTML element identified by *elemName*.

```cpp
DHTML_EVENT_ONFILTERCHANGE(elemName, memberFxn)
```

### Parameters

*elemName*<br/>
An LPCWSTR holding the ID of the HTML element sourcing the event.

*memberFxn*<br/>
The handler function for the event.

### Remarks

Use this macro to add an entry to the [DHTML event map](#begin_dhtml_event_map_inline) in your class.

### Requirements

  **Header** afxdhtml.h

## <a name="dhtml_event_onfocus"></a> DHTML_EVENT_ONFOCUS

Handles (at the element level) the `onfocus` event. This is a nonbubbling event.

```cpp
DHTML_EVENT_ONFOCUS(elemName, memberFxn)
```

### Parameters

*elemName*<br/>
An LPCWSTR holding the ID of the HTML element sourcing the event.

*memberFxn*<br/>
The handler function for the event.

### Remarks

Use this macro to add an entry to the [DHTML event map](#begin_dhtml_event_map_inline) in your class.

### Requirements

  **Header** afxdhtml.h

## <a name="dhtml_event_onhelp"></a> DHTML_EVENT_ONHELP

Handles (at the document level) the `onhelp` event originated by the HTML element identified by *elemName*.

```cpp
DHTML_EVENT_ONHELP(elemName, memberFxn)
```

### Parameters

*elemName*<br/>
An LPCWSTR holding the ID of the HTML element sourcing the event.

*memberFxn*<br/>
The handler function for the event.

### Remarks

Use this macro to add an entry to the [DHTML event map](#begin_dhtml_event_map_inline) in your class.

### Requirements

  **Header** afxdhtml.h

## <a name="dhtml_event_onkeydown"></a> DHTML_EVENT_ONKEYDOWN

Handles (at the document level) the `onkeydown` event originated by the HTML element identified by *elemName*.

```cpp
DHTML_EVENT_ONKEYDOWN(elemName, memberFxn)
```

### Parameters

*elemName*<br/>
An LPCWSTR holding the ID of the HTML element sourcing the event.

*memberFxn*<br/>
The handler function for the event.

### Remarks

Use this macro to add an entry to the [DHTML event map](#begin_dhtml_event_map_inline) in your class.

### Requirements

  **Header** afxdhtml.h

## <a name="dhtml_event_onkeypress"></a> DHTML_EVENT_ONKEYPRESS

Handles (at the document level) the `onkeypress` event originated by the HTML element identified by *elemName*.

```cpp
DHTML_EVENT_ONKEYPRESS(elemName, memberFxn)
```

### Parameters

*elemName*<br/>
An LPCWSTR holding the ID of the HTML element sourcing the event.

*memberFxn*<br/>
The handler function for the event.

### Remarks

Use this macro to add an entry to the [DHTML event map](#begin_dhtml_event_map_inline) in your class.

### Requirements

  **Header** afxdhtml.h

## <a name="dhtml_event_onkeyup"></a> DHTML_EVENT_ONKEYUP

Handles (at the document level) the `onkeyup` event originated by the HTML element identified by *elemName*.

```cpp
DHTML_EVENT_ONKEYUP(elemName, memberFxn)
```

### Parameters

*elemName*<br/>
An LPCWSTR holding the ID of the HTML element sourcing the event.

*memberFxn*<br/>
The handler function for the event.

### Remarks

Use this macro to add an entry to the [DHTML event map](#begin_dhtml_event_map_inline) in your class.

### Requirements

  **Header** afxdhtml.h

## <a name="dhtml_event_onmousedown"></a> DHTML_EVENT_ONMOUSEDOWN

Handles (at the document level) the `onmousedown` event originated by the HTML element identified by *elemName*.

```cpp
DHTML_EVENT_ONMOUSEDOWN(elemName, memberFxn)
```

### Parameters

*elemName*<br/>
An LPCWSTR holding the ID of the HTML element sourcing the event.

*memberFxn*<br/>
The handler function for the event.

### Remarks

Use this macro to add an entry to the [DHTML event map](#begin_dhtml_event_map_inline) in your class.

### Requirements

  **Header** afxdhtml.h

## <a name="dhtml_event_onmousemove"></a> DHTML_EVENT_ONMOUSEMOVE

Handles (at the document level) the `onmousemove` event originated by the HTML element identified by *elemName*.

```cpp
DHTML_EVENT_ONMOUSEMOVE(elemName, memberFxn)
```

### Parameters

*elemName*<br/>
An LPCWSTR holding the ID of the HTML element sourcing the event.

*memberFxn*<br/>
The handler function for the event.

### Remarks

Use this macro to add an entry to the [DHTML event map](#begin_dhtml_event_map_inline) in your class.

### Requirements

  **Header** afxdhtml.h

## <a name="dhtml_event_onmouseout"></a> DHTML_EVENT_ONMOUSEOUT

Handles (at the document level) the `onmouseout` event originated by the HTML element identified by *elemName*.

```cpp
DHTML_EVENT_ONMOUSEOUT(elemName, memberFxn)
```

### Parameters

*elemName*<br/>
An LPCWSTR holding the ID of the HTML element sourcing the event.

*memberFxn*<br/>
The handler function for the event.

### Remarks

Use this macro to add an entry to the [DHTML event map](#begin_dhtml_event_map_inline) in your class.

### Requirements

  **Header** afxdhtml.h

## <a name="dhtml_event_onmouseover"></a> DHTML_EVENT_ONMOUSEOVER

Handles (at the document level) the `onmouseover` event originated by the HTML element identified by *elemName*.

```cpp
DHTML_EVENT_ONMOUSEOVER(elemName, memberFxn)
```

### Parameters

*elemName*<br/>
An LPCWSTR holding the ID of the HTML element sourcing the event.

*memberFxn*<br/>
The handler function for the event.

### Remarks

Use this macro to add an entry to the [DHTML event map](#begin_dhtml_event_map_inline) in your class.

### Requirements

  **Header** afxdhtml.h

## <a name="dhtml_event_onmouseup"></a> DHTML_EVENT_ONMOUSEUP

Handles (at the document level) the `onmouseup` event originated by the HTML element identified by *elemName*.

```cpp
DHTML_EVENT_ONMOUSEUP(elemName, memberFxn)
```

### Parameters

*elemName*<br/>
An LPCWSTR holding the ID of the HTML element sourcing the event.

*memberFxn*<br/>
The handler function for the event.

### Remarks

Use this macro to add an entry to the [DHTML event map](#begin_dhtml_event_map_inline) in your class.

### Requirements

  **Header** afxdhtml.h

## <a name="dhtml_event_onresize"></a> DHTML_EVENT_ONRESIZE

Handles (at the element level) the `onresize` event. This is a nonbubbling event.

```cpp
DHTML_EVENT_ONRESIZE(elemName, memberFxn)
```

### Parameters

*elemName*<br/>
An LPCWSTR holding the ID of the HTML element sourcing the event.

*memberFxn*<br/>
The handler function for the event.

### Remarks

Use this macro to add an entry to the [DHTML event map](#begin_dhtml_event_map_inline) in your class.

### Requirements

  **Header** afxdhtml.h

## <a name="dhtml_event_onrowenter"></a> DHTML_EVENT_ONROWENTER

Handles (at the document level) the `onrowenter` event originated by the HTML element identified by *elemName*.

```cpp
DHTML_EVENT_ONROWENTER(elemName, memberFxn)
```

### Parameters

*elemName*<br/>
An LPCWSTR holding the ID of the HTML element sourcing the event.

*memberFxn*<br/>
The handler function for the event.

### Remarks

Use this macro to add an entry to the [DHTML event map](#begin_dhtml_event_map_inline) in your class.

### Requirements

  **Header** afxdhtml.h

## <a name="dhtml_event_onrowexit"></a> DHTML_EVENT_ONROWEXIT

Handles (at the document level) the `onrowexit` event originated by the HTML element identified by *elemName*.

```cpp
DHTML_EVENT_ONROWEXIT(elemName, memberFxn)
```

### Parameters

*elemName*<br/>
An LPCWSTR holding the ID of the HTML element sourcing the event.

*memberFxn*<br/>
The handler function for the event.

### Remarks

Use this macro to add an entry to the [DHTML event map](#begin_dhtml_event_map_inline) in your class.

### Requirements

  **Header** afxdhtml.h

## <a name="dhtml_event_onselectstart"></a> DHTML_EVENT_ONSELECTSTART

Handles (at the document level) the `onselectstart` event originated by the HTML element identified by *elemName*.

```cpp
DHTML_EVENT_ONSELECTSTART(elemName, memberFxn)
```

### Parameters

*elemName*<br/>
An LPCWSTR holding the ID of the HTML element sourcing the event.

*memberFxn*<br/>
The handler function for the event.

### Remarks

Use this macro to add an entry to the [DHTML event map](#begin_dhtml_event_map_inline) in your class.

### Requirements

  **Header** afxdhtml.h

## <a name="dhtml_event_tag"></a> DHTML_EVENT_TAG

Handles (at the document level) an event identified by `dispid` originated by any HTML element with the HTML tag identified by *elemName*.

```cpp
DHTML_EVENT_TAG(dispid, elemName,  memberFxn)
```

### Parameters

*dispid*<br/>
The dispatch ID of the event to be handled.

*elemName*<br/>
The HTML tag of the HTML elements sourcing the event.

*memberFxn*<br/>
The handler function for the event.

### Remarks

Use this macro to add an entry to the [DHTML event map](#begin_dhtml_event_map_inline) in your class.

### Requirements

  **Header** afxdhtml.h

## <a name="end_dhtml_event_map"></a> END_DHTML_EVENT_MAP

Marks the end of the DHTML event map.

```cpp
END_DHTML_EVENT_MAP()
```

### Remarks

Must be used in conjunction with [BEGIN_DHTML_EVENT_MAP](#begin_dhtml_event_map).

### Requirements

  **Header** afxdhtml.h

## <a name="begin_dhtml_url_event_map"></a> BEGIN_DHTML_URL_EVENT_MAP

Starts the definition of a DHTML and URL event map in a multipage dialog.

```cpp
BEGIN_DHTML_URL_EVENT_MAP()
```

### Remarks

Put BEGIN_DHTML_URL_EVENT_MAP in the implementation file of your [CMultiPageDHtmlDialog](../../mfc/reference/cmultipagedhtmldialog-class.md)-derived class. Follow it with [embedded DHTML event maps](#begin_embed_dhtml_event_map) and [URL entries](#begin_url_entries), and then close it with [END_DHTML_URL_EVENT_MAP](#end_dhtml_url_event_map). Include the [DECLARE_DHTML_URL_EVENT_MAP](#declare_dhtml_url_event_map) macro within the class definition.

### Example

[!code-cpp[NVC_MFCDocView#196](../../mfc/codesnippet/cpp/dhtml-event-maps_1.cpp)]

### Requirements

  **Header** afxdhtml.h

## <a name="begin_embed_dhtml_event_map"></a> BEGIN_EMBED_DHTML_EVENT_MAP

Starts the definition of an embedded DHTML event map in a multipage dialog.

```cpp
BEGIN_EMBED_DHTML_EVENT_MAP(className, mapName)
```

### Parameters

*className*<br/>
The name of the class containing the event map. This class should derive directly or indirectly from [CMultiPageDHtmlDialog](../../mfc/reference/cmultipagedhtmldialog-class.md). The embedded DHTML event map must be inside a [DHTML and URL event map](#begin_dhtml_url_event_map)).

*mapName*<br/>
Specifies the page whose event map this is. This matches *mapName* in the [URL_EVENT_ENTRY](#url_event_entry) macro actually defining the URL or HTML resource.

### Remarks

Because a multipage DHTML dialog consists of multiple HTML pages, each of which can raise DHTML events, embedded event maps are used to map events to handlers on a per-page basis.

Embedded event maps within a DHTML and URL event map consist of a BEGIN_EMBED_DHTML_EVENT_MAP macro followed by [DHTML_EVENT](#dhtml_event) macros and an [END_EMBED_DHTML_EVENT_MAP](#end_embed_dhtml_event_map) macro.

Each embedded event map requires a corresponding [URL event entry](#url_event_entry) to map *mapName* (specified in BEGIN_EMBED_DHTML_EVENT_MAP) to a URL or HTML resource.

### Example

See the example in [BEGIN_DHTML_URL_EVENT_MAP](#begin_dhtml_url_event_map).

### Requirements

  **Header** afxdhtml.h

## <a name="begin_url_entries"></a> BEGIN_URL_ENTRIES

Starts the definition of a URL event entry map in a multipage dialog.

```cpp
BEGIN_URL_ENTRIES(className)
```

### Parameters

*className*<br/>
The name of the class containing the URL event entry map. This class should derive directly or indirectly from [CMultiPageDHtmlDialog](../../mfc/reference/cmultipagedhtmldialog-class.md). The URL event entry map must be inside a [DHTML and URL event map](#begin_dhtml_url_event_map)).

### Remarks

Because a multipage DHTML dialog consists of multiple HTML pages, URL event entries are used to map URLs or HTML resources to corresponding [embedded DHTML event maps](#begin_embed_dhtml_event_map). Put URL_EVENT_ENTRY macros between BEGIN_URL_ENTRIES and [END_URL_ENTRIES](#end_url_entries) macros.

### Example

See the example in [BEGIN_DHTML_URL_EVENT_MAP](#begin_dhtml_url_event_map).

### Requirements

  **Header** afxdhtml.h

## <a name="declare_dhtml_url_event_map"></a> DECLARE_DHTML_URL_EVENT_MAP

Declares a DHTML and URL event map in a class definition.

```cpp
DECLARE_DHTML_URL_EVENT_MAP()
```

### Remarks

This macro is to be used in the definition of [CMultiPageDHtmlDialog](../../mfc/reference/cmultipagedhtmldialog-class.md)-derived classes.

A DHTML and URL event map contains [embedded DHTML event maps](#begin_embed_dhtml_event_map) and [URL event entries](#begin_url_entries) to map DHTML events to handlers on a per-page basis. Use [BEGIN_DHTML_URL_EVENT_MAP](#begin_dhtml_url_event_map) to implement the map.

### Requirements

  **Header** afxdhtml.h

## <a name="end_dhtml_url_event_map"></a> END_DHTML_URL_EVENT_MAP

Marks the end of a DHTML and URL event map.

```cpp
END_DHTML_URL_EVENT_MAP(className)
```

### Parameters

*className*<br/>
The name of the class containing the event map. This class should derive directly or indirectly from [CMultiPageDHtmlDialog](../../mfc/reference/cmultipagedhtmldialog-class.md). This should match *className* in the corresponding [BEGIN_DHTML_URL_EVENT_MAP](#begin_dhtml_url_event_map) macro.

### Example

See the example in [BEGIN_DHTML_URL_EVENT_MAP](#begin_dhtml_url_event_map).

### Requirements

  **Header** afxdhtml.h

## <a name="end_embed_dhtml_event_map"></a> END_EMBED_DHTML_EVENT_MAP

Marks the end of an embedded DHTML event map.

```cpp
END_EMBED_DHTML_EVENT_MAP()
```

### Example

See the example in [BEGIN_DHTML_URL_EVENT_MAP](#begin_dhtml_url_event_map).

### Requirements

  **Header** afxdhtml.h

## <a name="end_url_entries"></a> END_URL_ENTRIES

Marks the end of a URL event entry map.

```cpp
END_URL_ENTRIES()
```

### Example

See the example in [BEGIN_DHTML_URL_EVENT_MAP](#begin_dhtml_url_event_map).

### Requirements

  **Header** afxdhtml.h

## <a name="url_event_entry"></a> URL_EVENT_ENTRY

Maps a URL or HTML resource to a page in a multipage dialog.

```cpp
URL_EVENT_ENTRY(className, url,  mapName)
```

### Parameters

*className*<br/>
The name of the class containing the URL event entry map. This class should derive directly or indirectly from [CMultiPageDHtmlDialog](../../mfc/reference/cmultipagedhtmldialog-class.md). The URL event entry map must be inside a [DHTML and URL event map](#begin_dhtml_url_event_map)).

*url*<br/>
The URL or HTML resource for the page.

*mapName*<br/>
Specifies the page whose URL is *url*. This matches *mapName* in the [BEGIN_EMBED_DHTML_EVENT_MAP](#begin_embed_dhtml_event_map) macro that maps events from this page.

### Remarks

If the page is an HTML resource, *url* must be the string representation of the resource's ID number (that is, "123", not 123 or ID_HTMLRES1).

The page identifier, *mapName*, is an arbitrary symbol used to link embedded DHTML event maps to URL event entry maps. It is limited in scope to the DHTML and URL event map.

### Example

See the example in [BEGIN_DHTML_URL_EVENT_MAP](#begin_dhtml_url_event_map).

### Requirements

  **Header** afxdhtml.h

## <a name="end_dhtml_event_map_inline"></a> END_DHTML_EVENT_MAP_INLINE

Marks the end of the DHTML event map.

### Syntax

```cpp
END_DHTML_EVENT_MAP_INLINE( )
```

### Remarks

Must be used in conjunction with [BEGIN_DHTML_EVENT_MAP_INLINE](#begin_dhtml_event_map_inline).

### Requirements

**Header:** afxdhtml.h

## See also

[Macros and Globals](mfc-macros-and-globals.md)
