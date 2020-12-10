---
description: "Learn more about: TN031: Control Bars"
title: "TN031: Control Bars"
ms.date: "11/04/2016"
f1_keywords: ["vc.controls.bars"]
helpviewer_keywords: ["control bars [MFC], styles", "CStatusBar class [MFC], Tech Note 31 usage", "CControlBar class [MFC], Tech Note 31 usage", "CControlBar class [MFC], deriving from", "control bars [MFC], classes [MFC]", "CDialogBar class [MFC], Tech Note 31 usage", "CToolBar class [MFC], Tech Note 31 usage", "TN031", "styles [MFC], control bars"]
ms.assetid: 8cb895c0-40ea-40ef-90ee-1dd29f34cfd1
---
# TN031: Control Bars

> [!NOTE]
> The following technical note has not been updated since it was first included in the online documentation. As a result, some procedures and topics might be out of date or incorrect. For the latest information, it is recommended that you search for the topic of interest in the online documentation index.

This note describes the control bar classes in MFC: the general [CControlBar](#_mfcnotes_ccontrolbar), [CStatusBar](#_mfcnotes_cstatusbar), [CToolBar](#_mfcnotes_ctoolbar), [CDialogBar](#_mfcnotes_cdialogbar), and `CDockBar`.

## <a name="_mfcnotes_ccontrolbar"></a> CControlBar

A `ControlBar` is a `CWnd`-derived class that:

- Is aligned to the top or bottom of a frame window.

- May contain child items that are either HWND-based controls (for example, `CDialogBar`) or non-`HWND` based items (for example, `CToolBar`, `CStatusBar`).

Control bars support the additional styles:

- CBRS_TOP (The default) pin the control bar to the top.

- CBRS_BOTTOM Pin the control bar to the bottom.

- CBRS_NOALIGN Do not reposition the control bar when the parent resizes.

Classes derived from `CControlBar` provide more interesting implementations:

- `CStatusBar` A status bar, items are status bar panes containing text.

- `CToolBar` A toolbar, items are bitmap buttons aligned in a row.

- `CDialogBar` A toolbar-like frame containing standard windows controls (created from a dialog template resource).

- `CDockBar` A generalized docking area for other `CControlBar` derived objects. The specific member functions and variables available in this class are likely to change in future releases.

All control bar objects/windows will be child windows of some parent frame window. They are usually added as a sibling to the client area of the frame (for example, an MDI Client or view). The child window ID of a control bar is important. The default layout of control bar only works for control bars with IDs in the range of AFX_IDW_CONTROLBAR_FIRST to AFX_IDW_CONTROLBAR_LAST. Note that even though there is a range of 256 control bar IDs, the first 32 of these control bar IDs are special since they are directly supported by the print preview architecture.

The `CControlBar` class gives standard implementation for:

- Aligning the control bar to the top, bottom, or either side of the frame.

- Allocating control item arrays.

- Supporting the implementation of derived classes.

C++ control bar objects will usually be embedded as members of a `CFrameWnd` derived class, and will be cleaned up when the parent `HWND` and object are destroyed. If you need to allocate a control bar object on the heap, you can simply set the *m_bAutoDestruct* member to **TRUE** to make the control bar "**delete this**" when the `HWND` is destroyed.

> [!NOTE]
> If you create your own `CControlBar`-derived class, rather than using one of MFC's derived classes, such as `CStatusBar`, `CToolBar`, or `CDialogBar`, you will need to set the *m_dwStyle* data member. This can be done in the override of `Create`:

```
// CMyControlBar is derived from CControlBar
BOOL CMyControlBar::Create(CWnd* pParentWnd,
    DWORD dwStyle,
    UINT nID)
{
    m_dwStyle = dwStyle;

.
.
.
}
```

**Control Bar Layout Algorithm**

The control bar layout algorithm is very simple. The frame window sends a message WM_SIZEPARENT to all children in the control bar range. Along with this message, a pointer to the parent's client rectangle is passed. This message is sent to children in Z-order. The control-bar children use this information to position themselves and to decrease the size of the parent's client area. The final rectangle that is left for the normal client area (less control bars) is used to position the main client window (usually an MDI client, view or splitter window).

See `CWnd::RepositionBars` and `CFrameWnd::RecalcLayout` for more details.

MFC private Windows messages, including WM_SIZEPARENT, are documented in [Technical Note 24](../mfc/tn024-mfc-defined-messages-and-resources.md).

## <a name="_mfcnotes_cstatusbar"></a> CStatusBar

A status bar is a control bar that has a row of text output panes. There are two common ways to use text output panes:

- As a message line

     (for example, the standard menu help message line). These are usually accessed by a 0-based indexed

- As status indicators

     (for example, the CAP, NUM and SCRL indicators). These are usually accessed by string/command ID.

The font for the status bar is 10-point MS Sans Serif (dictated by the Windows Interface Application Design Guide or the font mappers best match of a 10-point Swiss proportional font). On certain versions of Windows, such as the Japanese edition, the fonts selected are different.

The colors used in the status bar are also consistent with the recommendation of the Windows Interface Application Design Guide. These colors are not hard coded and are changed dynamically in response to user customization in Control Panel.

|Item|Windows COLOR value|Default RGB|
|----------|-------------------------|-----------------|
|Status bar background|COLOR_BTNFACE|RGB(192, 192, 192)|
|Status bar text|COLOR_BTNTEXT|RGB(000, 000, 000)|
|Status bar top/left edges|COLOR_BTNHIGHLIGHT|RGB(255, 255, 255)|
|Status bar bot/right edges|COLOR_BTNSHADOW|RGB(128, 128, 128)|

**CCmdUI Support for CStatusBar**

The way indicators are usually updated is through the ON_UPDATE_COMMAND_UI mechanism. On idle time, the status bar will call the ON_UPDATE_COMMAND_UI handler with the string ID of the indicator pane.

The ON_UPDATE_COMMAND_UI handler can call:

- `Enable`: To enable or disable the pane. A disabled pane looks exactly like an enabled pane but the text is invisible (that is, turns off the text indicator).

- `SetText`: To change the text. Be careful if you use this because the pane will not automatically resize.

Refer to class [CStatusBar](../mfc/reference/cstatusbar-class.md) in the *Class Library Reference* for details about `CStatusBar` creation and customization APIs. Most customization of status bars should be done before the status bar is initially made visible.

The status bar supports only one stretchy pane, usually the first pane. The size of that pane is really a minimum size. If the status bar is bigger than the minimum size of all the panes, any extra width will be given to the stretchy pane. The default application with a status bar has right-aligned indicators for CAP, NUM and SCRL since the first pane is stretchy.

## <a name="_mfcnotes_ctoolbar"></a> CToolBar

A toolbar is a control bar with a row of bitmap buttons that may include separators. Two styles of buttons are supported: pushbuttons and check box buttons. Radio group functionality can be built with check box buttons and ON_UPDATE_COMMAND_UI.

All the bitmap buttons in the toolbar are taken from one bitmap. This bitmap must contain one image or glyph for each button. Typically the order of the images/glyphs in the bitmap is the same order they will be drawn on the screen. (This can be changed using the customization APIs.)

Each button must be the same size. The default is the standard 24x22 pixels. Each image/glyph must be the same size and must be side-by-side in the bitmap. The default image/glyph size is 16x15 pixels. Therefore, for a toolbar with 10 buttons (using standard sizes), you need a bitmap that is 160 pixels wide and 15 pixels high.

Each button has one and only one image/glyph. The different button states and styles (for example, pressed, up, down, disabled, disabled down, indeterminate) are algorithmically generated from that one image/glyph. Any color bitmap or DIB can be used in theory. The algorithm for generating the different button states works best if the original image is shades of gray. Look at the standard toolbar buttons and the toolbar button clipart provided in MFC General sample [CLIPART](../overview/visual-cpp-samples.md) for examples.

The colors used in the toolbar are also consistent with the recommendation of the Windows Interface Application Design Guide. These colors are not hard coded and are changed dynamically in response to user customization in Control Panel.

|Item|Windows COLOR value|Default RGB|
|----------|-------------------------|-----------------|
|ToolBar background|COLOR_BTNFACE|RGB(192,192,192)|
|ToolBar buttons top/left edges|COLOR_BTNHIGHLIGHT|RGB(255,255,255)|
|ToolBar buttons bot/right edges|COLOR_BTNSHADOW|RGB(128,128,128)|

In addition, the toolbar bitmap buttons are recolored as though they were standard Windows button controls. This recoloring occurs when the bitmap is loaded from the resource and in response to a change in system colors in response to user customization in Control Panel. The following colors in a toolbar bitmap will be recolored automatically so they should be used with caution. If you do not wish to have a portion of your bitmap recolored, then use a color that closely approximates one of the mapped RGB values. The mapping is done based on exact RGB values.

|RGB value|Dynamically mapped COLOR value|
|---------------|------------------------------------|
|RGB(000, 000, 000)|COLOR_BTNTEXT|
|RGB(128, 128, 128)|COLOR_BTNSHADOW|
|RGB(192, 192, 192)|COLOR_BTNFACE|
|RGB(255, 255, 255)|COLOR_BTNHIGHLIGHT|

Refer to class [CToolBar](../mfc/reference/ctoolbar-class.md) the *Class Library Reference* for details about the `CToolBar` creation and customization APIs. Most customization of toolbars should be done before the toolbar is initially made visible.

The customization APIs can be used to adjust the button IDs, styles, spacer width and which image/glyph is used for what button. By default you do not need to use these APIs.

## CCmdUI Support for CToolBar

The way toolbar buttons are always updated is through the ON_UPDATE_COMMAND_UI mechanism. On idle time, the toolbar will call the ON_UPDATE_COMMAND_UI handler with the command ID of that button. ON_UPDATE_COMMAND_UI is not called for separators, but it is called for pushbuttons and check box buttons.

The ON_UPDATE_COMMAND_UI handler can call:

- `Enable`: To enable or disable the button. This works equally for pushbuttons and check box buttons.

- `SetCheck`: To set the check state of a button. Calling this for a toolbar button will turn it into a check box button. `SetCheck` takes a parameter which can be 0 (not checked), 1 (checked) or 2 (indeterminate)

- `SetRadio`: Shorthand for `SetCheck`.

Check box buttons are "AUTO" check box buttons; that is, when the user presses them they will immediately change state. Checked is the down or depressed state. There is no built-in user interface way to change a button into the "indeterminate" state; that must be done through code.

The customization APIs will permit you to change the state of a given toolbar button, preferably you should change these states in the ON_UPDATE_COMMAND_UI handler for the command the toolbar button represents. Remember, the idle processing will change the state of toolbar buttons with the ON_UPDATE_COMMAND_UI handler, so any changes to these states made through SetButtonStyle may get lost after the next idle.

Toolbar buttons will send WM_COMMAND messages like normal buttons or menu items and are normally handled by an ON_COMMAND handler in the same class that provides the ON_UPDATE_COMMAND_UI handler.

There are four Toolbar button styles (TBBS_ values) used for display states:

- TBBS_CHECKED:   Check box is currently checked (down).

- TBBS_INDETERMINATE:   Check box is currently indeterminate.

- TBBS_DISABLED:   Button is currently disabled.

- TBBS_PRESSED:   Button is currently pressed.

The six official Windows Interface Application Design Guide button styles are represented by the following TBBS values:

- Up = 0

- Mouse Down = TBBS_PRESSED (&#124; any other style)

- Disabled = TBBS_DISABLED

- Down = TBBS_CHECKED

- Down Disabled = TBBS_CHECKED &#124; TBBS_DISABLED

- Indeterminate = TBBS_INDETERMINATE

## <a name="_mfcnotes_cdialogbar"></a> CDialogBar

A dialog bar is a control bar that contains standard Windows controls. It acts like a dialog in that it contains the controls and supports tabbing between them. It also acts like a dialog in that it uses a dialog template to represent the bar.

A `CDialogBar` is used for the print-preview toolbar, which contains standard pushbutton controls.

Using a `CDialogBar` is like using a `CFormView`. You must define a dialog template for the dialog bar and remove all the styles except WS_CHILD. Note that the dialog must not be visible.

The control notifications for a `CDialogBar` will be sent to the parent of the control bar (just like toolbar buttons).

## CCmdUI Support for CDialogBar

Dialog bar buttons should be updated through the ON_UPDATE_COMMAND_UI handler mechanism. At idle time, the dialog bar will call the ON_UPDATE_COMMAND_UI handler with the command ID of all the buttons that have a ID >= 0x8000 (that is, in the range of command IDs).

The ON_UPDATE_COMMAND_UI handler can call:

- Enable: to enable or disable the button.

- SetText: to change the text of the button.

Customization can be done through standard window manager APIs.

## See also

[Technical Notes by Number](../mfc/technical-notes-by-number.md)<br/>
[Technical Notes by Category](../mfc/technical-notes-by-category.md)
