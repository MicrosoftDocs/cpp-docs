---
description: "Learn more about: CMFCRibbonEdit Class"
title: "CMFCRibbonEdit Class"
ms.date: "11/04/2016"
f1_keywords: ["CMFCRibbonEdit", "AFXRIBBONEDIT/CMFCRibbonEdit", "AFXRIBBONEDIT/CMFCRibbonEdit::CMFCRibbonEdit", "AFXRIBBONEDIT/CMFCRibbonEdit::CanBeStretched", "AFXRIBBONEDIT/CMFCRibbonEdit::CopyFrom", "AFXRIBBONEDIT/CMFCRibbonEdit::CreateEdit", "AFXRIBBONEDIT/CMFCRibbonEdit::DestroyCtrl", "AFXRIBBONEDIT/CMFCRibbonEdit::DropDownList", "AFXRIBBONEDIT/CMFCRibbonEdit::EnableSpinButtons", "AFXRIBBONEDIT/CMFCRibbonEdit::GetCompactSize", "AFXRIBBONEDIT/CMFCRibbonEdit::GetEditText", "AFXRIBBONEDIT/CMFCRibbonEdit::GetIntermediateSize", "AFXRIBBONEDIT/CMFCRibbonEdit::GetTextAlign", "AFXRIBBONEDIT/CMFCRibbonEdit::GetWidth", "AFXRIBBONEDIT/CMFCRibbonEdit::HasCompactMode", "AFXRIBBONEDIT/CMFCRibbonEdit::HasFocus", "AFXRIBBONEDIT/CMFCRibbonEdit::HasLargeMode", "AFXRIBBONEDIT/CMFCRibbonEdit::HasSpinButtons", "AFXRIBBONEDIT/CMFCRibbonEdit::IsHighlighted", "AFXRIBBONEDIT/CMFCRibbonEdit::OnAfterChangeRect", "AFXRIBBONEDIT/CMFCRibbonEdit::OnDraw", "AFXRIBBONEDIT/CMFCRibbonEdit::OnDrawLabelAndImage", "AFXRIBBONEDIT/CMFCRibbonEdit::OnDrawOnList", "AFXRIBBONEDIT/CMFCRibbonEdit::OnEnable", "AFXRIBBONEDIT/CMFCRibbonEdit::OnHighlight", "AFXRIBBONEDIT/CMFCRibbonEdit::OnKey", "AFXRIBBONEDIT/CMFCRibbonEdit::OnLButtonDown", "AFXRIBBONEDIT/CMFCRibbonEdit::OnLButtonUp", "AFXRIBBONEDIT/CMFCRibbonEdit::OnRTLChanged", "AFXRIBBONEDIT/CMFCRibbonEdit::OnShow", "AFXRIBBONEDIT/CMFCRibbonEdit::Redraw", "AFXRIBBONEDIT/CMFCRibbonEdit::SetACCData", "AFXRIBBONEDIT/CMFCRibbonEdit::SetEditText", "AFXRIBBONEDIT/CMFCRibbonEdit::SetTextAlign", "AFXRIBBONEDIT/CMFCRibbonEdit::SetWidth"]
helpviewer_keywords: ["CMFCRibbonEdit [MFC], CMFCRibbonEdit", "CMFCRibbonEdit [MFC], CanBeStretched", "CMFCRibbonEdit [MFC], CMFCRibbonEdit", "CMFCRibbonEdit [MFC], CopyFrom", "CMFCRibbonEdit [MFC], CreateEdit", "CMFCRibbonEdit [MFC], DestroyCtrl", "CMFCRibbonEdit [MFC], DropDownList", "CMFCRibbonEdit [MFC], EnableSpinButtons", "CMFCRibbonEdit [MFC], GetCompactSize", "CMFCRibbonEdit [MFC], GetEditText", "CMFCRibbonEdit [MFC], GetIntermediateSize", "CMFCRibbonEdit [MFC], GetTextAlign", "CMFCRibbonEdit [MFC], GetWidth", "CMFCRibbonEdit [MFC], HasCompactMode", "CMFCRibbonEdit [MFC], HasFocus", "CMFCRibbonEdit [MFC], HasLargeMode", "CMFCRibbonEdit [MFC], HasSpinButtons", "CMFCRibbonEdit [MFC], IsHighlighted", "CMFCRibbonEdit [MFC], OnAfterChangeRect", "CMFCRibbonEdit [MFC], OnDraw", "CMFCRibbonEdit [MFC], OnDrawLabelAndImage", "CMFCRibbonEdit [MFC], OnDrawOnList", "CMFCRibbonEdit [MFC], OnEnable", "CMFCRibbonEdit [MFC], OnHighlight", "CMFCRibbonEdit [MFC], OnKey", "CMFCRibbonEdit [MFC], OnLButtonDown", "CMFCRibbonEdit [MFC], OnLButtonUp", "CMFCRibbonEdit [MFC], OnRTLChanged", "CMFCRibbonEdit [MFC], OnShow", "CMFCRibbonEdit [MFC], Redraw", "CMFCRibbonEdit [MFC], SetACCData", "CMFCRibbonEdit [MFC], SetEditText", "CMFCRibbonEdit [MFC], SetTextAlign", "CMFCRibbonEdit [MFC], SetWidth"]
ms.assetid: 9b85f1f2-446b-454e-9af9-104fdad8a897
---
# CMFCRibbonEdit Class

Implements an edit control that is located on a ribbon bar.

## Syntax

```cpp
class CMFCRibbonEdit : public CMFCRibbonButton
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[CMFCRibbonEdit::CMFCRibbonEdit](#cmfcribbonedit)|Constructs a `CMFCRibbonEdit` object.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[CMFCRibbonEdit::CanBeStretched](#canbestretched)|Indicates whether the height of the `CMFCRibbonEdit` control can increase vertically to the height of a ribbon row.|
|[CMFCRibbonEdit::CMFCRibbonEdit](#cmfcribbonedit)|Constructs a `CMFCRibbonEdit` object.|
|[CMFCRibbonEdit::CopyFrom](#copyfrom)|Copies the state of the specified `CMFCRibbonEdit` object to the current `CMFCRibbonEdit` object.|
|[CMFCRibbonEdit::CreateEdit](#createedit)|Creates a new text box for the `CMFCRibbonEdit` object.|
|[CMFCRibbonEdit::DestroyCtrl](#destroyctrl)|Destroys the `CMFCRibbonEdit` object.|
|[CMFCRibbonEdit::DropDownList](#dropdownlist)|Drops down a list box.|
|[CMFCRibbonEdit::EnableSpinButtons](#enablespinbuttons)|Enables and sets the range of the spin button for the text box.|
|[CMFCRibbonEdit::GetCompactSize](#getcompactsize)|Retrieves the compact size of the `CFMCRibbonEdit` object.|
|[CMFCRibbonEdit::GetEditText](#getedittext)|Retrieves the text in the text box.|
|[CMFCRibbonEdit::GetIntermediateSize](#getintermediatesize)|Retrieves the intermediate size of the `CMFCRibbonEdit` object.|
|[CMFCRibbonEdit::GetTextAlign](#gettextalign)|Retrieves the alignment of the text in the text box.|
|[CMFCRibbonEdit::GetWidth](#getwidth)|Retrieves the width, in pixels, of the `CMFCRibbonEdit` control.|
|[CMFCRibbonEdit::HasCompactMode](#hascompactmode)|Indicates whether the display size for the `CMFCRibbonEdit` control can be compact.|
|[CMFCRibbonEdit::HasFocus](#hasfocus)|Indicates whether the `CMFCRIbbonEdit` control has the focus.|
|[CMFCRibbonEdit::HasLargeMode](#haslargemode)|Indicates whether the display size for the `CMFCRibbonEdit` control can be large.|
|[CMFCRibbonEdit::HasSpinButtons](#hasspinbuttons)|Indicates whether the text box has a spin button.|
|[CMFCRibbonEdit::IsHighlighted](#ishighlighted)|Indicates whether the `CMFCRibbonEdit` control is highlighted.|
|[CMFCRibbonEdit::OnAfterChangeRect](#onafterchangerect)|Called by the framework when the dimensions of the display rectangle for the `CMFCRibbonEdit` control changes.|
|[CMFCRibbonEdit::OnDraw](#ondraw)|Called by the framework to draw the `CMFCRibbonEdit` control.|
|[CMFCRibbonEdit::OnDrawLabelAndImage](#ondrawlabelandimage)|Called by the framework to draw the label and image for the `CMFCRibbonEdit` control.|
|[CMFCRibbonEdit::OnDrawOnList](#ondrawonlist)|Called by the framework to draw the `CMFCRibbonEdit` control in a commands list box.|
|[CMFCRibbonEdit::OnEnable](#onenable)|Called by the framework to enable or disable the `CMFCRibbonEdit` control.|
|[CMFCRibbonEdit::OnHighlight](#onhighlight)|Called by the framework when the pointer enters or leaves the bounds of the `CMFCRibbonEdit` control.|
|[CMFCRibbonEdit::OnKey](#onkey)|Called by the framework when the user presses a keytip and the `CMFCRibbonEdit` control has the focus.|
|[CMFCRibbonEdit::OnLButtonDown](#onlbuttondown)|Called by the framework to update the `CMFCRibbonEdit` control when the user presses the left mouse button on the control.|
|[CMFCRibbonEdit::OnLButtonUp](#onlbuttonup)|Called by the framework when the user releases the left mouse button.|
|[CMFCRibbonEdit::OnRTLChanged](#onrtlchanged)|Called by the framework to update the `CMFCRibbonEdit` control when the layout changes direction.|
|[CMFCRibbonEdit::OnShow](#onshow)|Called by the framework to show or hide the `CMFCRibbonEdit` control.|
|[CMFCRibbonEdit::Redraw](#redraw)|Updates the display of the `CMFCRibbonEdit` control.|
|[CMFCRibbonEdit::SetACCData](#setaccdata)|Sets the accessibility data for the `CMFCRibbonEdit` object.|
|[CMFCRibbonEdit::SetEditText](#setedittext)|Sets the text in the text box.|
|[CMFCRibbonEdit::SetTextAlign](#settextalign)|Sets the text alignment of the text box.|
|[CMFCRibbonEdit::SetWidth](#setwidth)|Sets the width of the text box for the `CMFCRibbonEdit` control.|

## Remarks

## Example

The following example demonstrates how to construct a `CMFCRibbonEdit` object, show spin buttons next to the edit control, and set the text of the edit control. This code snippet is part of the [MS Office 2007 Demo sample](../../overview/visual-cpp-samples.md).

[!code-cpp[NVC_MFC_MSOffice2007Demo#7](../../mfc/reference/codesnippet/cpp/cmfcribbonedit-class_1.cpp)]

## Requirements

**Header:** afxRibbonEdit.h

## <a name="canbestretched"></a> CMFCRibbonEdit::CanBeStretched

Indicates whether the height of the [CMFCRibbonEdit](../../mfc/reference/cmfcribbonedit-class.md) control can increase vertically to the height of a ribbon row.

```cpp
virtual BOOL CanBeStretched();
```

### Return Value

Always returns FALSE.

### Remarks

## <a name="cmfcribbonedit"></a> CMFCRibbonEdit::CMFCRibbonEdit

Constructs a [CMFCRibbonEdit](../../mfc/reference/cmfcribbonedit-class.md) object.

```cpp
CMFCRibbonEdit(
    UINT nID,
    int nWidth,
    LPCTSTR lpszLabel = NULL,
    int nImage = -1);

CMFCRibbonEdit();
```

### Parameters

*nID*<br/>
[in] Command ID for the `CMFCRibbonEdit` control.

*nWidth*<br/>
[in] The width, in pixels, of the text box for the `CMFCRibbonEdit` control.

*lpszLabel*<br/>
[in] The label for the `CMFCRibbonEdit` control.

*nImage*<br/>
[in] Index of the small image to use for the `CMFCRibbonEdit` control. The collection of small images is maintained by the parent ribbon category.

### Remarks

The `CMFCRibbonEdit` control does not use a large image.

## <a name="copyfrom"></a> CMFCRibbonEdit::CopyFrom

Copies the state of the specified [CMFCRibbonEdit](../../mfc/reference/cmfcribbonedit-class.md) object to the current [CMFCRibbonEdit](../../mfc/reference/cmfcribbonedit-class.md) object.

```cpp
virtual void CopyFrom(const CMFCRibbonBaseElement& src);
```

### Parameters

*src*<br/>
[in] The source `CMFCRibbonEdit` object.

### Remarks

The *src* parameter must be of type `CMFCRibbonEdit`.

## <a name="createedit"></a> CMFCRibbonEdit::CreateEdit

Creates a new text box for the [CMFCRibbonEdit](../../mfc/reference/cmfcribbonedit-class.md) object.

```cpp
virtual CMFCRibbonRichEditCtrl* CreateEdit(
    CWnd* pWndParent,
    DWORD dwEditStyle);
```

### Parameters

*pWndParent*<br/>
[in] A pointer to the parent window of the `CMFCRibbonEdit` object.

*dwEditStyle*<br/>
[in] Specifies the style of the text box. You can combine the window styles listed in the Remarks section with the [edit control styles](/windows/win32/Controls/edit-control-styles) that are described in the Windows SDK.

### Return Value

A pointer to the new text box if the method was successful; otherwise, NULL.

### Remarks

Override this method in a derived class to create a custom text box.

You can apply the following [Window Styles](../../mfc/reference/styles-used-by-mfc.md#window-styles) to a text box:

- **WS_CHILD**

- **WS_VISIBLE**

- **WS_DISABLED**

- **WS_GROUP**

- **WS_TABSTOP**

## <a name="destroyctrl"></a> CMFCRibbonEdit::DestroyCtrl

Destroys the [CMFCRibbonEdit](../../mfc/reference/cmfcribbonedit-class.md) object.

```cpp
virtual void DestroyCtrl();
```

### Remarks

## <a name="dropdownlist"></a> CMFCRibbonEdit::DropDownList

Drops down a list box.

```cpp
virtual void DropDownList();
```

### Remarks

By default this method does nothing. Override this method to drop down a list box.

## <a name="enablespinbuttons"></a> CMFCRibbonEdit::EnableSpinButtons

Enables and sets the range of the spin button for the text box.

```cpp
void EnableSpinButtons(
    int nMin,
    int nMax);
```

### Parameters

*nMin*<br/>
[in] The minimum value of the spin button.

*nMax*<br/>
[in] The maximum value of the spin button.

### Remarks

Spin buttons display an up and down arrow and enable users to move through a fixed set of values.

## <a name="getcompactsize"></a> CMFCRibbonEdit::GetCompactSize

Retrieves the compact size of the [CMFCRibbonEdit](../../mfc/reference/cmfcribbonedit-class.md) object.

```cpp
virtual CSize GetCompactSize(CDC* pDC);
```

### Parameters

*pDC*<br/>
[in] Pointer to a device context for the `CMFCRibbonEdit` object.

### Return Value

The compact size of the `CMFCRibbonEdit` object.

### Remarks

## <a name="getedittext"></a> CMFCRibbonEdit::GetEditText

Retrieves the text in the text box.

```cpp
CString GetEditText() const;
```

### Return Value

The text in the text box.

### Remarks

## <a name="getintermediatesize"></a> CMFCRibbonEdit::GetIntermediateSize

Retrieves the intermediate size of the [CMFCRibbonEdit](../../mfc/reference/cmfcribbonedit-class.md) object.

```cpp
virtual CSize GetIntermediateSize(CDC* pDC);
```

### Parameters

*pDC*<br/>
[in] Pointer to a device context for the `CMFCRibbonEdit` object.

### Return Value

The intermediate size of the `CMFCRibbonEdit` object.

### Remarks

## <a name="gettextalign"></a> CMFCRibbonEdit::GetTextAlign

Retrieves the alignment of the text in the text box.

```cpp
int GetTextAlign() const;
```

### Return Value

A text alignment enumerated value. See the Remarks section for possible values.

### Remarks

The returned value is one of the following edit control styles:

- **ES_LEFT** for left alignment

- **ES_CENTER** for center alignment

- **ES_RIGHT** for right alignment

For more information about these styles, see [Edit Control Styles](/windows/win32/Controls/edit-control-styles).

## <a name="getwidth"></a> CMFCRibbonEdit::GetWidth

Retrieves the width, in pixels, of the [CMFCRibbonEdit](../../mfc/reference/cmfcribbonedit-class.md) control.

```cpp
int GetWidth(BOOL bInFloatyMode = FALSE) const;
```

### Parameters

*bInFloatyMode*<br/>
[in] TRUE if the `CMFCRibbonEdit` control is in floating mode; otherwise, FALSE.

### Return Value

The width, in pixels, of the `CMFCRibbonEdit` control.

### Remarks

## <a name="hascompactmode"></a> CMFCRibbonEdit::HasCompactMode

Indicates whether the display size for the [CMFCRibbonEdit](../../mfc/reference/cmfcribbonedit-class.md) control can be compact.

```cpp
virtual BOOL HasCompactMode() const;
```

### Return Value

Always returns TRUE.

### Remarks

By default this method always returns TRUE. Override this method to indicate whether the display size can be compact.

## <a name="hasfocus"></a> CMFCRibbonEdit::HasFocus

Indicates whether the [CMFCRibbonEdit](../../mfc/reference/cmfcribbonedit-class.md) control has the focus.

```cpp
virtual BOOL HasFocus() const;
```

### Return Value

TRUE if the `CMFCRibbonEdit` control has the focus; otherwise FALSE.

### Remarks

## <a name="haslargemode"></a> CMFCRibbonEdit::HasLargeMode

Indicates whether the display size for the [CMFCRibbonEdit](../../mfc/reference/cmfcribbonedit-class.md) control can be large.

```cpp
virtual BOOL HasLargeMode() const;
```

### Return Value

Always returns FALSE.

### Remarks

By default this method always returns FALSE. Override this method to indicate whether the display size can be large.

## <a name="hasspinbuttons"></a> CMFCRibbonEdit::HasSpinButtons

Indicates whether the text box has a spin button.

```cpp
virtual BOOL HasSpinButtons() const;
```

### Return Value

TRUE if the text box has a spin button; otherwise FALSE.

### Remarks

## <a name="ishighlighted"></a> CMFCRibbonEdit::IsHighlighted

Indicates whether the [CMFCRibbonEdit](../../mfc/reference/cmfcribbonedit-class.md) control is highlighted.

```cpp
virtual BOOL IsHighlighted() const;
```

### Return Value

TRUE if the `CMFCRibbonEdit` control is highlighted; otherwise FALSE.

### Remarks

## <a name="onafterchangerect"></a> CMFCRibbonEdit::OnAfterChangeRect

Called by the framework when the dimensions of the display rectangle for the [CMFCRibbonEdit](../../mfc/reference/cmfcribbonedit-class.md) control change.

```cpp
virtual void OnAfterChangeRect(CDC* pDC);
```

### Parameters

*pDC*<br/>
[in] Pointer to a device context for the `CMFCRibbonEdit` control.

### Remarks

## <a name="ondraw"></a> CMFCRibbonEdit::OnDraw

Called by the framework to draw the [CMFCRibbonEdit](../../mfc/reference/cmfcribbonedit-class.md) control.

```cpp
virtual void OnDraw(CDC* pDC);
```

### Parameters

*pDC*<br/>
[in] Pointer to a device context for the `CMFCRibbonEdit` control.

### Remarks

## <a name="ondrawlabelandimage"></a> CMFCRibbonEdit::OnDrawLabelAndImage

Called by the framework to draw the label and image for the [CMFCRibbonEdit](../../mfc/reference/cmfcribbonedit-class.md) control.

```cpp
virtual void OnDrawLabelAndImage(CDC* pDC);
```

### Parameters

*pDC*<br/>
[in] Pointer to a device context for the `CMFCRibbonEdit` control.

### Remarks

## <a name="ondrawonlist"></a> CMFCRibbonEdit::OnDrawOnList

Called by the framework to draw the [CMFCRibbonEdit](../../mfc/reference/cmfcribbonedit-class.md) control in a commands list box.

```cpp
virtual void OnDrawOnList(
    CDC* pDC,
    CString strText,
    int nTextOffset,
    CRect rect,
    BOOL bIsSelected,
    BOOL bHighlighted);
```

### Parameters

*pDC*<br/>
[in] Pointer to a device context for the `CMFCRibbonEdit` control.

*strText*<br/>
[in] The display text [](../../mfc/reference/cmfcribbonedit-class.md "cmfcribbonedit class").

*nTextOffset*<br/>
[in] Distance, in pixels, from the left side of the list box to the display text.

*rect*<br/>
[in] The display rectangle for the `CMFCRibbonEdit` control.

*bIsSelected*<br/>
[in] This parameter is not used.

*bHighlighted*<br/>
[in] This parameter is not used.

### Remarks

The commands list box displays ribbon controls to enable users to customize the quick access toolbar.

## <a name="onenable"></a> CMFCRibbonEdit::OnEnable

Called by the framework to enable or disable the [CMFCRibbonEdit](../../mfc/reference/cmfcribbonedit-class.md) control.

```cpp
virtual void OnEnable(BOOL bEnable);
```

### Parameters

*bEnable*<br/>
[in] TRUE to enable the control; FALSE to disable the control.

### Remarks

## <a name="onhighlight"></a> CMFCRibbonEdit::OnHighlight

Called by the framework when the pointer enters or leaves the bounds of the [CMFCRibbonEdit](../../mfc/reference/cmfcribbonedit-class.md) control.

```cpp
virtual void OnHighlight(BOOL bHighlight);
```

### Parameters

*bHighlight*<br/>
[in] TRUE if the pointer is in the bounds of the `CMFCRibbonEdit` control; otherwise, FALSE.

### Remarks

## <a name="onkey"></a> CMFCRibbonEdit::OnKey

Called by the framework when the user presses a keytip and the [CMFCRibbonEdit](../../mfc/reference/cmfcribbonedit-class.md) control has the focus.

```cpp
virtual BOOL OnKey(BOOL bIsMenuKey);
```

### Parameters

*bIsMenuKey*<br/>
[in] TRUE if the keytip displays a pop-up menu; otherwise, FALSE.

### Return Value

TRUE if the event was handled; otherwise, FALSE.

### Remarks

## <a name="onlbuttondown"></a> CMFCRibbonEdit::OnLButtonDown

Called by the framework to update the [CMFCRibbonEdit](../../mfc/reference/cmfcribbonedit-class.md) control when the user presses the left mouse button on the control.

```cpp
virtual void OnLButtonDown(CPoint point);
```

### Parameters

*point*<br/>
[in] This parameter is not used.

### Remarks

## <a name="onlbuttonup"></a> CMFCRibbonEdit::OnLButtonUp

Called by the framework when the user releases the left mouse button.

```cpp
virtual void OnLButtonUp(CPoint point);
```

### Parameters

*point*<br/>
[in] This parameter is not used.

### Remarks

## <a name="onrtlchanged"></a> CMFCRibbonEdit::OnRTLChanged

Called by the framework to update the [CMFCRibbonEdit](../../mfc/reference/cmfcribbonedit-class.md) control when the layout changes direction.

```cpp
virtual void OnRTLChanged(BOOL bIsRTL);
```

### Parameters

*bIsRTL*<br/>
[in] TRUE if the layout is right-to-left; FALSE if the layout is left-to-right.

### Remarks

## <a name="onshow"></a> CMFCRibbonEdit::OnShow

Called by the framework to show or hide the [CMFCRibbonEdit](../../mfc/reference/cmfcribbonedit-class.md) control.

```cpp
virtual void OnShow(BOOL bShow);
```

### Parameters

*bShow*<br/>
[in] TRUE to show the control; FALSE to hide the control.

### Remarks

## <a name="redraw"></a> CMFCRibbonEdit::Redraw

Updates the display of the [CMFCRibbonEdit](../../mfc/reference/cmfcribbonedit-class.md) control.

```cpp
virtual void Redraw();
```

### Remarks

This method redraws the display rectangle for the `CMFCRibbonEdit` object by indirectly calling [CWnd::RedrawWindow](/windows/win32/api/winuser/nf-winuser-redrawwindow) with the RDW_INVALIDATE, RDW_ERASE, and RDW_UPDATENOW flags set.

## <a name="setaccdata"></a> CMFCRibbonEdit::SetACCData

Sets the accessibility data for the [CMFCRibbonEdit](../../mfc/reference/cmfcribbonedit-class.md) object.

```cpp
virtual BOOL SetACCData(
    CWnd* pParent,
    CAccessibilityData& data);
```

### Parameters

*pParent*<br/>
Pointer to the parent window for the `CMFCRibbonEdit` object.

*data*<br/>
The accessibility data for the `CMFCRibbonEdit` object.

### Return Value

Always returns TRUE.

### Remarks

## <a name="setedittext"></a> CMFCRibbonEdit::SetEditText

Sets the text in the text box.

```cpp
void SetEditText(CString strText);
```

### Parameters

*strText*<br/>
[in] The text for the text box.

## <a name="settextalign"></a> CMFCRibbonEdit::SetTextAlign

Sets the text alignment of the text box.

```cpp
void SetTextAlign(int nAlign);
```

### Parameters

*nAlign*<br/>
[in] A text alignment enumerated value. See the Remarks section for possible values.

### Remarks

The parameter *nAlign* is one of the following edit control styles:

- ES_LEFT for left alignment

- ES_CENTER for center alignment

- ES_RIGHT for right alignment

For more information about these styles, see [Edit Control Styles](/windows/win32/Controls/edit-control-styles).

## <a name="setwidth"></a> CMFCRibbonEdit::SetWidth

Sets the width of the text box for the [CMFCRibbonEdit](../../mfc/reference/cmfcribbonedit-class.md) control.

```cpp
void SetWidth(
    int nWidth,
    BOOL bInFloatyMode = FALSE);
```

### Parameters

*nWidth*<br/>
[in] The width, in pixels, of the text box.

*bInFloatyMode*<br/>
TRUE to set the width for floating mode; FALSE to set the width for regular mode.

### Remarks

The `CMFCRibbonEdit` control has two widths depending on its display mode: floating mode and regular mode.

## See also

[Hierarchy Chart](../../mfc/hierarchy-chart.md)<br/>
[Classes](../../mfc/reference/mfc-classes.md)<br/>
[CMFCRibbonButton Class](../../mfc/reference/cmfcribbonbutton-class.md)<br/>
[CMFCRibbonBar Class](../../mfc/reference/cmfcribbonbar-class.md)
