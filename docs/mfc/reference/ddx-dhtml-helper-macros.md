---
description: "Learn more about: DDX_DHtml Helper Macros"
title: "DDX_DHtml Helper Macros"
ms.date: "11/04/2016"
f1_keywords: ["AFXDHTML/DDX_DHtml_ElementValue", "AFXDHTML/DDX_DHtml_ElementInnerText", "AFXDHTML/DDX_DHtml_ElementInnerHtml", "AFXDHTML/DDX_DHtml_Anchor_Href", "AFXDHTML/DDX_DHtml_Anchor_Target", "AFXDHTML/DDX_DHtml_Img_Src", "AFXDHTML/DDX_DHtml_Frame_Src", "AFXDHTML/DDX_DHtml_IFrame_Src"]
helpviewer_keywords: ["macros [MFC], exchanging data with HMTL pages", "DDX macros [MFC]", "HTML pages [MFC], helper macros", "DDX (dialog data exchange), DHtml helper macros", "macros [MFC], DDX_DHtml helpers"]
ms.assetid: c46302d2-ea43-4fea-bfc2-6f590d99f267
---
# DDX_DHtml Helper Macros

The DDX_DHtml helper macros allow easy access to the commonly used properties of controls on an HTML page.

### Data Exchange Macros

|Name|Description|
|-|-|
|[DDX_DHtml_ElementValue](#ddx_dhtml_elementvalue)|Sets or retrieves the Value property from the selected control.|
|[DDX_DHtml_ElementInnerText](#ddx_dhtml_elementinnertext)|Sets or retrieves the text between the start and end tags of the current element.|
|[DDX_DHtml_ElementInnerHtml](#ddx_dhtml_elementinnerhtml)|Sets or retrieves the HTML between the start and end tags of the current element.|
|[DDX_DHtml_Anchor_Href](#ddx_dhtml_anchor_href)|Sets or retrieves the destination URL or anchor point.|
|[DDX_DHtml_Anchor_Target](#ddx_dhtml_anchor_target)|Sets or retrieves the target window or frame.|
|[DDX_DHtml_Img_Src](#ddx_dhtml_img_src)|Sets or retrieves the name of an image or a video clip in the document.|
|[DDX_DHtml_Frame_Src](#ddx_dhtml_frame_src)|Sets or retrieves the URL of the associated frame.|
|[DDX_DHtml_IFrame_Src](#ddx_dhtml_iframe_src)|Sets or retrieves the URL of the associated frame.|

## Requirements

**Header:** afxdhtml.h

## <a name="ddx_dhtml_anchor_href"></a> DDX_DHtml_Anchor_Href

Sets or retrieves the destination URL or anchor point.

```
DDX_DHtml_Anchor_Href(
    CDataExchange* dx,
    LPCTSTR name,
    CString& var)
```

#### Parameters

*dx*<br/>
A pointer to a [CDataExchange](../../mfc/reference/cdataexchange-class.md) object.

*name*<br/>
The value that you specified for the HTML control's ID parameter.

*var*<br/>
The value being exchanged.

### Remarks

This macro calls the [CDHtmlDialog::DDX_DHtml_ElementText](../../mfc/reference/cdhtmldialog-class.md#ddx_dhtml_elementtext) function using the DISPID_IHTMLANCHORELEMENT_HREF dispatch ID.

## <a name="ddx_dhtml_anchor_target"></a> DDX_DHtml_Anchor_Target

Sets or retrieves the target window or frame.

```
DDX_DHtml_Anchor_Target(
    CDataExchange* dx,
    LPCTSTR name,
    CString& var)
```

#### Parameters

*dx*<br/>
A pointer to a [CDataExchange](../../mfc/reference/cdataexchange-class.md) object.

*name*<br/>
The value that you specified for the HTML control's ID parameter.

*var*<br/>
The value being exchanged.

### Remarks

This macro calls the [CDHtmlDialog::DDX_DHtml_ElementText](../../mfc/reference/cdhtmldialog-class.md#ddx_dhtml_elementtext) function using the DISPID_IHTMLANCHORELEMENT_TARGET dispatch ID.

## <a name="ddx_dhtml_elementinnerhtml"></a> DDX_DHtml_ElementInnerHtml

Sets or retrieves the HTML between the start and end tags of the current element.

```
DDX_DHtml_ElementInnerHtml(
    CDataExchange* dx,
    LPCTSTR name,
    CString& var)
```

#### Parameters

*dx*<br/>
A pointer to a [CDataExchange](../../mfc/reference/cdataexchange-class.md) object.

*name*<br/>
The value that you specified for the HTML control's ID parameter.

*var*<br/>
The value being exchanged.

### Remarks

This macro calls the [CDHtmlDialog::DDX_DHtml_ElementText](../../mfc/reference/cdhtmldialog-class.md#ddx_dhtml_elementtext) function using the DISPID_IHTMLELEMENT_INNERHTML dispatch ID.

## <a name="ddx_dhtml_elementinnertext"></a> DDX_DHtml_ElementInnerText

Sets or retrieves the text between the start and end tags of the current element.

```
DDX_DHtml_ElementInnerText(
    CDataExchange* dx,
    LPCTSTR name,
    CString& var)
```

#### Parameters

*dx*<br/>
A pointer to a [CDataExchange](../../mfc/reference/cdataexchange-class.md) object.

*name*<br/>
The value that you specified for the HTML control's ID parameter.

*var*<br/>
The value being exchanged.

### Remarks

This macro calls the [CDHtmlDialog::DDX_DHtml_ElementText](../../mfc/reference/cdhtmldialog-class.md#ddx_dhtml_elementtext) function using the DISPID_IHTMLELEMENT_INNERTEXT dispatch ID.

## <a name="ddx_dhtml_elementvalue"></a> DDX_DHtml_ElementValue

Sets or retrieves the Value property from the selected control.

```
DDX_DHtml_ElementValue(
    CDataExchange* dx,
    LPCTSTR name,
    var)
```

#### Parameters

*dx*<br/>
A pointer to a [CDataExchange](../../mfc/reference/cdataexchange-class.md) object.

*name*<br/>
The value that you specified for the HTML control's ID parameter.

*var*<br/>
The value being exchanged. See *value* in [CDHtmlDialog::DDX_DHtml_ElementText](../../mfc/reference/cdhtmldialog-class.md#ddx_dhtml_elementtext).

### Remarks

This macro will only succeed when run on controls that have a Value property. Controls that have a Value property include edit boxes, list boxes, and combo boxes.

This macro calls the [CDHtmlDialog::DDX_DHtml_ElementText](../../mfc/reference/cdhtmldialog-class.md#ddx_dhtml_elementtext) function using the DISPID_A_VALUE dispatch ID.

## <a name="ddx_dhtml_frame_src"></a> DDX_DHtml_Frame_Src

Sets or retrieves the URL of the associated frame.

```
DDX_DHtml_Frame_Src(
    CDataExchange* dx,
    LPCTSTR name,
    CString& var)
```

#### Parameters

*dx*<br/>
A pointer to a [CDataExchange](../../mfc/reference/cdataexchange-class.md) object.

*name*<br/>
The value that you specified for the HTML control's ID parameter.

*var*<br/>
The value being exchanged.

### Remarks

This macro calls the [CDHtmlDialog::DDX_DHtml_ElementText](../../mfc/reference/cdhtmldialog-class.md#ddx_dhtml_elementtext) function using the DISPID_IHTMLFRAMEBASE_SRC dispatch ID.

## <a name="ddx_dhtml_iframe_src"></a> DDX_DHtml_IFrame_Src

Sets or retrieves the URL of the associated frame.

```
DDX_DHtml_IFrame_Src(
    CDataExchange* dx,
    LPCTSTR name,
    CString& var)
```

#### Parameters

*dx*<br/>
A pointer to a [CDataExchange](../../mfc/reference/cdataexchange-class.md) object.

*name*<br/>
The value that you specified for the HTML control's ID parameter.

*var*<br/>
The value being exchanged.

### Remarks

This macro calls the [CDHtmlDialog::DDX_DHtml_ElementText](../../mfc/reference/cdhtmldialog-class.md#ddx_dhtml_elementtext) function using the DISPID_IHTMLFRAMEBASE_SRC dispatch ID.

## <a name="ddx_dhtml_img_src"></a> DDX_DHtml_Img_Src

Gets or retrieves the name of an image or a video clip in the document.

```
DDX_DHtml_Img_Src(
    CDataExchange* dx,
    LPCTSTR name,
    CString& var)
```

#### Parameters

*dx*<br/>
A pointer to a [CDataExchange](../../mfc/reference/cdataexchange-class.md) object.

*name*<br/>
The value that you specified for the HTML control's ID parameter.

*var*<br/>
The value being exchanged.

### Remarks

When using the DDX_DHtml_Img_Src macro to retrieve the src property for an IMAGE element, the Internet Explorer image object will return the fully escaped URL for the image source. For example, if you use the DDX_DHtml_Img_Src macro to set the src property of an IMAGE element to the string "some interesting picture," when you retrieve that property, Internet Explorer will return the string "res://d:\myapplication\myapp.exe/some%20interesting%20picture."

This macro calls the [CDHtmlDialog::DDX_DHtml_ElementText](../../mfc/reference/cdhtmldialog-class.md#ddx_dhtml_elementtext) function using the DISPID_IHTMLIMGELEMENT_SRC dispatch ID.

## See also

[CDHtmlDialog Class](../../mfc/reference/cdhtmldialog-class.md)
