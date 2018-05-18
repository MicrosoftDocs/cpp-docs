---
title: "Changing the Properties of Multiple Accelerator Keys | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "conceptual"
dev_langs: ["C++"]
helpviewer_keywords: ["keyboard shortcuts [C++], property changing", "accelerator tables [C++], changing properties"]
ms.assetid: b55c9bd6-b430-48bb-b942-0e6f21d7abf9
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# Changing the Properties of Multiple Accelerator Keys
### To change the properties of multiple accelerator keys  
  
1.  Open the accelerator table by double-clicking its icon in [Resource View](../windows/resource-view-window.md).  
  
    > [!NOTE]
    >  If your project doesn't already contain an .rc file, please see [Creating a New Resource Script File](../windows/how-to-create-a-resource-script-file.md).  
  
2.  Select the accelerator keys you want to change by holding down the **CTRL** key as you click each one.  
  
3.  Go to the [Properties window](/visualstudio/ide/reference/properties-window) and type in the values you want all of the selected accelerators to share.  
  
    > [!NOTE]
    >  Each modifier value appears as a Boolean property in the Properties window. If you change a [Modifier](../windows/accelerator-modifier-property.md) value in the Properties window, the accelerator table treats the new modifier as an addition to any modifiers that were previously there. Because of this, if you set any modifier values, you will need to set all of them to ensure that every accelerator shares the same Modifier settings.  
  
 For information on adding resources to managed projects, please see [Resources in Desktop Apps](/dotnet/framework/resources/index) in the *.NET Framework Developer's Guide.* For information on manually adding resource files to managed projects, accessing resources, displaying static resources, and assigning resource strings to properties, see [Creating Resource Files for Desktop Apps](/dotnet/framework/resources/creating-resource-files-for-desktop-apps). For information on globalization and localization of resources in managed apps, see [Globalizing and Localizing .NET Framework Applications](/dotnet/standard/globalization-localization/index).  
  
 **Requirements**  
  
 Win32  
  
## See Also  
 [Editing Accelerator Tables](../windows/editing-accelerator-tables.md)   
 [Accelerator Editor](../windows/accelerator-editor.md)