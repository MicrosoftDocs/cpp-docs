---
title: "CStockPropImpl Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CStockPropImpl"
  - "ATL::CStockPropImpl"
  - "ATL.CStockPropImpl"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CStockPropImpl class"
  - "controls [ATL], stock properties"
  - "stock properties, ATL controls"
ms.assetid: 45f11d7d-6580-4a0e-872d-3bc8b836cfda
caps.latest.revision: 20
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
---
# CStockPropImpl Class
This class provides methods for supporting stock property values.  
  
> [!IMPORTANT]
>  This class and its members cannot be used in applications that execute in the Windows Runtime.  
  
## Syntax  
  
```
template <class T, class InterfaceName,
    const IID* piid = &_ATL_IIDOF(InterfaceName),
    const GUID* plibid = &CComModule::m_libid,
    WORD wMajor = 1,
    WORD wMinor = 0, class tihclass = CcomTypeInfoHolder>  class ATL_NO_VTABLE CStockPropImpl :  public IDispatchImpl<InterfaceName,
    piid,
 plibid,
    wMajor,
 wMinor,
    tihclass>
```   
  
#### Parameters  
 `T`  
 The class implementing the control and deriving from `CStockPropImpl`.  
  
 `InterfaceName`  
 A dual interface exposing the stock properties.  
  
 `piid`  
 A pointer to the IID of `InterfaceName`.  
  
 `plibid`  
 A pointer to the LIBID of the type library containing the definition of `InterfaceName`.  
  
 `wMajor`  
 The major version of the type library. The default value is 1.  
  
 `wMinor`  
 The minor version of the type library. The default value is 0.  
  
 `tihclass`  
 The class used to manage the type information for `T`. The default value is `CComTypeInfoHolder`.  
  
## Members  
  
### Public Methods  
  
|||  
|-|-|  
|[get_Appearance](#cstockpropimpl__get_appearance)|Call this method to get the paint style used by the control, for example, flat or 3D.|  
|[get_AutoSize](#cstockpropimpl__get_autosize)|Call this method to get the status of the flag that indicates if the control cannot be any other size.|  
|[get_BackColor](#cstockpropimpl__get_backcolor)|Call this method to get the control's background color.|  
|[get_BackStyle](#cstockpropimpl__get_backstyle)|Call this method to get the control's background style, either transparent or opaque.|  
|[get_BorderColor](#cstockpropimpl__get_bordercolor)|Call this method to get the control's border color.|  
|[get_BorderStyle](#cstockpropimpl__get_borderstyle)|Call this method to get the control's border style.|  
|[get_BorderVisible](#cstockpropimpl__get_bordervisible)|Call this method to get the status of the flag that indicates if the control's border is visible or not.|  
|[get_BorderWidth](#cstockpropimpl__get_borderwidth)|Call this method to get the width (in pixels) of the control's border.|  
|[get_Caption](#cstockpropimpl__get_caption)|Call this method to get the text specified in an object's caption.|  
|[get_DrawMode](#cstockpropimpl__get_drawmode)|Call this method to get the control's drawing mode, for example, XOR Pen or Invert Colors.|  
|[get_DrawStyle](#cstockpropimpl__get_drawstyle)|Call this method to get the control's drawing style, for example, solid, dashed, or dotted.|  
|[get_DrawWidth](#cstockpropimpl__get_drawwidth)|Call this method to get the drawing width (in pixels) used by the control's drawing methods.|  
|[get_Enabled](#cstockpropimpl__get_enabled)|Call this method to get the status of the flag that indicates if the control is enabled.|  
|[get_FillColor](#cstockpropimpl__get_fillcolor)|Call this method to get the control's fill color.|  
|[get_FillStyle](#cstockpropimpl__get_fillstyle)|Call this method to get the control's fill style, for example, solid, transparent, or cross-hatched.|  
|[get_Font](#cstockpropimpl__get_font)|Call this method to get a pointer to the control's font properties.|  
|[get_ForeColor](#cstockpropimpl__get_forecolor)|Call this method to get the control's foreground color.|  
|[get_HWND](#cstockpropimpl__get_hwnd)|Call this method to get the window handle associated with the control.|  
|[get_MouseIcon](#cstockpropimpl__get_mouseicon)|Call this method to get the picture properties of the graphic (icon, bitmap, or metafile) to be displayed when the mouse is over the control.|  
|[get_MousePointer](#cstockpropimpl__get_mousepointer)|Call this method to get the type of mouse pointer displayed when the mouse is over the control, for example, arrow, cross, or hourglass.|  
|[get_Picture](#cstockpropimpl__get_picture)|Call this method to get a pointer to the picture properties of a graphic (icon, bitmap, or metafile) to be displayed.|  
|[get_ReadyState](#cstockpropimpl__get_readystate)|Call this method to get the control's ready state, for example, loading or loaded.|  
|[get_TabStop](#cstockpropimpl__get_tabstop)|Call this method to get the flag that indicates if the control is a tab stop or not.|  
|[get_Text](#cstockpropimpl__get_text)|Call this method to get the text that is displayed with the control.|  
|[getvalid](#cstockpropimpl__get_valid)|Call this method to get the status of the flag that indicates if the control is valid or not.|  
|[get_Window](#cstockpropimpl__get_window)|Call this method to get the window handle associated with the control. Identical to [CStockPropImpl::get_HWND](#cstockpropimpl__get_hwnd).|  
|[put_Appearance](#cstockpropimpl__put_appearance)|Call this method to set the paint style used by the control, for example, flat or 3D.|  
|[put_AutoSize](#cstockpropimpl__put_autosize)|Call this method to set the value of the flag that indicates if the control cannot be any other size.|  
|[put_BackColor](#cstockpropimpl__put_backcolor)|Call this method to set the control's background color.|  
|[put_BackStyle](#cstockpropimpl__put_backstyle)|Call this method to set the control's background style.|  
|[put_BorderColor](#cstockpropimpl__put_bordercolor)|Call this method to set the control's border color.|  
|[put_BorderStyle](#cstockpropimpl__put_borderstyle)|Call this method to set the control's border style.|  
|[put_BorderVisible](#cstockpropimpl__put_bordervisible)|Call this method to set the value of the flag that indicates if the control's border is visible or not.|  
|[put_BorderWidth](#cstockpropimpl__put_borderwidth)|Call this method to set the width of the control's border.|  
|[put_Caption](#cstockpropimpl__put_caption)|Call this method to set the text to be displayed with the control.|  
|[put_DrawMode](#cstockpropimpl__put_drawmode)|Call this method to set the control's drawing mode, for example, XOR Pen or Invert Colors.|  
|[put_DrawStyle](#cstockpropimpl__put_drawstyle)|Call this method to set the control's drawing style, for example, solid, dashed, or dotted.|  
|[put_DrawWidth](#cstockpropimpl__put_drawwidth)|Call this method to set the width (in pixels) used by the control's drawing methods.|  
|[put_Enabled](#cstockpropimpl__put_enabled)|Call this method to set the flag that indicates if the control is enabled.|  
|[put_FillColor](#cstockpropimpl__put_fillcolor)|Call this method to set the control's fill color.|  
|[put_FillStyle](#cstockpropimpl__put_fillstyle)|Call this method to set the control's fill style, for example, solid, transparent, or cross-hatched.|  
|[put_Font](#cstockpropimpl__put_font)|Call this method to set the control's font properties.|  
|[put_ForeColor](#cstockpropimpl__put_forecolor)|Call this method to set the control's foreground color.|  
|[put_HWND](#cstockpropimpl__put_hwnd)|This method returns E_FAIL.|  
|[put_MouseIcon](#cstockpropimpl__put_mouseicon)|Call this method to set the picture properties of the graphic (icon, bitmap, or metafile) to be displayed when the mouse is over the control.|  
|[put_MousePointer](#cstockpropimpl__put_mousepointer)|Call this method to set the type of mouse pointer displayed when the mouse is over the control, for example, arrow, cross, or hourglass.|  
|[put_Picture](#cstockpropimpl__put_picture)|Call this method to set the picture properties of a graphic (icon, bitmap, or metafile) to be displayed.|  
|[put_ReadyState](#cstockpropimpl__put_readystate)|Call this method to set the control's ready state, for example, loading or loaded.|  
|[put_TabStop](#cstockpropimpl__put_tabstop)|Call this method to set the value of the flag that indicates if the control is a tab stop or not.|  
|[put_Text](#cstockpropimpl__put_text)|Call this method to set the text that is displayed with the control.|  
|[putvalid](#cstockpropimpl__put_valid)|Call this method to set the flag that indicates if the control is valid or not.|  
|[put_Window](#cstockpropimpl__put_window)|This method calls [CStockPropImpl::put_HWND](#cstockpropimpl__put_hwnd), which returns E_FAIL.|  
|[putref_Font](#cstockpropimpl__putref_font)|Call this method to set the control's font properties, with a reference count.|  
|[putref_MouseIcon](#cstockpropimpl__putref_mouseicon)|Call this method to set the picture properties of the graphic (icon, bitmap, or metafile) to be displayed when the mouse is over the control, with a reference count.|  
|[putref_Picture](#cstockpropimpl__putref_picture)|Call this method to set the picture properties of a graphic (icon, bitmap, or metafile) to be displayed, with a reference count.|  
  
## Remarks  
 `CStockPropImpl` provides **put** and **get** methods for each stock property. These methods provide the code necessary to set or get the data member associated with each property and to notify and synchronize with the container when any property changes.  
  
 Visual C++ provides support for stock properties through its wizards. For more information about adding stock properties to a control, see the [ATL Tutorial](../../atl/active-template-library-atl-tutorial.md).  
  
 For backward compatibility, `CStockPropImpl` also exposes `get_Window` and `put_Window` methods that simply call `get_HWND` and `put_HWND`, respectively. The default implementation of `put_HWND` returns **E_FAIL** since `HWND` should be a read-only property.  
  
 The following properties also have a **putref** implementation:  
  
-   Font  
  
-   MouseIcon  
  
-   Picture  
  
 The same three stock properties require their corresponding data member to be of type `CComPtr` or some other class that provides correct interface reference counting by means of the assignment operator.  
  
## Inheritance Hierarchy  
 `T`  
  
 [IDispatchImpl](../../atl/reference/idispatchimpl-class.md)  
  
 `CStockPropImpl`  
  
## Requirements  
 **Header:** atlctl.h  
  
##  <a name="cstockpropimpl__get_appearance"></a>  CStockPropImpl::get_Appearance  
 Call this method to get the paint style used by the control, for example, flat or 3D.  
  
```
HRESULT STDMETHODCALLTYPE get_Appearance(SHORT pnAppearance);
```  
  
### Parameters  
 *pnAppearance*  
 Variable that receives the control's paint style.  
  
### Return Value  
 Returns S_OK on success, or an error HRESULT on failure.  
  
##  <a name="cstockpropimpl__get_autosize"></a>  CStockPropImpl::get_AutoSize  
 Call this method to get the status of the flag that indicates if the control cannot be any other size.  
  
```
HRESULT STDMETHODCALLTYPE get_Autosize(VARIANT_BOOL* pbAutoSize);
```  
  
### Parameters  
 *pbAutoSize*  
 Variable that receives the flag status. TRUE indicates that the control cannot be any other size.  
  
### Return Value  
 Returns S_OK on success, or an error HRESULT on failure.  
  
##  <a name="cstockpropimpl__get_backcolor"></a>  CStockPropImpl::get_BackColor  
 Call this method to get the control's background color.  
  
```
HRESULT STDMETHODCALLTYPE get_BackColor(OLE_COLOR* pclrBackColor);
```  
  
### Parameters  
 *pclrBackColor*  
 Variable that receives the control's background color.  
  
### Return Value  
 Returns S_OK on success, or an error HRESULT on failure.  
  
##  <a name="cstockpropimpl__get_backstyle"></a>  CStockPropImpl::get_BackStyle  
 Call this method to get the control's background style, either transparent or opaque.  
  
```
HRESULT STDMETHODCALLTYPE get_BackStyle(LONG* pnBackStyle);
```  
  
### Parameters  
 *pnBackStyle*  
 Variable that receives the control's background style.  
  
### Return Value  
 Returns S_OK on success, or an error HRESULT on failure.  
  
##  <a name="cstockpropimpl__get_bordercolor"></a>  CStockPropImpl::get_BorderColor  
 Call this method to get the control's border color.  
  
```
HRESULT STDMETHODCALLTYPE get_BorderColor(OLE_COLOR* pclrBorderColor);
```  
  
### Parameters  
 *pclrBorderColor*  
 Variable that receives the control's border color.  
  
### Return Value  
 Returns S_OK on success, or an error HRESULT on failure.  
  
##  <a name="cstockpropimpl__get_borderstyle"></a>  CStockPropImpl::get_BorderStyle  
 Call this method to get the control's border style.  
  
```
HRESULT STDMETHODCALLTYPE get_BorderStyle(LONG* pnBorderStyle);
```  
  
### Parameters  
 *pnBorderStyle*  
 Variable that receives the control's border style.  
  
### Return Value  
 Returns S_OK on success, or an error HRESULT on failure.  
  
##  <a name="cstockpropimpl__get_bordervisible"></a>  CStockPropImpl::get_BorderVisible  
 Call this method to get the status of the flag that indicates if the control's border is visible or not.  
  
```
HRESULT STDMETHODCALLTYPE get_BorderVisible(VARIANT_BOOL* pbBorderVisible);
```  
  
### Parameters  
 *pbBorderVisible*  
 Variable that receives the flag status. TRUE indicates that the control's border is visible.  
  
### Return Value  
 Returns S_OK on success, or an error HRESULT on failure.  
  
##  <a name="cstockpropimpl__get_borderwidth"></a>  CStockPropImpl::get_BorderWidth  
 Call this method to get the width of the control's border.  
  
```
HRESULT STDMETHODCALLTYPE get_BorderWidth(LONG* pnBorderWidth);
```  
  
### Parameters  
 *pnBorderWidth*  
 Variable that receives the control's border width.  
  
### Return Value  
 Returns S_OK on success, or an error HRESULT on failure.  
  
##  <a name="cstockpropimpl__get_caption"></a>  CStockPropImpl::get_Caption  
 Call this method to get the text specified in an object's caption.  
  
```
HRESULT STDMETHODCALLTYPE get_Caption(BSTR* pbstrCaption);
```  
  
### Parameters  
 *pbstrCaption*  
 The text to be displayed with the control.  
  
### Return Value  
 Returns S_OK on success, or an error HRESULT on failure.  
  
##  <a name="cstockpropimpl__get_drawmode"></a>  CStockPropImpl::get_DrawMode  
 Call this method to get the control's drawing mode, for example, XOR Pen or Invert Colors.  
  
```
HRESULT STDMETHODCALLTYPE get_DrawMode(LONG* pnDrawMode);
```  
  
### Parameters  
 *pnDrawMode*  
 Variable that receives the control's drawing mode.  
  
### Return Value  
 Returns S_OK on success, or an error HRESULT on failure.  
  
##  <a name="cstockpropimpl__get_drawstyle"></a>  CStockPropImpl::get_DrawStyle  
 Call this method to get the control's drawing style, for example, solid, dashed, or dotted.  
  
```
HRESULT STDMETHODCALLTYPE get_DrawStyle(LONG* pnDrawStyle);
```  
  
### Parameters  
 *pnDrawStyle*  
 Variable that receives the control's drawing style.  
  
### Return Value  
 Returns S_OK on success, or an error HRESULT on failure.  
  
##  <a name="cstockpropimpl__get_drawwidth"></a>  CStockPropImpl::get_DrawWidth  
 Call this method to get the drawing width (in pixels) used by the control's drawing methods.  
  
```
HRESULT STDMETHODCALLTYPE get_DrawWidth(LONG* pnDrawWidth);
```  
  
### Parameters  
 *pnDrawWidth*  
 Variable that receives the control's width value, in pixels.  
  
### Return Value  
 Returns S_OK on success, or an error HRESULT on failure.  
  
##  <a name="cstockpropimpl__get_enabled"></a>  CStockPropImpl::get_Enabled  
 Call this method to get the status of the flag that indicates if the control is enabled.  
  
```
HRESULT STDMETHODCALLTYPE get_Enabled(VARIANT_BOOL* pbEnabled);
```  
  
### Parameters  
 `pbEnabled`  
 Variable that receives the flag status. TRUE indicates that the control is enabled.  
  
### Return Value  
 Returns S_OK on success, or an error HRESULT on failure.  
  
##  <a name="cstockpropimpl__get_fillcolor"></a>  CStockPropImpl::get_FillColor  
 Call this method to get the control's fill color.  
  
```
HRESULT STDMETHODCALLTYPE get_FillColor(OLE_COLOR* pclrFillColor);
```  
  
### Parameters  
 *pclrFillColor*  
 Variable that receives the control's fill color.  
  
### Return Value  
 Returns S_OK on success, or an error HRESULT on failure.  
  
##  <a name="cstockpropimpl__get_fillstyle"></a>  CStockPropImpl::get_FillStyle  
 Call this method to get the control's fill style, for example, solid, transparent, or crosshatched.  
  
```
HRESULT STDMETHODCALLTYPE get_FillStyle(LONG* pnFillStyle);
```  
  
### Parameters  
 *pnFillStyle*  
 Variable that receives the control's fill style.  
  
### Return Value  
 Returns S_OK on success, or an error HRESULT on failure.  
  
##  <a name="cstockpropimpl__get_font"></a>  CStockPropImpl::get_Font  
 Call this method to get a pointer to the control's font properties.  
  
```
HRESULT STDMETHODCALLTYPE get_Font(IFontDisp** ppFont);
```  
  
### Parameters  
 `ppFont`  
 Variable that receives a pointer to the control's font properties.  
  
### Return Value  
 Returns S_OK on success, or an error HRESULT on failure.  
  
##  <a name="cstockpropimpl__get_forecolor"></a>  CStockPropImpl::get_ForeColor  
 Call this method to get the control's foreground color.  
  
```
HRESULT STDMETHODCALLTYPE get_ForeColor(OLE_COLOR* pclrForeColor);
```  
  
### Parameters  
 *pclrForeColor*  
 Variable that receives the controls foreground color.  
  
### Return Value  
 Returns S_OK on success, or an error HRESULT on failure.  
  
##  <a name="cstockpropimpl__get_hwnd"></a>  CStockPropImpl::get_HWND  
 Call this method to get the window handle associated with the control.  
  
```
HRESULT STDMETHODCALLTYPE get_HWND(LONG_PTR* phWnd);
```  
  
### Parameters  
 `phWnd`  
 The window handle associated with the control.  
  
### Return Value  
 Returns S_OK on success, or an error HRESULT on failure.  
  
##  <a name="cstockpropimpl__get_mouseicon"></a>  CStockPropImpl::get_MouseIcon  
 Call this method to get the picture properties of the graphic (icon, bitmap, or metafile) to be displayed when the mouse is over the control.  
  
```
HRESULT STDMETHODCALLTYPE get_MouseIcon(IPictureDisp** ppPicture);
```  
  
### Parameters  
 `ppPicture`  
 Variable that receives a pointer to the picture properties of the graphic.  
  
### Return Value  
 Returns S_OK on success, or an error HRESULT on failure.  
  
##  <a name="cstockpropimpl__get_mousepointer"></a>  CStockPropImpl::get_MousePointer  
 Call this method to get the type of mouse pointer displayed when the mouse is over the control, for example, arrow, cross, or hourglass.  
  
```
HRESULT STDMETHODCALLTYPE get_MousePointer(LONG* pnMousePointer);
```  
  
### Parameters  
 *pnMousePointer*  
 Variable that receives the type of mouse pointer.  
  
### Return Value  
 Returns S_OK on success, or an error HRESULT on failure.  
  
##  <a name="cstockpropimpl__get_picture"></a>  CStockPropImpl::get_Picture  
 Call this method to get a pointer to the picture properties of a graphic (icon, bitmap, or metafile) to be displayed.  
  
```
HRESULT STDMETHODCALLTYPE get_Picture(IPictureDisp** ppPicture);
```  
  
### Parameters  
 `ppPicture`  
 Variable that receives a pointer to the picture's properties. See [IPictureDisp](http://msdn.microsoft.com/library/windows/desktop/ms680762) for more details.  
  
### Return Value  
 Returns S_OK on success, or an error HRESULT on failure.  
  
##  <a name="cstockpropimpl__get_readystate"></a>  CStockPropImpl::get_ReadyState  
 Call this method to get the control's ready state, for example, loading or loaded.  
  
```
HRESULT STDMETHODCALLTYPE get_ReadyState(LONG* pnReadyState);
```  
  
### Parameters  
 *pnReadyState*  
 Variable that receives the control's ready state.  
  
### Return Value  
 Returns S_OK on success, or an error HRESULT on failure.  
  
##  <a name="cstockpropimpl__get_tabstop"></a>  CStockPropImpl::get_TabStop  
 Call this method to get the status of the flag that indicates if the control is a tab stop or not.  
  
```
HRESULT STDMETHODCALLTYPE get_TabStop(VARIANT_BOOL* pbTabStop);
```  
  
### Parameters  
 *pbTabStop*  
 Variable that receives the flag status. TRUE indicates that the control is a tab stop.  
  
### Return Value  
 Returns S_OK on success, or an error HRESULT on failure.  
  
##  <a name="cstockpropimpl__get_text"></a>  CStockPropImpl::get_Text  
 Call this method to get the text that is displayed with the control.  
  
```
HRESULT STDMETHODCALLTYPE get_Text(BSTR* pbstrText);
```  
  
### Parameters  
 *pbstrText*  
 The text that is displayed with the control.  
  
### Return Value  
 Returns S_OK on success, or an error HRESULT on failure.  
  
##  <a name="cstockpropimpl__get_valid"></a>  CStockPropImpl::getvalid  
 Call this method to get the status of the flag that indicates if the control is valid or not.  
  
```
HRESULT STDMETHODCALLTYPE getvalid(VARIANT_BOOL* pbValid);
```  
  
### Parameters  
 *pbValid*  
 Variable that receives the flag status. TRUE indicates that the control is valid.  
  
### Return Value  
 Returns S_OK on success, or an error HRESULT on failure.  
  
##  <a name="cstockpropimpl__get_window"></a>  CStockPropImpl::get_Window  
 Call this method to get the window handle associated with the control. Identical to [CStockPropImpl::get_HWND](#cstockpropimpl__get_hwnd).  
  
```
HRESULT STDMETHODCALLTYPE get_Window(LONG_PTR* phWnd);
```  
  
### Parameters  
 `phWnd`  
 The window handle associated with the control.  
  
### Return Value  
 Returns S_OK on success, or an error HRESULT on failure.  
  
##  <a name="cstockpropimpl__put_appearance"></a>  CStockPropImpl::put_Appearance  
 Call this method to set the paint style used by the control, for example, flat or 3D.  
  
```
HRESULT STDMETHODCALLTYPE put_Appearance(SHORT   nAppearance);
```  
  
### Parameters  
 `nAppearance`  
 The new paint style to be used by the control.  
  
### Return Value  
 Returns S_OK on success, or an error HRESULT on failure.  
  
##  <a name="cstockpropimpl__put_autosize"></a>  CStockPropImpl::put_AutoSize  
 Call this method to set the value of flag that indicates if the control cannot be any other size.  
  
```
HRESULT STDMETHODCALLTYPE put_AutoSize(VARIANT_BOOL bAutoSize,);
```  
  
### Parameters  
 *bAutoSize*  
 TRUE if the control cannot be any other size.  
  
### Return Value  
 Returns S_OK on success, or an error HRESULT on failure.  
  
##  <a name="cstockpropimpl__put_backcolor"></a>  CStockPropImpl::put_BackColor  
 Call this method to set the control's background color.  
  
```
HRESULT STDMETHODCALLTYPE put_BackColor(OLE_COLOR clrBackColor);
```  
  
### Parameters  
 *clrBackColor*  
 The new control background color.  
  
### Return Value  
 Returns S_OK on success, or an error HRESULT on failure.  
  
##  <a name="cstockpropimpl__put_backstyle"></a>  CStockPropImpl::put_BackStyle  
 Call this method to set the control's background style.  
  
```
HRESULT STDMETHODCALLTYPE put_BackStyle(LONG nBackStyle);
```  
  
### Parameters  
 *nBackStyle*  
 The new control background style.  
  
### Return Value  
 Returns S_OK on success, or an error HRESULT on failure.  
  
##  <a name="cstockpropimpl__put_bordercolor"></a>  CStockPropImpl::put_BorderColor  
 Call this method to set the control's border color.  
  
```
HRESULT STDMETHODCALLTYPE put_BorderColor(OLE_COLOR clrBorderColor);
```  
  
### Parameters  
 *clrBorderColor*  
 The new border color. The OLE_COLOR data type is internally represented as a 32-bit long integer.  
  
### Return Value  
 Returns S_OK on success, or an error HRESULT on failure.  
  
##  <a name="cstockpropimpl__put_borderstyle"></a>  CStockPropImpl::put_BorderStyle  
 Call this method to set the control's border style.  
  
```
HRESULT STDMETHODCALLTYPE put_BorderStyle(LONG nBorderStyle);
```  
  
### Parameters  
 *nBorderStyle*  
 The new border style.  
  
### Return Value  
 Returns S_OK on success, or an error HRESULT on failure.  
  
##  <a name="cstockpropimpl__put_bordervisible"></a>  CStockPropImpl::put_BorderVisible  
 Call this method to set the value of the flag that indicates if the control's border is visible or not.  
  
```
HRESULT STDMETHODCALLTYPE put_BorderVisible(VARIANT_BOOL bBorderVisible);
```  
  
### Parameters  
 *bBorderVisible*  
 TRUE if the border is to be visible.  
  
### Return Value  
 Returns S_OK on success, or an error HRESULT on failure.  
  
##  <a name="cstockpropimpl__put_borderwidth"></a>  CStockPropImpl::put_BorderWidth  
 Call this method to set the width of the control's border.  
  
```
HRESULT STDMETHODCALLTYPE put_BorderWidth(LONG nBorderWidth);
```  
  
### Parameters  
 `nBorderWidth`  
 The new width of the control's border.  
  
### Return Value  
 Returns S_OK on success, or an error HRESULT on failure.  
  
##  <a name="cstockpropimpl__put_caption"></a>  CStockPropImpl::put_Caption  
 Call this method to set the text to be displayed with the control.  
  
```
HRESULT STDMETHODCALLTYPE put_Caption(BSTR bstrCaption);
```  
  
### Parameters  
 *bstrCaption*  
 The text to be displayed with the control.  
  
### Return Value  
 Returns S_OK on success, or an error HRESULT on failure.  
  
##  <a name="cstockpropimpl__put_drawmode"></a>  CStockPropImpl::put_DrawMode  
 Call this method to set the control's drawing mode, for example, XOR Pen or Invert Colors.  
  
```
HRESULT STDMETHODCALLTYPE put_DrawMode(LONG nDrawMode);
```  
  
### Parameters  
 `nDrawMode`  
 The new drawing mode for the control.  
  
### Return Value  
 Returns S_OK on success, or an error HRESULT on failure.  
  
##  <a name="cstockpropimpl__put_drawstyle"></a>  CStockPropImpl::put_DrawStyle  
 Call this method to set the control's drawing style, for example, solid, dashed, or dotted.  
  
```
HRESULT STDMETHODCALLTYPE put_DrawStyle(LONG pnDrawStyle);
```  
  
### Parameters  
 *nDrawStyle*  
 The new drawing style for the control.  
  
### Return Value  
 Returns S_OK on success, or an error HRESULT on failure.  
  
##  <a name="cstockpropimpl__put_drawwidth"></a>  CStockPropImpl::put_DrawWidth  
 Call this method to set the width (in pixels) used by the control's drawing methods.  
  
```
HRESULT STDMETHODCALLTYPE put_DrawWidth(LONG nDrawWidth);
```  
  
### Parameters  
 *nDrawWidth*  
 The new width to be used by the control's drawing methods.  
  
### Return Value  
 Returns S_OK on success, or an error HRESULT on failure.  
  
##  <a name="cstockpropimpl__put_enabled"></a>  CStockPropImpl::put_Enabled  
 Call this method to set the value of the flag that indicates if the control is enabled.  
  
```
HRESULT STDMETHODCALLTYPE put_Enabled(VARIANT_BOOL bEnabled);
```  
  
### Parameters  
 `bEnabled`  
 TRUE if the control is enabled.  
  
### Return Value  
 Returns S_OK on success, or an error HRESULT on failure.  
  
##  <a name="cstockpropimpl__put_fillcolor"></a>  CStockPropImpl::put_FillColor  
 Call this method to set the control's fill color.  
  
```
HRESULT STDMETHODCALLTYPE put_FillColor(OLE_COLOR   clrFillColor);
```  
  
### Parameters  
 *clrFillColor*  
 The new fill color for the control.  
  
### Return Value  
 Returns S_OK on success, or an error HRESULT on failure.  
  
##  <a name="cstockpropimpl__put_fillstyle"></a>  CStockPropImpl::put_FillStyle  
 Call this method to set the control's fill style, for example, solid, transparent, or cross-hatched.  
  
```
HRESULT STDMETHODCALLTYPE put_FillStyle(LONG nFillStyle);
```  
  
### Parameters  
 *nFillStyle*  
 The new fill style for the control.  
  
### Return Value  
 Returns S_OK on success, or an error HRESULT on failure.  
  
##  <a name="cstockpropimpl__put_font"></a>  CStockPropImpl::put_Font  
 Call this method to set the control's font properties.  
  
```
HRESULT STDMETHODCALLTYPE put_Font(IFontDisp* pFont);
```  
  
### Parameters  
 `pFont`  
 A pointer to the control's font properties.  
  
### Return Value  
 Returns S_OK on success, or an error HRESULT on failure.  
  
##  <a name="cstockpropimpl__put_forecolor"></a>  CStockPropImpl::put_ForeColor  
 Call this method to set the control's foreground color.  
  
```
HRESULT STDMETHODCALLTYPE put_ForeColor(OLE_COLOR clrForeColor);
```  
  
### Parameters  
 *clrForeColor*  
 The new foreground color of the control.  
  
### Return Value  
 Returns S_OK on success, or an error HRESULT on failure.  
  
##  <a name="cstockpropimpl__put_hwnd"></a>  CStockPropImpl::put_HWND  
 This method returns E_FAIL.  
  
```
HRESULT STDMETHODCALLTYPE put_HWND(LONG_PTR /* hWnd */);
```  
  
### Parameters  
 */\* hWnd \*/*  
 Reserved.  
  
### Return Value  
 Returns E_FAIL.  
  
### Remarks  
 The window handle is a read-only value.  
  
##  <a name="cstockpropimpl__put_mouseicon"></a>  CStockPropImpl::put_MouseIcon  
 Call this method to set the picture properties of the graphic (icon, bitmap, or metafile) to be displayed when the mouse is over the control.  
  
```
HRESULT STDMETHODCALLTYPE put_MouseIcon(IPictureDisp* pPicture);
```  
  
### Parameters  
 `pPicture`  
 A pointer to the picture properties of the graphic.  
  
### Return Value  
 Returns S_OK on success, or an error HRESULT on failure.  
  
##  <a name="cstockpropimpl__put_mousepointer"></a>  CStockPropImpl::put_MousePointer  
 Call this method to set the type of mouse pointer displayed when the mouse is over the control, for example, arrow, cross, or hourglass.  
  
```
HRESULT STDMETHODCALLTYPE put_MousePointer(LONG nMousePointer);
```  
  
### Parameters  
 *nMousePointer*  
 The type of mouse pointer.  
  
### Return Value  
 Returns S_OK on success, or an error HRESULT on failure.  
  
##  <a name="cstockpropimpl__put_picture"></a>  CStockPropImpl::put_Picture  
 Call this method to set the picture properties of a graphic (icon, bitmap, or metafile) to be displayed.  
  
```
HRESULT STDMETHODCALLTYPE put_Picture(IPictureDisp* pPicture);
```  
  
### Parameters  
 `pPicture`  
 A pointer to the picture's properties. See [IPictureDisp](http://msdn.microsoft.com/library/windows/desktop/ms680762) for more details.  
  
### Return Value  
 Returns S_OK on success, or an error HRESULT on failure.  
  
##  <a name="cstockpropimpl__put_readystate"></a>  CStockPropImpl::put_ReadyState  
 Call this method to set the control's ready state, for example, loading or loaded.  
  
```
HRESULT STDMETHODCALLTYPE put_ReadyState(LONG nReadyState);
```  
  
### Parameters  
 *nReadyState*  
 The control's ready state.  
  
### Return Value  
 Returns S_OK on success, or an error HRESULT on failure.  
  
##  <a name="cstockpropimpl__put_tabstop"></a>  CStockPropImpl::put_TabStop  
 Call this method to set the flag that indicates if the control is a tab stop or not.  
  
```
HRESULT STDMETHODCALLTYPE put_TabStop(VARIANT_BOOL bTabStop);
```  
  
### Parameters  
 *bTabStop*  
 TRUE if the control is a tab stop.  
  
### Return Value  
 Returns S_OK on success, or an error HRESULT on failure.  
  
##  <a name="cstockpropimpl__put_text"></a>  CStockPropImpl::put_Text  
 Call this method to set the text that is displayed with the control.  
  
```
HRESULT STDMETHODCALLTYPE put_Text(BSTR bstrText);
```  
  
### Parameters  
 `bstrText`  
 The text that is displayed with the control.  
  
### Return Value  
 Returns S_OK on success, or an error HRESULT on failure.  
  
##  <a name="cstockpropimpl__put_valid"></a>  CStockPropImpl::putvalid  
 Call this method to set the flag that indicates if the control is valid or not.  
  
```
HRESULT STDMETHODCALLTYPE getvalid(VARIANT_BOOL   bValid);
```  
  
### Parameters  
 *bValid*  
 TRUE if the control is valid.  
  
### Return Value  
 Returns S_OK on success, or an error HRESULT on failure.  
  
##  <a name="cstockpropimpl__put_window"></a>  CStockPropImpl::put_Window  
 This method calls [CStockPropImpl::put_HWND](#cstockpropimpl__put_hwnd), which returns E_FAIL.  
  
```
HRESULT STDMETHODCALLTYPE put_Window(LONG_PTR hWnd);
```  
  
### Parameters  
 `hWnd`  
 The window handle.  
  
### Return Value  
 Returns E_FAIL.  
  
### Remarks  
 The window handle is a read-only value.  
  
##  <a name="cstockpropimpl__putref_font"></a>  CStockPropImpl::putref_Font  
 Call this method to set the control's font properties, with a reference count.  
  
```
HRESULT STDMETHODCALLTYPE putref_Font(IFontDisp* pFont);
```  
  
### Parameters  
 `pFont`  
 A pointer to the control's font properties.  
  
### Return Value  
 Returns S_OK on success, or an error HRESULT on failure.  
  
### Remarks  
 The same as [CStockPropImpl::put_Font](#cstockpropimpl__put_font), but with a reference count.  
  
##  <a name="cstockpropimpl__putref_mouseicon"></a>  CStockPropImpl::putref_MouseIcon  
 Call this method to set the picture properties of the graphic (icon, bitmap, or metafile) to be displayed when the mouse is over the control, with a reference count.  
  
```
HRESULT STDMETHODCALLTYPE putref_MouseIcon(IPictureDisp* pPicture);
```  
  
### Parameters  
 `pPicture`  
 A pointer to the picture properties of the graphic.  
  
### Return Value  
 Returns S_OK on success, or an error HRESULT on failure.  
  
### Remarks  
 The same as [CStockPropImpl::put_MouseIcon](#cstockpropimpl__put_mouseicon), but with a reference count.  
  
##  <a name="cstockpropimpl__putref_picture"></a>  CStockPropImpl::putref_Picture  
 Call this method to set the picture properties of a graphic (icon, bitmap, or metafile) to be displayed, with a reference count.  
  
```
HRESULT STDMETHODCALLTYPE putref_Picture(IPictureDisp* pPicture);
```  
  
### Parameters  
 `pPicture`  
 A pointer to the picture's properties. See [IPictureDisp](http://msdn.microsoft.com/library/windows/desktop/ms680762) for more details.  
  
### Return Value  
 Returns S_OK on success, or an error HRESULT on failure.  
  
### Remarks  
 The same as [CStockPropImpl::put_Picture](#cstockpropimpl__put_picture), but with a reference count.  
  
## See Also  
 [Class Overview](../../atl/atl-class-overview.md)   
 [IDispatchImpl Class](../../atl/reference/idispatchimpl-class.md)
