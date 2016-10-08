---
title: "Controls (MFC)"
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
ms.assetid: b2842884-6435-4b8f-933b-21671bf8af95
caps.latest.revision: 9
manager: ghogen
translation.priority.ht: 
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - ru-ru
  - zh-cn
  - zh-tw
translation.priority.mt: 
  - cs-cz
  - pl-pl
  - pt-br
  - tr-tr
---
# Controls (MFC)
Controls are objects that users can interact with to enter or manipulate data. They commonly appear in dialog boxes or on toolbars. This topic family covers three main kinds of controls:  
  
-   Windows common controls, including owner-drawn controls  
  
-   ActiveX Controls  
  
-   Other control classes supplied by the Microsoft Foundation Class Library (MFC)  
  
## Windows Common Controls  
 The Windows operating system has always provided a number of Windows common controls. These control objects are programmable, and the Visual C++ dialog editor supports adding them to your dialog boxes. The Microsoft Foundation Class Library (MFC) supplies classes that encapsulate each of these controls, as shown in the table [Windows Common Controls and MFC Classes](#_core_windows_common_controls_and_mfc_classes). (Some items in the table have related topics that describe them further. For controls that lack topics, see the documentation for the MFC class.)  
  
 Class [CWnd](../VS_visualcpp/CWnd-Class.md) is the base class of all window classes, including all of the control classes. The Windows common controls are supported in the following environments:  
  
-   Windows 95, Windows 98, and Windows 2000  
  
-   Windows NT, version 3.51 and later  
  
-   Win32s, version 1.3 (Visual C++ versions 4.2 and later do not support Win32s)  
  
 The older common controls — check boxes, combo boxes, edit boxes, list boxes, option buttons, pushbuttons, scroll bar controls, and static controls — were available in earlier versions of Windows as well.  
  
## ActiveX Controls  
 ActiveX controls, formerly known as OLE controls, can be used in dialog boxes in your applications for Windows, or in HTML pages on the World Wide Web. For more information, see [MFC ActiveX Controls](../VS_visualcpp/MFC-ActiveX-Controls.md).  
  
## Other MFC Control Classes  
 In addition to classes that encapsulate all of the Windows common controls and that support programming your own ActiveX controls (or using ActiveX controls supplied by others), MFC supplies the following control classes of its own:  
  
-   [CBitmapButton](../VS_visualcpp/CBitmapButton-Class.md)  
  
-   [CCheckListBox](../VS_visualcpp/CCheckListBox-Class.md)  
  
-   [CDragListBox](../VS_visualcpp/CDragListBox-Class.md)  
  
##  <a name="_core_finding_information_about_windows_common_controls"></a> Finding Information About Windows Common Controls  
 The table below briefly describes each of the Windows common controls, including the control's MFC wrapper class.  
  
### Windows Common Controls and MFC Classes  
  
|Control|MFC class|Description|New in Windows 95?|  
|-------------|---------------|-----------------|------------------------|  
|[animation](../VS_visualcpp/Using-CAnimateCtrl.md)|[CAnimateCtrl](../VS_visualcpp/CAnimateCtrl-Class.md)|Displays successive frames of an AVI video clip|Yes|  
|button|[CButton](../VS_visualcpp/CButton-Class.md)|Pushbuttons that cause an action; also used for check boxes, radio buttons, and group boxes|No|  
|combo box|[CComboBox](../VS_visualcpp/CComboBox-Class.md)|Combination of an edit box and a list box|No|  
|[date and time picker](../VS_visualcpp/Using-CDateTimeCtrl.md)|[CDateTimeCtrl](../VS_visualcpp/CDateTimeCtrl-Class.md)|Allows the user to choose a specific date or time value|Yes|  
|edit box|[CEdit](../VS_visualcpp/CEdit-Class.md)|Boxes for entering text|No|  
|[extended combo box](../VS_visualcpp/Using-CComboBoxEx.md)|[CComboBoxEx](../VS_visualcpp/CComboBoxEx-Class.md)|A combo box control with the ability to display images|Yes|  
|[header](../VS_visualcpp/Using-CHeaderCtrl.md)|[CHeaderCtrl](../VS_visualcpp/CHeaderCtrl-Class.md)|Button that appears above a column of text; controls width of text displayed|Yes|  
|[hotkey](../VS_visualcpp/Using-CHotKeyCtrl.md)|[CHotKeyCtrl](../VS_visualcpp/CHotKeyCtrl-Class.md)|Window that enables user to create a "hot key" to perform an action quickly|Yes|  
|[image list](../VS_visualcpp/Using-CImageList.md)|[CImageList](../VS_visualcpp/CImageList-Class.md)|Collection of images used to manage large sets of icons or bitmaps (image list isn't really a control; it supports lists used by other controls)|Yes|  
|[list](../VS_visualcpp/Using-CListCtrl.md)|[CListCtrl](../VS_visualcpp/CListCtrl-Class.md)|Window that displays a list of text with icons|Yes|  
|list box|[CListBox](../VS_visualcpp/CListBox-Class.md)|Box that contains a list of strings|No|  
|[month calendar](../VS_visualcpp/Using-CMonthCalCtrl.md)|[CMonthCalCtrl](../VS_visualcpp/CMonthCalCtrl-Class.md)|Control that displays date information|Yes|  
|[progress](../VS_visualcpp/Using-CProgressCtrl.md)|[CProgressCtrl](../VS_visualcpp/CProgressCtrl-Class.md)|Window that indicates progress of a long operation|Yes|  
|[rebar](../VS_visualcpp/Using-CReBarCtrl.md)|[CRebarCtrl](../VS_visualcpp/CReBarCtrl-Class.md)|Tool bar that can contain additional child windows in the form of controls|Yes|  
|[rich edit](../VS_visualcpp/Using-CRichEditCtrl.md)|[CRichEditCtrl](../VS_visualcpp/CRichEditCtrl-Class.md)|Window in which user can edit with character and paragraph formatting (see [Classes Related to Rich Edit Controls](../VS_visualcpp/Classes-Related-to-Rich-Edit-Controls.md))|Yes|  
|scroll bar|[CScrollBar](../VS_visualcpp/CScrollBar-Class.md)|Scroll bar used as a control inside a dialog box (not on a window)|No|  
|[slider](../VS_visualcpp/Using-CSliderCtrl.md)|[CSliderCtrl](../VS_visualcpp/CSliderCtrl-Class.md)|Window containing a slider control with optional tick marks|Yes|  
|[spin button](../VS_visualcpp/Using-CSpinButtonCtrl.md)|[CSpinButtonCtrl](../VS_visualcpp/CSpinButtonCtrl-Class.md)|Pair of arrow buttons user can click to increment or decrement a value|Yes|  
|static-text|[CStatic](../VS_visualcpp/CStatic-Class.md)|Text for labeling other controls|No|  
|[status bar](../VS_visualcpp/Using-CStatusBarCtrl.md)|[CStatusBarCtrl](../VS_visualcpp/CStatusBarCtrl-Class.md)|Window for displaying status information, similar to MFC class `CStatusBar`|Yes|  
|[tab](../VS_visualcpp/Using-CTabCtrl.md)|[CTabCtrl](../VS_visualcpp/CTabCtrl-Class.md)|Analogous to the dividers in a notebook; used in "tab dialog boxes" or property sheets|Yes|  
|[toolbar](../VS_visualcpp/Using-CToolBarCtrl.md)|[CToolBarCtrl](../VS_visualcpp/CToolBarCtrl-Class.md)|Window with command-generating buttons, similar to MFC class `CToolBar`|Yes|  
|[tool tip](../VS_visualcpp/Using-CToolTipCtrl.md)|[CToolTipCtrl](../VS_visualcpp/CToolTipCtrl-Class.md)|Small pop-up window that describes purpose of a toolbar button or other tool|Yes|  
|[tree](../VS_visualcpp/Using-CTreeCtrl.md)|[CTreeCtrl](../VS_visualcpp/CTreeCtrl-Class.md)|Window that displays a hierarchical list of items|Yes|  
  
### What do you want to know more about?  
  
-   An individual control: see the table [Windows Common Controls and MFC Classes](#_core_windows_common_controls_and_mfc_classes) in this topic for links to all controls  
  
-   [Making and using controls](../VS_visualcpp/Making-and-Using-Controls.md)  
  
-   [Using the dialog editor to add controls](../VS_visualcpp/Using-the-Dialog-Editor-to-Add-Controls.md)  
  
-   [Adding controls to a dialog box by hand](../VS_visualcpp/Adding-Controls-By-Hand.md)  
  
-   [Deriving control classes from the MFC control classes](../VS_visualcpp/Deriving-Controls-from-a-Standard-Control.md)  
  
-   [Using common controls as child windows](../VS_visualcpp/Using-a-Common-Control-as-a-Child-Window.md)  
  
-   [Notifications from common controls](../VS_visualcpp/Receiving-Notification-from-Common-Controls.md)  
  
-   [Add common controls to a dialog box](../VS_visualcpp/Using-Common-Controls-in-a-Dialog-Box.md).  
  
-   [Derive a control from a standard Windows control](../VS_visualcpp/Deriving-Controls-from-a-Standard-Control.md)  
  
-   [Access dialog-box controls with type safety](../VS_visualcpp/Type-Safe-Access-to-Controls-in-a-Dialog-Box.md)  
  
-   [Receive notification messages from common controls](../VS_visualcpp/Receiving-Notification-from-Common-Controls.md)  
  
-   [Samples](../VS_visualcpp/Common-Control-Sample-List.md)  
  
 For information about Windows common controls in the Windows SDK, see [Common Controls](http://msdn.microsoft.com/library/windows/desktop/bb775493).  
  
## See Also  
 [User Interface Elements](../VS_visualcpp/User-Interface-Elements--MFC-.md)   
 [Dialog Editor](../VS_visualcpp/Dialog-Editor.md)