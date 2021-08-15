---
description: "Learn more about: Adding an MFC Class from a Type Library"
title: "Adding an MFC Class from a Type Library"
ms.date: "11/04/2016"
helpviewer_keywords: ["classes [MFC], adding MFC", "MFC, adding classes from type libraries", "type libraries, adding MFC classes from"]
ms.assetid: aba40476-3cfb-47af-990e-ae2e9e0d79cf
---
# Adding an MFC Class from a Type Library

Use this wizard to create an MFC class from an interface in an available type library. You can add an MFC class to an [MFC application](../../mfc/reference/creating-an-mfc-application.md), an [MFC DLL](../../mfc/reference/creating-an-mfc-dll-project.md), or an [MFC ActiveX control](../../mfc/reference/creating-an-mfc-activex-control.md).

> [!NOTE]
> You do not need to create your MFC project with Automation enabled to add a class from a type library.

A type library contains a binary description of the interfaces exposed by a component, defining the methods along with their parameters and return types. Your type library must be registered for it to appear in the **Available type libraries** list in the Add Class from Typelib Wizard.

### To add an MFC class from a type library

1. In either **Solution Explorer** or [Class View](/visualstudio/ide/viewing-the-structure-of-code), right-click the name of the project to which you want to add the class.

1. From the shortcut menu, click **Add**, and then click **Add Class**.

1. In the [Add Class](../../ide/adding-a-class-visual-cpp.md#add-class-dialog-box) dialog box, in the Templates pane, click **MFC Class from Typelib**, and then click **Open** to display the [Add Class from Typelib Wizard](../../mfc/reference/add-class-from-typelib-wizard.md).

In the wizard, you can add more than one class in a type library. Likewise, you can add classes from more than one type library in a single wizard session.

The wizard creates an MFC class, derived from [COleDispatchDriver](../../mfc/reference/coledispatchdriver-class.md), for each interface you add from the selected type library. `COleDispatchDriver` implements the client side of OLE automation.

## See also

[Automation Clients](../../mfc/automation-clients.md)<br/>
[Automation Clients: Using Type Libraries](../../mfc/automation-clients-using-type-libraries.md)
