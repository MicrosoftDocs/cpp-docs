---
title: "ActiveX Control Containers: Inserting a Control into a Control Container Application | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-mfc"]
ms.topic: "conceptual"
dev_langs: ["C++"]
helpviewer_keywords: ["ActiveX control containers [MFC], inserting controls", "ActiveX controls [MFC], adding to projects"]
ms.assetid: bbb617ff-872f-43d8-b4d6-c49adb16b148
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# ActiveX Control Containers: Inserting a Control into a Control Container Application
Before you can access an ActiveX control from an ActiveX control container application, you must add the ActiveX control to the container application using the [Insert ActiveX Control](../windows/insert-activex-control-dialog-box.md) dialog box.  
  
 To add an ActiveX control to the ActiveX control container project, see [Viewing and Adding ActiveX Controls to a Dialog Box](../windows/viewing-and-adding-activex-controls-to-a-dialog-box.md).  
  
 Once you add the control, you need to add a member variable (of the ActiveX control type) to the dialog box class. For more information on this procedure, see [Adding a Member Variable](../ide/adding-a-member-variable-visual-cpp.md).  
  
 Once you have added the member variable a class, referred to as a wrapper class, is automatically generated and added to your project. This class is used as an interface between the control container and the embedded control.  
  
## See Also  
 [ActiveX Control Containers](../mfc/activex-control-containers.md)

