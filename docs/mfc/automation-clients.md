---
title: "Automation Clients | Microsoft Docs"
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
  - "clients, Automation"
  - "Automation clients"
  - "type libraries, Automation clients"
  - "clients"
ms.assetid: 84e34a79-06f6-4752-a33b-ae0ede1d8ecf
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
# Automation Clients
Automation makes it possible for your application to manipulate objects implemented in another application, or to expose objects so they can be manipulated. An Automation client is an application that can manipulate exposed objects belonging to another application. The application that exposes the objects is called the Automation server. The client manipulates the server application's objects by accessing those objects' properties and functions.  
  
### Types of Automation Clients  
 There are two types of Automation clients:  
  
-   Clients that dynamically (at run time) acquire information about the properties and operations of the server.  
  
-   Clients that possess static information (provided at compile time) that specifies the properties and operations of the server.  
  
 Clients of the first kind acquire information about the server's methods and properties by querying the OLE system's `IDispatch` mechanism. Although it is adequate to use for dynamic clients, `IDispatch` is difficult to use for static clients, where the objects being driven must be known at compile time. For static bound clients, the Microsoft Foundation classes provide the [COleDispatchDriver](../mfc/reference/coledispatchdriver-class.md) class.  
  
 Static bound clients use a proxy class that is statically linked with the client application. This class provides a type-safe C++ encapsulation of the server application's properties and operations.  
  
 The class `COleDispatchDriver` provides the principal support for the client side of Automation. Using the `Add New Item` dialog box, you create a class derived from `COleDispatchDriver`.  
  
 You then specify the type-library file describing the properties and functions of the server application's object. The Add Item dialog box reads this file and creates the `COleDispatchDriver`-derived class, with member functions that your application can call to access the server application's objects in C++ in a type-safe manner. Additional functionality inherited from `COleDispatchDriver` simplifies the process of calling the proper Automation server.  
  
### Handling Events in Automation Clients  
 If you want to handle events in your automation client, you need to add a sink interface. MFC provides wizard support to add sink interfaces for ActiveX controls, but not support for other COM servers. For information on how to add a sink interface in an MFC client for source interfaces described by COM servers, see HOWTO: Create a Sink Interface in MFC-Based COM Client (KB 181845) at [http://support.microsoft.com/default.aspxscid=kb;en-us;181845](http://support.microsoft.com/default.aspxscid=kb;en-us;181845).  
  
## See Also  
 [Automation Clients: Using Type Libraries](../mfc/automation-clients-using-type-libraries.md)   
 [Automation](../mfc/automation.md)   
 [MFC Application Wizard](../mfc/reference/mfc-application-wizard.md)

