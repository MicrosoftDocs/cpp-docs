---
title: "Adding Event Handlers for Dialog Box Controls | Microsoft Docs"
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
  - "Dialog editor, adding event handlers to controls"
  - "controls [C++], event handlers"
  - "dialog box controls, events"
  - "event handlers, for dialog box controls"
ms.assetid: f9c70f24-ea6f-44df-82eb-78a2deaee769
caps.latest.revision: 9
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
# Adding Event Handlers for Dialog Box Controls
For project dialog boxes that are already associated with a class, you can take advantage of some shortcuts when you create event handlers. You can quickly create a handler either for the default control notification event or for any applicable Windows message.  
  
#### To create a handler for the default control notification event  
  
1.  Double-click the control. The Text editor opens.  
  
2.  Add control notification handler code in the Text editor.  
  
#### To create a handler for any applicable Windows message  
  
1.  Click the control for which you want to handle the notification event.  
  
2.  In the [Properties window](/visualstudio/ide/reference/properties-window), click the **ControlEvents** button to display the list of common Windows events associated with the control. For example, the standard **OK** button on the **About** dialog box lists the following notification events:  
  
 **BN_CLICKED**  
  
 **BN_DOUBLECLICKED**  
  
 **BN_KILLFOCUS**  
  
 **BN_SETFOCUS**  
  
    > [!NOTE]
    >  Alternately, select the dialog box and click the **ControlEvents** button to display the list of common Windows events for all controls in the dialog box.  
  
3.  In the **Properties** window, click the right column next to the event to handle, and then select the suggested notification event name (for example, **OnBnClickedOK** handles **BN_CLICKED**).  
  
    > [!NOTE]
    >  Alternately, you can provide an event handler name of your choice, rather than selecting the default event handler name.  
  
     Once you have selected the event, Visual Studio opens the Text Editor and displays the event handler's code. For example, the following code is added for the default **OnBnClickedOK**:  
  
 ```  
    void CAboutDlg::OnBnClickedOk(void)  
 { *// TODO: Add your control notification handler code here  
 }  
 ```  
  
 If you want to add the event handler to a class other than the one implementing the dialog box, use the [Event Handler wizard](../ide/event-handler-wizard.md). For more information, see [Adding an Event Handler](../ide/adding-an-event-handler-visual-cpp.md).  
  
 For information on adding resources to managed projects, please see [Resources in Applications](http://msdn.microsoft.com/Library/8ad495d4-2941-40cf-bf64-e82e85825890) in the *.NET Framework Developer's Guide.* For information on manually adding resource files to managed projects, accessing resources, displaying static resources, and assigning resources strings to properties, see [Walkthrough: Localizing Windows Forms](http://msdn.microsoft.com/en-us/9a96220d-a19b-4de0-9f48-01e5d82679e5) and [Walkthrough: Using Resources for Localization with ASP.NET](http://msdn.microsoft.com/Library/bb4e5b44-e2b0-48ab-bbe9-609fb33900b6).  
  
### Requirements  
 Win32  
  
## See Also  
 [Default Control Events](../mfc/default-control-events.md)   
 [Defining Member Variables for Dialog Controls](../mfc/defining-member-variables-for-dialog-controls.md)   
 [Dialog Box Controls and Variable Types](../ide/dialog-box-controls-and-variable-types.md)   
 [Adding a Class](../ide/adding-a-class-visual-cpp.md)   
 [Adding a Member Function](../ide/adding-a-member-function-visual-cpp.md)   
 [Adding a Member Variable](../ide/adding-a-member-variable-visual-cpp.md)   
 [Overriding a Virtual Function](../ide/overriding-a-virtual-function-visual-cpp.md)   
 [MFC Message Handler](../mfc/reference/adding-an-mfc-message-handler.md)

