---
description: "Learn more about: ActiveX Control Containers: Using Controls in a Non-Dialog Container"
title: "ActiveX Control Containers: Using Controls in a Non-Dialog Container"
ms.date: "11/04/2016"
helpviewer_keywords: ["Create method [MFC], ActiveX controls", "CreateControl method [MFC]", "ActiveX controls [MFC], creating", "ActiveX control containers [MFC], non-dialog containers", "ActiveX control containers [MFC], inserting controls"]
ms.assetid: 46f195b0-b8ca-4409-8cca-fbfaf2c9ab9f
---
# ActiveX Control Containers: Using Controls in a Non-Dialog Container

In some applications, such as an SDI or MDI application, you will want to embed a control in a window of the application. The **Create** member function of the wrapper class, inserted by Visual C++, can create an instance of the control dynamically, without the need for a dialog box.

The **Create** member function has the following parameters:

*lpszWindowName*<br/>
A pointer to the text to be displayed in the control's Text or Caption property (if any).

*dwStyle*<br/>
Windows styles. For a complete list, see [CWnd::CreateControl](reference/cwnd-class.md#createcontrol).

*rect*<br/>
Specifies the control's size and position.

*pParentWnd*<br/>
Specifies the control's parent window, usually a `CDialog`. It must not be **NULL**.

*nID*<br/>
Specifies the control ID and can be used by the container to refer to the control.

One example of using this function to dynamically create an ActiveX control would be in a form view of an SDI application. You could then create an instance of the control in the `WM_CREATE` handler of the application.

For this example, `CMyView` is the main view class, `CCirc` is the wrapper class, and CIRC.H is the header (.H) file of the wrapper class.

Implementing this feature is a four-step process.

### To dynamically create an ActiveX control in a non-dialog window

1. Insert CIRC.H in CMYVIEW.H, just before the `CMyView` class definition:

   [!code-cpp[NVC_MFC_AxCont#12](codesnippet/cpp/activex-control-containers-using-controls-in-a-non-dialog-container_1.h)]

1. Add a member variable (of type `CCirc`) to the protected section of the `CMyView` class definition located in CMYVIEW.H:

   [!code-cpp[NVC_MFC_AxCont#13](codesnippet/cpp/activex-control-containers-using-controls-in-a-non-dialog-container_2.h)]
    [!code-cpp[NVC_MFC_AxCont#14](codesnippet/cpp/activex-control-containers-using-controls-in-a-non-dialog-container_3.h)]

1. Add a `WM_CREATE` message handler to class `CMyView`.

1. In the handler function, `CMyView::OnCreate`, make a call to the control's `Create` function using the **`this`** pointer as the parent window:

   [!code-cpp[NVC_MFC_AxCont#15](codesnippet/cpp/activex-control-containers-using-controls-in-a-non-dialog-container_4.cpp)]

1. Rebuild the project. A Circ control will be created dynamically whenever the application's view is created.

## See also

[ActiveX Control Containers](activex-control-containers.md)
