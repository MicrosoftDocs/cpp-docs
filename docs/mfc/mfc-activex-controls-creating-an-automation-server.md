---
description: "Learn more about: MFC ActiveX Controls: Creating an Automation Server"
title: "MFC ActiveX Controls: Creating an Automation Server"
ms.date: "11/04/2016"
helpviewer_keywords: ["Automation servers [MFC], MFC ActiveX controls", "ActiveX controls [MFC], Automation server", "MFC ActiveX controls [MFC], Automation server"]
ms.assetid: e0c24ed2-d61c-49ad-a4fa-4e1098d1d39b
---
# MFC ActiveX Controls: Creating an Automation Server

You can develop an MFC ActiveX control as an Automation server for the purpose of programmatically embedding that control in another application and calling methods in the control from the application. Such a control would still be available to be hosted in an ActiveX control container.

### To create a control as an Automation server

1. [Create](reference/mfc-activex-control-wizard.md) the control.

1. [Add methods](mfc-activex-controls-methods.md).

1. Override [IsInvokeAllowed](reference/colecontrol-class.md#isinvokeallowed).

1. Build the control.

### To programmatically access the methods in an Automation server

1. Create an application, for example, an [MFC exe](reference/mfc-application-wizard.md).

1. At the beginning of the `InitInstance` function, add the following line:

   [!code-cpp[NVC_MFC_AxCont#17](codesnippet/cpp/mfc-activex-controls-creating-an-automation-server_1.cpp)]

1. In Class View, right-click the project node and select **Add class from typelib** to import the type library.

   This will add files with the file name extensions .h and .cpp to the project.

1. In the header file of the class where you will call one or more methods in the ActiveX control, add the following line: `#include filename.h`, where file name is the name of the header file that was created when you imported the type library.

1. In the function where a call will be made to a method in the ActiveX control, add code that creates an object of the control's wrapper class and create the ActiveX object. For example, the following MFC code instantiates a `CCirc` control, gets the Caption property, and displays the result when the OK button is clicked in a dialog box:

   [!code-cpp[NVC_MFC_AxCont#18](codesnippet/cpp/mfc-activex-controls-creating-an-automation-server_2.cpp)]

If you add methods to the ActiveX control after you use it in an application, you can begin using the latest version of the control in the application by deleting the files that were created when you imported the type library. Then import the type library again.

## See also

[MFC ActiveX Controls](mfc-activex-controls.md)
