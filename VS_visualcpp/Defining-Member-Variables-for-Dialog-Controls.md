---
title: "Defining Member Variables for Dialog Controls"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: 84347c63-c33c-4b04-91f5-6d008c45ba58
caps.latest.revision: 9
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
# Defining Member Variables for Dialog Controls
To define a member variable for any dialog box control except buttons, you can use the following method.  
  
> [!NOTE]
>  This article applies only to dialog controls within an MFC project. ATL projects should use the **New Windows Messages and Event Handlers** dialog box.  
  
### To define a member variable for a (non-button) dialog box control  
  
1.  In the [Dialog editor](../VS_visualcpp/Dialog-Editor.md), select a control.  
  
2.  While pressing the **CTRL** key, double-click the dialog box control.  
  
     The [Add Member Variable wizard](../VS_visualcpp/Add-Member-Variable-Wizard.md) appears.  
  
3.  Type the appropriate information in the **Add Member Variable** wizard. For more information, see [Dialog Data Exchange](../VS_visualcpp/Dialog-Data-Exchange.md).  
  
4.  Click **OK** to return to the Dialog editor.  
  
    > [!TIP]
    >  To jump from any dialog box control to its existing handler, double-click the control.  
  
 For information on adding resources to managed projects, please see [Resources in Applications](../Topic/Resources%20in%20Desktop%20Apps.md) in the *.NET Framework Developer's Guide.* For information on manually adding resource files to managed projects, accessing resources, displaying static resources, and assigning resources strings to properties, see [Walkthrough: Using Resources for Localization with ASP.NET](../Topic/Walkthrough:%20Using%20Resources%20for%20Localization%20with%20ASP.NET.md).  
  
 You can also use the **Member Variables** tab in **MFC Class Wizard** to add new member variables for a specified class, and view those that have already been defined.  
  
 Requirements  
  
 MFC  
  
## See Also  
 [Mapping Messages to Functions](../VS_visualcpp/Mapping-Messages-to-Functions.md)   
 [Adding Functionality with Code Wizards](../VS_visualcpp/Adding-Functionality-with-Code-Wizards--C---.md)   
 [MFC Class Wizard](../VS_visualcpp/MFC-Class-Wizard.md)   
 [Adding a Class](../VS_visualcpp/Adding-a-Class--Visual-C---.md)   
 [Adding a Member Function](../VS_visualcpp/Adding-a-Member-Function--Visual-C---.md)   
 [Adding a Member Variable](../VS_visualcpp/Adding-a-Member-Variable---Visual-C---.md)   
 [Overriding a Virtual Function](../VS_visualcpp/Overriding-a-Virtual-Function--Visual-C---.md)   
 [MFC Message Handler](../VS_visualcpp/Adding-an-MFC-Message-Handler.md)