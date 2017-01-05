---
title: "Adding a New Interface in an ATL Project | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "vc.appwiz.ATL.interface"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "interfaces, adding to ATL objects"
  - "Implement Interface ATL wizard"
  - "controls [ATL], interfaces"
  - "ATL projects, adding interfaces"
ms.assetid: 7d34b023-2c6b-4155-aca3-d47a40968063
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
# Adding a New Interface in an ATL Project
When you add an interface to your object or control, you create stubbed-out functions for each method in that interface. In your object or control, you can add only interfaces currently found in an existing type library. Also, the class in which you add the interface must implement the [BEGIN_COM_MAP](http://msdn.microsoft.com/library/ead2a1e3-334d-44ad-bb1f-b94bb14c2333) macro or, if the project is attributed, it must have the `coclass` attribute.  
  
 You can add a new interface to your control in one of two ways: manually or using code wizards in Class View.  
  
### To use code wizards in Class View to add an interface to an existing object or control  
  
1.  In [Class View](http://msdn.microsoft.com/en-us/8d7430a9-3e33-454c-a9e1-a85e3d2db925), right-click the class name of a control. For example, a full control or composite control, or any other control class that implements a BEGIN_COM_MAP macro in its header file.  
  
2.  On the shortcut menu, click **Add**, and then click **Implement Interface**.  
  
3.  Select the interfaces to implement in the [Implement Interface Wizard](../../ide/implement-interface-wizard.md). If the interface does not exist in any available typelib, then you must add it manually to the .idl file.  
  
### To add a new interface manually  
  
1.  Add the definition of your new interface to the .idl file.  
  
2.  Derive your object or control from the interface.  
  
3.  Create a new [COM_INTERFACE_ENTRY](http://msdn.microsoft.com/library/c5363b8b-a1a2-471e-ad3a-d472f6c356c5) for the interface or, if the project is attributed, add the `coclass` attribute.  
  
4.  Implement methods on the interface.  
  
## See Also  
 [ATL Project Wizard](../../atl/reference/atl-project-wizard.md)   
 [Visual C++ Project Types](../../ide/visual-cpp-project-types.md)   
 [Creating Desktop Projects By Using Application Wizards](../../ide/creating-desktop-projects-by-using-application-wizards.md)   
 [Programming with ATL and C Run-Time Code](../../atl/programming-with-atl-and-c-run-time-code.md)   
 [Fundamentals of ATL COM Objects](../../atl/fundamentals-of-atl-com-objects.md)   
 [Default ATL Project Configurations](../../atl/reference/default-atl-project-configurations.md)

