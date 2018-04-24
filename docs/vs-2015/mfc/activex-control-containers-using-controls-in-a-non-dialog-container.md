---
title: "ActiveX Control Containers: Using Controls in a Non-Dialog Container | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Create method [C++], ActiveX controls"
  - "CreateControl method"
  - "ActiveX controls [C++], creating"
  - "ActiveX control containers [C++], non-dialog containers"
  - "ActiveX control containers [C++], inserting controls"
ms.assetid: 46f195b0-b8ca-4409-8cca-fbfaf2c9ab9f
caps.latest.revision: 14
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# ActiveX Control Containers: Using Controls in a Non-Dialog Container
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [ActiveX Control Containers: Using Controls in a Non-Dialog Container](https://docs.microsoft.com/cpp/mfc/activex-control-containers-using-controls-in-a-non-dialog-container).  
  
  
In some applications, such as an SDI or MDI application, you will want to embed a control in a window of the application. The **Create** member function of the wrapper class, inserted by Visual C++, can create an instance of the control dynamically, without the need for a dialog box.  
  
 The **Create** member function has the following parameters:  
  
 `lpszWindowName`  
 A pointer to the text to be displayed in the control's Text or Caption property (if any).  
  
 `dwStyle`  
 Windows styles. For a complete list, see [CWnd::CreateControl](../mfc/reference/cwnd-class.md#cwnd__createcontrol).  
  
 `rect`  
 Specifies the control's size and position.  
  
 `pParentWnd`  
 Specifies the control's parent window, usually a `CDialog`. It must not be **NULL**.  
  
 `nID`  
 Specifies the control ID and can be used by the container to refer to the control.  
  
 One example of using this function to dynamically create an ActiveX control would be in a form view of an SDI application. You could then create an instance of the control in the `WM_CREATE` handler of the application.  
  
 For this example, `CMyView` is the main view class, `CCirc` is the wrapper class, and CIRC.H is the header (.H) file of the wrapper class.  
  
 Implementing this feature is a four-step process.  
  
### To dynamically create an ActiveX control in a non-dialog window  
  
1.  Insert CIRC.H in CMYVIEW.H, just before the `CMyView` class definition:  
  
     [!code-cpp[NVC_MFC_AxCont#12](../snippets/cpp/VS_Snippets_Cpp/NVC_MFC_AxCont/Cpp/MyView.h#12)]  
  
2.  Add a member variable (of type `CCirc`) to the protected section of the `CMyView` class definition located in CMYVIEW.H:  
  
     [!code-cpp[NVC_MFC_AxCont#13](../snippets/cpp/VS_Snippets_Cpp/NVC_MFC_AxCont/Cpp/MyView.h#13)]  
    [!code-cpp[NVC_MFC_AxCont#14](../snippets/cpp/VS_Snippets_Cpp/NVC_MFC_AxCont/Cpp/MyView.h#14)]  
  
3.  Add a `WM_CREATE` message handler to class `CMyView`.  
  
4.  In the handler function, `CMyView::OnCreate`, make a call to the control's `Create` function using the **this** pointer as the parent window:  
  
     [!code-cpp[NVC_MFC_AxCont#15](../snippets/cpp/VS_Snippets_Cpp/NVC_MFC_AxCont/Cpp/MyView.cpp#15)]  
  
5.  Rebuild the project. A Circ control will be created dynamically whenever the application's view is created.  
  
## See Also  
 [ActiveX Control Containers](../mfc/activex-control-containers.md)





