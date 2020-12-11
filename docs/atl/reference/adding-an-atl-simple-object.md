---
description: "Learn more about: Adding an ATL Simple Object"
title: "Adding an ATL Simple Object"
ms.date: "11/04/2016"
f1_keywords: ["vc.codewiz.classes.adding.atl"]
helpviewer_keywords: ["ATL projects, adding objects", "objects [ATL]", "ATL, simple objects"]
ms.assetid: 9c57d2ef-0447-4c84-8982-3304b8e49847
---
# Adding an ATL Simple Object

To add an ATL (Active Template Library) object to your project, your project must have been created as an ATL application or as an MFC application that contains ATL support. You can use the [ATL Project Wizard](../../atl/reference/atl-project-wizard.md) to create an ATL application, or [add an ATL object to your MFC application](../../mfc/reference/adding-atl-support-to-your-mfc-project.md) to implement ATL support for an MFC application.

You can define COM interfaces for your new ATL object when you first create it, or add them later by using the [Implement Interface](../../ide/implementing-an-interface-visual-cpp.md#implement-interface-wizard) command from the **Class View** shortcut menu.

## To add an ATL simple object to your ATL COM project

1. In either **Solution Explorer** or [Class View](/visualstudio/ide/viewing-the-structure-of-code), right-click the name of the project to which you want to add the ATL simple object.

1. From the shortcut menu, click **Add**, and then click **Add Class**.

1. In the [Add Class](../../ide/adding-a-class-visual-cpp.md#add-class-dialog-box) dialog box, in the **Templates** pane, click **ATL Simple Object**, and then click **Open** to display the [ATL Simple Object Wizard](../../atl/reference/atl-simple-object-wizard.md).

1. Set additional options for your project on the [Options](../../atl/reference/options-atl-simple-object-wizard.md) page of the **ATL Simple Object** wizard.

1. Click **Finish** to add the object to your project.

## See also

[Adding a Class](../../ide/adding-a-class-visual-cpp.md)<br/>
[Adding a New Interface in an ATL Project](../../atl/reference/adding-a-new-interface-in-an-atl-project.md)<br/>
[Adding Connection Points to an Object](../../atl/adding-connection-points-to-an-object.md)<br/>
[Adding a Method](../../ide/adding-a-method-visual-cpp.md)<br/>
[MFC Class](../../mfc/reference/adding-an-mfc-class.md)<br/>
[Adding a Generic C++ Class](../../ide/adding-a-generic-cpp-class.md)
