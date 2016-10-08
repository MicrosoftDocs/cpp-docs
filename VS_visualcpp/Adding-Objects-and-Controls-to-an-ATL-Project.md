---
title: "Adding Objects and Controls to an ATL Project"
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
ms.assetid: c0adcbd0-07fe-4c55-a8fd-8c2c65ecdaad
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
# Adding Objects and Controls to an ATL Project
You can use one of the ATL code wizards to add an object or a control to your ATL- or MFC-based projects. For each COM object or control you add, the wizard generates .cpp and .h files, as well as an .rgs file for script-based registry support. The following ATL code wizards are available in Visual Studio:  
  
||||  
|-|-|-|  
|[ATL Simple Object](../VS_visualcpp/ATL-Simple-Object-Wizard.md)|[ATL Dialog](../VS_visualcpp/ATL-Dialog-Wizard.md)|[ATL Control](../VS_visualcpp/ATL-Control-Wizard.md)|  
|[ATL Property Page](../VS_visualcpp/ATL-Property-Page-Wizard.md)|[ATL Active Server Page Component](../VS_visualcpp/ATL-Active-Server-Page-Component-Wizard.md)|[ATL OLE DB Consumer](../VS_visualcpp/ATL-OLE-DB-Consumer-Wizard.md)|  
|[Add ATL Support to MFC](../VS_visualcpp/Adding-ATL-Support-to-Your-MFC-Project.md)|[ATL COM+ 1.0 Component Wizard](../VS_visualcpp/ATL-COM--1.0-Component-Wizard.md)|[ATL OLE DB Provider](../VS_visualcpp/ATL-OLE-DB-Provider-Wizard.md)|  
  
> [!NOTE]
>  Before adding an ATL object to your project, you should review the details and requirements for the object in its related Help topics.  
  
### To add an object or a control using the ATL Control Wizard  
  
1.  In Solution Explorer, right-click the project node and click **Add** from the shortcut menu. Click **Add Class**.  
  
     The [Add Class](../VS_visualcpp/Add-Class-Dialog-Box.md) dialog box appears.  
  
2.  With the ATL folder selected in the Categories pane, select an object to insert from the Templates pane. Click **Open**. The code wizard for the selected object appears.  
  
    > [!NOTE]
    >  If you want to add an ATL object to an MFC project, you must add ATL support to the existing project. You can do this by following the instructions in [Adding ATL Support to Your MFC Project](../VS_visualcpp/Adding-ATL-Support-to-Your-MFC-Project.md).  
  
     Alternately, if you attempt to add an ATL object to your MFC project without previously adding ATL support, Visual Studio prompts you to specify whether you want ATL support added to your project. Click **Yes** to add ATL support to the project and open the selected ATL wizard.  
  
## See Also  
 [ATL Project Wizard](../VS_visualcpp/ATL-Project-Wizard.md)   
 [Visual C++ Project Types](../VS_visualcpp/Visual-C---Project-Types.md)   
 [Creating Desktop Projects By Using Application Wizards](../VS_visualcpp/Creating-Desktop-Projects-By-Using-Application-Wizards.md)   
 [Fundamentals of ATL COM Objects](../VS_visualcpp/Fundamentals-of-ATL-COM-Objects.md)   
 [Programming with ATL and C Run-Time Code](../VS_visualcpp/Programming-with-ATL-and-C-Run-Time-Code.md)   
 [Default ATL Project Configurations](../VS_visualcpp/Default-ATL-Project-Configurations.md)