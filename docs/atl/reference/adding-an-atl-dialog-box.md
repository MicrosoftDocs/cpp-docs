---
title: "Adding an ATL Dialog Box | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ATL projects, adding dialog resources"
  - "MFC dialog boxes, ATL dialogs"
  - "dialog boxes, ATL"
ms.assetid: 152a378f-7b24-4f66-aeba-c740973f03a6
caps.latest.revision: 10
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
# Adding an ATL Dialog Box
To add an ATL dialog to your project, your project must be either an ATL project or an MFC project that includes ATL support. You can use the [ATL Project Wizard](../../atl/reference/atl-project-wizard.md) to create an ATL application, or [add an ATL object to your MFC application](../../mfc/reference/adding-atl-support-to-your-mfc-project.md) to implement ATL support for an MFC application.  
  
 By default, the ATL Dialog Wizard implements a dialog box derived from [CAxDialogImpl](../../atl/reference/caxdialogimpl-class.md). This class includes support for hosting ActiveX and Windows controls. If you do not want the overhead of ActiveX control support, once the wizard has generated your code, replace all instances of `CAxDialogImpl` with either [CSimpleDialog](../../atl/reference/csimpledialog-class.md) or [CDialogImpl](../../atl/reference/cdialogimpl-class.md) as your base class.  
  
> [!NOTE]
>  `CSimpleDialog` creates only modal dialog boxes that support only Windows common controls. `CDialogImpl` creates either modal or modeless dialog boxes.  
  
### To add an ATL dialog resource to your project  
  
1.  Create an ATL project using the [ATL Project Wizard](../../atl/reference/atl-project-wizard.md).  
  
2.  From [Class View](http://msdn.microsoft.com/en-us/8d7430a9-3e33-454c-a9e1-a85e3d2db925), right-click the project name and click **Add** from the shortcut menu. Click **Add Class**.  
  
3.  In the Templates pane of the [Add Class](../../ide/add-class-dialog-box.md) dialog box, click **ATL Dialog**. Click **Open** to display the [ATL Dialog Wizard](../../atl/reference/atl-dialog-wizard.md).  
  
 For more information, see [Implementing a Dialog Box](../../atl/implementing-a-dialog-box.md).  
  
## See Also  
 [Adding a Class](../../ide/adding-a-class-visual-cpp.md)   
 [Window Classes](../../atl/atl-window-classes.md)   
 [Message Maps](../../atl/message-maps-atl.md)

