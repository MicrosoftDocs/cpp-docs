---
title: "Adding Event Handlers for Dialog Box Controls"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: f9c70f24-ea6f-44df-82eb-78a2deaee769
caps.latest.revision: 7
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
# Adding Event Handlers for Dialog Box Controls
For project dialog boxes that are already associated with a class, you can take advantage of some shortcuts when you create event handlers. You can quickly create a handler either for the default control notification event or for any applicable Windows message.  
  
#### To create a handler for the default control notification event  
  
1.  Double-click the control. The Text editor opens.  
  
2.  Add control notification handler code in the Text editor.  
  
#### To create a handler for any applicable Windows message  
  
1.  Click the control for which you want to handle the notification event.  
  
2.  In the [Properties window](../Topic/Properties%20Window.md), click the **ControlEvents** button to display the list of common Windows events associated with the control. For example, the standard **OK** button on the **About** dialog box lists the following notification events:  
  
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
    {  
       // TODO: Add your control notification handler code here  
    }  
    ```  
  
 If you want to add the event handler to a class other than the one implementing the dialog box, use the [Event Handler wizard](../VS_visualcpp/Event-Handler-Wizard.md). For more information, see [Adding an Event Handler](../VS_visualcpp/Adding-an-Event-Handler--Visual-C---.md).  
  
 For information on adding resources to managed projects, please see [Resources in Applications](../Topic/Resources%20in%20Desktop%20Apps.md) in the *.NET Framework Developer's Guide.* For information on manually adding resource files to managed projects, accessing resources, displaying static resources, and assigning resources strings to properties, see [Walkthrough: Localizing Windows Forms](assetId:///9a96220d-a19b-4de0-9f48-01e5d82679e5) and [Walkthrough: Using Resources for Localization with ASP.NET](../Topic/Walkthrough:%20Using%20Resources%20for%20Localization%20with%20ASP.NET.md).  
  
### Requirements  
 Win32  
  
## See Also  
 [Default Control Events](../VS_visualcpp/Default-Control-Events.md)   
 [Defining Member Variables for Dialog Controls](../VS_visualcpp/Defining-Member-Variables-for-Dialog-Controls.md)   
 [Dialog Box Controls and Variable Types](../VS_visualcpp/Dialog-Box-Controls-and-Variable-Types.md)   
 [Adding a Class](../VS_visualcpp/Adding-a-Class--Visual-C---.md)   
 [Adding a Member Function](../VS_visualcpp/Adding-a-Member-Function--Visual-C---.md)   
 [Adding a Member Variable](../VS_visualcpp/Adding-a-Member-Variable---Visual-C---.md)   
 [Overriding a Virtual Function](../VS_visualcpp/Overriding-a-Virtual-Function--Visual-C---.md)   
 [MFC Message Handler](../VS_visualcpp/Adding-an-MFC-Message-Handler.md)