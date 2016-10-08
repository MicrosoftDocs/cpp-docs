---
title: "OLE in MFC"
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
ms.assetid: 5193479d-1239-4697-aea4-e82f92c707ab
caps.latest.revision: 9
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
# OLE in MFC
These articles explain the fundamentals of OLE programming using MFC. MFC provides the easiest way to write programs that use OLE:  
  
-   To use OLE visual editing (in-place activation).  
  
-   To work as OLE containers or servers.  
  
-   To implement drag-and-drop functionality.  
  
-   To work with date and time data.  
  
-   To manage the state data of MFC modules, including exported DLL function entry points, OLE/COM interface entry points, and window procedure entry points.  
  
 You can also use [Automation](../VS_visualcpp/Automation.md) or [Remote Automation](../VS_visualcpp/Remote-Automation.md) to operate another program from your program.  
  
> [!NOTE]
>  The term OLE denotes the technologies associated with linking and embedding, including OLE containers, OLE servers, OLE items, in-place activation (or visual editing), trackers, drag and drop, and menu merging. The term Active applies to the Component Object Model (COM) and COM-based objects such as ActiveX controls. OLE Automation is now called Automation.  
  
## In This Section  
 [OLE Background](../VS_visualcpp/OLE-Background.md)  
 Discusses OLE and provides conceptual information about how it works.  
  
 [Activation](../VS_visualcpp/Activation--C---.md)  
 Describes the role of activation in editing OLE items.  
  
 [Containers](../VS_visualcpp/Containers.md)  
 Provides links to using containers in OLE.  
  
 [Data Objects and Data Sources](../VS_visualcpp/Data-Objects-and-Data-Sources--OLE-.md)  
 Provides links to topics discussing the use of the `COleDataObject` and `COleDataSource` classes.  
  
 [Drag and Drop](../VS_visualcpp/Drag-and-Drop--OLE-.md)  
 Discusses using copying and pasting with OLE.  
  
 [OLE Menus and Resources](../VS_visualcpp/Menus-and-Resources--OLE-.md)  
 Explains the use of menus and resources in MFC OLE document applications.  
  
 [Registration](../VS_visualcpp/Registration.md)  
 Discusses server installation and initialization.  
  
 [Servers](../VS_visualcpp/Servers.md)  
 Describes how to create OLE items (or components) for use by container applications.  
  
 [Trackers](../VS_visualcpp/Trackers.md)  
 Provides information about the `CRectTracker` class, which provides a graphical interface to enable users to interact with OLE client items.  
  
## Related Sections  
 [Connection Points](../VS_visualcpp/Connection-Points.md)  
 Explains how to implement connection points (formerly known as OLE connection points) using the MFC classes `CCmdTarget` and `CConnectionPoint`.  
  
 [Container/Server COM Components](../VS_visualcpp/Containers--Advanced-Features.md)  
 Describes the steps necessary to incorporate optional advanced features into existing container applications.  
  
 [The Component Object Model](http://msdn.microsoft.com/library/windows/desktop/ms694363)  
 Describes using OLE without MFC.  
  
## See Also  
 [Concepts](../VS_visualcpp/MFC-Concepts.md)