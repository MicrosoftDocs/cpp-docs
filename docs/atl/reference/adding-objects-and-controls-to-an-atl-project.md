---
title: "Adding Objects and Controls to an ATL Project | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "vc.appwiz.ATL.controls"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ATL projects, adding objects"
  - "wizards [C++], ATL projects"
  - "ATL projects, adding controls"
  - "controls [ATL], adding to projects"
  - "objects [C++], adding to ATL projects"
  - "ATL Control Wizard"
ms.assetid: c0adcbd0-07fe-4c55-a8fd-8c2c65ecdaad
caps.latest.revision: 12
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
# Adding Objects and Controls to an ATL Project
You can use one of the ATL code wizards to add an object or a control to your ATL- or MFC-based projects. For each COM object or control you add, the wizard generates .cpp and .h files, as well as an .rgs file for script-based registry support. The following ATL code wizards are available in Visual Studio:  
  
||||  
|-|-|-|  
|[ATL Simple Object](../../atl/reference/atl-simple-object-wizard.md)|[ATL Dialog](../../atl/reference/atl-dialog-wizard.md)|[ATL Control](../../atl/reference/atl-control-wizard.md)|  
|[ATL Property Page](../../atl/reference/atl-property-page-wizard.md)|[ATL Active Server Page Component](../../atl/reference/atl-active-server-page-component-wizard.md)|[ATL OLE DB Consumer](../../atl/reference/atl-ole-db-consumer-wizard.md)|  
|[Add ATL Support to MFC](../../mfc/reference/adding-atl-support-to-your-mfc-project.md)|[ATL COM+ 1.0 Component Wizard](../../atl/reference/atl-com-plus-1-0-component-wizard.md)|[ATL OLE DB Provider](../../atl/reference/atl-ole-db-provider-wizard.md)|  
  
> [!NOTE]
>  Before adding an ATL object to your project, you should review the details and requirements for the object in its related Help topics.  
  
### To add an object or a control using the ATL Control Wizard  
  
1.  In Solution Explorer, right-click the project node and click **Add** from the shortcut menu. Click **Add Class**.  
  
     The [Add Class](../../ide/add-class-dialog-box.md) dialog box appears.  
  
2.  With the ATL folder selected in the Categories pane, select an object to insert from the Templates pane. Click **Open**. The code wizard for the selected object appears.  
  
    > [!NOTE]
    >  If you want to add an ATL object to an MFC project, you must add ATL support to the existing project. You can do this by following the instructions in [Adding ATL Support to Your MFC Project](../../mfc/reference/adding-atl-support-to-your-mfc-project.md).  
  
     Alternately, if you attempt to add an ATL object to your MFC project without previously adding ATL support, Visual Studio prompts you to specify whether you want ATL support added to your project. Click **Yes** to add ATL support to the project and open the selected ATL wizard.  
  
## See Also  
 [ATL Project Wizard](../../atl/reference/atl-project-wizard.md)   
 [Visual C++ Project Types](../../ide/visual-cpp-project-types.md)   
 [Creating Desktop Projects By Using Application Wizards](../../ide/creating-desktop-projects-by-using-application-wizards.md)   
 [Fundamentals of ATL COM Objects](../../atl/fundamentals-of-atl-com-objects.md)   
 [Programming with ATL and C Run-Time Code](../../atl/programming-with-atl-and-c-run-time-code.md)   
 [Default ATL Project Configurations](../../atl/reference/default-atl-project-configurations.md)

