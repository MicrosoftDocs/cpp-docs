---
title: "Windows Forms-MFC Programming Differences | Microsoft Docs"
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
  - "MFC [C++], Windows Forms support"
  - "Windows Forms [C++], compared to MFC"
ms.assetid: f3bfcf45-cfd4-45a4-8cde-5f4dbb18ee51
caps.latest.revision: 14
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
# Windows Forms/MFC Programming Differences
The topics in [Using a Windows Form User Control in MFC](../dotnet/using-a-windows-form-user-control-in-mfc.md) describe the MFC support for Windows Forms. If you are not familiar with .NET Framework or MFC programming, this topic provides background information about programming differences between the two.  
  
 Windows Forms is for creating Microsoft Windows applications on the .NET Framework. This framework provides a modern, object-oriented, extensible set of classes that enable you to develop rich Windows-based applications. With Windows Forms, you are able to create a rich client application that can access a wide variety of data sources and provide data-display and data-editing facilities using Windows Forms controls.  
  
 However, if you are accustomed to MFC, you might be used to creating certain types of applications that are not yet explicitly supported in Windows Forms. Windows Forms applications are equivalent to MFC dialog applications. However, they do not provide the infrastructure to directly support other MFC application types like OLE document server/container, ActiveX documents, the Document/View support for single-document interface (SDI), multiple-document interface (MDI), and multiple top-level interface (MTI). You can write your own logic to create these applications.  
  
 For more information about Windows Forms applications, see [Introduction to Windows Forms](http://msdn.microsoft.com/Library/3a2b6284-c8d6-4e1c-8c69-0bed38f38cd4).  
  
 For a sample application that shows Windows Forms used with MFC, see [MFC and Windows Forms Integration](http://www.microsoft.com/downloads/details.aspx?FamilyID=987021bc-e575-4fe3-baa9-15aa50b0f599&displaylang=en).  
  
 The following MFC view or document and command routing features have no equivalents in Windows Forms:  
  
-   Shell integration  
  
     MFC handles the dynamic data exchange (DDE) commands and command-line arguments that the shell uses when you right-click a document and select such verbs as Open, Edit, or Print. Windows Forms has no shell integration and does not respond to shell verbs.  
  
-   Document templates  
  
     In MFC, document templates associate a view, which is contained in a frame window (in MDI, SDI, or MTI mode), with the document you opened. Windows Forms has no equivalent to document templates.  
  
-   Documents  
  
     MFC registers document file types and processes the document type when opening a document from the shell. Windows Forms has no document support.  
  
-   Document states  
  
     MFC maintains dirty states for the document. Therefore, when you close the application, close the last view that contains the application, or exit from Windows, MFC prompts you to save the document. Windows Forms has no equivalent support.  
  
-   Commands  
  
     MFC has the concept of commands. The menu bar, toolbar, and context menu can all invoke the same command, for example, Cut and Copy. In Windows Forms, commands are tightly bound events from a particular UI element (such as a menu item); therefore, you have to hook up all the command events explicitly. You can also handle multiple events with a single handler in Windows Forms. For more information, see [Connecting Multiple Events to a Single Event Handler in Windows Forms](http://msdn.microsoft.com/Library/5a20749a-41b5-4acc-8eb1-9e5040b0a2c4).  
  
-   Command routing  
  
     MFC command routing enables the active view or document to process commands. Because the same command often has different meanings for different views (for example, Copy behaves differently in text edit view than in a graphics editor), the commands need to be handled by the active view. Because Windows Forms menus and toolbars have no inherent understanding of the active view, you cannot have a different handler for each view type for your **MenuItem.Click** events without writing additional internal code.  
  
-   Command update mechanism  
  
     MFC has a command update mechanism. Therefore, the active view or document is responsible for the state of the UI elements (for example, enabling or disabling a menu item or tool button, and checked states). Windows Forms has no equivalent of a command update mechanism.  
  
## See Also  
 [Using a Windows Form User Control in MFC](../dotnet/using-a-windows-form-user-control-in-mfc.md)   
 [Windows Forms Walkthroughs](http://msdn.microsoft.com/en-us/fd44d13d-4733-416f-aefc-32592e59e5d9)