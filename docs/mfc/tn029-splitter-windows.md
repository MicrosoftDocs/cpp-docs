---
description: "Learn more about: TN029: Splitter Windows"
title: "TN029: Splitter Windows"
ms.date: "11/04/2016"
f1_keywords: ["vc.windows.splitter"]
helpviewer_keywords: ["TN029", "splitter windows [MFC], about splitter windows"]
ms.assetid: 2c57ce99-2a3c-4eff-9cea-baccb13af075
---
# TN029: Splitter Windows

This note describes the MFC [CSplitterWnd Class](../mfc/reference/csplitterwnd-class.md), which provides window splits and manages the resizing of other pane windows.

## Splitter Styles

A `CSplitterWnd` supports two different styles of splitting windows.

In "static splitters," the splitter window creates the panes when it is created. The order and number of panes never change. Splitter bars are used to resize the different panes. You can use this style to display a different view class in each pane. The Visual C++ graphics editor and the Windows File Manager are examples of programs that use this splitter style. This style of splitter window does not use splitter boxes.

In "dynamic splitters," additional panes are created and destroyed as the user splits and un-splits new views. This splitter starts out with a single view and provides splitter boxes for the user to initiate splitting. The splitter window dynamically creates a new view object when the view is split in one direction. This new view object represents the new pane. If the view is split in two directions by using the keyboard interface, the splitter window creates three new view objects for the three new panes. While the split is active, Windows displays the splitter box as a splitter bar between the panes. Windows destroys additional view objects when the user removes a split, but the original view remains until the splitter window itself is destroyed. Microsoft Excel and Microsoft Word are examples of applications that use the dynamic splitter style.

When you create either kind of splitter window, you must specify the maximum number of rows and columns that the splitter will manage. A static splitter will create panes to fill all the rows and columns. A dynamic splitter will create only the first pane when the `CSplitterWnd` is created.

The maximum number of panes you can specify for static splitters is 16 rows by 16 columns. The recommended configurations are:

- 1 row x 2 columns : usually with dissimilar panes

- 2 rows x 1 column : usually with dissimilar panes

- 2 rows x 2 columns : usually with similar panes

The maximum number of panes that you can specify for dynamic splitters is 2 rows by 2 columns. The recommended configurations are:

- 1 row x 2 columns : for columnar data

- 2 rows x 1 column : for textual or other data

- 2 rows x 2 columns : for grid or table oriented data

## Splitter Examples

Many of the MFC sample programs use splitter windows directly or indirectly. The MFC General sample [VIEWEX](../overview/visual-cpp-samples.md) illustrates several uses of static splitters, including how to place a splitter in a splitter.

You can also use ClassWizard to create a new multiple document interface (MDI) Child frame window class that contains a splitter window. For more information on splitter windows, see [Multiple Document Types, Views, and Frame Windows](../mfc/multiple-document-types-views-and-frame-windows.md).

## Terminology Used by Implementation

Here is a list of terms that are specific to splitter windows:

`CSplitterWnd`:
A window that provides pane-splitting controls and scroll bars that are shared between all panes on a row or column. You specify rows and columns with zero-based numbers (the first pane is row = 0 and column = 0).

Pane:
An application-specific window that a `CSplitterWnd` manages. A pane is usually an object that is derived from the [CView Class](../mfc/reference/cview-class.md), but can be any [CWnd](../mfc/reference/cwnd-class.md) object that has the appropriate child window ID.

To use a `CWnd`-derived object, pass the RUNTIME_CLASS of the object to the `CreateView` function as you would if you were using a `CView`-derived class. Your class must use DECLARE_DYNCREATE and IMPLEMENT_DYNCREATE because the framework uses dynamic creation at runtime. Although there is a lot of code in `CSplitterWnd` that is specific to the `CView` class, [CObject::IsKindOf](../mfc/reference/cobject-class.md#iskindof) is always used before those actions are performed.

Splitter Bar:
A control that is placed between rows and columns of panes. It may be used to adjust the sizes of rows or columns of panes.

Splitter Box:
A control in a dynamic `CSplitterWnd` that you can use to create new rows or columns of panes. It is located at the top of the vertical scroll bars or to the left of the horizontal scroll bars.

Splitter Intersection:
The intersection of a vertical splitter bar and a horizontal splitter bar. You can drag it to adjust the size of a row and column of panes simultaneously.

## Shared Scroll Bars

The `CSplitterWnd` class also supports shared scroll bars. These scroll bar controls are children of the `CSplitterWnd` and are shared with the different panes in the splitter.

For example, in a 1 row x 2 column window, you can specify WS_VSCROLL when creating the `CSplitterWnd`. Windows creates a special scroll bar control that is shared between the two panes.

```
[      ][      ][^]
[pane00][pane01][|]
[      ][      ][v]
```

When the user moves the scroll bar, WM_VSCROLL messages will be sent to both views. When either view sets the scroll bar position, the shared scroll bar will be set.

Note that shared scroll bars are most useful with similar view objects. If you mix views of different types in a splitter, then you may have to write special code to coordinate their scroll positions. Any `CView`-derived class that uses the `CWnd` scroll bar APIs will delegate to the shared scroll bar if it exists. The `CScrollView` implementation is one example of a `CView` class that supports shared scroll bars. Classes that are not derived from `CView`, classes that rely on non-control scroll bars, or classes that use standard Windows implementations (for example, `CEditView`) will not work with the shared scroll bar feature of `CSplitterWnd`.

## Minimum Sizes

For each row there is a minimum row height, and for each column there is a minimum column width. This minimum guarantees that a pane is not too small to be shown in complete detail.

For a static splitter window, the initial minimum row height and column width is 0. For a dynamic splitter window, the initial minimum row height and column width are set by the *sizeMin* parameter of the `CSplitterWnd::Create` function.

You can change these minimum sizes by using the [CSplitterWnd::SetRowInfo](../mfc/reference/csplitterwnd-class.md#setrowinfo) and [CSplitterWnd::SetColumnInfo](../mfc/reference/csplitterwnd-class.md#setcolumninfo) functions.

## Actual vs. Ideal Sizes

The layout of the panes in the splitter window depends on the size of the frame that contains them. When a user resizes the containing frame, the `CSplitterWnd` repositions and resizes the panes so that they fit as well as possible.

The user can manually set the row height and column width sizes, or the program can set the ideal size by using the `CSplitterWnd` class. The actual size can be smaller or larger than the ideal. Windows will adjust the actual size if there is not enough room to display the ideal size or if there is too much empty space on the right or bottom of the splitter window.

## Custom Controls

You can override many functions to provide customized behavior and a customized interface. You can override this first set to provide alternate imagery for the various graphical components of a splitter window.

- `virtual void OnDrawSpltter(CDC* pDC, ESplitType nType, const CRect& rect);`

- `virtual void OnInvertTracker(const CRect& rect);`

You call this function to create a shared scroll bar control. You can override it to create extra controls next to the scroll bar.

- `virtual BOOL CreateScrollBarCtrl(DWORD dwStyle, UINT nID);`

These functions implement the logic of the dynamic splitter window. You can override these to provide more advanced splitter logic.

- `virtual void DeleteView(int row, int col);`

- `virtual BOOL SplitRow(int cyBefore);`

- `virtual BOOL SplitColumn(int cxBefore);`

- `virtual void DeleteRow(int rowDelete);`

- `virtual void DeleteColumn(int colDelete);`

## CView Functionality

The `CView` class uses the following high level commands to delegate to the `CSplitterWnd` implementation. Because these commands are virtual, the standard `CView` implementation will not require the entire `CSplitterWnd` implementation to be linked in. For applications that use `CView` but not `CSplitterWnd`, the `CSplitterWnd` implementation will not be linked with the application.

- `virtual BOOL CanActivateNext(BOOL bPrev = FALSE);`

   Checks whether ID_NEXT_PANE or ID_PREV_PANE is currently possible.

- `virtual void ActivateNext(BOOL bPrev = FALSE);`

   Executes the "Next Pane" or "Previous Pane" command.

- `virtual BOOL DoKeyboardSplit();`

   Executes the keyboard split command, usually "Window Split".

## See also

[Technical Notes by Number](../mfc/technical-notes-by-number.md)<br/>
[Technical Notes by Category](../mfc/technical-notes-by-category.md)
