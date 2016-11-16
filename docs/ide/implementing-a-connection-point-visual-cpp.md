---
title: "Implementing a Connection Point (Visual C++) | Microsoft Docs"
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
  - "Implement Connection Point Wizard [C++]"
  - "connection points [C++], implementing"
ms.assetid: 5b37e4f9-73c9-4bef-b26d-365bc0662260
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
# Implementing a Connection Point (Visual C++)
To implement a connection point using the Implement Connection Point Wizard, you must have created a project as an ATL COM application or as an MFC application that contains ATL support. You can use the [ATL Project Wizard](../atl/reference/atl-project-wizard.md) to create an ATL application, or [add an ATL object to your MFC application](../mfc/reference/adding-atl-support-to-your-mfc-project.md) to implement ATL support for an MFC application.  
  
> [!NOTE]
>  For information about implementing connection points for an MFC project, see [Connection Points](../mfc/connection-points.md).  
  
 Once you create the project, to implement a connection point, you must first add an ATL object. See [Adding Objects and Controls to an ATL Project](../atl/reference/adding-objects-and-controls-to-an-atl-project.md) for a list of wizards that add objects to your ATL project.  
  
> [!NOTE]
>  The wizard does not support ATL dialogs, XML Web services created with ATL Server, performance objects, or performance counters.  
  
 A connectable object (that is, a source) can expose a connection point for each of its outgoing interfaces. Each outgoing interface can be implemented by a client on an object (that is, a sink). For more information, see [ATL Connection Points](../atl/atl-connection-points.md).  
  
### To implement a connection point  
  
1.  In Class View, right-click the class name for your ATL object.  
  
2.  Click **Add** from the shortcut menu, and then click **Add Connection Point** to display the [Implement Connection Point Wizard](../ide/implement-connection-point-wizard.md).  
  
3.  Select the connection point interfaces to implement from the appropriate type libraries and click **Finish**.  
  
4.  In Class View, examine the proxy classes created for each connection point. The classes appear as CProxy*InterfaceName*\<T> and are derived from [IConnectionPointImpl](../atl/reference/iconnectionpointimpl-class.md).  
  
5.  Double-click the connection point class to display the definition of the connection point's class.  
  
    -   If you implement a connection point for your own project's interface, the following definition appears  
  
        ```  
        template< class T >  
        class CProxyInterfaceName :  
           public IConnectionPointImpl< T, &IID_InterfaceName >  
        {  
        public:  
        };  
        ```  
  
         If you implement a local interface, methods and properties appear in the class body.  
  
    -   If you implement a connection point for another interface, the definition includes the interface's methods, each preceded by `Fire_`.  
  
## See Also  
 [Adding Functionality with Code Wizards](../ide/adding-functionality-with-code-wizards-cpp.md)   
 [Adding Connection Points to an Object](../atl/adding-connection-points-to-an-object.md)