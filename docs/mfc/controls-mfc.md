---
title: "Controls (MFC) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Windows common controls [C++]"
  - "common controls [C++]"
  - "controls [MFC]"
ms.assetid: b2842884-6435-4b8f-933b-21671bf8af95
caps.latest.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
translation.priority.ht: 
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "ru-ru"
  - "zh-cn"
  - "zh-tw"
translation.priority.mt: 
  - "cs-cz"
  - "pl-pl"
  - "pt-br"
  - "tr-tr"
---
# Controls (MFC)
Controls are objects that users can interact with to enter or manipulate data. They commonly appear in dialog boxes or on toolbars. This topic family covers three main kinds of controls:  
  
-   Windows common controls, including owner-drawn controls  
  
-   ActiveX Controls  
  
-   Other control classes supplied by the Microsoft Foundation Class Library (MFC)  
  
## Windows Common Controls  
 The Windows operating system has always provided a number of Windows common controls. These control objects are programmable, and the Visual C++ dialog editor supports adding them to your dialog boxes. The Microsoft Foundation Class Library (MFC) supplies classes that encapsulate each of these controls, as shown in the table [Windows Common Controls and MFC Classes](#_core_windows_common_controls_and_mfc_classes). (Some items in the table have related topics that describe them further. For controls that lack topics, see the documentation for the MFC class.)  
  
 Class [CWnd](../mfc/reference/cwnd-class.md) is the base class of all window classes, including all of the control classes. The Windows common controls are supported in the following environments:  
  
-   Windows 95, Windows 98, and Windows 2000  
  
-   Windows NT, version 3.51 and later  
  
-   Win32s, version 1.3 (Visual C++ versions 4.2 and later do not support Win32s)  
  
 The older common controls — check boxes, combo boxes, edit boxes, list boxes, option buttons, pushbuttons, scroll bar controls, and static controls — were available in earlier versions of Windows as well.  
  
## ActiveX Controls  
 ActiveX controls, formerly known as OLE controls, can be used in dialog boxes in your applications for Windows, or in HTML pages on the World Wide Web. For more information, see [MFC ActiveX Controls](../mfc/mfc-activex-controls.md).  
  
## Other MFC Control Classes  
 In addition to classes that encapsulate all of the Windows common controls and that support programming your own ActiveX controls (or using ActiveX controls supplied by others), MFC supplies the following control classes of its own:  
  
-   [CBitmapButton](../mfc/reference/cbitmapbutton-class.md)  
  
-   [CCheckListBox](../mfc/reference/cchecklistbox-class.md)  
  
-   [CDragListBox](../mfc/reference/cdraglistbox-class.md)  
  
##  <a name="_core_finding_information_about_windows_common_controls"></a> Finding Information About Windows Common Controls  
 The table below briefly describes each of the Windows common controls, including the control's MFC wrapper class.  
  
### <a name="_core_windows_common_controls_and_mfc_classes"></a>  Windows Common Controls and MFC Classes  
  
|Control|MFC class|Description|New in Windows 95|  
|-------------|---------------|-----------------|------------------------|  
|[animation](../mfc/using-canimatectrl.md)|[CAnimateCtrl](../mfc/reference/canimatectrl-class.md)|Displays successive frames of an AVI video clip|Yes|  
|button|[CButton](../mfc/reference/cbutton-class.md)|Pushbuttons that cause an action; also used for check boxes, radio buttons, and group boxes|No|  
|combo box|[CComboBox](../mfc/reference/ccombobox-class.md)|Combination of an edit box and a list box|No|  
|[date and time picker](../mfc/using-cdatetimectrl.md)|[CDateTimeCtrl](../mfc/reference/cdatetimectrl-class.md)|Allows the user to choose a specific date or time value|Yes|  
|edit box|[CEdit](../mfc/reference/cedit-class.md)|Boxes for entering text|No|  
|[extended combo box](../mfc/using-ccomboboxex.md)|[CComboBoxEx](../mfc/reference/ccomboboxex-class.md)|A combo box control with the ability to display images|Yes|  
|[header](../mfc/using-cheaderctrl.md)|[CHeaderCtrl](../mfc/reference/cheaderctrl-class.md)|Button that appears above a column of text; controls width of text displayed|Yes|  
|[hotkey](../mfc/using-chotkeyctrl.md)|[CHotKeyCtrl](../mfc/reference/chotkeyctrl-class.md)|Window that enables user to create a "hot key" to perform an action quickly|Yes|  
|[image list](../mfc/using-cimagelist.md)|[CImageList](../mfc/reference/cimagelist-class.md)|Collection of images used to manage large sets of icons or bitmaps (image list isn't really a control; it supports lists used by other controls)|Yes|  
|[list](../mfc/using-clistctrl.md)|[CListCtrl](../mfc/reference/clistctrl-class.md)|Window that displays a list of text with icons|Yes|  
|list box|[CListBox](../mfc/reference/clistbox-class.md)|Box that contains a list of strings|No|  
|[month calendar](../mfc/using-cmonthcalctrl.md)|[CMonthCalCtrl](../mfc/reference/cmonthcalctrl-class.md)|Control that displays date information|Yes|  
|[progress](../mfc/using-cprogressctrl.md)|[CProgressCtrl](../mfc/reference/cprogressctrl-class.md)|Window that indicates progress of a long operation|Yes|  
|[rebar](../mfc/using-crebarctrl.md)|[CRebarCtrl](../mfc/reference/crebarctrl-class.md)|Tool bar that can contain additional child windows in the form of controls|Yes|  
|[rich edit](../mfc/using-cricheditctrl.md)|[CRichEditCtrl](../mfc/reference/cricheditctrl-class.md)|Window in which user can edit with character and paragraph formatting (see [Classes Related to Rich Edit Controls](../mfc/classes-related-to-rich-edit-controls.md))|Yes|  
|scroll bar|[CScrollBar](../mfc/reference/cscrollbar-class.md)|Scroll bar used as a control inside a dialog box (not on a window)|No|  
|[slider](../mfc/using-csliderctrl.md)|[CSliderCtrl](../mfc/reference/csliderctrl-class.md)|Window containing a slider control with optional tick marks|Yes|  
|[spin button](../mfc/using-cspinbuttonctrl.md)|[CSpinButtonCtrl](../mfc/reference/cspinbuttonctrl-class.md)|Pair of arrow buttons user can click to increment or decrement a value|Yes|  
|static-text|[CStatic](../mfc/reference/cstatic-class.md)|Text for labeling other controls|No|  
|[status bar](../mfc/using-cstatusbarctrl.md)|[CStatusBarCtrl](../mfc/reference/cstatusbarctrl-class.md)|Window for displaying status information, similar to MFC class `CStatusBar`|Yes|  
|[tab](../mfc/using-ctabctrl.md)|[CTabCtrl](../mfc/reference/ctabctrl-class.md)|Analogous to the dividers in a notebook; used in "tab dialog boxes" or property sheets|Yes|  
|[toolbar](../mfc/using-ctoolbarctrl.md)|[CToolBarCtrl](../mfc/reference/ctoolbarctrl-class.md)|Window with command-generating buttons, similar to MFC class `CToolBar`|Yes|  
|[tool tip](../mfc/using-ctooltipctrl.md)|[CToolTipCtrl](../mfc/reference/ctooltipctrl-class.md)|Small pop-up window that describes purpose of a toolbar button or other tool|Yes|  
|[tree](../mfc/using-ctreectrl.md)|[CTreeCtrl](../mfc/reference/ctreectrl-class.md)|Window that displays a hierarchical list of items|Yes|  
  
### What do you want to know more about  
  
-   An individual control: see the table [Windows Common Controls and MFC Classes](#_core_windows_common_controls_and_mfc_classes) in this topic for links to all controls  
  
-   [Making and using controls](../mfc/making-and-using-controls.md)  
  
-   [Using the dialog editor to add controls](../mfc/using-the-dialog-editor-to-add-controls.md)  
  
-   [Adding controls to a dialog box by hand](../mfc/adding-controls-by-hand.md)  
  
-   [Deriving control classes from the MFC control classes](../mfc/deriving-controls-from-a-standard-control.md)  
  
-   [Using common controls as child windows](../mfc/using-a-common-control-as-a-child-window.md)  
  
-   [Notifications from common controls](../mfc/receiving-notification-from-common-controls.md)  
  
-   [Add common controls to a dialog box](../mfc/using-common-controls-in-a-dialog-box.md).  
  
-   [Derive a control from a standard Windows control](../mfc/deriving-controls-from-a-standard-control.md)  
  
-   [Access dialog-box controls with type safety](../mfc/type-safe-access-to-controls-in-a-dialog-box.md)  
  
-   [Receive notification messages from common controls](../mfc/receiving-notification-from-common-controls.md)  
  
-   [Samples](../mfc/common-control-sample-list.md)  
  
 For information about Windows common controls in the [!INCLUDE[winSDK](../atl/includes/winsdk_md.md)], see [Common Controls](http://msdn.microsoft.com/library/windows/desktop/bb775493).  
  
## See Also  
 [User Interface Elements](../mfc/user-interface-elements-mfc.md)   
 [Dialog Editor](../mfc/dialog-editor.md)

