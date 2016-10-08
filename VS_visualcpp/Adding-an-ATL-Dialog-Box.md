---
title: "Adding an ATL Dialog Box"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: reference
ms.assetid: 152a378f-7b24-4f66-aeba-c740973f03a6
caps.latest.revision: 8
manager: ghogen
translation.priority.ht: 
  - cs-cz
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - pl-pl
  - pt-br
  - ru-ru
  - tr-tr
  - zh-cn
  - zh-tw
---
# Adding an ATL Dialog Box
To add an ATL dialog to your project, your project must be either an ATL project or an MFC project that includes ATL support. You can use the [ATL Project Wizard](../VS_visualcpp/ATL-Project-Wizard.md) to create an ATL application, or [add an ATL object to your MFC application](../VS_visualcpp/Adding-ATL-Support-to-Your-MFC-Project.md) to implement ATL support for an MFC application.  
  
 By default, the ATL Dialog Wizard implements a dialog box derived from [CAxDialogImpl](../VS_visualcpp/CAxDialogImpl-Class.md). This class includes support for hosting ActiveX and Windows controls. If you do not want the overhead of ActiveX control support, once the wizard has generated your code, replace all instances of `CAxDialogImpl` with either [CSimpleDialog](../VS_visualcpp/CSimpleDialog-Class.md) or [CDialogImpl](../VS_visualcpp/CDialogImpl-Class.md) as your base class.  
  
> [!NOTE]
>  `CSimpleDialog` creates only modal dialog boxes that support only Windows common controls. `CDialogImpl` creates either modal or modeless dialog boxes.  
  
### To add an ATL dialog resource to your project  
  
1.  Create an ATL project using the [ATL Project Wizard](../VS_visualcpp/ATL-Project-Wizard.md).  
  
2.  From [Class View](assetId:///8d7430a9-3e33-454c-a9e1-a85e3d2db925), right-click the project name and click **Add** from the shortcut menu. Click **Add Class**.  
  
3.  In the Templates pane of the [Add Class](../VS_visualcpp/Add-Class-Dialog-Box.md) dialog box, click **ATL Dialog**. Click **Open** to display the [ATL Dialog Wizard](../VS_visualcpp/ATL-Dialog-Wizard.md).  
  
 For more information, see [Implementing a Dialog Box](../VS_visualcpp/Implementing-a-Dialog-Box.md).  
  
## See Also  
 [Adding a Class](../VS_visualcpp/Adding-a-Class--Visual-C---.md)   
 [Window Classes](../VS_visualcpp/ATL-Window-Classes.md)   
 [Message Maps](../VS_visualcpp/Message-Maps--ATL-.md)