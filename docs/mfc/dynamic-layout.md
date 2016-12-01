---
title: "Dynamic Layout | Microsoft Docs"
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
ms.assetid: 8598cfb2-c8d4-4f5a-bf2b-59dc4653e042
caps.latest.revision: 7
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
# Dynamic Layout
With MFC in [!INCLUDE[vs_dev14](../ide/includes/vs_dev14_md.md)], you can create dialogs that the user can resize, and you can control the way the layout adjusts to the change in size. For example, you can attach buttons at the bottom of a dialog to the bottom edge so they always stay at the bottom. You can also set up certain controls such as listboxes, editboxes, and text fields to expand as the user expands the dialog.  
  
## Specifying dynamic layout settings for an MFC dialog box  
 When the user resizes a dialog, the controls in the dialog can resize or move in the X and Y directions. The change in size or position of a control when the user resizes a dialog is called dynamic layout. For example, the following is a dialog before being resized:  
  
 ![Dialog before being resized.](../mfc/media/mfcdynamiclayout4.png "mfcdynamiclayout4")  
  
 After being resized, the listbox area is increased to show more items, and the buttons are moved along with the bottom right corner:  
  
 ![Dialog after being resized.](../mfc/media/mfcdynamiclayout5.png "mfcdynamiclayout5")  
  
 You can control dynamic layout by specifying the details for each control in the Resource Editor in the IDE, or you can do so programmatically by accessing the CMFCDynamicLayout object for a particular control and setting the properties.  
  
### Setting dynamic layout properties in the resource editor  
 You can set the dynamic layout behavior for a dialog box without having to write any code, by using the resource editor.  
  
##### To set dynamic layout properties in the resource editor  
  
1.  With an MFC project open, open the dialog you want to work with in the dialog editor.  
  
     ![Open the dialog in the resource editor.](../mfc/media/mfcdynamiclayout3.png "mfcdynamiclayout3")  
  
2.  Select a control and in the properties window, set its dynamic layout properties. The **Dynamic Layout** section in the properties window contains the properties **Moving Type**, **Sizing Type**, and, depending on the values selected for those properties, specific properties that define how much controls move or change size. **Moving Type** determines how a control is moved as the size of the dialog is changed; **Sizing Type** determines how a control is resized as the size of the dialog is changed. **Moving Type** and **Sizing Type** may be **Horizontal**, **Vertical**, **Both**, or **None** depending on the dimensions that you want to change dynamically. Horizontal is the X dimension; Vertical is the Y direction.  
  
3.  If you want a control such as a button to be at a fixed size and stay in place at the bottom right, as is common for the **OK** or **Cancel** buttons, set the **Sizing Type** to **None**, and set the **Moving Type** to **Both**. For the **Moving X** and **Moving Y** values under **Moving Type**, set 100% to cause the control to stay a fixed distance from the bottom right corner.  
  
     ![Dynamic Layout](../mfc/media/mfcdynamiclayout1.png "mfcdynamiclayout1")  
  
4.  Suppose you also have a control that you want to expand as the dialog expands. Typically, a user might expand a dialog in order to expand a multiline editbox to increase the size of the text area, or they might expand a list control to see more data. For this case, set the **Sizing Type** to Both, and set the **Moving Type** to none. Then, set the **Sizing X** and **Sizing Y** values to 100.  
  
     ![Dynamic Layout Settings](../mfc/media/mfcdynamiclayout2.png "mfcdynamiclayout2")  
  
5.  Experiment with other values that might make sense for your controls. A dialog with a one-line textbox might have the **Sizing Type** set to **Horizontal** only, for example.  
  
### Setting dynamic layout properties programmatically  
 The previous procedure is useful for specifying dynamic layout properties for a dialog at design time, but if you want to control the dynamic layout at runtime, you can set dynamic layout properties programmatically.  
  
##### To set dynamic layout properties programmatically  
  
1.  Find or create a place in your dialog class's implementation code where you want to specify the dynamic layout for the dialog. For example, you might want to add a method such as `AdjustLayout` in your dialog, and call it from places where the layout needs to be changed. You might first call this from the constructor, or after making changes to the dialog.  
  
2.  For the dialog, call [GetDynamicLayout](../mfc/reference/cwnd-class.md#cwnd__getdynamiclayout), a method of the CWnd class. GetDynamicLayout returns a pointer to a CMFCDynamicLayout object.  
  
 ```  
    CMFCDynamicLayout* dynamicLayout = pDialog->GetDynamicLayout();

 ```  
  
3.  For the first control to which you want to add dynamic behavior, use the static methods on the dynamic layout class to create the [MoveSettings](../mfc/reference/cmfcdynamiclayout-class.md#cmfcdynamiclayout__movesettings_structure) structure that encodes the way the control should be adjusted. You do this by first choosing the appropriate static method: [CMFCDynamicLayout::MoveHorizontal](../mfc/reference/cmfcdynamiclayout-class.md#cmfcdynamiclayout__movehorizontal), [CMFCDynamicLayout::MoveVertical](../mfc/reference/cmfcdynamiclayout-class.md#cmfcdynamiclayout__movevertical), [CMFCDynamicLayout::MoveNone](../mfc/reference/cmfcdynamiclayout-class.md#cmfcdynamiclayout__movenone), or [CMFCDynamicLayout::MoveHorizontalAndVertical](../mfc/reference/cmfcdynamiclayout-class.md#cmfcdynamiclayout__movehorizontalandvertical). You pass in a percentage for the horizontal and/or vertical aspects of the move. These static methods all return a newly created MoveSettings object that you can use to specify a control's move behavior.  
  
     Keep in mind that 100 means move exactly as much as the dialog changes size, which causes a control's edge to stay a fixed distance from the new border.  
  
 ```  
    MoveSettings moveSettings = CMFCDynamicLayout::MoveHorizontal(100);

 ```  
  
4.  Do the same thing for the size behavior, which uses the [SizeSettings](../mfc/reference/cmfcdynamiclayout-class.md#cmfcdynamiclayout__sizesettings_structure) type. For example, to specify that a control does not change size when the dialog resizes, use the following code:  
  
 ```  
    SizeSettings sizeSettings = CMFCDynamicLayout::SizeNone();

 ```  
  
5.  Add the control to the dynamic layout manager using the [CMFCDynamicLayout::AddItem](../mfc/reference/cmfcdynamiclayout-class.md#cmfcdynamiclayout__additem) method. There are two overloads for different ways of specifying the desired control. One takes the control's window handle (HWND), and the other takes the control ID.  
  
 ```  
    dynamicLayout->AddItem(hWndControl,
    moveSettings,
    sizeSettings);

 ```  
  
6.  Repeat for each control that needs to be moved or resized.  
  
7.  If necessary, can use the [CMFCDynamicLayout::HasItem](../mfc/reference/cmfcdynamiclayout-class.md#cmfcdynamiclayout__hasitem) method to determine if a control is already on the list of controls subjected to dyamic layout changes, or the [CMFCDynamicLayout::IsEmpty](../mfc/reference/cmfcdynamiclayout-class.md#cmfcdynamiclayout__isempty) method to determine if there are any controls that are subject to changes.  
  
8.  To enable dialog layout, call the [CWnd::EnableDynamicLayout](../mfc/reference/cwnd-class.md#cwnd__enabledynamiclayout) method.  
  
 ```  
    pDialog->EnableDynamicLayout(TRUE);

 ```  
  
9. The next time the user resizes the dialog, the [CMFCDynamicLayout::Adjust](../mfc/reference/cmfcdynamiclayout-class.md#cmfcdynamiclayout__adjust) method is called which actually applies the settings.  
  
10. If you want to disable dynamic layout, call [CWnd::EnableDynamicLayout](../mfc/reference/cwnd-class.md#cwnd__enabledynamiclayout) with `FALSE` as for the `bEnabled` parameter.  
  
 ```  
    pDialog->EnableDynamicLayout(FALSE);

 ```  
  
##### To set the dynamic layout programmatically from a resource file  
  
1.  Use the [CMFCDynamicLayout::MoveHorizontalAndVertical](../mfc/reference/cmfcdynamiclayout-class.md#cmfcdynamiclayout__movehorizontalandvertical) method to specify a resource name in the relevant resource script file (.rc file) that specifies dynamic layout information, as in the following example:  
  
 ```  
    dynamicLayout->LoadResource("IDD_DIALOG1");

 ```  
  
     The named resource must reference a dialog that contains layout information in the form of an AFX_DIALOG_LAYOUT entry in the resource file, as in the following example:  
  
 ``` *///////////////////////////////////////////////////////////////////////////// *// *// AFX_DIALOG_LAYOUT *//  
 
    IDD_MFCAPPLICATION1_DIALOG AFX_DIALOG_LAYOUT  
    BEGIN 
    0x0000,
    0x6400,
    0x0028,
    0x643c,
    0x0028  
    END 
 
    IDD_DIALOG1 AFX_DIALOG_LAYOUT  
    BEGIN 
    0x0000,
    0x6464,
    0x0000,
    0x6464,
    0x0000,
    0x0000,
    0x6464,
    0x0000,
    0x0000  
 
    END 
 ```  
  
## See Also  
 [CMFCDynamicLayout Class](../mfc/reference/cmfcdynamiclayout-class.md)   
 [Control Classes](../mfc/control-classes.md)   
 [Dialog Box Classes](../mfc/dialog-box-classes.md)   
 [Dialog Editor](../mfc/dialog-editor.md)

