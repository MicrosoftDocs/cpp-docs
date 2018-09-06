---
title: "Editing Properties for an ActiveX Control | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "conceptual"
dev_langs: ["C++"]
helpviewer_keywords: ["[""controls [C++], editing properties"", ""ActiveX controls [C++], properties""]"]
ms.assetid: e5880c62-36c7-4701-bc99-97a82974c22a
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# Editing Properties for an ActiveX Control

ActiveX controls supplied by independent vendors may come equipped with their own properties and characteristics. Properties for ActiveX controls are displayed in the **Properties** window. In addition, any property pages created by the writers of the ActiveX control are displayed in the **Properties Pages** dialog box (to view the **Property Page** for a specific ActiveX control, click the **Property Page** button in the [Properties Window](/visualstudio/ide/reference/properties-window)).

Various tabs are displayed in the property page for an ActiveX control, depending on the property sheets that come as part of the ActiveX control.

> [!NOTE]
> The following procedure applies to using the property page to edit ActiveX controls. You can also browse and edit ActiveX properties in the new **Properties** window.

### To edit properties for an ActiveX control

1. Select the **ActiveX** control.

2. On the **View** menu, click **Property Page** and view the properties.

3. Make changes as needed in the property page.

For information on adding resources to managed projects, please see [Resources in Desktop Apps](/dotnet/framework/resources/index) in the *.NET Framework Developer's Guide*. For information on manually adding resource files to managed projects, accessing resources, displaying static resources, and assigning resource strings to properties, see [Creating Resource Files for Desktop Apps](/dotnet/framework/resources/creating-resource-files-for-desktop-apps). For information on globalization and localization of resources in managed apps, see [Globalizing and Localizing .NET Framework Applications](/dotnet/standard/globalization-localization/index).

## Requirements

Win32

## See Also

[Viewing and Adding ActiveX Controls to a Dialog Box](../windows/viewing-and-adding-activex-controls-to-a-dialog-box.md)  
[Controls in Dialog Boxes](../windows/controls-in-dialog-boxes.md)  
[MFC ActiveX Controls](../mfc/mfc-activex-controls.md)  
[ActiveX Control Containers](../mfc/activex-control-containers.md)