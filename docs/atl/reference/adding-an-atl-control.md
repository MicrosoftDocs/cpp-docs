---
description: "Learn more about: Adding an ATL Control"
title: "Adding an ATL Control"
ms.date: "11/04/2016"
helpviewer_keywords: ["ATL projects, adding controls", "controls [ATL], adding to projects"]
ms.assetid: 10223e7e-fdb7-4163-80c6-44aeafa8e6ce
---
# Adding an ATL Control

Use this wizard to add a user interface object to a project that supports interfaces for all potential containers. To support these interfaces, the project must have been created as an ATL application or as an MFC application that contains ATL support. You can use the [ATL Project Wizard](../../atl/reference/atl-project-wizard.md) to create an ATL application, or [add an ATL object to your MFC application](../../mfc/reference/adding-atl-support-to-your-mfc-project.md) to implement ATL support for an MFC application.

## To add an ATL control to your project

1. In either **Solution Explorer** or [Class View](/visualstudio/ide/viewing-the-structure-of-code), right-click the name of the project to which you want to add the ATL simple object.

1. Click **Add** from the shortcut menu, and then click **Add Class**.

1. In the [Add Class](../../ide/adding-a-class-visual-cpp.md#add-class-dialog-box) dialog box, in the templates pane, click **ATL Control**, and then click **Add** to display the [ATL Control Wizard](../../atl/reference/atl-control-wizard.md).

Using the **ATL Control Wizard**, you can create one of three types of controls:

- A standard control

- A composite control

- A DHTML control

Additionally, you can reduce the size of the control and remove interfaces that are not used by most containers by selecting **Minimal control** on the **Options** page of the wizard.

## See also

[Adding Functionality to the Composite Control](../../atl/adding-functionality-to-the-composite-control.md)<br/>
[Fundamentals of ATL COM Objects](../../atl/fundamentals-of-atl-com-objects.md)
