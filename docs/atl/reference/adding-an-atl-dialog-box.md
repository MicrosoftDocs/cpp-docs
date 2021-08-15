---
description: "Learn more about: Adding an ATL Dialog Box"
title: "Adding an ATL Dialog Box"
ms.date: "11/04/2016"
helpviewer_keywords: ["ATL projects, adding dialog resources", "MFC dialog boxes, ATL dialogs", "dialog boxes, ATL"]
ms.assetid: 152a378f-7b24-4f66-aeba-c740973f03a6
---
# Adding an ATL Dialog Box

To add an ATL dialog to your project, your project must be either an ATL project or an MFC project that includes ATL support. You can use the [ATL Project Wizard](../../atl/reference/atl-project-wizard.md) to create an ATL application, or [add an ATL object to your MFC application](../../mfc/reference/adding-atl-support-to-your-mfc-project.md) to implement ATL support for an MFC application.

By default, the ATL Dialog Wizard implements a dialog box derived from [CAxDialogImpl](../../atl/reference/caxdialogimpl-class.md). This class includes support for hosting ActiveX and Windows controls. If you do not want the overhead of ActiveX control support, once the wizard has generated your code, replace all instances of `CAxDialogImpl` with either [CSimpleDialog](../../atl/reference/csimpledialog-class.md) or [CDialogImpl](../../atl/reference/cdialogimpl-class.md) as your base class.

> [!NOTE]
> `CSimpleDialog` creates only modal dialog boxes that support only Windows common controls. `CDialogImpl` creates either modal or modeless dialog boxes.

## To add an ATL dialog resource to your project

1. Create an ATL project using the [ATL Project Wizard](../../atl/reference/atl-project-wizard.md).

1. From [Class View](/visualstudio/ide/viewing-the-structure-of-code), right-click the project name and click **Add** from the shortcut menu. Click **Add Class**.

1. In the **Templates** pane of the [Add Class](../../ide/adding-a-class-visual-cpp.md#add-class-dialog-box) dialog box, click **ATL Dialog**. Click **Open** to display the [ATL Dialog Wizard](../../atl/reference/atl-dialog-wizard.md).

For more information, see [Implementing a Dialog Box](../../atl/implementing-a-dialog-box.md).

## See also

[Adding a Class](../../ide/adding-a-class-visual-cpp.md)<br/>
[Window Classes](../../atl/atl-window-classes.md)<br/>
[Message Maps](../../atl/message-maps-atl.md)
