---
title: "Insert ActiveX Control Dialog Box | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "conceptual"
f1_keywords: ["vc.editors.dialog.insertActiveXControls"]
dev_langs: ["C++"]
helpviewer_keywords: ["Insert ActiveX Control dialog box", "ActiveX controls [C++], adding to dialog boxes"]
ms.assetid: 06638ea3-0726-40da-a989-9b89292d0e3d
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# Insert ActiveX Control Dialog Box
This dialog box enables you to [insert ActiveX controls into your dialog box](../windows/viewing-and-adding-activex-controls-to-a-dialog-box.md) while using the [Dialog editor](../windows/dialog-editor.md).  
  
 **ActiveX Control**  
 Displays a list of Active X controls. Inserting a control from this dialog box does not generate a wrapper class. If you need a wrapper class, use [Class View](http://msdn.microsoft.com/8d7430a9-3e33-454c-a9e1-a85e3d2db925) to create one (for more information, see [Adding a Class](../ide/adding-a-class-visual-cpp.md)). If an Active X control does not appear in this dialog box, try installing the control according to the vendor's instructions.  
  
 **Path**  
 Displays the file in which the ActiveX control is found.  
  
 You can place controls in the Toolbox window for easy access. For more information, see [Customize Toolbox dialog box](http://msdn.microsoft.com/bd07835f-18a8-433e-bccc-7141f65263bb).  
  
 For information on adding resources to managed projects, please see [Resources in Desktop Apps](/dotnet/framework/resources/index) in the *.NET Framework Developer's Guide*. For information on manually adding resource files to managed projects, accessing resources, displaying static resources, and assigning resource strings to properties, see [Creating Resource Files for Desktop Apps](/dotnet/framework/resources/creating-resource-files-for-desktop-apps). For information on globalization and localization of resources in managed apps, see [Globalizing and Localizing .NET Framework Applications](/dotnet/standard/globalization-localization/index).  
  
## Requirements  
 Win32  
  
## See Also  
 [Dialog Editor Tab, Toolbox](../windows/dialog-editor-tab-toolbox.md)   
 [Resource Files](../windows/resource-files-visual-studio.md)   
 [Controls in Dialog Boxes](../windows/controls-in-dialog-boxes.md)