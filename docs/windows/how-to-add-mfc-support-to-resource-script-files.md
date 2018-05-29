---
title: "How to: Add MFC Support to Resource Script Files | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "conceptual"
f1_keywords: ["vc.resvw.add.MFC"]
dev_langs: ["C++"]
helpviewer_keywords: ["rc files, adding MFC support", ".rc files, adding MFC support", "MFC, adding support to resource scripts files", "resource script files, adding MFC support"]
ms.assetid: 599dfe9d-ad26-4e34-899c-49b56599e37f
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# How to: Add MFC Support to Resource Script Files
Normally, when you build an MFC application for Windows using the [MFC Application Wizard](../mfc/reference/mfc-application-wizard.md), the wizard generates a basic set of files (including a resource script (.rc) file) that contains the core features of the Microsoft Foundation classes (MFC). However, if you are editing an .rc file for a Windows application that is not based on MFC, the following features specific to the MFC framework are not available:  
  
-   MFC code wizards (previously called "[MFC ClassWizard](http://msdn.microsoft.com/en-us/98dc2434-ba93-4e0b-b084-1a4bc26cdf1e)")  
  
-   Menu prompt strings  
  
-   List contents for combo box controls  
  
-   ActiveX control hosting  
  
 However, you can add MFC support to existing .rc files that do not have it.  
  
### To add MFC support to .rc files  
  
1.  Open the resource script file.  
  
    > [!NOTE]
    >  If your project doesn't already contain an .rc file, please see [Creating a New Resource Script File](../windows/how-to-create-a-resource-script-file.md).  
  
2.  In [Resource View](../windows/resource-view-window.md), highlight the resources folder (for example, MFC.rc).  
  
3.  In the [Properties window](/visualstudio/ide/reference/properties-window), set the **MFC Mode** property to **True**.  
  
    > [!NOTE]
    >  In addition to setting this flag, the .rc file must be part of an MFC project. For example, just setting **MFC Mode** to **True** on an .rc file in a Win32 project won't give you any of the MFC features.  
  

  
 **Requirements**  
  
 MFC  
  
## See Also  
 [Resource Files](../windows/resource-files-visual-studio.md)   
 [Resource Editors](../windows/resource-editors.md)