---
title: "Adding a Class from an ActiveX Control (Visual C++)"
ms.date: "09/07/2018"
helpviewer_keywords: ["ActiveX controls [C++], adding classes", "classes [C++], creating"]
ms.assetid: 729fcb37-54b8-44d5-9b4e-50bb16e0eea4
---
# Adding a Class from an ActiveX Control (Visual C++)

Use this wizard to create an MFC class from an interface in an available ActiveX control. You can add an MFC class to an [MFC application](../mfc/reference/creating-an-mfc-application.md), an [MFC DLL](../mfc/reference/creating-an-mfc-dll-project.md), or an [MFC ActiveX control](../mfc/reference/creating-an-mfc-activex-control.md).

> [!WARNING]
> In Visual Studio 2017 version 15.9 this code wizard is deprecated and will be removed in a future version of Visual Studio. This wizard is rarely used. General support for ATL and MFC is not impacted by the removal of this wizard. If you would like to share your feedback about this deprecation, please complete [this survey](https://www.surveymonkey.com/r/QDWKKCN). Your feedback matters to us.

> [!NOTE]
>  You do not need to create your MFC project with Automation enabled to add a class from an ActiveX control.

An ActiveX control is a reusable software component based on the Component Object Model (COM) that supports a wide variety of OLE functionality and can be customized to fit many software needs. ActiveX controls are designed for use both in ordinary ActiveX control containers and on the Internet in World Wide Web pages.

### To add an MFC class from an ActiveX control

1. In either **Solution Explorer** or [Class View](/visualstudio/ide/viewing-the-structure-of-code), right-click the name of the project to which you want to add the ActiveX control class.

1. From the shortcut menu, click **Add**, and then click **Add Class**.

1. In the [Add Class](../ide/add-class-dialog-box.md) dialog box, in the Templates pane, click **MFC Class from ActiveX Control**, and then click **Open** to display the [Add Class from ActiveX Control Wizard](../ide/add-class-from-activex-control-wizard.md).

In the wizard, you can add more than one interface in an ActiveX control. Likewise, you can create classes from more than one ActiveX control in a single wizard session.

You can add classes from ActiveX controls registered in your system, or you can add classes from ActiveX controls located in type library files (.tlb, .olb, .dll, .ocx, or .exe) without first registering them in your system. See [Registering OLE Controls](../mfc/reference/registering-ole-controls.md) for more information on registering ActiveX controls.

The wizard creates an MFC class, derived from [CWnd](../mfc/reference/cwnd-class.md) or from [COleDispatchDriver](../mfc/reference/coledispatchdriver-class.md), for each interface you add from the selected ActiveX control.

## See Also

[MFC ActiveX Controls](../mfc/mfc-activex-controls.md)<br>
[Introduction to COM and ATL](../atl/introduction-to-com-and-atl.md)