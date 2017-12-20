---
title: "Viewing and Adding ActiveX Controls to a Dialog Box | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-windows"]
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: ["vc.controls.activex"]
dev_langs: ["C++"]
helpviewer_keywords: ["dialog boxes [C++], adding ActiveX controls", "Insert ActiveX Control command", "ActiveX controls [C++], adding to dialog boxes"]
ms.assetid: e1c2e3ae-e1b0-40d3-9766-623007073856
caps.latest.revision: 12
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
ms.workload: ["cplusplus", "uwp"]
---
# Viewing and Adding ActiveX Controls to a Dialog Box
Visual Studio enables you to insert ActiveX controls into your dialog box.  
  
### To see the ActiveX controls you have available  
  
1.  Open a dialog box in the Dialog editor.  
  
2.  Right click anywhere in the body of the dialog box.  
  
3.  On the shortcut menu, click **Insert ActiveX Control**.  
  
     The [Insert ActiveX Control dialog box](../windows/insert-activex-control-dialog-box.md) appears, showing all the ActiveX controls on your system. At the bottom of the dialog box, the path to the ActiveX Control file appears.  
  
### To add an ActiveX control to a dialog box  
  
1.  In the [Insert ActiveX Control dialog box](../windows/insert-activex-control-dialog-box.md), select the control you want to add to your dialog box and click **OK**.  
  
     The control appears in the dialog box, where you can edit it or create handlers for it just as you would any other control.  
  
    > [!NOTE]
    >  You can add ActiveX controls to the [Toolbox window](/visualstudio/ide/reference/toolbox). For more information, see [Managing Items and Tabs in the Toolbox](http://msdn.microsoft.com/en-us/21285050-cadd-455a-b1f5-a2289a89c4db).  
  
    > [!CAUTION]
    >  It may not be legal to distribute all of the ActiveX controls on your system. Please refer to the license agreement for the software that installed the controls or contact the software company.  
  
     You can place controls in the Toolbox window for easy access. For more information, see [Customize Toolbox dialog box](http://msdn.microsoft.com/en-us/bd07835f-18a8-433e-bccc-7141f65263bb).  
  
 For information on adding resources to managed projects, please see [Resources in Desktop Apps](https://msdn.microsoft.com/library/f45fce5x.aspx) in the *.NET Framework Developer's Guide.* For information on manually adding resource files to managed projects, accessing resources, displaying static resources, and assigning resource strings to properties, see [Creating Resource Files for Desktop Apps](https://msdn.microsoft.com/library/xbx3z216.aspx). For information on globalization and localization of resources in managed apps, see [Globalizing and Localizing .NET Framework Applications](https://msdn.microsoft.com/library/h6270d0z.aspx).  
  
 **Requirements**  
  
 Win32  
  
## See Also  
 [Controls in Dialog Boxes](../windows/controls-in-dialog-boxes.md)   
 [MFC ActiveX Controls](../mfc/mfc-activex-controls.md)   
 [ActiveX Control Containers](../mfc/activex-control-containers.md)

