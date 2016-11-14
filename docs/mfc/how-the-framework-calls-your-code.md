---
title: "How the Framework Calls Your Code | Microsoft Docs"
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
  - "control flow [C++], MFC framework and your code"
  - "events [C++], command routing in MFC"
  - "command routing, framework"
  - "command handling, calling handlers and code in MFC"
  - "events [C++], event-driven programming"
  - "MFC [C++], calling code from"
  - "MFC [C++], calling code"
  - "application-specific events [C++]"
  - "command routing, MFC"
ms.assetid: 39e68189-a580-40d0-9e35-bf5cd24a8ecf
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
# How the Framework Calls Your Code
It is crucial to understand the relationship between your source code and the code in the MFC framework. When your application runs, most of the flow of control resides in the framework's code. The framework manages the message loop that gets messages from Windows as the user chooses commands and edits data in a view. Events that the framework can handle by itself do not rely on your code at all. For example, the framework knows how to close windows and how to exit the application in response to user commands. As it handles these tasks, the framework uses message handlers and C++ virtual functions to give you opportunities to respond to these events as well. Your code is not in control, however; the framework is.  
  
 The framework calls your code for application-specific events. For example, when the user chooses a menu command, the framework routes the command along a sequence of C++ objects: the current view and frame window, the document associated with the view, the document's document template, and the application object. If one of these objects can handle the command, it does so, calling the appropriate message-handler function. For any given command, the code called may be yours or it may be the framework's.  
  
 This arrangement is somewhat familiar to programmers experienced with traditional programming for Windows or event-driven programming.  
  
 In related topics, you will read what the framework does as it initializes and runs the application and then cleans up as the application terminates. You will also understand where the code you write fits in.  
  
 For more information, see [Class CWinApp: The Application Class](../mfc/cwinapp-the-application-class.md) and [Document Templates and the Document/View Creation Process](../mfc/document-templates-and-the-document-view-creation-process.md).  
  
## See Also  
 [Building on the Framework](../mfc/building-on-the-framework.md)

