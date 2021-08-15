---
description: "Learn more about: How to: Display Command Information in the Status Bar"
title: "How to: Display Command Information in the Status Bar"
ms.date: "11/04/2016"
helpviewer_keywords: ["prompts [MFC]", "displaying command status [MFC]", "status bars [MFC], message area", "status bars [MFC], displaying command information"]
ms.assetid: de895cbe-61ee-46bf-9787-76b247527d6d
---
# How to: Display Command Information in the Status Bar

When you run the Application Wizard to create the skeleton of your application, you can support a toolbar and a status bar. Just one option in the Application Wizard supports both. When a status bar is present, the application automatically provides helpful feedback as the user moves the pointer over items on the menus. The application automatically displays a prompt string in the status bar when the menu item is highlighted. For example, when the user moves the pointer over the **Cut** command on the **Edit** menu, the status bar might display "Cuts the selection and puts it on the Clipboard" in the message area of the status bar. The prompt helps the user understand the purpose of the menu item. This also works when the user clicks a toolbar button.

You can add to this status-bar help by defining prompt strings for menu items that you add to the program. To do this, provide the prompt strings when you edit the properties of the menu item in the menu editor. The strings you define are stored in the application resource file; they have the same IDs as the commands they explain.

By default, the Application Wizard adds **AFX_IDS_IDLEMESSAGE**, the ID for a standard "Ready" message, which is displayed when the program is waiting for new messages. If you specify the Context-Sensitive Help option in the Application Wizard, the message is changed to "For Help, press F1."

## See also

[Message Handling and Mapping](message-handling-and-mapping.md)
