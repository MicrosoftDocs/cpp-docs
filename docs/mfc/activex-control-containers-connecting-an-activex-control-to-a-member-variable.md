---
description: "Learn more about: ActiveX Control Containers: Connecting an ActiveX Control to a Member Variable"
title: "ActiveX Control Containers: Connecting an ActiveX Control to a Member Variable"
ms.date: "11/04/2016"
helpviewer_keywords: ["ActiveX control containers [MFC], accessing ActiveX controls", "ActiveX controls [MFC], member variables of project", "connecting ActiveX controls to container member variables", "ActiveX controls [MFC], accessing", "member variables [MFC], ActiveX controls in project", "ActiveX control containers [MFC], ActiveX controls as member variables"]
ms.assetid: 7898a336-440d-4a60-be43-cb062b807aee
---
# ActiveX Control Containers: Connecting an ActiveX Control to a Member Variable

The easiest way to access an ActiveX control from within its control container application is to associate the ActiveX control with a member variable of the dialog class that will contain the control.

> [!NOTE]
> This is not the only way to access an embedded control from within a container class, but for the purposes of this article it is sufficient.

### Adding a member variable to the dialog class

1. From Class View, right-click the main dialog class to open the shortcut menu. For example, `CContainerDlg`.

1. From the shortcut menu, click **Add** and then **Add Variable**.

1. In the Add Member Variable Wizard, click **Control variable**.

1. In the **Control ID** list box, select the control ID of the embedded ActiveX control. For example, `IDC_CIRCCTRL1`.

1. In the **Variable Name** box, enter a name.

   For example, *m_circctl*.

1. Click **Finish** to accept your choices and exit the Add Member Variable Wizard.

## See also

[ActiveX Control Containers](activex-control-containers.md)
