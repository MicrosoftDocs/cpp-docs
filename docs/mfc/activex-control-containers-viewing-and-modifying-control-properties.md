---
description: "Learn more about: ActiveX Control Containers: Viewing and Modifying Control Properties"
title: "ActiveX Control Containers: Viewing and Modifying Control Properties"
ms.date: "11/04/2016"
helpviewer_keywords: ["properties [MFC], viewing and modifying", "ActiveX control containers [MFC], viewing and modifying properties", "resource editors, viewing and modifying ActiveX controls", "ActiveX controls [MFC], properties", "controls [MFC], properties"]
ms.assetid: 14ce5152-742b-4e0d-a9ab-c7b456e32918
---
# ActiveX Control Containers: Viewing and Modifying Control Properties

When you insert an ActiveX control into a project, it is useful to view and change the properties supported by the ActiveX control. This article discusses how to use the Visual C++ resource editor to do this.

If your ActiveX control container application uses embedded controls, you can view and modify the control's properties while in the resource editor. You can also use the resource editor to set property values during design time. The resource editor then automatically saves these values in the project's resource file. Any instance of the control will then have its properties initialized to these values.

This procedure assumes that you have inserted a control into your project. For information, see [ActiveX Control Containers: Inserting a Control Into a Control Container Application](inserting-a-control-into-a-control-container-application.md).

The first step in viewing the control's properties is to add an instance of the control to the project's dialog template.

### To view the properties of a control

1. In Resource View, open the **Dialog** folder.

1. Open your main dialog box template.

1. Insert an ActiveX control using the **Insert ActiveX Control** dialog box. For more information, see [Viewing and Adding ActiveX Controls to a Dialog Box](../windows/adding-editing-or-deleting-controls.md).

1. Select the ActiveX control in the dialog box.

1. From the **Properties** window, click the **Properties** button.

Use the **Properties** dialog box to modify and test new properties immediately.

## See also

[ActiveX Control Containers](activex-control-containers.md)
