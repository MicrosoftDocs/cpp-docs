---
title: "Creating an MFC ActiveX Control Container | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vc.appwiz.activex.container"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "MFC ActiveX controls [C++], containers"
  - "ActiveX control containers [C++], creating"
  - "containers [C++], creating"
  - "OLE controls [C++], containers"
ms.assetid: ec70e137-7c14-4940-bd0e-fd4edcc63ea5
caps.latest.revision: 8
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
# Creating an MFC ActiveX Control Container
An ActiveX control container is a parent program that supplies the environment for an ActiveX (formerly OLE) control to run. You can create an application capable of containing ActiveX controls with or without MFC, but it is much easier to do with MFC.  
  
 Creating an MFC container program using the [MFC Application Wizard](../../mfc/reference/mfc-application-wizard.md) allows you to access the many features of ActiveX controls and Automation that are implemented by the MFC and ActiveX classes. These features include visual editing, Automation, creating compound files, and support for controls. The MFC Application Wizard visual editing options that your parent program will support include creating a container, a mini-server, a full-server, and a program that is both a container and a server.  
  
-   **New MFC Application**. To create a new MFC program that includes Automation, visual editing, compound files, or control support, use the MFC Application Wizard and choose the appropriate Automation options.  
  
-   **Existing MFC Application**. If you are adding control containment to an existing MFC application, see [OLE Control Containers: Manually Enabling OLE Control Containment](../../mfc/activex-control-containers-manually-enabling-activex-control-containment.md).  
  
### To create an ActiveX container for any of the following types of applications  
  
1.  [Containers](../../mfc/containers.md)  
  
2.  [Visual editing](../../mfc/ole-mfc.md)  
  
3.  [MFC ActiveX controls](../../mfc/mfc-activex-controls.md)  
  
## See Also  
 [Visual C++ Project Types](../../ide/visual-cpp-project-types.md)

