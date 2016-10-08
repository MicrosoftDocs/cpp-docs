---
title: "MFC ActiveX Control Wizard"
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
ms.assetid: f19d698c-bdc3-4c74-af97-3d6ccb441b75
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
# MFC ActiveX Control Wizard
An ActiveX control is a specific type of [automation server](../VS_visualcpp/Automation-Servers.md); it is a reusable component. The application hosting the ActiveX control is the [automation client](../VS_visualcpp/Automation-Clients.md) of that control. If your goal is to create such a reusable component, then use this wizard to create your control. See [MFC ActiveX Controls](../VS_visualcpp/MFC-ActiveX-Controls.md) for more information.  
  
 Alternately, you can create an automation server MFC application using the [MFC Application Wizard](../VS_visualcpp/MFC-Application-Wizard.md).  
  
 An ActiveX control created with this wizard can have a user interface, or it can be invisible. You can indicate this option in the [Control Settings](../VS_visualcpp/Control-Settings--MFC-ActiveX-Control-Wizard.md) page in the wizard. A timer control is an example of an ActiveX control that you would want to be invisible.  
  
 ActiveX controls can have a complex user interface. Some controls might be like encapsulated forms: a single control containing many fields, each a Windows control in its own right. For example, an auto parts object implemented as an MFC ActiveX control might present a form-like user interface through which users could read and edit the part number, part name, and other information. See [MFC ActiveX Controls](../VS_visualcpp/MFC-ActiveX-Controls.md) for more information.  
  
 If you need to create a container for your ActiveX objects, see [Create an ActiveX Control Container](../VS_visualcpp/Creating-an-MFC-ActiveX-Control-Container.md).  
  
 The MFC starter program includes C++ source (.cpp) files, resource (.rc) files, and a project (.vcxproj) file. The code generated in these starter files is based on MFC.  
  
 The following sample list shows tasks and types of enhancements for your ActiveX control:  
  
-   [Optimizing an ActiveX Control](../VS_visualcpp/MFC-ActiveX-Controls--Optimization.md)  
  
-   [Adding Stock Events to an ActiveX Control](../VS_visualcpp/MFC-ActiveX-Controls--Adding-Stock-Events-to-an-ActiveX-Control.md)  
  
-   [Adding Custom Events](../VS_visualcpp/MFC-ActiveX-Controls--Adding-Custom-Events.md)  
  
-   [Adding Stock Methods](../VS_visualcpp/MFC-ActiveX-Controls--Adding-Stock-Methods.md)  
  
-   [Adding Custom Methods](../VS_visualcpp/MFC-ActiveX-Controls--Adding-Custom-Methods.md)  
  
-   [Adding Stock Properties](../VS_visualcpp/MFC-ActiveX-Controls--Adding-Stock-Properties.md)  
  
-   [Adding Custom Properties](../VS_visualcpp/MFC-ActiveX-Controls--Adding-Custom-Properties.md)  
  
-   [Programming ActiveX Controls in an ActiveX Control Container](../VS_visualcpp/ActiveX-Control-Containers--Programming-ActiveX-Controls-in-an-ActiveX-Control-Container.md)  
  
## Overview  
 This wizard page describes the current application settings for the MFC ActiveX control project you are creating. By default, the wizard creates a project as follows:  
  
-   The default project generates no run-time license or help files. You can change these default settings on the [Application Settings](../VS_visualcpp/Application-Settings--MFC-ActiveX-Control-Wizard.md) page. Only the selections you make on this page of the ActiveX Control Wizard are reflected on the **Overview** page.  
  
-   The project includes a control class and a property page class, based on the name of the project. You can edit the names of your project and file names on the [Control Names](../VS_visualcpp/Control-Names--MFC-ActiveX-Control-Wizard.md) page.  
  
-   The control is based on no existing Windows control, activates when it becomes visible, has a user interface, and includes an **About** dialog box. You can change these default settings on the [Control Settings](../VS_visualcpp/Control-Settings--MFC-ActiveX-Control-Wizard.md) page.  
  
## See Also  
 [Creating and Managing Visual C++ Projects](../VS_visualcpp/Creating-and-Managing-Visual-C---Projects.md)   
 [Visual C++ Project Types](../VS_visualcpp/Visual-C---Project-Types.md)   
 [Concepts](../VS_visualcpp/Active-Template-Library--ATL--Concepts.md)