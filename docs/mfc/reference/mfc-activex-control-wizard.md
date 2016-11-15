---
title: "MFC ActiveX Control Wizard | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vc.appwiz.mfc.ctl.overview"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ActiveX controls [C++], MFC"
  - "MFC ActiveX controls [C++], wizards"
  - "OLE controls [C++], creating"
  - "MFC ActiveX Control Wizard"
  - "OLE controls [C++]"
ms.assetid: f19d698c-bdc3-4c74-af97-3d6ccb441b75
caps.latest.revision: 11
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
# MFC ActiveX Control Wizard
An ActiveX control is a specific type of [automation server](../../mfc/automation-servers.md); it is a reusable component. The application hosting the ActiveX control is the [automation client](../../mfc/automation-clients.md) of that control. If your goal is to create such a reusable component, then use this wizard to create your control. See [MFC ActiveX Controls](../../mfc/mfc-activex-controls.md) for more information.  
  
 Alternately, you can create an automation server MFC application using the [MFC Application Wizard](../../mfc/reference/mfc-application-wizard.md).  
  
 An ActiveX control created with this wizard can have a user interface, or it can be invisible. You can indicate this option in the [Control Settings](../../mfc/reference/control-settings-mfc-activex-control-wizard.md) page in the wizard. A timer control is an example of an ActiveX control that you would want to be invisible.  
  
 ActiveX controls can have a complex user interface. Some controls might be like encapsulated forms: a single control containing many fields, each a Windows control in its own right. For example, an auto parts object implemented as an MFC ActiveX control might present a form-like user interface through which users could read and edit the part number, part name, and other information. See [MFC ActiveX Controls](../../mfc/mfc-activex-controls.md) for more information.  
  
 If you need to create a container for your ActiveX objects, see [Create an ActiveX Control Container](../../mfc/reference/creating-an-mfc-activex-control-container.md).  
  
 The MFC starter program includes C++ source (.cpp) files, resource (.rc) files, and a project (.vcxproj) file. The code generated in these starter files is based on MFC.  
  
 The following sample list shows tasks and types of enhancements for your ActiveX control:  
  
-   [Optimizing an ActiveX Control](../../mfc/mfc-activex-controls-optimization.md)  
  
-   [Adding Stock Events to an ActiveX Control](../../mfc/mfc-activex-controls-adding-stock-events-to-an-activex-control.md)  
  
-   [Adding Custom Events](../../mfc/mfc-activex-controls-adding-custom-events.md)  
  
-   [Adding Stock Methods](../../mfc/mfc-activex-controls-adding-stock-methods.md)  
  
-   [Adding Custom Methods](../../mfc/mfc-activex-controls-adding-custom-methods.md)  
  
-   [Adding Stock Properties](../../mfc/mfc-activex-controls-adding-stock-properties.md)  
  
-   [Adding Custom Properties](../../mfc/mfc-activex-controls-adding-custom-properties.md)  
  
-   [Programming ActiveX Controls in an ActiveX Control Container](../../mfc/programming-activex-controls-in-a-activex-control-container.md)  
  
## Overview  
 This wizard page describes the current application settings for the MFC ActiveX control project you are creating. By default, the wizard creates a project as follows:  
  
-   The default project generates no run-time license or help files. You can change these default settings on the [Application Settings](../../mfc/reference/application-settings-mfc-activex-control-wizard.md) page. Only the selections you make on this page of the ActiveX Control Wizard are reflected on the **Overview** page.  
  
-   The project includes a control class and a property page class, based on the name of the project. You can edit the names of your project and file names on the [Control Names](../../mfc/reference/control-names-mfc-activex-control-wizard.md) page.  
  
-   The control is based on no existing Windows control, activates when it becomes visible, has a user interface, and includes an **About** dialog box. You can change these default settings on the [Control Settings](../../mfc/reference/control-settings-mfc-activex-control-wizard.md) page.  
  
## See Also  
 [Creating and Managing Visual C++ Projects](../../ide/creating-and-managing-visual-cpp-projects.md)   
 [Visual C++ Project Types](../../ide/visual-cpp-project-types.md)   
 [Concepts](../../atl/active-template-library-atl-concepts.md)

