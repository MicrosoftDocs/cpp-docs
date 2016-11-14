---
title: "ActiveX Control Containers: Connecting an ActiveX Control to a Member Variable | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ActiveX control containers [C++], accessing ActiveX controls"
  - "ActiveX controls [C++], member variables of project"
  - "connecting ActiveX controls to container member variables"
  - "ActiveX controls [C++], accessing"
  - "member variables [C++], ActiveX controls in project"
  - "ActiveX control containers [C++], ActiveX controls as member variables"
ms.assetid: 7898a336-440d-4a60-be43-cb062b807aee
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
---
# ActiveX Control Containers: Connecting an ActiveX Control to a Member Variable
The easiest way to access an ActiveX control from within its control container application is to associate the ActiveX control with a member variable of the dialog class that will contain the control.  
  
> [!NOTE]
>  This is not the only way to access an embedded control from within a container class, but for the purposes of this article it is sufficient.  
  
### Adding a member variable to the dialog class  
  
1.  From Class View, right-click the main dialog class to open the shortcut menu. For example, `CContainerDlg`.  
  
2.  From the shortcut menu, click **Add** and then **Add Variable**.  
  
3.  In the Add Member Variable Wizard, click **Control variable**.  
  
4.  In the **Control ID** list box, select the control ID of the embedded ActiveX control. For example, `IDC_CIRCCTRL1`.  
  
5.  In the **Variable Name** box, enter a name.  
  
     For example, `m_circctl`.  
  
6.  Click **Finish** to accept your choices and exit the Add Member Variable Wizard.  
  
## See Also  
 [ActiveX Control Containers](../mfc/activex-control-containers.md)

