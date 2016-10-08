---
title: "ActiveX Control Containers: Inserting a Control into a Control Container Application"
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
ms.assetid: bbb617ff-872f-43d8-b4d6-c49adb16b148
caps.latest.revision: 7
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
# ActiveX Control Containers: Inserting a Control into a Control Container Application
Before you can access an ActiveX control from an ActiveX control container application, you must add the ActiveX control to the container application using the [Insert ActiveX Control](../VS_visualcpp/Insert-ActiveX-Control-Dialog-Box.md) dialog box.  
  
 To add an ActiveX control to the ActiveX control container project, see [Viewing and Adding ActiveX Controls to a Dialog Box](../VS_visualcpp/Viewing-and-Adding-ActiveX-Controls-to-a-Dialog-Box.md).  
  
 Once you add the control, you need to add a member variable (of the ActiveX control type) to the dialog box class. For more information on this procedure, see [Adding a Member Variable](../VS_visualcpp/Adding-a-Member-Variable---Visual-C---.md).  
  
 Once you have added the member variable a class, referred to as a wrapper class, is automatically generated and added to your project. This class is used as an interface between the control container and the embedded control.  
  
## See Also  
 [ActiveX Control Containers](../VS_visualcpp/ActiveX-Control-Containers.md)