---
description: "Learn more about: Controls (MFC)"
title: "Controls (MFC)"
ms.date: "11/04/2016"
helpviewer_keywords: ["Windows common controls [MFC]", "common controls [MFC]", "controls [MFC]"]
ms.assetid: b2842884-6435-4b8f-933b-21671bf8af95
---
# Controls (MFC)

Controls are objects that users can interact with to enter or manipulate data. They commonly appear in dialog boxes or on toolbars. This topic family covers three main kinds of controls:

- Windows common controls, including owner-drawn controls

- ActiveX Controls

- Other control classes supplied by the Microsoft Foundation Class Library (MFC)

## Windows Common Controls

The Windows operating system has always provided a number of Windows common controls. These control objects are programmable, and the Visual C++ dialog editor supports adding them to your dialog boxes. The Microsoft Foundation Class Library (MFC) supplies classes that encapsulate each of these controls, as shown in the table [Windows Common Controls and MFC Classes](#_core_windows_common_controls_and_mfc_classes). (Some items in the table have related topics that describe them further. For controls that lack topics, see the documentation for the MFC class.)

Class [CWnd](reference/cwnd-class.md) is the base class of all window classes, including all of the control classes.

## ActiveX Controls

ActiveX controls, formerly known as OLE controls, can be used in dialog boxes in your applications for Windows, or in HTML pages on the World Wide Web. For more information, see [MFC ActiveX Controls](mfc-activex-controls.md).

## Other MFC Control Classes

In addition to classes that encapsulate all of the Windows common controls and that support programming your own ActiveX controls (or using ActiveX controls supplied by others), MFC supplies the following control classes of its own:

- [CBitmapButton](reference/cbitmapbutton-class.md)

- [CCheckListBox](reference/cchecklistbox-class.md)

- [CDragListBox](reference/cdraglistbox-class.md)

## <a name="_core_finding_information_about_windows_common_controls"></a> Finding Information About Windows Common Controls

The table below briefly describes each of the Windows common controls, including the control's MFC wrapper class.

### <a name="_core_windows_common_controls_and_mfc_classes"></a> Windows Common Controls and MFC Classes

|Control|MFC class|Description|New in Windows 95|
|-------------|---------------|-----------------|------------------------|
|[animation](using-canimatectrl.md)|[CAnimateCtrl](reference/canimatectrl-class.md)|Displays successive frames of an AVI video clip|Yes|
|button|[CButton](reference/cbutton-class.md)|Pushbuttons that cause an action; also used for check boxes, radio buttons, and group boxes|No|
|combo box|[CComboBox](reference/ccombobox-class.md)|Combination of an edit box and a list box|No|
|[date and time picker](using-cdatetimectrl.md)|[CDateTimeCtrl](reference/cdatetimectrl-class.md)|Allows the user to choose a specific date or time value|Yes|
|edit box|[CEdit](reference/cedit-class.md)|Boxes for entering text|No|
|[extended combo box](using-ccomboboxex.md)|[CComboBoxEx](reference/ccomboboxex-class.md)|A combo box control with the ability to display images|Yes|
|[header](using-cheaderctrl.md)|[CHeaderCtrl](reference/cheaderctrl-class.md)|Button that appears above a column of text; controls width of text displayed|Yes|
|[hotkey](using-chotkeyctrl.md)|[CHotKeyCtrl](reference/chotkeyctrl-class.md)|Window that enables user to create a "hot key" to perform an action quickly|Yes|
|[image list](using-cimagelist.md)|[CImageList](reference/cimagelist-class.md)|Collection of images used to manage large sets of icons or bitmaps (image list isn't really a control; it supports lists used by other controls)|Yes|
|[list](using-clistctrl.md)|[CListCtrl](reference/clistctrl-class.md)|Window that displays a list of text with icons|Yes|
|list box|[CListBox](reference/clistbox-class.md)|Box that contains a list of strings|No|
|[month calendar](using-cmonthcalctrl.md)|[CMonthCalCtrl](reference/cmonthcalctrl-class.md)|Control that displays date information|Yes|
|[progress](using-cprogressctrl.md)|[CProgressCtrl](reference/cprogressctrl-class.md)|Window that indicates progress of a long operation|Yes|
|[rebar](using-crebarctrl.md)|[CRebarCtrl](reference/crebarctrl-class.md)|Tool bar that can contain additional child windows in the form of controls|Yes|
|[rich edit](using-cricheditctrl.md)|[CRichEditCtrl](reference/cricheditctrl-class.md)|Window in which user can edit with character and paragraph formatting (see [Classes Related to Rich Edit Controls](classes-related-to-rich-edit-controls.md))|Yes|
|scroll bar|[CScrollBar](reference/cscrollbar-class.md)|Scroll bar used as a control inside a dialog box (not on a window)|No|
|[slider](using-csliderctrl.md)|[CSliderCtrl](reference/csliderctrl-class.md)|Window containing a slider control with optional tick marks|Yes|
|[spin button](using-cspinbuttonctrl.md)|[CSpinButtonCtrl](reference/cspinbuttonctrl-class.md)|Pair of arrow buttons user can click to increment or decrement a value|Yes|
|static-text|[CStatic](reference/cstatic-class.md)|Text for labeling other controls|No|
|[status bar](using-cstatusbarctrl.md)|[CStatusBarCtrl](reference/cstatusbarctrl-class.md)|Window for displaying status information, similar to MFC class `CStatusBar`|Yes|
|[tab](using-ctabctrl.md)|[CTabCtrl](reference/ctabctrl-class.md)|Analogous to the dividers in a notebook; used in "tab dialog boxes" or property sheets|Yes|
|[toolbar](using-ctoolbarctrl.md)|[CToolBarCtrl](reference/ctoolbarctrl-class.md)|Window with command-generating buttons, similar to MFC class `CToolBar`|Yes|
|[tool tip](using-ctooltipctrl.md)|[CToolTipCtrl](reference/ctooltipctrl-class.md)|Small pop-up window that describes purpose of a toolbar button or other tool|Yes|
|[tree](using-ctreectrl.md)|[CTreeCtrl](reference/ctreectrl-class.md)|Window that displays a hierarchical list of items|Yes|

### What do you want to know more about

- An individual control: see the table [Windows Common Controls and MFC Classes](#_core_windows_common_controls_and_mfc_classes) in this topic for links to all controls

- [Making and using controls](making-and-using-controls.md)

- [Using the dialog editor to add controls](using-the-dialog-editor-to-add-controls.md)

- [Adding controls to a dialog box by hand](adding-controls-by-hand.md)

- [Deriving control classes from the MFC control classes](deriving-controls-from-a-standard-control.md)

- [Using common controls as child windows](using-a-common-control-as-a-child-window.md)

- [Notifications from common controls](receiving-notification-from-common-controls.md)

- [Add common controls to a dialog box](using-common-controls-in-a-dialog-box.md).

- [Derive a control from a standard Windows control](deriving-controls-from-a-standard-control.md)

- [Access dialog-box controls with type safety](type-safe-access-to-controls-in-a-dialog-box.md)

- [Receive notification messages from common controls](receiving-notification-from-common-controls.md)

- [Samples](common-control-sample-list.md)

For information about Windows common controls in the Windows SDK, see [Common Controls](/windows/win32/Controls/common-controls-intro).

## See also

[User Interface Elements](user-interface-elements-mfc.md)<br/>
[Dialog Editor](../windows/dialog-editor.md)
