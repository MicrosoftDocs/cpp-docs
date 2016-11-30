---
title: "Viewing and Adding ActiveX Controls to a Dialog Box | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vc.controls.activex"
dev_langs: 
  - "C++"
  - "C++"
helpviewer_keywords: 
  - "dialog boxes [C++], adding ActiveX controls"
  - "Insert ActiveX Control command"
  - "ActiveX controls [C++], adding to dialog boxes"
ms.assetid: e1c2e3ae-e1b0-40d3-9766-623007073856
caps.latest.revision: 12
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
translation.priority.ht: 
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "ru-ru"
  - "zh-cn"
  - "zh-tw"
translation.priority.mt: 
  - "cs-cz"
  - "pl-pl"
  - "pt-br"
  - "tr-tr"
---
# Viewing and Adding ActiveX Controls to a Dialog Box
Visual Studio enables you to insert ActiveX controls into your dialog box.  
  
### To see the ActiveX controls you have available  
  
1.  Open a dialog box in the Dialog editor.  
  
2.  Right click anywhere in the body of the dialog box.  
  
3.  On the shortcut menu, click **Insert ActiveX Control**.  
  
     The [Insert ActiveX Control dialog box](../mfc/insert-activex-control-dialog-box.md) appears, showing all the ActiveX controls on your system. At the bottom of the dialog box, the path to the ActiveX Control file appears.  
  
### To add an ActiveX control to a dialog box  
  
1.  In the [Insert ActiveX Control dialog box](../mfc/insert-activex-control-dialog-box.md), select the control you want to add to your dialog box and click **OK**.  
  
     The control appears in the dialog box, where you can edit it or create handlers for it just as you would any other control.  
  
    > [!NOTE]
    >  You can add ActiveX controls to the [Toolbox window](/visualstudio/ide/reference/toolbox). For more information, see [Managing Items and Tabs in the Toolbox](http://msdn.microsoft.com/en-us/21285050-cadd-455a-b1f5-a2289a89c4db).  
  
    > [!CAUTION]
    >  It may not be legal to distribute all of the ActiveX controls on your system. Please refer to the license agreement for the software that installed the controls or contact the software company.  
  
     You can place controls in the Toolbox window for easy access. For more information, see [Customize Toolbox dialog box](http://msdn.microsoft.com/en-us/bd07835f-18a8-433e-bccc-7141f65263bb).  
  
 For information on adding resources to managed projects, please see [Resources in Applications](http://msdn.microsoft.com/library/8ad495d4-2941-40cf-bf64-e82e85825890) in the *.NET Framework Developer's Guide.* For information on manually adding resource files to managed projects, accessing resources, displaying static resources, and assigning resources strings to properties, see [Walkthrough: Localizing Windows Forms](http://msdn.microsoft.com/en-us/9a96220d-a19b-4de0-9f48-01e5d82679e5) and [Walkthrough: Using Resources for Localization with ASP.NET](http://msdn.microsoft.com/library/bb4e5b44-e2b0-48ab-bbe9-609fb33900b6).  
  
 **Requirements**  
  
 Win32  
  
## See Also  
 [Controls in Dialog Boxes](../mfc/controls-in-dialog-boxes.md)   
 [MFC ActiveX Controls](../mfc/mfc-activex-controls.md)   
 [ActiveX Control Containers](../mfc/activex-control-containers.md)

