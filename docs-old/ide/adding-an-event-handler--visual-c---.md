---
title: "Adding an Event Handler (Visual C++)"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "article"
f1_keywords: 
  - "vc.codewiz.eventhandler.overview"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "event handlers, adding"
  - "properties [Visual Studio], MSBuild"
  - "MSBuild, properties"
ms.assetid: 050bebf0-a9e0-474b-905c-796fe5ac8fc3
caps.latest.revision: 6
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
# Adding an Event Handler (Visual C++)
From the resource editor, you can add a new event handler, or edit an existing event handler, for a dialog box control using the [Event Handler Wizard](../ide/event-handler-wizard.md).  
  
 You can add an event to the class implementing the dialog box using the [Properties window](../Topic/Properties%20Window.md). If you want to add the event to a class other than the dialog box class, use the Event Handler Wizard.  
  
### To add an event handler to a dialog box control  
  
1.  Double-click the dialog box resource in [Resource View](../windows/resource-view-window.md) to open the dialog box resource that contains the control in the [dialog editor](../mfc/dialog-editor.md).  
  
2.  Right-click the control for which you want to handle the notification event.  
  
3.  On the shortcut menu, click **Add Event Handler** to display the Event Handler Wizard.  
  
4.  Select the event in the **Message type** box to add to the class selected in the **Class list** box.  
  
5.  Accept the default name in the **Function handler name** box, or provide the name of your choice.  
  
6.  Click **Add and edit** to add the event handler to the project and open the text editor at the new function to add the appropriate event handler code.  
  
     If the selected message type already has an event handler for the selected class, **Add and edit** is unavailable, and **Edit code** is available. Click **Edit code** to open the text editor at the existing function.  
  
 Alternately, you can add event handlers from the [Properties window](../Topic/Properties%20Window.md). See [Adding Event Handlers for Dialog Box Controls](../mfc/adding-event-handlers-for-dialog-box-controls.md) for more information.  
  
## See Also  
 [Adding Functionality with Code Wizards](../ide/adding-functionality-with-code-wizards--c---.md)   
 [Adding a Class](../ide/adding-a-class--visual-c---.md)   
 [Adding a Member Variable](../ide/adding-a-member-variable---visual-c---.md)   
 [Adding a Member Function](../ide/adding-a-member-function--visual-c---.md)   
 [MFC Message Handler](../mfcref/adding-an-mfc-message-handler.md)   
 [Navigating the Class Structure](../ide/navigating-the-class-structure--visual-c---.md)