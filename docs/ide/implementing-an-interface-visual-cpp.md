---
title: "Implementing an Interface (Visual C++) | Microsoft Docs"
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
  - "interfaces, implementing"
ms.assetid: 72f8731b-7e36-45db-8b10-7ef211a773cd
caps.latest.revision: 6
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
# Implementing an Interface (Visual C++)
To implement an interface, you must have created a project as an ATL COM application or as an MFC application that contains ATL support. You can use the [ATL Project Wizard](../atl/reference/atl-project-wizard.md) to create an ATL application, or [add an ATL object to your MFC application](../mfc/reference/adding-atl-support-to-your-mfc-project.md) to implement ATL support for an MFC application.  
  
 Once you create the project, to implement an interface, you must first add an ATL object. See [Adding Objects and Controls to an ATL Project](../atl/reference/adding-objects-and-controls-to-an-atl-project.md) for a list of wizards that add objects to your ATL project.  
  
> [!NOTE]
>  The wizard does not support ATL dialogs, XML Web services using ATL, performance objects, or performance counters.  
  
 If you [add an ATL control](../atl/reference/adding-an-atl-control.md), you can specify whether to implement default interfaces, listed on the [Interfaces](../atl/reference/interfaces-atl-control-wizard.md) page of that wizard and defined in atlcom.h.  
  
 Once you have added the object or control, you can implement other interfaces, located in any available type library, using the Implement Interface Wizard.  
  
 If you are adding a new interface, you must add it manually to the project's .idl file. See [Adding a New Interface in an ATL Project](../atl/reference/adding-a-new-interface-in-an-atl-project.md) for more information.  
  
### To implement an interface  
  
1.  In Class View, right-click the class name for your ATL object.  
  
2.  Click **Add** from the shortcut menu, and then click **Implement Interface** to display the [Implement Interface Wizard](../ide/implement-interface-wizard.md).  
  
3.  Select the interfaces to implement from the appropriate type libraries and click **Finish**.  
  
4.  In Class View, expand the object's Bases and Interfaces node to see the interface you have implemented, and then expand the interface's node to see its available properties, methods, and events.  
  
    > [!NOTE]
    >  You can also use the [Object Browser](http://msdn.microsoft.com/en-us/f89acfc5-1152-413d-9f56-3dc16e3f0470) to examine the members of the interface.  
  
## See Also  
 [Creating a COM Interface](../ide/creating-a-com-interface-visual-cpp.md)   
 [Editing a COM Interface](../ide/editing-a-com-interface.md)