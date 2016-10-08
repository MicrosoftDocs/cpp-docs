---
title: "OLE Background: Implementation Strategies"
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
ms.assetid: 0875ddae-99df-488c-82c6-164074a81058
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
# OLE Background: Implementation Strategies
Depending on your application, there are four possible implementation strategies for adding OLE support:  
  
-   You are writing a new application.  
  
     This situation usually requires the least work. You run the MFC Application Wizard and select either Advanced Features or Compound Document Support to create a skeleton application. For information on these options and what they do, see the article [Creating an MFC EXE Program](../VS_visualcpp/MFC-Application-Wizard.md).  
  
-   You have a program written with the Microsoft Foundation Class Library version 2.0 or higher that does not support OLE.  
  
     Create a new application with the MFC Application Wizard as previously mentioned, and then copy and paste the code from the new application into your existing application. This will work for servers, containers, or automated applications. See the MFC [SCRIBBLE](../VS_visualcpp/Visual-C---Samples.md) sample for an example of this strategy.  
  
-   You have a Microsoft Foundation Class Library program that implements OLE version 1.0 support.  
  
     See [MFC Technical Note 41](../VS_visualcpp/TN041--MFC-OLE1-Migration-to-MFC-OLE-2.md) for this conversion strategy.  
  
-   You have an application that was not written using the Microsoft Foundation Classes and that may or may not have implemented OLE support.  
  
     This situation requires the most work. One approach is to create a new application, as in the first strategy, and then copy and paste your existing code into it. If your existing code is written in C, then you may need to modify it so it can compile as C++ code. If your C code calls the Windows API, then you do not have to change it to use the Microsoft Foundation classes. This approach likely will require some restructuring of your program to support the document/view architecture used by versions 2.0 and higher of the Microsoft Foundation Classes. For more information on this architecture, see [Technical Note 25](../VS_visualcpp/TN025--Document--View--and-Frame-Creation.md).  
  
 Once you have decided on a strategy, you should either read the [Containers](../VS_visualcpp/Containers.md) or [Servers](../VS_visualcpp/Servers.md) articles (depending on the type of application you are writing) or examine the sample programs, or both. The MFC OLE samples [OCLIENT](../VS_visualcpp/Visual-C---Samples.md) and [HIERSVR](../VS_visualcpp/Visual-C---Samples.md) show how to implement the various aspects of containers and servers, respectively. At various points throughout these articles, you will be referred to certain functions in these samples as examples of the techniques being discussed.  
  
## See Also  
 [OLE Background](../VS_visualcpp/OLE-Background.md)   
 [Containers: Implementing a Container](../VS_visualcpp/Containers--Implementing-a-Container.md)   
 [Servers: Implementing a Server](../VS_visualcpp/Servers--Implementing-a-Server.md)   
 [MFC Application Wizard](../VS_visualcpp/MFC-Application-Wizard.md)