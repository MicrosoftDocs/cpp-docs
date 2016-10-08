---
title: "Where to Find Message Maps"
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
ms.assetid: bf59fbc8-b222-42d3-b5d3-0a79aa3cb923
caps.latest.revision: 8
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
# Where to Find Message Maps
When you create a new skeleton application with the Application Wizard, the Application Wizard writes a message map for each command-target class it creates for you. This includes your derived application, document, view, and frame-window classes. Some of these message maps already have the entries supplied by the Application Wizard for certain messages and predefined commands, and some are just placeholders for handlers that you will add.  
  
 A class's message map is located in the .CPP file for the class. Working with the basic message maps that the Application Wizard creates, you use the Properties window to add entries for the messages and commands that each class will handle. A typical message map might look like the following after you add some entries:  
  
 [!CODE [NVC_MFCMessageHandling#1](../CodeSnippet/VS_Snippets_Cpp/NVC_MFCMessageHandling#1)]  
  
 The message map consists of a collection of macros. Two macros, [BEGIN_MESSAGE_MAP](../Topic/BEGIN_MESSAGE_MAP.md) and [END_MESSAGE_MAP](../Topic/END_MESSAGE_MAP.md), bracket the message map. Other macros, such as `ON_COMMAND`, fill in the message map's contents.  
  
> [!NOTE]
>  The message-map macros are not followed by semicolons.  
  
 When you use the Add Class wizard to create a new class, it provides a message map for the class. Alternatively, you can create a message map manually using the source code editor.  
  
## See Also  
 [How the Framework Searches Message Maps](../VS_visualcpp/How-the-Framework-Searches-Message-Maps.md)