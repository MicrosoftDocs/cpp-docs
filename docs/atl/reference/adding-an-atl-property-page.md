---
title: "Adding an ATL Property Page | Microsoft Docs"
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
  - "property pages, adding"
  - "ATL projects, adding property pages"
  - "controls [ATL], property pages"
ms.assetid: ddf92b49-42a2-46d2-b6b8-d37baedebeca
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
# Adding an ATL Property Page
To add an Active Template Library (ATL) property page to your project, your project must have been created as an ATL application or as an MFC application that contains ATL support. You can use the [ATL Project Wizard](../../atl/reference/atl-project-wizard.md) to create an ATL application or [add an ATL object to your MFC application](../../mfc/reference/adding-atl-support-to-your-mfc-project.md) to implement ATL support for an MFC application.  
  
 If you are adding a property page for a control, your control must support the [ISpecifyPropertyPagesImpl](../../atl/reference/ispecifypropertypagesimpl-class.md) interface. By default, this interface is in the derivation list of your control class when you [create an ATL control](../../atl/reference/adding-an-atl-control.md) using the [ATL Control Wizard](../../atl/reference/atl-control-wizard.md).  
  
> [!NOTE]
>  If your control class does not have [ISpecifyPropertyPagesImpl](../../atl/reference/ispecifypropertypagesimpl-class.md) in its derivation list, you must add it manually.  
  
### To add an ATL property page to your project  
  
1.  In either **Solution Explorer** or [Class View](http://msdn.microsoft.com/en-us/8d7430a9-3e33-454c-a9e1-a85e3d2db925), right-click the name of the project to which you want to add the ATL property page.  
  
2.  From the shortcut menu, click **Add** and then click **Add Class**.  
  
3.  In the [Add Class](../../ide/add-class-dialog-box.md) dialog box, in the Templates pane, click **ATL Property Page** and then click **Open** to display the [ATL Property Page Wizard](../../atl/reference/atl-property-page-wizard.md).  
  
 Once you create a property page for a control, you must provide the [PROP_PAGE](http://msdn.microsoft.com/library/2155973e-b96c-4385-bf85-5d6112c969b8) entry in the property map for the control.  
  
## See Also  
 [Property Pages](../../atl/atl-com-property-pages.md)   
 [Fundamentals of ATL COM Objects](../../atl/fundamentals-of-atl-com-objects.md)   
 [Example: Implementing a Property Page](../../atl/example-implementing-a-property-page.md)

