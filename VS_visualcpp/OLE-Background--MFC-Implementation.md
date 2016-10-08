---
title: "OLE Background: MFC Implementation"
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
ms.assetid: 2b67016a-d78e-4d60-925f-c28ec8fb6180
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
# OLE Background: MFC Implementation
Because of the size and complexity of the raw OLE API, calling it directly to write OLE applications can be very time consuming. The goal of the Microsoft Foundation Class Library implementation of OLE is to reduce the amount of work you have to do to write full-featured, OLE-capable applications.  
  
 This article explains the parts of the OLE API that have not been implemented inside MFC. The discussion also explains how what is implemented maps to the OLE section of the Windows SDK.  
  
##  <a name="_core_portions_of_ole_not_implemented_by_the_class_library"></a> Portions of OLE Not Implemented by the Class Library  
 A few interfaces and features of OLE are not directly provided by MFC. If you want to use these features, you can call the OLE API directly.  
  
 IMoniker Interface  
 The `IMoniker` interface is implemented by the class library (for example, the `COleServerItem` class) but has not previously been exposed to the programmer. For more information about this interface, see OLE Moniker Implementations in the OLE section of the Windows SDK. However, see also class [CMonikerFile](../VS_visualcpp/CMonikerFile-Class.md) and [CAsyncMonikerFile](../VS_visualcpp/CAsyncMonikerFile-Class.md).  
  
 IUnknown and IMarshal Interfaces  
 The **IUnknown** interface is implemented by the class library but is not exposed to the programmer. The **IMarshal** interface is not implemented by the class library but is used internally. Automation servers built using the class library already have marshaling capabilities built in.  
  
 Docfiles (Compound Files)  
 Compound files are partially supported by the class library. None of the functions that directly manipulate compound files beyond creation are supported. MFC uses class **COleFileStream** to support manipulation of streams with standard file functions. For more information, see the article [Containers: Compound Files](../VS_visualcpp/Containers--Compound-Files.md).  
  
 In-Process Servers and Object Handlers  
 In-process servers and object handlers allow implementation of visual editing data or full Component Object Model (COM) objects in a dynamic-link library (DLL). To do this, you can implement your DLL by calling the OLE API directly. However, if you are writing an Automation server and your server has no user interface, you can use AppWizard to make your server an in-process server and put it completely into a DLL. For more information about these topics, see [Automation Servers](../VS_visualcpp/Automation-Servers.md).  
  
> [!TIP]
>  The easiest way to implement an Automation server is to place it in a DLL. MFC supports this approach.  
  
 For more information on how the Microsoft Foundation OLE classes implement OLE interfaces, see MFC Technical Notes [38](../VS_visualcpp/TN038--MFC-OLE-IUnknown-Implementation.md), [39](../VS_visualcpp/TN039--MFC-OLE-Automation-Implementation.md), and [40](../VS_visualcpp/TN040--MFC-OLE-In-Place-Resizing-and-Zooming.md).  
  
## See Also  
 [OLE Background](../VS_visualcpp/OLE-Background.md)   
 [OLE Background: Implementation Strategies](../VS_visualcpp/OLE-Background--Implementation-Strategies.md)