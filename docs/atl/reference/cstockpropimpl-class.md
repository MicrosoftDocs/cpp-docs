---
description: "Learn more about: CStockPropImpl Class"
title: "CStockPropImpl Class"
ms.date: "05/06/2019"
f1_keywords: ["CStockPropImpl", "ATLCTL/ATL::CStockPropImpl", "ATLCTL/ATL::get_Appearance", "ATLCTL/ATL::get_AutoSize", "ATLCTL/ATL::get_BackColor", "ATLCTL/ATL::get_BackStyle", "ATLCTL/ATL::get_BorderColor", "ATLCTL/ATL::get_BorderStyle", "ATLCTL/ATL::get_BorderVisible", "ATLCTL/ATL::get_BorderWidth", "ATLCTL/ATL::get_Caption", "ATLCTL/ATL::get_DrawMode", "ATLCTL/ATL::get_DrawStyle", "ATLCTL/ATL::get_DrawWidth", "ATLCTL/ATL::get_Enabled", "ATLCTL/ATL::get_FillColor", "ATLCTL/ATL::get_FillStyle", "ATLCTL/ATL::get_Font", "ATLCTL/ATL::get_ForeColor", "ATLCTL/ATL::get_HWND", "ATLCTL/ATL::get_MouseIcon", "ATLCTL/ATL::get_MousePointer", "ATLCTL/ATL::get_Picture", "ATLCTL/ATL::get_ReadyState", "ATLCTL/ATL::get_TabStop", "ATLCTL/ATL::get_Text", "ATLCTL/ATL::getvalid", "ATLCTL/ATL::get_Window", "ATLCTL/ATL::put_Appearance", "ATLCTL/ATL::put_AutoSize", "ATLCTL/ATL::put_BackColor", "ATLCTL/ATL::put_BackStyle", "ATLCTL/ATL::put_BorderColor", "ATLCTL/ATL::put_BorderStyle", "ATLCTL/ATL::put_BorderVisible", "ATLCTL/ATL::put_BorderWidth", "ATLCTL/ATL::put_Caption", "ATLCTL/ATL::put_DrawMode", "ATLCTL/ATL::put_DrawStyle", "ATLCTL/ATL::put_DrawWidth", "ATLCTL/ATL::put_Enabled", "ATLCTL/ATL::put_FillColor", "ATLCTL/ATL::put_FillStyle", "ATLCTL/ATL::put_Font", "ATLCTL/ATL::put_ForeColor", "ATLCTL/ATL::put_HWND", "ATLCTL/ATL::put_MouseIcon", "ATLCTL/ATL::put_MousePointer", "ATLCTL/ATL::put_Picture", "ATLCTL/ATL::put_ReadyState", "ATLCTL/ATL::put_TabStop", "ATLCTL/ATL::put_Text", "ATLCTL/ATL::putvalid", "ATLCTL/ATL::put_Window", "ATLCTL/ATL::putref_Font", "ATLCTL/ATL::putref_MouseIcon", "ATLCTL/ATL::putref_Picture"]
helpviewer_keywords: ["CStockPropImpl class", "controls [ATL], stock properties", "stock properties, ATL controls"]
ms.assetid: 45f11d7d-6580-4a0e-872d-3bc8b836cfda
---
# CStockPropImpl Class

This class provides methods for supporting stock property values.

> [!IMPORTANT]
> This class and its members cannot be used in applications that execute in the Windows Runtime.

## Syntax

```
template <
    class T,
    class InterfaceName,
    const IID* piid = &_ATL_IIDOF(InterfaceName),
    const GUID* plibid = &CComModule::m_libid,
    WORD wMajor = 1,
    WORD wMinor = 0,
    class tihclass = CcomTypeInfoHolder>
class ATL_NO_VTABLE CStockPropImpl :
    public IDispatchImpl<InterfaceName, piid, plibid, wMajor, wMinor, tihclass>
```

#### Parameters

*T*<br/>
The class implementing the control and deriving from `CStockPropImpl`.

*InterfaceName*<br/>
A dual interface exposing the stock properties.

*piid*<br/>
A pointer to the IID of `InterfaceName`.

*plibid*<br/>
A pointer to the LIBID of the type library containing the definition of `InterfaceName`.

*wMajor*<br/>
The major version of the type library. The default value is 1.

*wMinor*<br/>
The minor version of the type library. The default value is 0.

*tihclass*<br/>
The class used to manage the type information for *T*. The default value is `CComTypeInfoHolder`.

## Members

### Public Methods

|Name|Description|
|-|-|
|[get_Appearance](#get_appearance)|Call this method to get the paint style used by the control, for example, flat or 3D.|
|[get_AutoSize](#get_autosize)|Call this method to get the status of the flag that indicates if the control cannot be any other size.|
|[get_BackColor](#get_backcolor)|Call this method to get the control's background color.|
|[get_BackStyle](#get_backstyle)|Call this method to get the control's background style, either transparent or opaque.|
|[get_BorderColor](#get_bordercolor)|Call this method to get the control's border color.|
|[get_BorderStyle](#get_borderstyle)|Call this method to get the control's border style.|
|[get_BorderVisible](#get_bordervisible)|Call this method to get the status of the flag that indicates if the control's border is visible or not.|
|[get_BorderWidth](#get_borderwidth)|Call this method to get the width (in pixels) of the control's border.|
|[get_Caption](#get_caption)|Call this method to get the text specified in an object's caption.|
|[get_DrawMode](#get_drawmode)|Call this method to get the control's drawing mode, for example, XOR Pen or Invert Colors.|
|[get_DrawStyle](#get_drawstyle)|Call this method to get the control's drawing style, for example, solid, dashed, or dotted.|
|[get_DrawWidth](#get_drawwidth)|Call this method to get the drawing width (in pixels) used by the control's drawing methods.|
|[get_Enabled](#get_enabled)|Call this method to get the status of the flag that indicates if the control is enabled.|
|[get_FillColor](#get_fillcolor)|Call this method to get the control's fill color.|
|[get_FillStyle](#get_fillstyle)|Call this method to get the control's fill style, for example, solid, transparent, or cross-hatched.|
|[get_Font](#get_font)|Call this method to get a pointer to the control's font properties.|
|[get_ForeColor](#get_forecolor)|Call this method to get the control's foreground color.|
|[get_HWND](#get_hwnd)|Call this method to get the window handle associated with the control.|
|[get_MouseIcon](#get_mouseicon)|Call this method to get the picture properties of the graphic (icon, bitmap, or metafile) to be displayed when the mouse is over the control.|
|[get_MousePointer](#get_mousepointer)|Call this method to get the type of mouse pointer displayed when the mouse is over the control, for example, arrow, cross, or hourglass.|
|[get_Picture](#get_picture)|Call this method to get a pointer to the picture properties of a graphic (icon, bitmap, or metafile) to be displayed.|
|[get_ReadyState](#get_readystate)|Call this method to get the control's ready state, for example, loading or loaded.|
|[get_TabStop](#get_tabstop)|Call this method to get the flag that indicates if the control is a tab stop or not.|
|[get_Text](#get_text)|Call this method to get the text that is displayed with the control.|
|[getvalid](#get_valid)|Call this method to get the status of the flag that indicates if the control is valid or not.|
|[get_Window](#get_window)|Call this method to get the window handle associated with the control. Identical to [CStockPropImpl::get_HWND](#get_hwnd).|
|[put_Appearance](#put_appearance)|Call this method to set the paint style used by the control, for example, flat or 3D.|
|[put_AutoSize](#put_autosize)|Call this method to set the value of the flag that indicates if the control cannot be any other size.|
|[put_BackColor](#put_backcolor)|Call this method to set the control's background color.|
|[put_BackStyle](#put_backstyle)|Call this method to set the control's background style.|
|[put_BorderColor](#put_bordercolor)|Call this method to set the control's border color.|
|[put_BorderStyle](#put_borderstyle)|Call this method to set the control's border style.|
|[put_BorderVisible](#put_bordervisible)|Call this method to set the value of the flag that indicates if the control's border is visible or not.|
|[put_BorderWidth](#put_borderwidth)|Call this method to set the width of the control's border.|
|[put_Caption](#put_caption)|Call this method to set the text to be displayed with the control.|
|[put_DrawMode](#put_drawmode)|Call this method to set the control's drawing mode, for example, XOR Pen or Invert Colors.|
|[put_DrawStyle](#put_drawstyle)|Call this method to set the control's drawing style, for example, solid, dashed, or dotted.|
|[put_DrawWidth](#put_drawwidth)|Call this method to set the width (in pixels) used by the control's drawing methods.|
|[put_Enabled](#put_enabled)|Call this method to set the flag that indicates if the control is enabled.|
|[put_FillColor](#put_fillcolor)|Call this method to set the control's fill color.|
|[put_FillStyle](#put_fillstyle)|Call this method to set the control's fill style, for example, solid, transparent, or cross-hatched.|
|[put_Font](#put_font)|Call this method to set the control's font properties.|
|[put_ForeColor](#put_forecolor)|Call this method to set the control's foreground color.|
|[put_HWND](#put_hwnd)|This method returns E_FAIL.|
|[put_MouseIcon](#put_mouseicon)|Call this method to set the picture properties of the graphic (icon, bitmap, or metafile) to be displayed when the mouse is over the control.|
|[put_MousePointer](#put_mousepointer)|Call this method to set the type of mouse pointer displayed when the mouse is over the control, for example, arrow, cross, or hourglass.|
|[put_Picture](#put_picture)|Call this method to set the picture properties of a graphic (icon, bitmap, or metafile) to be displayed.|
|[put_ReadyState](#put_readystate)|Call this method to set the control's ready state, for example, loading or loaded.|
|[put_TabStop](#put_tabstop)|Call this method to set the value of the flag that indicates if the control is a tab stop or not.|
|[put_Text](#put_text)|Call this method to set the text that is displayed with the control.|
|[putvalid](#put_valid)|Call this method to set the flag that indicates if the control is valid or not.|
|[put_Window](#put_window)|This method calls [CStockPropImpl::put_HWND](#put_hwnd), which returns E_FAIL.|
|[putref_Font](#putref_font)|Call this method to set the control's font properties, with a reference count.|
|[putref_MouseIcon](#putref_mouseicon)|Call this method to set the picture properties of the graphic (icon, bitmap, or metafile) to be displayed when the mouse is over the control, with a reference count.|
|[putref_Picture](#putref_picture)|Call this method to set the picture properties of a graphic (icon, bitmap, or metafile) to be displayed, with a reference count.|

## Remarks

`CStockPropImpl` provides **put** and **get** methods for each stock property. These methods provide the code necessary to set or get the data member associated with each property and to notify and synchronize with the container when any property changes.

Visual Studio provides support for stock properties through its wizards. For more information about adding stock properties to a control, see the [ATL Tutorial](../../atl/active-template-library-atl-tutorial.md).

For backward compatibility, `CStockPropImpl` also exposes `get_Window` and `put_Window` methods that simply call `get_HWND` and `put_HWND`, respectively. The default implementation of `put_HWND` returns E_FAIL since HWND should be a read-only property.

The following properties also have a **putref** implementation:

- Font

- MouseIcon

- Picture

The same three stock properties require their corresponding data member to be of type `CComPtr` or some other class that provides correct interface reference counting by means of the assignment operator.

## Inheritance Hierarchy

`T`

[IDispatchImpl](../../atl/reference/idispatchimpl-class.md)

`CStockPropImpl`

## Requirements

**Header:** atlctl.h

## <a name="get_appearance"></a> CStockPropImpl::get_Appearance

Call this method to get the paint style used by the control, for example, flat or 3D.

```
HRESULT STDMETHODCALLTYPE get_Appearance(SHORT pnAppearance);
```

### Parameters

*pnAppearance*<br/>
Variable that receives the control's paint style.

### Return Value

Returns S_OK on success, or an error HRESULT on failure.

## <a name="get_autosize"></a> CStockPropImpl::get_AutoSize

Call this method to get the status of the flag that indicates if the control cannot be any other size.

```
HRESULT STDMETHODCALLTYPE get_Autosize(VARIANT_BOOL* pbAutoSize);
```

### Parameters

*pbAutoSize*<br/>
Variable that receives the flag status. TRUE indicates that the control cannot be any other size.

### Return Value

Returns S_OK on success, or an error HRESULT on failure.

## <a name="get_backcolor"></a> CStockPropImpl::get_BackColor

Call this method to get the control's background color.

```
HRESULT STDMETHODCALLTYPE get_BackColor(OLE_COLOR* pclrBackColor);
```

### Parameters

*pclrBackColor*<br/>
Variable that receives the control's background color.

### Return Value

Returns S_OK on success, or an error HRESULT on failure.

## <a name="get_backstyle"></a> CStockPropImpl::get_BackStyle

Call this method to get the control's background style, either transparent or opaque.

```
HRESULT STDMETHODCALLTYPE get_BackStyle(LONG* pnBackStyle);
```

### Parameters

*pnBackStyle*<br/>
Variable that receives the control's background style.

### Return Value

Returns S_OK on success, or an error HRESULT on failure.

## <a name="get_bordercolor"></a> CStockPropImpl::get_BorderColor

Call this method to get the control's border color.

```
HRESULT STDMETHODCALLTYPE get_BorderColor(OLE_COLOR* pclrBorderColor);
```

### Parameters

*pclrBorderColor*<br/>
Variable that receives the control's border color.

### Return Value

Returns S_OK on success, or an error HRESULT on failure.

## <a name="get_borderstyle"></a> CStockPropImpl::get_BorderStyle

Call this method to get the control's border style.

```
HRESULT STDMETHODCALLTYPE get_BorderStyle(LONG* pnBorderStyle);
```

### Parameters

*pnBorderStyle*<br/>
Variable that receives the control's border style.

### Return Value

Returns S_OK on success, or an error HRESULT on failure.

## <a name="get_bordervisible"></a> CStockPropImpl::get_BorderVisible

Call this method to get the status of the flag that indicates if the control's border is visible or not.

```
HRESULT STDMETHODCALLTYPE get_BorderVisible(VARIANT_BOOL* pbBorderVisible);
```

### Parameters

*pbBorderVisible*<br/>
Variable that receives the flag status. TRUE indicates that the control's border is visible.

### Return Value

Returns S_OK on success, or an error HRESULT on failure.

## <a name="get_borderwidth"></a> CStockPropImpl::get_BorderWidth

Call this method to get the width of the control's border.

```
HRESULT STDMETHODCALLTYPE get_BorderWidth(LONG* pnBorderWidth);
```

### Parameters

*pnBorderWidth*<br/>
Variable that receives the control's border width.

### Return Value

Returns S_OK on success, or an error HRESULT on failure.

## <a name="get_caption"></a> CStockPropImpl::get_Caption

Call this method to get the text specified in an object's caption.

```
HRESULT STDMETHODCALLTYPE get_Caption(BSTR* pbstrCaption);
```

### Parameters

*pbstrCaption*<br/>
The text to be displayed with the control.

### Return Value

Returns S_OK on success, or an error HRESULT on failure.

## <a name="get_drawmode"></a> CStockPropImpl::get_DrawMode

Call this method to get the control's drawing mode, for example, XOR Pen or Invert Colors.

```
HRESULT STDMETHODCALLTYPE get_DrawMode(LONG* pnDrawMode);
```

### Parameters

*pnDrawMode*<br/>
Variable that receives the control's drawing mode.

### Return Value

Returns S_OK on success, or an error HRESULT on failure.

## <a name="get_drawstyle"></a> CStockPropImpl::get_DrawStyle

Call this method to get the control's drawing style, for example, solid, dashed, or dotted.

```
HRESULT STDMETHODCALLTYPE get_DrawStyle(LONG* pnDrawStyle);
```

### Parameters

*pnDrawStyle*<br/>
Variable that receives the control's drawing style.

### Return Value

Returns S_OK on success, or an error HRESULT on failure.

## <a name="get_drawwidth"></a> CStockPropImpl::get_DrawWidth

Call this method to get the drawing width (in pixels) used by the control's drawing methods.

```
HRESULT STDMETHODCALLTYPE get_DrawWidth(LONG* pnDrawWidth);
```

### Parameters

*pnDrawWidth*<br/>
Variable that receives the control's width value, in pixels.

### Return Value

Returns S_OK on success, or an error HRESULT on failure.

## <a name="get_enabled"></a> CStockPropImpl::get_Enabled

Call this method to get the status of the flag that indicates if the control is enabled.

```
HRESULT STDMETHODCALLTYPE get_Enabled(VARIANT_BOOL* pbEnabled);
```

### Parameters

*pbEnabled*<br/>
Variable that receives the flag status. TRUE indicates that the control is enabled.

### Return Value

Returns S_OK on success, or an error HRESULT on failure.

## <a name="get_fillcolor"></a> CStockPropImpl::get_FillColor

Call this method to get the control's fill color.

```
HRESULT STDMETHODCALLTYPE get_FillColor(OLE_COLOR* pclrFillColor);
```

### Parameters

*pclrFillColor*<br/>
Variable that receives the control's fill color.

### Return Value

Returns S_OK on success, or an error HRESULT on failure.

## <a name="get_fillstyle"></a> CStockPropImpl::get_FillStyle

Call this method to get the control's fill style, for example, solid, transparent, or crosshatched.

```
HRESULT STDMETHODCALLTYPE get_FillStyle(LONG* pnFillStyle);
```

### Parameters

*pnFillStyle*<br/>
Variable that receives the control's fill style.

### Return Value

Returns S_OK on success, or an error HRESULT on failure.

## <a name="get_font"></a> CStockPropImpl::get_Font

Call this method to get a pointer to the control's font properties.

```
HRESULT STDMETHODCALLTYPE get_Font(IFontDisp** ppFont);
```

### Parameters

*ppFont*<br/>
Variable that receives a pointer to the control's font properties.

### Return Value

Returns S_OK on success, or an error HRESULT on failure.

## <a name="get_forecolor"></a> CStockPropImpl::get_ForeColor

Call this method to get the control's foreground color.

```
HRESULT STDMETHODCALLTYPE get_ForeColor(OLE_COLOR* pclrForeColor);
```

### Parameters

*pclrForeColor*<br/>
Variable that receives the controls foreground color.

### Return Value

Returns S_OK on success, or an error HRESULT on failure.

## <a name="get_hwnd"></a> CStockPropImpl::get_HWND

Call this method to get the window handle associated with the control.

```
HRESULT STDMETHODCALLTYPE get_HWND(LONG_PTR* phWnd);
```

### Parameters

*phWnd*<br/>
The window handle associated with the control.

### Return Value

Returns S_OK on success, or an error HRESULT on failure.

## <a name="get_mouseicon"></a> CStockPropImpl::get_MouseIcon

Call this method to get the picture properties of the graphic (icon, bitmap, or metafile) to be displayed when the mouse is over the control.

```
HRESULT STDMETHODCALLTYPE get_MouseIcon(IPictureDisp** ppPicture);
```

### Parameters

*ppPicture*<br/>
Variable that receives a pointer to the picture properties of the graphic.

### Return Value

Returns S_OK on success, or an error HRESULT on failure.

## <a name="get_mousepointer"></a> CStockPropImpl::get_MousePointer

Call this method to get the type of mouse pointer displayed when the mouse is over the control, for example, arrow, cross, or hourglass.

```
HRESULT STDMETHODCALLTYPE get_MousePointer(LONG* pnMousePointer);
```

### Parameters

*pnMousePointer*<br/>
Variable that receives the type of mouse pointer.

### Return Value

Returns S_OK on success, or an error HRESULT on failure.

## <a name="get_picture"></a> CStockPropImpl::get_Picture

Call this method to get a pointer to the picture properties of a graphic (icon, bitmap, or metafile) to be displayed.

```
HRESULT STDMETHODCALLTYPE get_Picture(IPictureDisp** ppPicture);
```

### Parameters

*ppPicture*<br/>
Variable that receives a pointer to the picture's properties. See [IPictureDisp](/windows/win32/api/ocidl/nn-ocidl-ipicturedisp) for more details.

### Return Value

Returns S_OK on success, or an error HRESULT on failure.

## <a name="get_readystate"></a> CStockPropImpl::get_ReadyState

Call this method to get the control's ready state, for example, loading or loaded.

```
HRESULT STDMETHODCALLTYPE get_ReadyState(LONG* pnReadyState);
```

### Parameters

*pnReadyState*<br/>
Variable that receives the control's ready state.

### Return Value

Returns S_OK on success, or an error HRESULT on failure.

## <a name="get_tabstop"></a> CStockPropImpl::get_TabStop

Call this method to get the status of the flag that indicates if the control is a tab stop or not.

```
HRESULT STDMETHODCALLTYPE get_TabStop(VARIANT_BOOL* pbTabStop);
```

### Parameters

*pbTabStop*<br/>
Variable that receives the flag status. TRUE indicates that the control is a tab stop.

### Return Value

Returns S_OK on success, or an error HRESULT on failure.

## <a name="get_text"></a> CStockPropImpl::get_Text

Call this method to get the text that is displayed with the control.

```
HRESULT STDMETHODCALLTYPE get_Text(BSTR* pbstrText);
```

### Parameters

*pbstrText*<br/>
The text that is displayed with the control.

### Return Value

Returns S_OK on success, or an error HRESULT on failure.

## <a name="get_valid"></a> CStockPropImpl::getvalid

Call this method to get the status of the flag that indicates if the control is valid or not.

```
HRESULT STDMETHODCALLTYPE getvalid(VARIANT_BOOL* pbValid);
```

### Parameters

*pbValid*<br/>
Variable that receives the flag status. TRUE indicates that the control is valid.

### Return Value

Returns S_OK on success, or an error HRESULT on failure.

## <a name="get_window"></a> CStockPropImpl::get_Window

Call this method to get the window handle associated with the control. Identical to [CStockPropImpl::get_HWND](#get_hwnd).

```
HRESULT STDMETHODCALLTYPE get_Window(LONG_PTR* phWnd);
```

### Parameters

*phWnd*<br/>
The window handle associated with the control.

### Return Value

Returns S_OK on success, or an error HRESULT on failure.

## <a name="put_appearance"></a> CStockPropImpl::put_Appearance

Call this method to set the paint style used by the control, for example, flat or 3D.

```
HRESULT STDMETHODCALLTYPE put_Appearance(SHORT nAppearance);
```

### Parameters

*nAppearance*<br/>
The new paint style to be used by the control.

### Return Value

Returns S_OK on success, or an error HRESULT on failure.

## <a name="put_autosize"></a> CStockPropImpl::put_AutoSize

Call this method to set the value of flag that indicates if the control cannot be any other size.

```
HRESULT STDMETHODCALLTYPE put_AutoSize(VARIANT_BOOL bAutoSize,);
```

### Parameters

*bAutoSize*<br/>
TRUE if the control cannot be any other size.

### Return Value

Returns S_OK on success, or an error HRESULT on failure.

## <a name="put_backcolor"></a> CStockPropImpl::put_BackColor

Call this method to set the control's background color.

```
HRESULT STDMETHODCALLTYPE put_BackColor(OLE_COLOR clrBackColor);
```

### Parameters

*clrBackColor*<br/>
The new control background color.

### Return Value

Returns S_OK on success, or an error HRESULT on failure.

## <a name="put_backstyle"></a> CStockPropImpl::put_BackStyle

Call this method to set the control's background style.

```
HRESULT STDMETHODCALLTYPE put_BackStyle(LONG nBackStyle);
```

### Parameters

*nBackStyle*<br/>
The new control background style.

### Return Value

Returns S_OK on success, or an error HRESULT on failure.

## <a name="put_bordercolor"></a> CStockPropImpl::put_BorderColor

Call this method to set the control's border color.

```
HRESULT STDMETHODCALLTYPE put_BorderColor(OLE_COLOR clrBorderColor);
```

### Parameters

*clrBorderColor*<br/>
The new border color. The OLE_COLOR data type is internally represented as a 32-bit long integer.

### Return Value

Returns S_OK on success, or an error HRESULT on failure.

## <a name="put_borderstyle"></a> CStockPropImpl::put_BorderStyle

Call this method to set the control's border style.

```
HRESULT STDMETHODCALLTYPE put_BorderStyle(LONG nBorderStyle);
```

### Parameters

*nBorderStyle*<br/>
The new border style.

### Return Value

Returns S_OK on success, or an error HRESULT on failure.

## <a name="put_bordervisible"></a> CStockPropImpl::put_BorderVisible

Call this method to set the value of the flag that indicates if the control's border is visible or not.

```
HRESULT STDMETHODCALLTYPE put_BorderVisible(VARIANT_BOOL bBorderVisible);
```

### Parameters

*bBorderVisible*<br/>
TRUE if the border is to be visible.

### Return Value

Returns S_OK on success, or an error HRESULT on failure.

## <a name="put_borderwidth"></a> CStockPropImpl::put_BorderWidth

Call this method to set the width of the control's border.

```
HRESULT STDMETHODCALLTYPE put_BorderWidth(LONG nBorderWidth);
```

### Parameters

*nBorderWidth*<br/>
The new width of the control's border.

### Return Value

Returns S_OK on success, or an error HRESULT on failure.

## <a name="put_caption"></a> CStockPropImpl::put_Caption

Call this method to set the text to be displayed with the control.

```
HRESULT STDMETHODCALLTYPE put_Caption(BSTR bstrCaption);
```

### Parameters

*bstrCaption*<br/>
The text to be displayed with the control.

### Return Value

Returns S_OK on success, or an error HRESULT on failure.

## <a name="put_drawmode"></a> CStockPropImpl::put_DrawMode

Call this method to set the control's drawing mode, for example, XOR Pen or Invert Colors.

```
HRESULT STDMETHODCALLTYPE put_DrawMode(LONG nDrawMode);
```

### Parameters

*nDrawMode*<br/>
The new drawing mode for the control.

### Return Value

Returns S_OK on success, or an error HRESULT on failure.

## <a name="put_drawstyle"></a> CStockPropImpl::put_DrawStyle

Call this method to set the control's drawing style, for example, solid, dashed, or dotted.

```
HRESULT STDMETHODCALLTYPE put_DrawStyle(LONG pnDrawStyle);
```

### Parameters

*nDrawStyle*<br/>
The new drawing style for the control.

### Return Value

Returns S_OK on success, or an error HRESULT on failure.

## <a name="put_drawwidth"></a> CStockPropImpl::put_DrawWidth

Call this method to set the width (in pixels) used by the control's drawing methods.

```
HRESULT STDMETHODCALLTYPE put_DrawWidth(LONG nDrawWidth);
```

### Parameters

*nDrawWidth*<br/>
The new width to be used by the control's drawing methods.

### Return Value

Returns S_OK on success, or an error HRESULT on failure.

## <a name="put_enabled"></a> CStockPropImpl::put_Enabled

Call this method to set the value of the flag that indicates if the control is enabled.

```
HRESULT STDMETHODCALLTYPE put_Enabled(VARIANT_BOOL bEnabled);
```

### Parameters

*bEnabled*<br/>
TRUE if the control is enabled.

### Return Value

Returns S_OK on success, or an error HRESULT on failure.

## <a name="put_fillcolor"></a> CStockPropImpl::put_FillColor

Call this method to set the control's fill color.

```
HRESULT STDMETHODCALLTYPE put_FillColor(OLE_COLOR clrFillColor);
```

### Parameters

*clrFillColor*<br/>
The new fill color for the control.

### Return Value

Returns S_OK on success, or an error HRESULT on failure.

## <a name="put_fillstyle"></a> CStockPropImpl::put_FillStyle

Call this method to set the control's fill style, for example, solid, transparent, or cross-hatched.

```
HRESULT STDMETHODCALLTYPE put_FillStyle(LONG nFillStyle);
```

### Parameters

*nFillStyle*<br/>
The new fill style for the control.

### Return Value

Returns S_OK on success, or an error HRESULT on failure.

## <a name="put_font"></a> CStockPropImpl::put_Font

Call this method to set the control's font properties.

```
HRESULT STDMETHODCALLTYPE put_Font(IFontDisp* pFont);
```

### Parameters

*pFont*<br/>
A pointer to the control's font properties.

### Return Value

Returns S_OK on success, or an error HRESULT on failure.

## <a name="put_forecolor"></a> CStockPropImpl::put_ForeColor

Call this method to set the control's foreground color.

```
HRESULT STDMETHODCALLTYPE put_ForeColor(OLE_COLOR clrForeColor);
```

### Parameters

*clrForeColor*<br/>
The new foreground color of the control.

### Return Value

Returns S_OK on success, or an error HRESULT on failure.

## <a name="put_hwnd"></a> CStockPropImpl::put_HWND

This method returns E_FAIL.

```
HRESULT STDMETHODCALLTYPE put_HWND(LONG_PTR /* hWnd */);
```

### Parameters

*hWnd*<br/>
Reserved.

### Return Value

Returns E_FAIL.

### Remarks

The window handle is a read-only value.

## <a name="put_mouseicon"></a> CStockPropImpl::put_MouseIcon

Call this method to set the picture properties of the graphic (icon, bitmap, or metafile) to be displayed when the mouse is over the control.

```
HRESULT STDMETHODCALLTYPE put_MouseIcon(IPictureDisp* pPicture);
```

### Parameters

*pPicture*<br/>
A pointer to the picture properties of the graphic.

### Return Value

Returns S_OK on success, or an error HRESULT on failure.

## <a name="put_mousepointer"></a> CStockPropImpl::put_MousePointer

Call this method to set the type of mouse pointer displayed when the mouse is over the control, for example, arrow, cross, or hourglass.

```
HRESULT STDMETHODCALLTYPE put_MousePointer(LONG nMousePointer);
```

### Parameters

*nMousePointer*<br/>
The type of mouse pointer.

### Return Value

Returns S_OK on success, or an error HRESULT on failure.

## <a name="put_picture"></a> CStockPropImpl::put_Picture

Call this method to set the picture properties of a graphic (icon, bitmap, or metafile) to be displayed.

```
HRESULT STDMETHODCALLTYPE put_Picture(IPictureDisp* pPicture);
```

### Parameters

*pPicture*<br/>
A pointer to the picture's properties. See [IPictureDisp](/windows/win32/api/ocidl/nn-ocidl-ipicturedisp) for more details.

### Return Value

Returns S_OK on success, or an error HRESULT on failure.

## <a name="put_readystate"></a> CStockPropImpl::put_ReadyState

Call this method to set the control's ready state, for example, loading or loaded.

```
HRESULT STDMETHODCALLTYPE put_ReadyState(LONG nReadyState);
```

### Parameters

*nReadyState*<br/>
The control's ready state.

### Return Value

Returns S_OK on success, or an error HRESULT on failure.

## <a name="put_tabstop"></a> CStockPropImpl::put_TabStop

Call this method to set the flag that indicates if the control is a tab stop or not.

```
HRESULT STDMETHODCALLTYPE put_TabStop(VARIANT_BOOL bTabStop);
```

### Parameters

*bTabStop*<br/>
TRUE if the control is a tab stop.

### Return Value

Returns S_OK on success, or an error HRESULT on failure.

## <a name="put_text"></a> CStockPropImpl::put_Text

Call this method to set the text that is displayed with the control.

```
HRESULT STDMETHODCALLTYPE put_Text(BSTR bstrText);
```

### Parameters

*bstrText*<br/>
The text that is displayed with the control.

### Return Value

Returns S_OK on success, or an error HRESULT on failure.

## <a name="put_valid"></a> CStockPropImpl::putvalid

Call this method to set the flag that indicates if the control is valid or not.

```
HRESULT STDMETHODCALLTYPE getvalid(VARIANT_BOOL bValid);
```

### Parameters

*bValid*<br/>
TRUE if the control is valid.

### Return Value

Returns S_OK on success, or an error HRESULT on failure.

## <a name="put_window"></a> CStockPropImpl::put_Window

This method calls [CStockPropImpl::put_HWND](#put_hwnd), which returns E_FAIL.

```
HRESULT STDMETHODCALLTYPE put_Window(LONG_PTR hWnd);
```

### Parameters

*hWnd*<br/>
The window handle.

### Return Value

Returns E_FAIL.

### Remarks

The window handle is a read-only value.

## <a name="putref_font"></a> CStockPropImpl::putref_Font

Call this method to set the control's font properties, with a reference count.

```
HRESULT STDMETHODCALLTYPE putref_Font(IFontDisp* pFont);
```

### Parameters

*pFont*<br/>
A pointer to the control's font properties.

### Return Value

Returns S_OK on success, or an error HRESULT on failure.

### Remarks

The same as [CStockPropImpl::put_Font](#put_font), but with a reference count.

## <a name="putref_mouseicon"></a> CStockPropImpl::putref_MouseIcon

Call this method to set the picture properties of the graphic (icon, bitmap, or metafile) to be displayed when the mouse is over the control, with a reference count.

```
HRESULT STDMETHODCALLTYPE putref_MouseIcon(IPictureDisp* pPicture);
```

### Parameters

*pPicture*<br/>
A pointer to the picture properties of the graphic.

### Return Value

Returns S_OK on success, or an error HRESULT on failure.

### Remarks

The same as [CStockPropImpl::put_MouseIcon](#put_mouseicon), but with a reference count.

## <a name="putref_picture"></a> CStockPropImpl::putref_Picture

Call this method to set the picture properties of a graphic (icon, bitmap, or metafile) to be displayed, with a reference count.

```
HRESULT STDMETHODCALLTYPE putref_Picture(IPictureDisp* pPicture);
```

### Parameters

*pPicture*<br/>
A pointer to the picture's properties. See [IPictureDisp](/windows/win32/api/ocidl/nn-ocidl-ipicturedisp) for more details.

### Return Value

Returns S_OK on success, or an error HRESULT on failure.

### Remarks

The same as [CStockPropImpl::put_Picture](#put_picture), but with a reference count.

## See also

[Class Overview](../../atl/atl-class-overview.md)<br/>
[IDispatchImpl Class](../../atl/reference/idispatchimpl-class.md)
