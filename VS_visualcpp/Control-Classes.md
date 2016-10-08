---
title: "Control Classes"
ms.custom: na
ms.date: 10/07/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: f9876606-9f5b-44cb-9135-213298d1df8f
caps.latest.revision: 8
manager: ghogen
translation.priority.ht: 
  - cs-cz
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - pl-pl
  - pt-br
  - ru-ru
  - tr-tr
  - zh-cn
  - zh-tw
---
# Control Classes
Control classes encapsulate a wide variety of standard Windows controls ranging from static text controls to tree controls. In addition, MFC provides some new controls, including buttons with bitmaps and control bars.  
  
 The controls whose class names end in "**Ctrl**" were new in Windows 95 and Windows NT version 3.51.  
  
## Static Display Controls  
 [CStatic](../VS_visualcpp/CStatic-Class.md)  
 A static-display window. Static controls are used to label, box, or separate other controls in a dialog box or window. They may also display graphical images rather than text or a box.  
  
## Text Controls  
 [CEdit](../VS_visualcpp/CEdit-Class.md)  
 An editable-text control window. Edit controls are used to accept textual input from the user.  
  
 [CIPAddressCtrl](../VS_visualcpp/CIPAddressCtrl-Class.md)  
 Supports an edit box for manipulating an Internet Protocol (IP) address.  
  
 [CRichEditCtrl](../VS_visualcpp/CRichEditCtrl-Class.md)  
 A control in which the user can enter and edit text. Unlike the control encapsulated in `CEdit`, a rich edit control supports character and paragraph formatting and OLE objects.  
  
## Controls That Represent Numbers  
 [CSliderCtrl](../VS_visualcpp/CSliderCtrl-Class.md)  
 A control containing a slider, which the user moves to select a value or set of values.  
  
 [CSpinButtonCtrl](../VS_visualcpp/CSpinButtonCtrl-Class.md)  
 A pair of arrow buttons the user can click to increment or decrement a value.  
  
 [CProgressCtrl](../VS_visualcpp/CProgressCtrl-Class.md)  
 Displays a rectangle that is gradually filled from left to right to indicate the progress of an operation.  
  
 [CScrollBar](../VS_visualcpp/CScrollBar-Class.md)  
 A scroll-bar control window. The class provides the functionality of a scroll bar, for use as a control in a dialog box or window, through which the user can specify a position within a range.  
  
## Buttons  
 [CButton](../VS_visualcpp/CButton-Class.md)  
 A button control window. The class provides a programmatic interface for a push button, check box, or radio button in a dialog box or window.  
  
 [CBitmapButton](../VS_visualcpp/CBitmapButton-Class.md)  
 A button with a bitmap rather than a text caption.  
  
## Lists  
 [CListBox](../VS_visualcpp/CListBox-Class.md)  
 A list-box control window. A list box displays a list of items that the user can view and select.  
  
 [CDragListBox](../VS_visualcpp/CDragListBox-Class.md)  
 Provides the functionality of a Windows list box; allows the user to move list box items, such as filenames and string literals, within the list box. List boxes with this capability are useful for an item list in an order other than alphabetical, such as include pathnames or files in a project.  
  
 [CComboBox](../VS_visualcpp/CComboBox-Class.md)  
 A combo-box control window. A combo box consists of an edit control plus a list box.  
  
 [CComboBoxEx](../VS_visualcpp/CComboBoxEx-Class.md)  
 Extends the combo box control by providing support for image lists.  
  
 [CCheckListBox](../VS_visualcpp/CCheckListBox-Class.md)  
 Displays a list of items with check boxes, which the user can check or clear, next to each item.  
  
 [CListCtrl](../VS_visualcpp/CListCtrl-Class.md)  
 Displays a collection of items, each consisting of an icon and a label, in a manner similar to the right pane of File Explorer.  
  
 [CTreeCtrl](../VS_visualcpp/CTreeCtrl-Class.md)  
 Displays a hierarchical list of icons and labels arranged in a manner similar to the left pane of File Explorer.  
  
## Toolbars and Status Bars  
 [CToolBarCtrl](../VS_visualcpp/CToolBarCtrl-Class.md)  
 Provides the functionality of the Windows toolbar common control. Most MFC programs use [CToolBar](../VS_visualcpp/CToolBar-Class.md) instead of this class.  
  
 [CStatusBarCtrl](../VS_visualcpp/CStatusBarCtrl-Class.md)  
 A horizontal window, usually divided into panes, in which an application can display status information. Most MFC programs use [CStatusBar](../VS_visualcpp/CStatusBar-Class.md) instead of this class.  
  
## Miscellaneous Controls  
 [CAnimateCtrl](../VS_visualcpp/CAnimateCtrl-Class.md)  
 Displays a simple video clip.  
  
 [CToolTipCtrl](../VS_visualcpp/CToolTipCtrl-Class.md)  
 A small pop-up window that displays a single line of text describing the purpose of a tool in an application.  
  
 [CDateTimeCtrl](../VS_visualcpp/CDateTimeCtrl-Class.md)  
 Supports either an extended edit control, or a simple calendar interface control, that allows a user to choose a specific date or time value.  
  
 [CHeaderCtrl](../VS_visualcpp/CHeaderCtrl-Class.md)  
 Displays titles or labels for columns.  
  
 [CMonthCalCtrl](../VS_visualcpp/CMonthCalCtrl-Class.md)  
 Supports a simple calendar interface control that allows a user to select a date.  
  
 [CTabCtrl](../VS_visualcpp/CTabCtrl-Class.md)  
 A control with tabs on which the user can click, analogous to the dividers in a notebook.  
  
 [CHotKeyCtrl](../VS_visualcpp/CHotKeyCtrl-Class.md)  
 Enables the user to create a hot key combination, which the user can press to perform an action quickly.  
  
 [CLinkCtrl](../VS_visualcpp/CLinkCtrl-Class.md)  
 Renders marked-up text and launches appropriate applications when the user clicks the embedded link.  
  
 [CHtmlEditCtrl](../VS_visualcpp/CHtmlEditCtrl-Class.md)  
 Provides the functionality of the WebBrowser ActiveX control in an MFC window.  
  
## Related Classes  
 [CImageList](../VS_visualcpp/CImageList-Class.md)  
 Provides the functionality of the Windows image list. Image lists are used with list controls and tree controls. They can also be used to store and archive a set of same-sized bitmaps.  
  
 [CCtrlView](../VS_visualcpp/CCtrlView-Class.md)  
 The base class for all views associated with Windows controls. The views based on controls are described below.  
  
 [CEditView](../VS_visualcpp/CEditView-Class.md)  
 A view that contains a Windows standard edit control.  
  
 [CRichEditView](../VS_visualcpp/CRichEditView-Class.md)  
 A view that contains a Windows rich edit control.  
  
 [CListView](../VS_visualcpp/CListView-Class.md)  
 A view that contains a Windows list control.  
  
 [CTreeView](../VS_visualcpp/CTreeView-Class.md)  
 A view that contains a Windows tree control.  
  
## See Also  
 [Class Overview](../VS_visualcpp/Class-Library-Overview.md)