---
title: "MFC COM | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "MFC COM (MFC)"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "MFC [C++], COM support"
  - "MFC ActiveX controls [C++], COM support in MFC"
  - "MFC COM [C++]"
  - "ActiveX controls [C++], COM object model"
  - "Active technology [C++]"
  - "COM [C++], MFC support"
ms.assetid: 7646bdcb-3a06-4ed5-9386-9b00f3979dcb
caps.latest.revision: 13
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
# MFC COM
A subset of MFC is designed to support COM, while most of the Active Template Library (ATL) is designed for COM programming. This section of topics describes MFC's support for COM.  
  
 Active technologies (such as ActiveX controls, Active document containment, OLE, and so on) use the Component Object Model (COM) to enable software components to interact with one another in a networked environment, regardless of the language with which they were created. Active technologies can be used to create applications that run on the desktop or the Internet. For more information see [Introduction to COM](../atl/introduction-to-com.md) or [The Component Object Model](http://msdn.microsoft.com/library/windows/desktop/ms694363).  
  
 Active technologies include both client and server technologies, including the following:  
  
-   [Active document containment](../mfc/active-document-containment.md), supported in MFC versions 4.2 and later, allows users to view [active documents](../mfc/active-documents.md) (such as Microsoft Excel or Word files) and activate the entire interface of the document's native application in the entire client area of an [active document container](../mfc/active-document-containers.md) such as the Microsoft Office Binder or Microsoft Internet Explorer. The containers act as clients, while the documents are provided by [active document servers](../mfc/active-document-servers.md). For more information on using active documents in Internet applications, see: [Active Documents on the Internet](../mfc/active-documents-on-the-internet.md).  
  
-   ActiveX controls are interactive objects that can be used in containers such as a Web site. For more information on ActiveX controls, see:  
  
    -   [MFC ActiveX Controls](../mfc/mfc-activex-controls.md)  
  
    -   [ActiveX Controls on the Internet](../mfc/activex-controls-on-the-internet.md)  
  
    -   [Overview: Internet](../mfc/mfc-internet-programming-basics.md)  
  
    -   [Upgrade an Existing ActiveX Control to be Used on the Internet](../mfc/upgrading-an-existing-activex-control.md)  
  
    -   [Debugging an ActiveX Control](http://msdn.microsoft.com/library/bbc02cf7-a7e6-44fe-99af-87a43e1d7251)  
  
-   Active scripting controls the integrated behavior of one or more ActiveX controls from a browser or server. For more information on active scripting, see [Active Technology on the Internet](../mfc/active-technology-on-the-internet.md).  
  
-   [Automation](../mfc/automation.md) (formerly known as OLE Automation) makes it possible for one application to manipulate objects implemented in another application, or to "expose" objects so they can be manipulated.  
  
     The automated object might be local or [remote](../mfc/remote-automation.md) (on another machine accessible across a network). Automation is available for both OLE and COM objects.  
  
-   This section also provides information on how to write COM components using MFC, for example, in [Connection Points](../mfc/connection-points.md).  
  
 For a discussion of what is still called OLE versus what is now called active technology, see the topics on [OLE](../mfc/ole-in-mfc.md).  
  
 Also, see Knowledge Base article Q248019 : HOWTO: Prevent Server Busy Dialog Box From Appearing During a Lengthy COM Operation.  
  
## In This Section  
 [Active Document Containment](../mfc/active-document-containment.md)  
  
 [Automation](../mfc/automation.md)  
  
 [Remote Automation](../mfc/remote-automation.md)  
  
 [Connection Points](../mfc/connection-points.md)  
  
 [MFC ActiveX Controls](../mfc/mfc-activex-controls.md)  
  
## See Also  
 [Concepts](../mfc/mfc-concepts.md)

