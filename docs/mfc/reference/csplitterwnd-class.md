---
description: "Learn more about: CSplitterWnd Class"
title: "CSplitterWnd Class"
ms.date: "11/04/2016"
f1_keywords: ["CSplitterWnd", "AFXEXT/CSplitterWnd", "AFXEXT/CSplitterWnd::CSplitterWnd", "AFXEXT/CSplitterWnd::ActivateNext", "AFXEXT/CSplitterWnd::CanActivateNext", "AFXEXT/CSplitterWnd::Create", "AFXEXT/CSplitterWnd::CreateScrollBarCtrl", "AFXEXT/CSplitterWnd::CreateStatic", "AFXEXT/CSplitterWnd::CreateView", "AFXEXT/CSplitterWnd::DeleteColumn", "AFXEXT/CSplitterWnd::DeleteRow", "AFXEXT/CSplitterWnd::DeleteView", "AFXEXT/CSplitterWnd::DoKeyboardSplit", "AFXEXT/CSplitterWnd::DoScroll", "AFXEXT/CSplitterWnd::DoScrollBy", "AFXEXT/CSplitterWnd::GetActivePane", "AFXEXT/CSplitterWnd::GetColumnCount", "AFXEXT/CSplitterWnd::GetColumnInfo", "AFXEXT/CSplitterWnd::GetPane", "AFXEXT/CSplitterWnd::GetRowCount", "AFXEXT/CSplitterWnd::GetRowInfo", "AFXEXT/CSplitterWnd::GetScrollStyle", "AFXEXT/CSplitterWnd::IdFromRowCol", "AFXEXT/CSplitterWnd::IsChildPane", "AFXEXT/CSplitterWnd::IsTracking", "AFXEXT/CSplitterWnd::RecalcLayout", "AFXEXT/CSplitterWnd::SetActivePane", "AFXEXT/CSplitterWnd::SetColumnInfo", "AFXEXT/CSplitterWnd::SetRowInfo", "AFXEXT/CSplitterWnd::SetScrollStyle", "AFXEXT/CSplitterWnd::SplitColumn", "AFXEXT/CSplitterWnd::SplitRow", "AFXEXT/CSplitterWnd::OnDraw", "AFXEXT/CSplitterWnd::OnDrawSplitter", "AFXEXT/CSplitterWnd::OnInvertTracker"]
helpviewer_keywords: ["CSplitterWnd [MFC], CSplitterWnd", "CSplitterWnd [MFC], ActivateNext", "CSplitterWnd [MFC], CanActivateNext", "CSplitterWnd [MFC], Create", "CSplitterWnd [MFC], CreateScrollBarCtrl", "CSplitterWnd [MFC], CreateStatic", "CSplitterWnd [MFC], CreateView", "CSplitterWnd [MFC], DeleteColumn", "CSplitterWnd [MFC], DeleteRow", "CSplitterWnd [MFC], DeleteView", "CSplitterWnd [MFC], DoKeyboardSplit", "CSplitterWnd [MFC], DoScroll", "CSplitterWnd [MFC], DoScrollBy", "CSplitterWnd [MFC], GetActivePane", "CSplitterWnd [MFC], GetColumnCount", "CSplitterWnd [MFC], GetColumnInfo", "CSplitterWnd [MFC], GetPane", "CSplitterWnd [MFC], GetRowCount", "CSplitterWnd [MFC], GetRowInfo", "CSplitterWnd [MFC], GetScrollStyle", "CSplitterWnd [MFC], IdFromRowCol", "CSplitterWnd [MFC], IsChildPane", "CSplitterWnd [MFC], IsTracking", "CSplitterWnd [MFC], RecalcLayout", "CSplitterWnd [MFC], SetActivePane", "CSplitterWnd [MFC], SetColumnInfo", "CSplitterWnd [MFC], SetRowInfo", "CSplitterWnd [MFC], SetScrollStyle", "CSplitterWnd [MFC], SplitColumn", "CSplitterWnd [MFC], SplitRow", "CSplitterWnd [MFC], OnDraw", "CSplitterWnd [MFC], OnDrawSplitter", "CSplitterWnd [MFC], OnInvertTracker"]
ms.assetid: fd0de258-6dbe-4552-9e47-a39de0471d51
---
# CSplitterWnd Class

Provides the functionality of a splitter window, which is a window that contains multiple panes.

## Syntax

```
class CSplitterWnd : public CWnd
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[CSplitterWnd::CSplitterWnd](#csplitterwnd)|Call to construct a `CSplitterWnd` object.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[CSplitterWnd::ActivateNext](#activatenext)|Performs the Next Pane or Previous Pane command.|
|[CSplitterWnd::CanActivateNext](#canactivatenext)|Checks to see if the Next Pane or Previous Pane command is currently possible.|
|[CSplitterWnd::Create](#create)|Call to create a dynamic splitter window and attach it to the `CSplitterWnd` object.|
|[CSplitterWnd::CreateScrollBarCtrl](#createscrollbarctrl)|Creates a shared scroll bar control.|
|[CSplitterWnd::CreateStatic](#createstatic)|Call to create a static splitter window and attach it to the `CSplitterWnd` object.|
|[CSplitterWnd::CreateView](#createview)|Call to create a pane in a splitter window.|
|[CSplitterWnd::DeleteColumn](#deletecolumn)|Deletes a column from the splitter window.|
|[CSplitterWnd::DeleteRow](#deleterow)|Deletes a row from the splitter window.|
|[CSplitterWnd::DeleteView](#deleteview)|Deletes a view from the splitter window.|
|[CSplitterWnd::DoKeyboardSplit](#dokeyboardsplit)|Performs the keyboard split command, usually "Window Split."|
|[CSplitterWnd::DoScroll](#doscroll)|Performs synchronized scrolling of split windows.|
|[CSplitterWnd::DoScrollBy](#doscrollby)|Scrolls split windows by a given number of pixels.|
|[CSplitterWnd::GetActivePane](#getactivepane)|Determines the active pane from the focus or active view in the frame.|
|[CSplitterWnd::GetColumnCount](#getcolumncount)|Returns the current pane column count.|
|[CSplitterWnd::GetColumnInfo](#getcolumninfo)|Returns information on the specified column.|
|[CSplitterWnd::GetPane](#getpane)|Returns the pane at the specified row and column.|
|[CSplitterWnd::GetRowCount](#getrowcount)|Returns the current pane row count.|
|[CSplitterWnd::GetRowInfo](#getrowinfo)|Returns information on the specified row.|
|[CSplitterWnd::GetScrollStyle](#getscrollstyle)|Returns the shared scroll-bar style.|
|[CSplitterWnd::IdFromRowCol](#idfromrowcol)|Returns the child window ID of the pane at the specified row and column.|
|[CSplitterWnd::IsChildPane](#ischildpane)|Call to determine whether the window is currently a child pane of this splitter window.|
|[CSplitterWnd::IsTracking](#istracking)|Determines if splitter bar is currently being moved.|
|[CSplitterWnd::RecalcLayout](#recalclayout)|Call to redisplay the splitter window after adjusting row or column size.|
|[CSplitterWnd::SetActivePane](#setactivepane)|Sets a pane to be the active one in the frame.|
|[CSplitterWnd::SetColumnInfo](#setcolumninfo)|Call to set the specified column information.|
|[CSplitterWnd::SetRowInfo](#setrowinfo)|Call to set the specified row information.|
|[CSplitterWnd::SetScrollStyle](#setscrollstyle)|Specifies the new scroll-bar style for the splitter window's shared scroll-bar support.|
|[CSplitterWnd::SplitColumn](#splitcolumn)|Indicates where a frame window splits vertically.|
|[CSplitterWnd::SplitRow](#splitrow)|Indicates where a frame window splits horizontally.|

### Protected Methods

|Name|Description|
|----------|-----------------|
|[CSplitterWnd::OnDraw](#ondraw)|Called by the framework to draw the splitter window.|
|[CSplitterWnd::OnDrawSplitter](#ondrawsplitter)|Renders an image of a split window.|
|[CSplitterWnd::OnInvertTracker](#oninverttracker)|Renders the image of a split window to be the same size and shape as the frame window.|

## Remarks

A pane is usually an application-specific object derived from [CView](../../mfc/reference/cview-class.md), but it can be any [CWnd](../../mfc/reference/cwnd-class.md) object that has the appropriate child window ID.

A `CSplitterWnd` object is usually embedded in a parent [CFrameWnd](../../mfc/reference/cframewnd-class.md) or [CMDIChildWnd](../../mfc/reference/cmdichildwnd-class.md) object. Create a `CSplitterWnd` object using the following steps:

1. Embed a `CSplitterWnd` member variable in the parent frame.

2. Override the parent frame's [CFrameWnd::OnCreateClient](../../mfc/reference/cframewnd-class.md#oncreateclient) member function.

3. From within the overridden `OnCreateClient`, call the [Create](#create) or [CreateStatic](#createstatic) member function of `CSplitterWnd`.

Call the `Create` member function to create a dynamic splitter window. A dynamic splitter window typically is used to create and scroll a number of individual panes, or views, of the same document. The framework automatically creates an initial pane for the splitter; then the framework creates, resizes, and disposes of additional panes as the user operates the splitter window's controls.

When you call `Create`, you specify a minimum row height and column width that determine when the panes are too small to be fully displayed. After you call `Create`, you can adjust these minimums by calling the [SetColumnInfo](#setcolumninfo) and [SetRowInfo](#setrowinfo) member functions.

Also use the `SetColumnInfo` and `SetRowInfo` member functions to set an "ideal" width for a column and "ideal" height for a row. When the framework displays a splitter window, it first displays the parent frame, then the splitter window. The framework then lays out the panes in columns and rows according to their ideal dimensions, working from the upper-left to the lower-right corner of the splitter window's client area.

All panes in a dynamic splitter window must be of the same class. Familiar applications that support dynamic splitter windows include Microsoft Word and Microsoft Excel.

Use the `CreateStatic` member function to create a static splitter window. The user can change only the size of the panes in a static splitter window, not their number or order.

You must specifically create all the static splitter's panes when you create the static splitter. Make sure you create all the panes before the parent frame's `OnCreateClient` member function returns, or the framework will not display the window correctly.

The `CreateStatic` member function automatically initializes a static splitter with a minimum row height and column width of 0. After you call `Create`, adjust these minimums by calling the [SetColumnInfo](#setcolumninfo) and [SetRowInfo](#setrowinfo) member functions. Also use `SetColumnInfo` and `SetRowInfo` after you call `CreateStatic` to indicate desired ideal pane dimensions.

The individual panes of a static splitter often belong to different classes. For examples of static splitter windows, see the graphics editor and the Windows File Manager.

A splitter window supports special scroll bars (apart from the scroll bars that panes may have). These scroll bars are children of the `CSplitterWnd` object and are shared with the panes.

You create these special scroll bars when you create the splitter window. For example, a `CSplitterWnd` that has one row, two columns, and the WS_VSCROLL style will display a vertical scroll bar that is shared by the two panes. When the user moves the scroll bar, WM_VSCROLL messages are sent to both panes. When the panes set the scroll-bar position, the shared scroll bar is set.

For further information on splitter windows, see [Technical Note 29](../../mfc/tn029-splitter-windows.md).

For more information on how to create dynamic splitter windows, see:

- MFC sample [Scribble](../../overview/visual-cpp-samples.md)

- MFC sample [VIEWEX](../../overview/visual-cpp-samples.md).

## Inheritance Hierarchy

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

`CSplitterWnd`

## Requirements

**Header:** afxext.h

## <a name="activatenext"></a> CSplitterWnd::ActivateNext

Called by the framework to perform the Next Pane or Previous Pane command.

```
virtual void ActivateNext(BOOL bPrev = FALSE);
```

### Parameters

*bPrev*<br/>
Indicates which window to activate. **TRUE** for previous; **FALSE** for next.

### Remarks

This member function is a high level command that is used by the [CView](../../mfc/reference/cview-class.md) class to delegate to the `CSplitterWnd` implementation.

## <a name="canactivatenext"></a> CSplitterWnd::CanActivateNext

Called by the framework to check to see if the Next Pane or Previous Pane command is currently possible.

```
virtual BOOL CanActivateNext(BOOL bPrev = FALSE);
```

### Parameters

*bPrev*<br/>
Indicates which window to activate. **TRUE** for previous; **FALSE** for next.

### Return Value

Nonzero if successful; otherwise 0.

### Remarks

This member function is a high level command that is used by the [CView](../../mfc/reference/cview-class.md) class to delegate to the `CSplitterWnd` implementation.

## <a name="create"></a> CSplitterWnd::Create

To create a dynamic splitter window, call the `Create` member function.

```
virtual BOOL Create(
    CWnd* pParentWnd,
    int nMaxRows,
    int nMaxCols,
    SIZE sizeMin,
    CCreateContext* pContext,
    DWORD dwStyle = WS_CHILD | WS_VISIBLE | WS_HSCROLL | WS_VSCROLL | SPLS_DYNAMIC_SPLIT,
    UINT nID = AFX_IDW_PANE_FIRST);
```

### Parameters

*pParentWnd*<br/>
The parent frame window of the splitter window.

*nMaxRows*<br/>
The maximum number of rows in the splitter window. This value must not exceed 2.

*nMaxCols*<br/>
The maximum number of columns in the splitter window. This value must not exceed 2.

*sizeMin*<br/>
Specifies the minimum size at which a pane may be displayed.

*pContext*<br/>
A pointer to a [CCreateContext](../../mfc/reference/ccreatecontext-structure.md) structure. In most cases, this can be the *pContext* passed to the parent frame window.

*dwStyle*<br/>
Specifies the window style.

*nID*<br/>
The child window ID of the window. The ID can be AFX_IDW_PANE_FIRST unless the splitter window is nested inside another splitter window.

### Return Value

Nonzero if successful; otherwise 0.

### Remarks

You can embed a `CSplitterWnd` in a parent [CFrameWnd](../../mfc/reference/cframewnd-class.md) or [CMDIChildWnd](../../mfc/reference/cmdichildwnd-class.md) object by taking the following steps:

1. Embed a `CSplitterWnd` member variable in the parent frame.

1. Override the parent frame's [CFrameWnd::OnCreateClient](../../mfc/reference/cframewnd-class.md#oncreateclient) member function.

1. Call the `Create` member function from within the overridden `OnCreateClient`.

When you create a splitter window from within a parent frame, pass the parent frame's *pContext* parameter to the splitter window. Otherwise, this parameter can be NULL.

The initial minimum row height and column width of a dynamic splitter window are set by the *sizeMin* parameter. These minimums, which determine whether a pane is too small to be shown in its entirety, can be changed with the [SetRowInfo](#setrowinfo) and [SetColumnInfo](#setcolumninfo) member functions.

For more on dynamic splitter windows, see "Splitter Windows" in the article [Multiple Document Types, Views, and Frame Windows](../../mfc/multiple-document-types-views-and-frame-windows.md), [Technical Note 29](../../mfc/tn029-splitter-windows.md), and the `CSplitterWnd` class overview.

### Example

[!code-cpp[NVC_MFCWindowing#125](../../mfc/reference/codesnippet/cpp/csplitterwnd-class_1.cpp)]

## <a name="createscrollbarctrl"></a> CSplitterWnd::CreateScrollBarCtrl

Called by the framework to create a shared scroll bar control.

```
virtual BOOL CreateScrollBarCtrl(
    DWORD dwStyle,
    UINT nID);
```

### Parameters

*dwStyle*<br/>
Specifies the window style.

*nID*<br/>
The child window ID of the window. The ID can be AFX_IDW_PANE_FIRST unless the splitter window is nested inside another splitter window.

### Return Value

Nonzero if successful; otherwise 0.

### Remarks

Override `CreateScrollBarCtrl` to include extra controls next to a scroll bar. The default behavior is to create normal Windows scroll bar controls.

## <a name="createstatic"></a> CSplitterWnd::CreateStatic

To create a static splitter window, call the `CreateStatic` member function.

```
virtual BOOL CreateStatic(
    CWnd* pParentWnd,
    int nRows,
    int nCols,
    DWORD dwStyle = WS_CHILD | WS_VISIBLE,
    UINT nID = AFX_IDW_PANE_FIRST);
```

### Parameters

*pParentWnd*<br/>
The parent frame window of the splitter window.

*nRows*<br/>
The number of rows. This value must not exceed 16.

*nCols*<br/>
The number of columns. This value must not exceed 16.

*dwStyle*<br/>
Specifies the window style.

*nID*<br/>
The child window ID of the window. The ID can be AFX_IDW_PANE_FIRST unless the splitter window is nested inside another splitter window.

### Return Value

Nonzero if successful; otherwise 0.

### Remarks

A `CSplitterWnd` is usually embedded in a parent `CFrameWnd` or [CMDIChildWnd](../../mfc/reference/cmdichildwnd-class.md) object by taking the following steps:

1. Embed a `CSplitterWnd` member variable in the parent frame.

1. Override the parent frame's `OnCreateClient` member function.

1. Call the `CreateStatic` member function from within the overridden [CFrameWnd::OnCreateClient](../../mfc/reference/cframewnd-class.md#oncreateclient).

A static splitter window contains a fixed number of panes, often from different classes.

When you create a static splitter window, you must at the same time create all its panes. The [CreateView](#createview) member function is usually used for this purpose, but you can create other nonview classes as well.

The initial minimum row height and column width for a static splitter window is 0. These minimums, which determine when a pane is too small to be shown in its entirety, can be changed with the [SetRowInfo](#setrowinfo) and [SetColumnInfo](#setcolumninfo) member functions.

To add scroll bars to a static splitter window, add the WS_HSCROLL and WS_VSCROLL styles to *dwStyle*.

See "Splitter Windows" in the article [Multiple Document Types, Views, and Frame Windows](../../mfc/multiple-document-types-views-and-frame-windows.md), [Technical Note 29](../../mfc/tn029-splitter-windows.md), and the `CSplitterWnd` class overview for more on static splitter windows.

## <a name="createview"></a> CSplitterWnd::CreateView

Creates the panes for a static splitter window.

```
virtual BOOL CreateView(
    int row,
    int col,
    CRuntimeClass* pViewClass,
    SIZE sizeInit,
    CCreateContext* pContext);
```

### Parameters

*row*<br/>
Specifies the splitter window row in which to place the new view.

*col*<br/>
Specifies the splitter window column in which to place the new view.

*pViewClass*<br/>
Specifies the [CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md) of the new view.

*sizeInit*<br/>
Specifies the initial size of the new view.

*pContext*<br/>
A pointer to a creation context used to create the view (usually the *pContext* passed into the parent frame's overridden [CFrameWnd::OnCreateClient](../../mfc/reference/cframewnd-class.md#oncreateclient) member function in which the splitter window is being created).

### Return Value

Nonzero if successful; otherwise 0.

### Remarks

All panes of a static splitter window must be created before the framework displays the splitter.

The framework also calls this member function to create new panes when the user of a dynamic splitter window splits a pane, row, or column.

### Example

[!code-cpp[NVC_MFCWindowing#4](../../mfc/reference/codesnippet/cpp/csplitterwnd-class_2.cpp)]

## <a name="csplitterwnd"></a> CSplitterWnd::CSplitterWnd

Call to construct a `CSplitterWnd` object.

```
CSplitterWnd();
```

### Remarks

Construct a `CSplitterWnd` object in two steps. First, call the constructor, which creates the `CSplitterWnd` object, and then call the [Create](#create) member function, which creates the splitter window and attaches it to the `CSplitterWnd` object.

## <a name="deletecolumn"></a> CSplitterWnd::DeleteColumn

Deletes a column from the splitter window.

```
virtual void DeleteColumn(int colDelete);
```

### Parameters

*colDelete*<br/>
Specifies the column to be deleted.

### Remarks

This member function is called by the framework to implement the logic of the dynamic splitter window (that is, if the splitter window has the SPLS_DYNAMIC_SPLIT style). It can be customized, along with the virtual function [CreateView](#createview), to implement more advanced dynamic splitters.

## <a name="deleterow"></a> CSplitterWnd::DeleteRow

Deletes a row from the splitter window.

```
virtual void DeleteRow(int rowDelete);
```

### Parameters

*rowDelete*<br/>
Specifies the row to be deleted.

### Remarks

This member function is called by the framework to implement the logic of the dynamic splitter window (that is, if the splitter window has the SPLS_DYNAMIC_SPLIT style). It can be customized, along with the virtual function [CreateView](#createview), to implement more advanced dynamic splitters.

## <a name="deleteview"></a> CSplitterWnd::DeleteView

Deletes a view from the splitter window.

```
virtual void DeleteView(
    int row,
    int col);
```

### Parameters

*row*<br/>
Specifies the splitter window row at which to delete the view.

*col*<br/>
Specifies the splitter window column at which to delete the view.

### Remarks

If the active view is being deleted, the next view will become active. The default implementation assumes the view will auto delete in [PostNcDestroy](../../mfc/reference/cwnd-class.md#postncdestroy).

This member function is called by the framework to implement the logic of the dynamic splitter window (that is, if the splitter window has the SPLS_DYNAMIC_SPLIT style). It can be customized, along with the virtual function [CreateView](#createview), to implement more advanced dynamic splitters.

## <a name="dokeyboardsplit"></a> CSplitterWnd::DoKeyboardSplit

Performs the keyboard split command, usually "Window Split."

```
virtual BOOL DoKeyboardSplit();
```

### Return Value

Nonzero if successful; otherwise 0.

### Remarks

This member function is a high level command that is used by the [CView](../../mfc/reference/cview-class.md) class to delegate to the `CSplitterWnd` implementation.

## <a name="doscroll"></a> CSplitterWnd::DoScroll

Performs synchronized scrolling of split windows.

```
virtual BOOL DoScroll(
    CView* pViewFrom,
    UINT nScrollCode,
    BOOL bDoScroll = TRUE);
```

### Parameters

*pViewFrom*<br/>
A pointer to the view from which the scrolling message originates.

*nScrollCode*<br/>
A scroll-bar code that indicates the user's scrolling request. This parameter is composed of two parts: a low-order byte, which determines the type of scrolling occurring horizontally, and a high-order byte, which determines the type of scrolling occurring vertically:

- SB_BOTTOM Scrolls to bottom.

- SB_LINEDOWN Scrolls one line down.

- SB_LINEUP Scrolls one line up.

- SB_PAGEDOWN Scrolls one page down.

- SB_PAGEUP Scrolls one page up.

- SB_TOP Scrolls to top.

*bDoScroll*<br/>
Determines whether the specified scrolling action occurs. If *bDoScroll* is TRUE (that is, if a child window exists, and if the split windows have a scroll range), then the specified scrolling action can take place; if *bDoScroll* is FALSE (that is, if no child window exists, or the split views have no scroll range), then scrolling does not occur.

### Return Value

Nonzero if synchronized scrolling occurs; otherwise 0.

### Remarks

This member function is called by the framework to perform synchronized scrolling of split windows when the view receives a scroll message. Override to require an action by the user before synchronized scrolling is allowed.

## <a name="doscrollby"></a> CSplitterWnd::DoScrollBy

Scrolls split windows by a given number of pixels.

```
virtual BOOL DoScrollBy(
    CView* pViewFrom,
    CSize sizeScroll,
    BOOL bDoScroll = TRUE);
```

### Parameters

*pViewFrom*<br/>
A pointer to the view from which the scrolling message originates.

*sizeScroll*<br/>
Number of pixels to be scrolled horizontally and vertically.

*bDoScroll*<br/>
Determines whether the specified scrolling action occurs. If *bDoScroll* is TRUE (that is, if a child window exists, and if the split windows have a scroll range), then the specified scrolling action can take place; if *bDoScroll* is FALSE (that is, if no child window exists, or the split views have no scroll range), then scrolling does not occur.

### Return Value

Nonzero if synchronized scrolling occurs; otherwise 0.

### Remarks

This member function is called by the framework in response to a scroll message, to perform synchronized scrolling of the split windows by the amount, in pixels, indicated by *sizeScroll*. Positive values indicate scrolling down and to the right; negative values indicate scrolling up and to the left.

Override to require an action by the user before allowing scroll.

## <a name="getactivepane"></a> CSplitterWnd::GetActivePane

Determines the active pane from the focus or active view in the frame.

```
virtual CWnd* GetActivePane(
    int* pRow = NULL,
    int* pCol = NULL);
```

### Parameters

*pRow*<br/>
A pointer to an **`int`** to retrieve the row number of the active pane.

*pCol*<br/>
A pointer to an **`int`** to retrieve the column number of the active pane.

### Return Value

Pointer to the active pane. NULL if no active pane exists.

### Remarks

This member function is called by the framework to determine the active pane in a splitter window. Override to require an action by the user before getting the active pane.

## <a name="getcolumncount"></a> CSplitterWnd::GetColumnCount

Returns the current pane column count.

```
int GetColumnCount() const;
```

### Return Value

Returns the current number of columns in the splitter. For a static splitter, this will also be the maximum number of columns.

## <a name="getcolumninfo"></a> CSplitterWnd::GetColumnInfo

Returns information on the specified column.

```cpp
void GetColumnInfo(
    int col,
    int& cxCur,
    int& cxMin) const;
```

### Parameters

*col*<br/>
Specifies a column.

*cxCur*<br/>
A reference to an **`int`** to be set to the current width of the column.

*cxMin*<br/>
A reference to an **`int`** to be set to the current minimum width of the column.

## <a name="getpane"></a> CSplitterWnd::GetPane

Returns the pane at the specified row and column.

```
CWnd* GetPane(
    int row,
    int col) const;
```

### Parameters

*row*<br/>
Specifies a row.

*col*<br/>
Specifies a column.

### Return Value

Returns the pane at the specified row and column. The returned pane is usually a [CView](../../mfc/reference/cview-class.md)-derived class.

## <a name="getrowcount"></a> CSplitterWnd::GetRowCount

Returns the current pane row count.

```
int GetRowCount() const;
```

### Return Value

Returns the current number of rows in the splitter window. For a static splitter window, this will also be the maximum number of rows.

## <a name="getrowinfo"></a> CSplitterWnd::GetRowInfo

Returns information on the specified row.

```cpp
void GetRowInfo(
    int row,
    int& cyCur,
    int& cyMin) const;
```

### Parameters

*row*<br/>
Specifies a row.

*cyCur*<br/>
Reference to **`int`** to be set to the current height of the row in pixels.

*cyMin*<br/>
Reference to **`int`** to be set to the current minimum height of the row in pixels.

### Remarks

Call this member function to obtain information about the specified row. The *cyCur* parameter is filled with the current height of the specified row, and *cyMin* is filled with the minimum height of the row.

## <a name="getscrollstyle"></a> CSplitterWnd::GetScrollStyle

Returns the shared scroll-bar style for the splitter window.

```
DWORD GetScrollStyle() const;
```

### Return Value

One or more of the following windows style flags, if successful:

- WS_HSCROLL If the splitter currently manages shared horizontal scroll bars.

- WS_VSCROLL If the splitter currently manages shared vertical scroll bars.

If zero, the splitter window does not currently manage any shared scroll bars.

## <a name="idfromrowcol"></a> CSplitterWnd::IdFromRowCol

Obtains the child window ID for the pane at the specified row and column.

```
int IdFromRowCol(
    int row,
    int col) const;
```

### Parameters

*row*<br/>
Specifies the splitter window row.

*col*<br/>
Specifies the splitter window column.

### Return Value

The child window ID for the pane.

### Remarks

This member function is used for creating nonviews as panes and may be called before the pane exists.

### Example

[!code-cpp[NVC_MFCWindowing#5](../../mfc/reference/codesnippet/cpp/csplitterwnd-class_3.cpp)]

## <a name="ischildpane"></a> CSplitterWnd::IsChildPane

Determines whether *pWnd* is currently a child pane of this splitter window.

```
BOOL IsChildPane(
    CWnd* pWnd,
    int* pRow,
    int* pCol);
```

### Parameters

*pWnd*<br/>
A pointer to a [CWnd](../../mfc/reference/cwnd-class.md) object to be tested.

*pRow*<br/>
A pointer to an **`int`** in which to store row number.

*pCol*<br/>
A pointer to an **`int`** in which to store a column number.

### Return Value

If nonzero, *pWnd* is currently a child pane of this splitter window, and *pRow* and *pCol* are filled in with the position of the pane in the splitter window. If *pWnd* is not a child pane of this splitter window, 0 is returned.

### Remarks

In Visual C++ versions prior to 6.0, this function was defined as

`BOOL IsChildPane(CWnd* pWnd, int& row, int& col);`

This version is now obsolete and should not be used.

## <a name="istracking"></a> CSplitterWnd::IsTracking

Call this member function to determine if the splitter bar in the window is currently being moved.

```
BOOL IsTracking();
```

### Return Value

Nonzero if a splitter operation is in progress; otherwise 0.

## <a name="ondrawsplitter"></a> CSplitterWnd::OnDrawSplitter

Renders an image of a split window.

```
virtual void OnDrawSplitter(
    CDC* pDC,
    ESplitType nType,
    const CRect& rect);
```

### Parameters

*pDC*<br/>
A pointer to the device context in which to draw. If *pDC* is NULL, then [CWnd::RedrawWindow](../../mfc/reference/cwnd-class.md#redrawwindow) is called by the framework and no split window is drawn.

*nType*<br/>
A value of the `enum ESplitType`, which can be one of the following:

- `splitBox` The splitter drag box.

- `splitBar` The bar that appears between the two split windows.

- `splitIntersection` The intersection of the split windows. This element will not be called when running on Windows 95/98.

- `splitBorder` The split window borders.

*rect*<br/>
A reference to a [CRect](../../atl-mfc-shared/reference/crect-class.md) object specifying the size and shape of the split windows.

### Remarks

This member function is called by the framework to draw and specify the exact characteristics of a splitter window. Override `OnDrawSplitter` for advanced customization of the imagery for the various graphical components of a splitter window. The default imagery is similar to the splitter in Microsoft Works for Windows or Microsoft Windows 95/98, in that the intersections of the splitter bars are blended together.

For more on dynamic splitter windows, see "Splitter Windows" in the article [Multiple Document Types, Views, and Frame Windows](../../mfc/multiple-document-types-views-and-frame-windows.md), [Technical Note 29](../../mfc/tn029-splitter-windows.md), and the `CSplitterWnd` class overview.

## <a name="oninverttracker"></a> CSplitterWnd::OnInvertTracker

Renders the image of a split window to be the same size and shape as the frame window.

```
virtual void OnInvertTracker(const CRect& rect);
```

### Parameters

*rect*<br/>
Reference to a `CRect` object specifying the tracking rectangle.

### Remarks

This member function is called by the framework during resizing of splitters. Override `OnInvertTracker` for advanced customization of the imagery of the splitter window. The default imagery is similar to the splitter in Microsoft Works for Windows or Microsoft Windows 95/98, in that the intersections of the splitter bars are blended together.

For more on dynamic splitter windows, see "Splitter Windows" in the article [Multiple Document Types, Views, and Frame Windows](../../mfc/multiple-document-types-views-and-frame-windows.md), [Technical Note 29](../../mfc/tn029-splitter-windows.md), and the `CSplitterWnd` class overview.

## <a name="recalclayout"></a> CSplitterWnd::RecalcLayout

Call to redisplay the splitter window after adjusting row or column size.

```
virtual void RecalcLayout();
```

### Remarks

Call this member function to correctly redisplay the splitter window after you have adjusted row and column sizes with the [SetRowInfo](#setrowinfo) and [SetColumnInfo](#setcolumninfo) member functions. If you change row and column sizes as part of the creation process before the splitter window is visible, it is not necessary to call this member function.

The framework calls this member function whenever the user resizes the splitter window or moves a split.

### Example

  See the example for [CSplitterWnd::SetColumnInfo](#setcolumninfo).

## <a name="setactivepane"></a> CSplitterWnd::SetActivePane

Sets a pane to be the active one in the frame.

```
virtual void SetActivePane(
    int row,
    int col,
    CWnd* pWnd = NULL);
```

### Parameters

*row*<br/>
If *pWnd* is NULL, specifies the row in the pane that will be active.

*col*<br/>
If *pWnd* is NULL, specifies the column in the pane that will be active.

*pWnd*<br/>
A pointer to a `CWnd` object. If NULL, the pane specified by *row* and *col* is set active. If not NULL, specifies the pane that is set active.

### Remarks

This member function is called by the framework to set a pane as active when the user changes the focus to a pane within the frame window. You can explicitly call `SetActivePane` to change the focus to the specified view.

Specify pane by providing either row and column, **or** by providing *pWnd*.

## <a name="setcolumninfo"></a> CSplitterWnd::SetColumnInfo

Call to set the specified column information.

```cpp
void SetColumnInfo(
    int col,
    int cxIdeal,
    int cxMin);
```

### Parameters

*col*<br/>
Specifies a splitter window column.

*cxIdeal*<br/>
Specifies an ideal width for the splitter window column in pixels.

*cxMin*<br/>
Specifies a minimum width for the splitter window column in pixels.

### Remarks

Call this member function to set a new minimum width and ideal width for a column. The column minimum value determines when the column will be too small to be fully displayed.

When the framework displays the splitter window, it lays out the panes in columns and rows according to their ideal dimensions, working from the upper-left to the lower-right corner of the splitter window's client area.

### Example

[!code-cpp[NVC_MFCWindowing#6](../../mfc/reference/codesnippet/cpp/csplitterwnd-class_4.cpp)]

## <a name="setrowinfo"></a> CSplitterWnd::SetRowInfo

Call to set the specified row information.

```cpp
void SetRowInfo(
    int row,
    int cyIdeal,
    int cyMin);
```

### Parameters

*row*<br/>
Specifies a splitter window row.

*cyIdeal*<br/>
Specifies an ideal height for the splitter window row in pixels.

*cyMin*<br/>
Specifies a minimum height for the splitter window row in pixels.

### Remarks

Call this member function to set a new minimum height and ideal height for a row. The row minimum value determines when the row will be too small to be fully displayed.

When the framework displays the splitter window, it lays out the panes in columns and rows according to their ideal dimensions, working from the upper-left to the lower-right corner of the splitter window's client area.

## <a name="setscrollstyle"></a> CSplitterWnd::SetScrollStyle

Specifies the new scroll style for the splitter window's shared scroll-bar support.

```cpp
void SetScrollStyle(DWORD dwStyle);
```

### Parameters

*dwStyle*<br/>
The new scroll style for the splitter window's shared scroll-bar support, which can be one of the following values:

- WS_HSCROLL Create/show horizontal shared scroll bars.

- WS_VSCROLL Create/show vertical shared scroll bars.

### Remarks

Once a scroll bar is created it will not be destroyed even if `SetScrollStyle` is called without that style; instead those scroll bars are hidden. This allows the scroll bars to retain their state even though they are hidden. After calling `SetScrollStyle` it is necessary to call [RecalcLayout](#recalclayout) for all the changes to take effect.

## <a name="splitcolumn"></a> CSplitterWnd::SplitColumn

Indicates where a frame window splits vertically.

```
virtual BOOL SplitColumn(int cxBefore);
```

### Parameters

*cxBefore*<br/>
The position, in pixels, before which the split occurs.

### Return Value

Nonzero if successful; otherwise 0.

### Remarks

This member function is called when a vertical splitter window is created. `SplitColumn` indicates the default location where the split occurs.

`SplitColumn` is called by the framework to implement the logic of the dynamic splitter window (that is, if the splitter window has the SPLS_DYNAMIC_SPLIT style). It can be customized, along with the virtual function [CreateView](#createview), to implement more advanced dynamic splitters.

## <a name="splitrow"></a> CSplitterWnd::SplitRow

Indicates where a frame window splits horizontally.

```
virtual BOOL SplitRow(int cyBefore);
```

### Parameters

*cyBefore*<br/>
The position, in pixels, before which the split occurs.

### Return Value

Nonzero if successful; otherwise 0.

### Remarks

This member function is called when a horizontal splitter window is created. `SplitRow` indicates the default location where the split occurs.

`SplitRow` is called by the framework to implement the logic of the dynamic splitter window (that is, if the splitter window has the SPLS_DYNAMIC_SPLIT style). It can be customized, along with the virtual function [CreateView](#createview), to implement more advanced dynamic splitters.

## <a name="ondraw"></a> CSplitterWnd::OnDraw

Called by the framework to draw the splitter window.

```
virtual void OnDraw(CDC* pDC);
```

### Parameters

*pDC*<br/>
A pointer to a device context.

### Remarks

## See also

[MFC Sample VIEWEX](../../overview/visual-cpp-samples.md)<br/>
[CWnd Class](../../mfc/reference/cwnd-class.md)<br/>
[Hierarchy Chart](../../mfc/hierarchy-chart.md)<br/>
[CView Class](../../mfc/reference/cview-class.md)<br/>
[CWnd Class](../../mfc/reference/cwnd-class.md)
