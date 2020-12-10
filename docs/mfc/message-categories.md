---
description: "Learn more about: Message Categories"
title: "Message Categories"
ms.date: "11/04/2016"
helpviewer_keywords: ["messages [MFC], categories", "control-notification messages [MFC]", "Windows messages [MFC], categories", "controls [MFC], notifications", "command messages [MFC]", "messages [MFC], Windows", "message handling [MFC], message types"]
ms.assetid: 68e1db75-9da6-4a4d-b2c2-dc4d59f8d87b
---
# Message Categories

What kinds of messages do you write handlers for There are three main categories:

1. Windows messages

   This includes primarily those messages beginning with the **WM_** prefix, except for WM_COMMAND. Windows messages are handled by windows and views. These messages often have parameters that are used in determining how to handle the message.

1. Control notifications

   This includes WM_COMMAND notification messages from controls and other child windows to their parent windows. For example, an edit control sends its parent a WM_COMMAND message containing the EN_CHANGE control-notification code when the user has taken an action that may have altered text in the edit control. The window's handler for the message responds to the notification message in some appropriate way, such as retrieving the text in the control.

   The framework routes control-notification messages like other **WM_** messages. One exception, however, is the BN_CLICKED control-notification message sent by buttons when the user clicks them. This message is treated specially as a command message and routed like other commands.

1. Command messages

   This includes WM_COMMAND notification messages from user-interface objects: menus, toolbar buttons, and accelerator keys. The framework processes commands differently from other messages, and they can be handled by more kinds of objects, as explained in [Command Targets](command-targets.md).

## <a name="_core_windows_messages_and_control.2d.notification_messages"></a> Windows Messages and Control-Notification Messages

Messages in categories 1 and 2 — Windows messages and control notifications — are handled by windows: objects of classes derived from class `CWnd`. This includes `CFrameWnd`, `CMDIFrameWnd`, `CMDIChildWnd`, `CView`, `CDialog`, and your own classes derived from these base classes. Such objects encapsulate an `HWND`, a handle to a Windows window.

## <a name="_core_command_messages"></a> Command Messages

Messages in category 3 — commands — can be handled by a wider variety of objects: documents, document templates, and the application object itself in addition to windows and views. When a command directly affects some particular object, it makes sense to have that object handle the command. For example, the Open command on the File menu is logically associated with the application: the application opens a specified document upon receiving the command. So the handler for the Open command is a member function of the application class. For more about commands and how they are routed to objects, see [How the Framework Calls a Handler](how-the-framework-calls-a-handler.md).

## See also

[Messages and Commands in the Framework](messages-and-commands-in-the-framework.md)
