---
title: "Defining a Message Handler for a Reflected Message | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vc.codewiz.defining.msg.msghandler"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "messages, reflected"
  - "message handling, reflected messages"
ms.assetid: 5a403528-58c5-46e7-90d5-4a77f0ab9b9c
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
# Defining a Message Handler for a Reflected Message
Once you have created a new MFC control class, you can define message handlers for it. Reflected message handlers allow your control class to handle its own messages before the message is received by the parent. You can use the MFC [CWnd::SendMessage](../../mfc/reference/cwnd-class.md#cwnd__sendmessage) function to send messages from your control to a parent window.  
  
 With this functionality you could, for example, create a list box that will redraw itself rather than relying on the parent window to do so (owner drawn). For more information on reflected messages, see [Handling Reflected Messages](../../mfc/handling-reflected-messages.md).  
  
 To create an [ActiveX control](../../mfc/activex-controls-on-the-internet.md) with the same functionality, you must create a project for the ActiveX control.  
  
> [!NOTE]
>  You cannot add a reflected message (OCM_*Message*) for an ActiveX control using the Properties window, as described below. You must add these messages manually.  
  
### To define a message handler for a reflected message from the Properties window  
  
1.  Add a control, such as a list, a rebar control, a toolbar, or a tree control, to your MFC project.  
  
2.  In Class View, click the name of your control class.  
  
3.  In the [Properties window](/visualstudio/ide/reference/properties-window), the control class name appears in the **Class Name** list.  
  
4.  Click the **Messages** button to display the Windows messages available to add to the control.  
  
5.  Scroll down the list of messages in the Properties window until you see the heading **Reflected**. Alternately, click the **Categories** button and collapse the view to see the **Reflected** heading.  
  
6.  Select the reflected message for which you want to define a handler. Reflected messages are marked with an equal sign (=).  
  
7.  Click the cell in the right column in the Properties window to display the suggested name of the handler as \<add>*HandlerName*. (For example, the **=WM_CTLCOLOR** message handler suggests \<add>**CtlColor**).  
  
8.  Click the suggested name to accept. The handler is added to your project.  
  
     Message handler names that you have added appear in the right column of the reflected messages window.  
  
9. To edit or delete a message handler, repeat steps 4 through 7. Click the cell containing the handler name to edit or delete and click the appropriate task.  
  
## See Also  
 [Mapping Messages to Functions](../../mfc/reference/mapping-messages-to-functions.md)   
 [Adding Functionality with Code Wizards](../../ide/adding-functionality-with-code-wizards-cpp.md)   
 [Adding a Class](../../ide/adding-a-class-visual-cpp.md)   
 [Adding a Member Function](../../ide/adding-a-member-function-visual-cpp.md)   
 [Adding a Member Variable](../../ide/adding-a-member-variable-visual-cpp.md)   
 [Overriding a Virtual Function](../../ide/overriding-a-virtual-function-visual-cpp.md)   
 [MFC Message Handler](../../mfc/reference/adding-an-mfc-message-handler.md)   
 [Navigating the Class Structure](../../ide/navigating-the-class-structure-visual-cpp.md)
