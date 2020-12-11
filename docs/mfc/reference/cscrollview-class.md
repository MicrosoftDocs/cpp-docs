---
description: "Learn more about: CScrollView Class"
title: "CScrollView Class"
ms.date: "11/04/2016"
f1_keywords: ["CScrollView", "AFXWIN/CScrollView", "AFXWIN/CScrollView::CScrollView", "AFXWIN/CScrollView::CheckScrollBars", "AFXWIN/CScrollView::FillOutsideRect", "AFXWIN/CScrollView::GetDeviceScrollPosition", "AFXWIN/CScrollView::GetDeviceScrollSizes", "AFXWIN/CScrollView::GetScrollPosition", "AFXWIN/CScrollView::GetTotalSize", "AFXWIN/CScrollView::ResizeParentToFit", "AFXWIN/CScrollView::ScrollToPosition", "AFXWIN/CScrollView::SetScaleToFitSize", "AFXWIN/CScrollView::SetScrollSizes"]
helpviewer_keywords: ["CScrollView [MFC], CScrollView", "CScrollView [MFC], CheckScrollBars", "CScrollView [MFC], FillOutsideRect", "CScrollView [MFC], GetDeviceScrollPosition", "CScrollView [MFC], GetDeviceScrollSizes", "CScrollView [MFC], GetScrollPosition", "CScrollView [MFC], GetTotalSize", "CScrollView [MFC], ResizeParentToFit", "CScrollView [MFC], ScrollToPosition", "CScrollView [MFC], SetScaleToFitSize", "CScrollView [MFC], SetScrollSizes"]
ms.assetid: 4ba16dac-1acb-4be0-bb55-5fb695b6948d
---
# CScrollView Class

A [CView](../../mfc/reference/cview-class.md) with scrolling capabilities.

## Syntax

```
class CScrollView : public CView
```

## Members

### Protected Constructors

|Name|Description|
|----------|-----------------|
|[CScrollView::CScrollView](#cscrollview)|Constructs a `CScrollView` object.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[CScrollView::CheckScrollBars](#checkscrollbars)|Indicates whether the scroll view has horizontal and vertical scroll bars.|
|[CScrollView::FillOutsideRect](#filloutsiderect)|Fills the area of a view outside the scrolling area.|
|[CScrollView::GetDeviceScrollPosition](#getdevicescrollposition)|Gets the current scroll position in device units.|
|[CScrollView::GetDeviceScrollSizes](#getdevicescrollsizes)|Gets the current mapping mode, the total size, and the line and page sizes of the scrollable view. Sizes are in device units.|
|[CScrollView::GetScrollPosition](#getscrollposition)|Gets the current scroll position in logical units.|
|[CScrollView::GetTotalSize](#gettotalsize)|Gets the total size of the scroll view in logical units.|
|[CScrollView::ResizeParentToFit](#resizeparenttofit)|Causes the size of the view to dictate the size of its frame.|
|[CScrollView::ScrollToPosition](#scrolltoposition)|Scrolls the view to a given point, specified in logical units.|
|[CScrollView::SetScaleToFitSize](#setscaletofitsize)|Puts the scroll view into scale-to-fit mode.|
|[CScrollView::SetScrollSizes](#setscrollsizes)|Sets the scroll view's mapping mode, total size, and horizontal and vertical scroll amounts.|

## Remarks

You can handle standard scrolling yourself in any class derived from `CView` by overriding the message-mapped [OnHScroll](../../mfc/reference/cwnd-class.md#onhscroll) and [OnVScroll](../../mfc/reference/cwnd-class.md#onvscroll) member functions. But `CScrollView` adds the following features to its `CView` capabilities:

- It manages window and viewport sizes and mapping modes.

- It scrolls automatically in response to scroll-bar messages.

- It scrolls automatically in response to messages from the keyboard, a non-scrolling mouse, or the IntelliMouse wheel.

To scroll automatically in response to messages from the keyboard, add a WM_KEYDOWN message, and test for VK_DOWN, VK_PREV and call [SetScrollPos](/windows/win32/api/winuser/nf-winuser-setscrollpos).

You can handle mouse wheel scrolling yourself by overriding the message-mapped [OnMouseWheel](../../mfc/reference/cwnd-class.md#onmousewheel) and [OnRegisteredMouseWheel](../../mfc/reference/cwnd-class.md#onregisteredmousewheel) member functions. As they are for `CScrollView`, these member functions support the recommended behaviour for [WM_MOUSEWHEEL](/windows/win32/inputdev/wm-mousewheel), the wheel rotation message.

To take advantage of automatic scrolling, derive your view class from `CScrollView` instead of from `CView`. When the view is first created, if you want to calculate the size of the scrollable view based on the size of the document, call the `SetScrollSizes` member function from your override of either [CView::OnInitialUpdate](../../mfc/reference/cview-class.md#oninitialupdate) or [CView::OnUpdate](../../mfc/reference/cview-class.md#onupdate). (You must write your own code to query the size of the document. For an example, see the [Scribble sample](../../overview/visual-cpp-samples.md).)

The call to the `SetScrollSizes` member function sets the view's mapping mode, the total dimensions of the scroll view, and the amounts to scroll horizontally and vertically. All sizes are in logical units. The logical size of the view is usually calculated from data stored in the document, but in some cases you may want to specify a fixed size. For examples of both approaches, see [CScrollView::SetScrollSizes](#setscrollsizes).

You specify the amounts to scroll horizontally and vertically in logical units. By default, if the user clicks a scroll bar shaft outside of the scroll box, `CScrollView` scrolls a "page." If the user clicks a scroll arrow at either end of a scroll bar, `CScrollView` scrolls a "line." By default, a page is 1/10 of the total size of the view; a line is 1/10 of the page size. Override these default values by passing custom sizes in the `SetScrollSizes` member function. For example, you might set the horizontal size to some fraction of the width of the total size and the vertical size to the height of a line in the current font.

Instead of scrolling, `CScrollView` can automatically scale the view to the current window size. In this mode, the view has no scroll bars and the logical view is stretched or shrunk to exactly fit the window's client area. To use this scale-to-fit capability, call [CScrollView::SetScaleToFitSize](#setscaletofitsize). (Call either `SetScaleToFitSize` or `SetScrollSizes`, but not both.)

Before the `OnDraw` member function of your derived view class is called, `CScrollView` automatically adjusts the viewport origin for the `CPaintDC` device-context object that it passes to `OnDraw`.

To adjust the viewport origin for the scrolling window, `CScrollView` overrides [CView::OnPrepareDC](../../mfc/reference/cview-class.md#onpreparedc). This adjustment is automatic for the `CPaintDC` device context that `CScrollView` passes to `OnDraw`, but you must call `CScrollView::OnPrepareDC` yourself for any other device contexts you use, such as a `CClientDC`. You can override `CScrollView::OnPrepareDC` to set the pen, background color, and other drawing attributes, but call the base class to do scaling.

Scroll bars can appear in three places relative to a view, as shown in the following cases:

- Standard window-style scroll bars can be set for the view using the WS_HSCROLL and WS_VSCROLL[Windows Styles](../../mfc/reference/styles-used-by-mfc.md#window-styles).

- Scroll-bar controls can also be added to the frame containing the view, in which case the framework forwards WM_HSCROLL and WM_VSCROLL messages from the frame window to the currently active view.

- The framework also forwards scroll messages from a `CSplitterWnd` splitter control to the currently active splitter pane (a view). When placed in a [CSplitterWnd](../../mfc/reference/csplitterwnd-class.md) with shared scroll bars, a `CScrollView` object will use the shared ones rather than creating its own.

For more information on using `CScrollView`, see [Document/View Architecture](../../mfc/document-view-architecture.md) and [Derived View Classes Available in MFC](../../mfc/derived-view-classes-available-in-mfc.md).

## Inheritance Hierarchy

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CView](../../mfc/reference/cview-class.md)

`CScrollView`

## Requirements

**Header:** afxwin.h

## <a name="checkscrollbars"></a> CScrollView::CheckScrollBars

Call this member function to determine if the scroll view has horizontal and vertical bars.

```cpp
void CheckScrollBars(
    BOOL& bHasHorzBar,
    BOOL& bHasVertBar) const;
```

### Parameters

*bHasHorzBar*<br/>
Indicates the application has a horizontal scroll bar.

*bHasVertBar*<br/>
Indicates the application has a vertical scroll bar.

## <a name="cscrollview"></a> CScrollView::CScrollView

Constructs a `CScrollView` object.

```
CScrollView();
```

### Remarks

You must call either `SetScrollSizes` or `SetScaleToFitSize` before the scroll view is usable.

## <a name="filloutsiderect"></a> CScrollView::FillOutsideRect

Call `FillOutsideRect` to fill the area of the view that appears outside of the scrolling area.

```cpp
void FillOutsideRect(
    CDC* pDC,
    CBrush* pBrush);
```

### Parameters

*pDC*<br/>
Device context in which the filling is to be done.

*pBrush*<br/>
Brush with which the area is to be filled.

### Remarks

Use `FillOutsideRect` in your scroll view's `OnEraseBkgnd` handler function to prevent excessive background repainting.

### Example

[!code-cpp[NVC_MFCDocView#164](../../mfc/codesnippet/cpp/cscrollview-class_1.cpp)]

## <a name="getdevicescrollposition"></a> CScrollView::GetDeviceScrollPosition

Call `GetDeviceScrollPosition` when you need the current horizontal and vertical positions of the scroll boxes in the scroll bars.

```
CPoint GetDeviceScrollPosition() const;
```

### Return Value

The horizontal and vertical positions (in device units) of the scroll boxes as a `CPoint` object.

### Remarks

This coordinate pair corresponds to the location in the document to which the upper-left corner of the view has been scrolled. This is useful for offsetting mouse-device positions to scroll-view device positions.

`GetDeviceScrollPosition` returns values in device units. If you want logical units, use `GetScrollPosition` instead.

## <a name="getdevicescrollsizes"></a> CScrollView::GetDeviceScrollSizes

`GetDeviceScrollSizes` gets the current mapping mode, the total size, and the line and page sizes of the scrollable view.

```cpp
void GetDeviceScrollSizes(
    int& nMapMode,
    SIZE& sizeTotal,
    SIZE& sizePage,
    SIZE& sizeLine) const;
```

### Parameters

*nMapMode*<br/>
Returns the current mapping mode for this view. For a list of possible values, see `SetScrollSizes`.

*sizeTotal*<br/>
Returns the current total size of the scroll view in device units.

*sizePage*<br/>
Returns the current horizontal and vertical amounts to scroll in each direction in response to a mouse click in a scroll-bar shaft. The `cx` member contains the horizontal amount. The `cy` member contains the vertical amount.

*sizeLine*<br/>
Returns the current horizontal and vertical amounts to scroll in each direction in response to a mouse click in a scroll arrow. The `cx` member contains the horizontal amount. The `cy` member contains the vertical amount.

### Remarks

Sizes are in device units. This member function is rarely called.

## <a name="getscrollposition"></a> CScrollView::GetScrollPosition

Call `GetScrollPosition` when you need the current horizontal and vertical positions of the scroll boxes in the scroll bars.

```
CPoint GetScrollPosition() const;
```

### Return Value

The horizontal and vertical positions (in logical units) of the scroll boxes as a `CPoint` object.

### Remarks

This coordinate pair corresponds to the location in the document to which the upper-left corner of the view has been scrolled.

`GetScrollPosition` returns values in logical units. If you want device units, use `GetDeviceScrollPosition` instead.

## <a name="gettotalsize"></a> CScrollView::GetTotalSize

Call `GetTotalSize` to retrieve the current horizontal and vertical sizes of the scroll view.

```
CSize GetTotalSize() const;
```

### Return Value

The total size of the scroll view in logical units. The horizontal size is in the `cx` member of the `CSize` return value. The vertical size is in the `cy` member.

## <a name="resizeparenttofit"></a> CScrollView::ResizeParentToFit

Call `ResizeParentToFit` to let the size of your view dictate the size of its frame window.

```cpp
void ResizeParentToFit(BOOL bShrinkOnly = TRUE);
```

### Parameters

*bShrinkOnly*<br/>
The kind of resizing to perform. The default value, TRUE, shrinks the frame window if appropriate. Scroll bars will still appear for large views or small frame windows. A value of FALSE causes the view always to resize the frame window exactly. This can be somewhat dangerous since the frame window could get too big to fit inside the multiple document interface (MDI) frame window or the screen.

### Remarks

This is recommended only for views in MDI child frame windows. Use `ResizeParentToFit` in the `OnInitialUpdate` handler function of your derived `CScrollView` class. For an example of this member function, see [CScrollView::SetScrollSizes](#setscrollsizes).

`ResizeParentToFit` assumes that the size of the view window has been set. If the view window size has not been set when `ResizeParentToFit` is called, you will get an assertion. To ensure that this does not happen, make the following call before calling `ResizeParentToFit`:

[!code-cpp[NVC_MFCDocView#165](../../mfc/codesnippet/cpp/cscrollview-class_2.cpp)]

## <a name="scrolltoposition"></a> CScrollView::ScrollToPosition

Call `ScrollToPosition` to scroll to a given point in the view.

```cpp
void ScrollToPosition(POINT pt);
```

### Parameters

*pt*<br/>
The point to scroll to, in logical units. The `x` member must be a positive value (greater than or equal to 0, up to the total size of the view). The same is true for the `y` member when the mapping mode is MM_TEXT. The `y` member is negative in mapping modes other than MM_TEXT.

### Remarks

The view will be scrolled so that this point is at the upper-left corner of the window. This member function must not be called if the view is scaled to fit.

## <a name="setscaletofitsize"></a> CScrollView::SetScaleToFitSize

Call `SetScaleToFitSize` when you want to scale the viewport size to the current window size automatically.

```cpp
void SetScaleToFitSize(SIZE sizeTotal);
```

### Parameters

*sizeTotal*<br/>
The horizontal and vertical sizes to which the view is to be scaled. The scroll view's size is measured in logical units. The horizontal size is contained in the `cx` member. The vertical size is contained in the `cy` member. Both `cx` and `cy` must be greater than or equal to 0.

### Remarks

With scroll bars, only a portion of the logical view may be visible at any time. But with the scale-to-fit capability, the view has no scroll bars and the logical view is stretched or shrunk to exactly fit the window's client area. When the window is resized, the view draws its data at a new scale based on the size of the window.

You'll typically place the call to `SetScaleToFitSize` in your override of the view's `OnInitialUpdate` member function. If you do not want automatic scaling, call the `SetScrollSizes` member function instead.

`SetScaleToFitSize` can be used to implement a "Zoom to Fit" operation. Use `SetScrollSizes` to reinitialize scrolling.

`SetScaleToFitSize` assumes that the size of the view window has been set. If the view window size has not been set when `SetScaleToFitSize` is called, you will get an assertion. To ensure that this does not happen, make the following call before calling `SetScaleToFitSize`:

[!code-cpp[NVC_MFCDocView#165](../../mfc/codesnippet/cpp/cscrollview-class_2.cpp)]

## <a name="setscrollsizes"></a> CScrollView::SetScrollSizes

Call `SetScrollSizes` when the view is about to be updated.

```cpp
void SetScrollSizes(
    int nMapMode,
    SIZE sizeTotal,
    const SIZE& sizePage = sizeDefault,
    const SIZE& sizeLine = sizeDefault);
```

### Parameters

*nMapMode*<br/>
The mapping mode to set for this view. Possible values include:

|Mapping Mode|Logical Unit|Positive y-axis Extends...|
|------------------|------------------|---------------------------------|
|MM_TEXT|1 pixel|Downward|
|MM_HIMETRIC|0.01 mm|Upward|
|MM_TWIPS|1/1440 in|Upward|
|MM_HIENGLISH|0.001 in|Upward|
|MM_LOMETRIC|0.1 mm|Upward|
|MM_LOENGLISH|0.01 in|Upward|

All of these modes are defined by Windows. Two standard mapping modes, MM_ISOTROPIC and MM_ANISOTROPIC, are not used for `CScrollView`. The class library provides the `SetScaleToFitSize` member function for scaling the view to window size. Column three in the table above describes the coordinate orientation.

*sizeTotal*<br/>
The total size of the scroll view. The `cx` member contains the horizontal extent. The `cy` member contains the vertical extent. Sizes are in logical units. Both `cx` and `cy` must be greater than or equal to 0.

*sizePage*<br/>
The horizontal and vertical amounts to scroll in each direction in response to a mouse click in a scroll-bar shaft. The `cx` member contains the horizontal amount. The `cy` member contains the vertical amount.

*sizeLine*<br/>
The horizontal and vertical amounts to scroll in each direction in response to a mouse click in a scroll arrow. The `cx` member contains the horizontal amount. The `cy` member contains the vertical amount.

### Remarks

Call it in your override of the `OnUpdate` member function to adjust scrolling characteristics when, for example, the document is initially displayed or when it changes size.

You will typically obtain size information from the view's associated document by calling a document member function, perhaps called `GetMyDocSize`, that you supply with your derived document class. The following code shows this approach:

[!code-cpp[NVC_MFCDocView#166](../../mfc/codesnippet/cpp/cscrollview-class_3.cpp)]

Alternatively, you might sometimes need to set a fixed size, as in the following code:

[!code-cpp[NVC_MFCDocView#167](../../mfc/codesnippet/cpp/cscrollview-class_4.cpp)]

You must set the mapping mode to any of the Windows mapping modes except MM_ISOTROPIC or MM_ANISOTROPIC. If you want to use an unconstrained mapping mode, call the `SetScaleToFitSize` member function instead of `SetScrollSizes`.

### Example

[!code-cpp[NVC_MFCDocView#168](../../mfc/codesnippet/cpp/cscrollview-class_5.cpp)]

[!code-cpp[NVC_MFCDocView#169](../../mfc/codesnippet/cpp/cscrollview-class_6.cpp)]

## See also

[MFC Sample DIBLOOK](../../overview/visual-cpp-samples.md)<br/>
[CView Class](../../mfc/reference/cview-class.md)<br/>
[Hierarchy Chart](../../mfc/hierarchy-chart.md)<br/>
[CView Class](../../mfc/reference/cview-class.md)<br/>
[CSplitterWnd Class](../../mfc/reference/csplitterwnd-class.md)
