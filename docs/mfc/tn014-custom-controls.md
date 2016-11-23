---
title: "TN014: Custom Controls | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vc.controls"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "TN014"
  - "custom controls [MFC]"
ms.assetid: 1917a498-f643-457c-b570-9a0af7dbf7bb
caps.latest.revision: 21
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
---
# TN014: Custom Controls
This note describes the MFC Support for custom and self-drawing controls. It also describes dynamic subclassing, and describes the relationship between [CWnd](../mfc/reference/cwnd-class.md) objects and `HWND`s.  
  
 The MFC sample application CTRLTEST illustrates how to use many custom controls. See the source code for the MFC General sample [CTRLTEST](../visual-cpp-samples.md) and online help.  
  
## Owner-Draw Controls/Menus  
 Windows provides support for owner-draw controls and menus by using Windows messages. The parent window of any control or menu receives these messages and calls functions in response. You can override these functions to customize the visual appearance and behavior of your owner-draw control or menu.  
  
 MFC directly supports owner-draw with the following functions:  
  
- [CWnd::OnDrawItem](../mfc/reference/cwnd-class.md#cwnd__ondrawitem)  
  
- [CWnd::OnMeasureItem](../mfc/reference/cwnd-class.md#cwnd__onmeasureitem)  
  
- [CWnd::OnCompareItem](../mfc/reference/cwnd-class.md#cwnd__oncompareitem)  
  
- [CWnd::OnDeleteItem](../mfc/reference/cwnd-class.md#cwnd__ondeleteitem)  
  
 You can override these functions in your `CWnd` derived class to implement custom draw behavior.  
  
 This approach does not lead to reusable code. If you have two similar controls in two different `CWnd` classes, you must implement the custom control behavior in two locations. The MFC-supported self-drawing control architecture solves this problem.  
  
## Self-Draw Controls and Menus  
 MFC provides a default implementation (in the `CWnd` and [CMenu](../mfc/reference/cmenu-class.md) classes) for the standard owner-draw messages. This default implementation will decode the owner-draw parameters and delegate the owner-draw messages to the controls or menu. This is called self-draw because the drawing code is in the class of the control or menu, not in the owner window.  
  
 By using self-draw controls you can build reusable control classes that use owner-draw semantics to display the control. The code for drawing the control is in the control class, not its parent. This is an object-oriented approach to custom control programming. Add the following list of functions to your self-draw classes:  
  
-   For self-draw buttons:  
  
 ```  
    CButton:DrawItem(LPDRAWITEMSTRUCT);
*// insert code to draw this button  
 ```  
  
-   For self-draw menus:  
  
 ```  
    CMenu:MeasureItem(LPMEASUREITEMSTRUCT);
*// insert code to measure the size of an item in this menu  
    CMenu:DrawItem(LPDRAWITEMSTRUCT);
*// insert code to draw an item in this menu  
 ```  
  
-   For self-draw list boxes:  
  
 ```  
    CListBox:MeasureItem(LPMEASUREITEMSTRUCT);
*// insert code to measure the size of an item in this list box  
    CListBox:DrawItem(LPDRAWITEMSTRUCT);
*// insert code to draw an item in this list box  
 
    CListBox:CompareItem(LPCOMPAREITEMSTRUCT);
*// insert code to compare two items in this list box if LBS_SORT  
    CListBox:DeleteItem(LPDELETEITEMSTRUCT);
*// insert code to delete an item from this list box  
 ```  
  
-   For self-draw combo boxes:  
  
 ```  
    CComboBox:MeasureItem(LPMEASUREITEMSTRUCT);
*// insert code to measure the size of an item in this combo box  
    CComboBox:DrawItem(LPDRAWITEMSTRUCT);
*// insert code to draw an item in this combo box  
 
    CComboBox:CompareItem(LPCOMPAREITEMSTRUCT);
*// insert code to compare two items in this combo box if CBS_SORT  
    CComboBox:DeleteItem(LPDELETEITEMSTRUCT);
*// insert code to delete an item from this combo box  
 ```  
  
 For details on the owner-draw structures ([DRAWITEMSTRUCT](../mfc/reference/drawitemstruct-structure.md), [MEASUREITEMSTRUCT](../mfc/reference/measureitemstruct-structure.md), [COMPAREITEMSTRUCT](../mfc/reference/compareitemstruct-structure.md), and [DELETEITEMSTRUCT](../mfc/reference/deleteitemstruct-structure.md)) see the MFC documentation for `CWnd::OnDrawItem`, `CWnd::OnMeasureItem`, `CWnd::OnCompareItem`, and `CWnd::OnDeleteItem` respectively.  
  
## Using self-draw controls and menus  
 For self-draw menus, you must override both the `OnMeasureItem` and `OnDrawItem` methods.  
  
 For self-draw list boxes and combo boxes, you must override `OnMeasureItem` and `OnDrawItem`. You must specify the `LBS_OWNERDRAWVARIABLE` style for list boxes or `CBS_OWNERDRAWVARIABLE` style for combo boxes in the dialog template. The `OWNERDRAWFIXED` style will not work with self-draw items because the fixed item height is determined before self-draw controls are attached to the list box. (You can use the methods [CListBox::SetItemHeight](../mfc/reference/clistbox-class.md#clistbox__setitemheight) and [CComboBox::SetItemHeight](../mfc/reference/ccombobox-class.md#ccombobox__setitemheight) to overcome this limitation.)  
  
 Switching to an `OWNERDRAWVARIABLE` style will force the system to apply the `NOINTEGRALHEIGHT` style to the control. Because the control cannot calculate an integral height with variable sized items, the default style of `INTEGRALHEIGHT` is ignored and the control is always `NOINTEGRALHEIGHT`. If your items are fixed height, you can prevent partial items from being drawn by specifying the control size to be an integer multiplier of the item size.  
  
 For self-drawing list boxes and combo boxes with the `LBS_SORT` or `CBS_SORT` style, you must override the `OnCompareItem` method.  
  
 For self-drawing list boxes and combo boxes, `OnDeleteItem` is not usually overridden. You can override `OnDeleteItem` if you want to perform any special processing. One case where this would be applicable is when additional memory or other resources are stored with each list box or combo box item.  
  
## Examples of Self-Drawing Controls and Menus  
 The MFC General sample [CTRLTEST](../visual-cpp-samples.md) provides samples of a self-draw menu and a self-draw list box.  
  
 The most typical example of a self-drawing button is a bitmap button. A bitmap button is a button that shows one, two, or three bitmap images for the different states. An example of this is provided in the MFC class [CBitmapButton](../mfc/reference/cbitmapbutton-class.md).  
  
## Dynamic Subclassing  
 Occasionally you will want to change the functionality of an object that already exists. The previous examples required you to customize the controls before they were created. Dynamic subclassing enables you to customize a control that has already been created.  
  
 Subclassing is the Windows term for replacing the [WndProc](http://msdn.microsoft.com/en-us/94ba8ffa-3c36-46d4-ac74-9bd10b1ffd26) of a window with a customized `WndProc` and calling the old `WndProc` for default functionality.  
  
 This should not be confused with C++ class derivation. For clarification, the C++ terms *base class* and *derived class* are analogous to *superclass* and *subclass* in the Windows object model. C++ derivation with MFC and Windows subclassing are functionally similar, except C++ does not support dynamic subclassing.  
  
 The `CWnd` class provides the connection between a C++ object (derived from `CWnd`) and a Windows window object (known as an `HWND`).  
  
 There are three common ways these are related:  
  
- `CWnd` creates the `HWND`. You can modify the behavior in a derived class by creating a class derived from `CWnd`. The `HWND` is created when your application calls [CWnd::Create](../mfc/reference/cwnd-class.md#cwnd__create).  
  
-   The application attaches a `CWnd` to an existing `HWND`. The behavior of the existing window is not modified. This is a case of delegation and is made possible by calling [CWnd::Attach](../mfc/reference/cwnd-class.md#cwnd__attach) to alias an existing `HWND` to a `CWnd` object.  
  
- `CWnd` is attached to an existing `HWND` and you can modify the behavior in a derived class. This is called dynamic subclassing because we are changing the behavior, and therefore the class, of a Windows object at run time.  
  
 You can achieve dynamic subclassing by using the methods [CWnd::SubclassWindow](../mfc/reference/cwnd-class.md#cwnd__subclasswindow) and[CWnd::SubclassDlgItem](../mfc/reference/cwnd-class.md#cwnd__subclassdlgitem).  
  
 Both routines attach a `CWnd` object to an existing `HWND`. `SubclassWindow` takes the `HWND` directly. `SubclassDlgItem` is a helper function that takes a control ID and the parent window. `SubclassDlgItem` is designed for attaching C++ objects to dialog controls created from a dialog template.  
  
 See the [CTRLTEST](../visual-cpp-samples.md) example for several examples of when to use `SubclassWindow` and `SubclassDlgItem`.  
  
## See Also  
 [Technical Notes by Number](../mfc/technical-notes-by-number.md)   
 [Technical Notes by Category](../mfc/technical-notes-by-category.md)

