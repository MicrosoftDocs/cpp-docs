---
title: "Adding an ATL Property Page"
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
ms.assetid: ddf92b49-42a2-46d2-b6b8-d37baedebeca
caps.latest.revision: 10
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
# Adding an ATL Property Page
To add an Active Template Library (ATL) property page to your project, your project must have been created as an ATL application or as an MFC application that contains ATL support. You can use the [ATL Project Wizard](../VS_visualcpp/ATL-Project-Wizard.md) to create an ATL application or [add an ATL object to your MFC application](../VS_visualcpp/Adding-ATL-Support-to-Your-MFC-Project.md) to implement ATL support for an MFC application.  
  
 If you are adding a property page for a control, your control must support the [ISpecifyPropertyPagesImpl](../VS_visualcpp/ISpecifyPropertyPagesImpl-Class.md) interface. By default, this interface is in the derivation list of your control class when you [create an ATL control](../VS_visualcpp/Adding-an-ATL-Control.md) using the [ATL Control Wizard](../VS_visualcpp/ATL-Control-Wizard.md).  
  
> [!NOTE]
>  If your control class does not have [ISpecifyPropertyPagesImpl](../VS_visualcpp/ISpecifyPropertyPagesImpl-Class.md) in its derivation list, you must add it manually.  
  
### To add an ATL property page to your project  
  
1.  In either **Solution Explorer** or [Class View](assetId:///8d7430a9-3e33-454c-a9e1-a85e3d2db925), right-click the name of the project to which you want to add the ATL property page.  
  
2.  From the shortcut menu, click **Add** and then click **Add Class**.  
  
3.  In the [Add Class](../VS_visualcpp/Add-Class-Dialog-Box.md) dialog box, in the Templates pane, click **ATL Property Page** and then click **Open** to display the [ATL Property Page Wizard](../VS_visualcpp/ATL-Property-Page-Wizard.md).  
  
 Once you create a property page for a control, you must provide the [PROP_PAGE](../Topic/PROP_PAGE.md) entry in the property map for the control.  
  
## See Also  
 [Property Pages](../VS_visualcpp/ATL-COM-Property-Pages.md)   
 [Fundamentals of ATL COM Objects](../VS_visualcpp/Fundamentals-of-ATL-COM-Objects.md)   
 [Example: Implementing a Property Page](../VS_visualcpp/Example--Implementing-a-Property-Page.md)