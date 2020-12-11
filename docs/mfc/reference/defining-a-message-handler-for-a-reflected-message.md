---
description: "Learn more about: Defining a Message Handler for a Reflected Message"
title: "Defining a Message Handler for a Reflected Message"
ms.date: "09/07/2019"
f1_keywords: ["vc.codewiz.defining.msg.msghandler"]
helpviewer_keywords: ["messages [MFC], reflected", "message handling [MFC], reflected messages"]
ms.assetid: 5a403528-58c5-46e7-90d5-4a77f0ab9b9c
---
# Defining a Message Handler for a Reflected Message

Once you have created a new MFC control class, you can define message handlers for it. Reflected message handlers allow your control class to handle its own messages before the message is received by the parent. You can use the MFC [CWnd::SendMessage](../../mfc/reference/cwnd-class.md#sendmessage) function to send messages from your control to a parent window.

With this functionality you could, for example, create a list box that will redraw itself rather than relying on the parent window to do so (owner drawn). For more information on reflected messages, see [Handling Reflected Messages](../../mfc/handling-reflected-messages.md).

To create an [ActiveX control](../../mfc/activex-controls-on-the-internet.md) with the same functionality, you must create a project for the ActiveX control.

> [!NOTE]
> You cannot add a reflected message (OCM_*Message*) for an ActiveX control using the Class Wizard, as described below. You must add these messages manually.

### To define a message handler for a reflected message from the Class Wizard

1. Add a control, such as a list, a rebar control, a toolbar, or a tree control, to your MFC project.

1. In Class View, click the name of your control class.

1. In the [Class Wizard](mfc-class-wizard.md), the control class name appears in the **Class Name** list.

1. Click the **Messages** tab to display the Windows messages available to add to the control.

1. Select the reflected message for which you want to define a handler. Reflected messages are marked with an equal sign (=).

1. Click the cell in the right column in the Class Wizard to display the suggested name of the handler as \<add>*HandlerName*. (For example, the **=WM_CTLCOLOR** message handler suggests \<add>**CtlColor**).

1. Click the suggested name to accept. The handler is added to your project.

1. To edit or delete a message handler, repeat steps 4 through 7. Click the cell containing the handler name to edit or delete and click the appropriate task.

## See also

[Mapping Messages to Functions](../../mfc/reference/mapping-messages-to-functions.md)<br/>
[Adding Functionality with Code Wizards](../../ide/adding-functionality-with-code-wizards-cpp.md)<br/>
[Adding a Class](../../ide/adding-a-class-visual-cpp.md)<br/>
[Adding a Member Function](../../ide/adding-a-member-function-visual-cpp.md)<br/>
[Adding a Member Variable](../../ide/adding-a-member-variable-visual-cpp.md)<br/>
[Overriding a Virtual Function](../../ide/overriding-a-virtual-function-visual-cpp.md)<br/>
[MFC Message Handler](../../mfc/reference/adding-an-mfc-message-handler.md)<br/>
[Navigating the Class Structure](../../ide/navigate-code-cpp.md)
