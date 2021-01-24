---
description: "Learn more about: Control Classes"
title: "Control Classes"
ms.date: "11/04/2016"
f1_keywords: ["vc.classes.control"]
helpviewer_keywords: ["static display controls [MFC]", "control classes [MFC]", "buttons, MFC control classes", "controls [MFC], MFC control classes", "controls [MFC]", "list boxes [MFC], MFC control classes", "control classes [MFC], MFC", "text, controls for input [MFC]", "user input [MFC], MFC control classes"]
ms.assetid: f9876606-9f5b-44cb-9135-213298d1df8f
---
# Control Classes

Control classes encapsulate a wide variety of standard Windows controls ranging from static text controls to tree controls. In addition, MFC provides some new controls, including buttons with bitmaps and control bars.

The controls whose class names end in "**Ctrl**" were new in Windows 95 and Windows NT version 3.51.

## Static Display Controls

[CStatic](reference/cstatic-class.md)<br/>
A static-display window. Static controls are used to label, box, or separate other controls in a dialog box or window. They may also display graphical images rather than text or a box.

## Text Controls

[CEdit](reference/cedit-class.md)<br/>
An editable-text control window. Edit controls are used to accept textual input from the user.

[CIPAddressCtrl](reference/cipaddressctrl-class.md)<br/>
Supports an edit box for manipulating an Internet Protocol (IP) address.

[CRichEditCtrl](reference/cricheditctrl-class.md)<br/>
A control in which the user can enter and edit text. Unlike the control encapsulated in `CEdit`, a rich edit control supports character and paragraph formatting and OLE objects.

## Controls That Represent Numbers

[CSliderCtrl](reference/csliderctrl-class.md)<br/>
A control containing a slider, which the user moves to select a value or set of values.

[CSpinButtonCtrl](reference/cspinbuttonctrl-class.md)<br/>
A pair of arrow buttons the user can click to increment or decrement a value.

[CProgressCtrl](reference/cprogressctrl-class.md)<br/>
Displays a rectangle that is gradually filled from left to right to indicate the progress of an operation.

[CScrollBar](reference/cscrollbar-class.md)<br/>
A scroll-bar control window. The class provides the functionality of a scroll bar, for use as a control in a dialog box or window, through which the user can specify a position within a range.

## Buttons

[CButton](reference/cbutton-class.md)<br/>
A button control window. The class provides a programmatic interface for a push button, check box, or radio button in a dialog box or window.

[CBitmapButton](reference/cbitmapbutton-class.md)<br/>
A button with a bitmap rather than a text caption.

## Lists

[CListBox](reference/clistbox-class.md)<br/>
A list-box control window. A list box displays a list of items that the user can view and select.

[CDragListBox](reference/cdraglistbox-class.md)<br/>
Provides the functionality of a Windows list box; allows the user to move list box items, such as filenames and string literals, within the list box. List boxes with this capability are useful for an item list in an order other than alphabetical, such as include pathnames or files in a project.

[CComboBox](reference/ccombobox-class.md)<br/>
A combo-box control window. A combo box consists of an edit control plus a list box.

[CComboBoxEx](reference/ccomboboxex-class.md)<br/>
Extends the combo box control by providing support for image lists.

[CCheckListBox](reference/cchecklistbox-class.md)<br/>
Displays a list of items with check boxes, which the user can check or clear, next to each item.

[CListCtrl](reference/clistctrl-class.md)<br/>
Displays a collection of items, each consisting of an icon and a label, in a manner similar to the right pane of File Explorer.

[CTreeCtrl](reference/ctreectrl-class.md)<br/>
Displays a hierarchical list of icons and labels arranged in a manner similar to the left pane of File Explorer.

## Toolbars and Status Bars

[CToolBarCtrl](reference/ctoolbarctrl-class.md)<br/>
Provides the functionality of the Windows toolbar common control. Most MFC programs use [CToolBar](reference/ctoolbar-class.md) instead of this class.

[CStatusBarCtrl](reference/cstatusbarctrl-class.md)<br/>
A horizontal window, usually divided into panes, in which an application can display status information. Most MFC programs use [CStatusBar](reference/cstatusbar-class.md) instead of this class.

## Miscellaneous Controls

[CAnimateCtrl](reference/canimatectrl-class.md)<br/>
Displays a simple video clip.

[CToolTipCtrl](reference/ctooltipctrl-class.md)<br/>
A small pop-up window that displays a single line of text describing the purpose of a tool in an application.

[CDateTimeCtrl](reference/cdatetimectrl-class.md)<br/>
Supports either an extended edit control, or a simple calendar interface control, that allows a user to choose a specific date or time value.

[CHeaderCtrl](reference/cheaderctrl-class.md)<br/>
Displays titles or labels for columns.

[CMonthCalCtrl](reference/cmonthcalctrl-class.md)<br/>
Supports a simple calendar interface control that allows a user to select a date.

[CTabCtrl](reference/ctabctrl-class.md)<br/>
A control with tabs on which the user can click, analogous to the dividers in a notebook.

[CHotKeyCtrl](reference/chotkeyctrl-class.md)<br/>
Enables the user to create a hot key combination, which the user can press to perform an action quickly.

[CLinkCtrl](reference/clinkctrl-class.md)<br/>
Renders marked-up text and launches appropriate applications when the user clicks the embedded link.

[CHtmlEditCtrl](reference/chtmleditctrl-class.md)<br/>
Provides the functionality of the WebBrowser ActiveX control in an MFC window.

## Related Classes

[CImageList](reference/cimagelist-class.md)<br/>
Provides the functionality of the Windows image list. Image lists are used with list controls and tree controls. They can also be used to store and archive a set of same-sized bitmaps.

[CCtrlView](reference/cctrlview-class.md)<br/>
The base class for all views associated with Windows controls. The views based on controls are described below.

[CEditView](reference/ceditview-class.md)<br/>
A view that contains a Windows standard edit control.

[CRichEditView](reference/cricheditview-class.md)<br/>
A view that contains a Windows rich edit control.

[CListView](reference/clistview-class.md)<br/>
A view that contains a Windows list control.

[CTreeView](reference/ctreeview-class.md)<br/>
A view that contains a Windows tree control.

## See also

[Class Overview](class-library-overview.md)
