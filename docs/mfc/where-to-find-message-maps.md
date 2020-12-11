---
description: "Learn more about: Where to Find Message Maps"
title: "Where to Find Message Maps"
ms.date: "11/04/2016"
helpviewer_keywords: ["macros, message map", "locating message maps", "message classes [MFC], finding", "message-map macros"]
ms.assetid: bf59fbc8-b222-42d3-b5d3-0a79aa3cb923
---
# Where to Find Message Maps

When you create a new skeleton application with the Application Wizard, the Application Wizard writes a message map for each command-target class it creates for you. This includes your derived application, document, view, and frame-window classes. Some of these message maps already have the entries supplied by the Application Wizard for certain messages and predefined commands, and some are just placeholders for handlers that you will add.

A class's message map is located in the .CPP file for the class. Working with the basic message maps that the Application Wizard creates, you use the [Class Wizard](reference/mfc-class-wizard.md) to add entries for the messages and commands that each class will handle. A typical message map might look like the following after you add some entries:

[!code-cpp[NVC_MFCMessageHandling#1](../mfc/codesnippet/cpp/where-to-find-message-maps_1.cpp)]

The message map consists of a collection of macros. Two macros, [BEGIN_MESSAGE_MAP](reference/message-map-macros-mfc.md#begin_message_map) and [END_MESSAGE_MAP](reference/message-map-macros-mfc.md#end_message_map), bracket the message map. Other macros, such as `ON_COMMAND`, fill in the message map's contents.

> [!NOTE]
> The message-map macros are not followed by semicolons.

When you use the Add Class wizard to create a new class, it provides a message map for the class. Alternatively, you can create a message map manually using the source code editor.

## See also

[How the Framework Searches Message Maps](../mfc/how-the-framework-searches-message-maps.md)
