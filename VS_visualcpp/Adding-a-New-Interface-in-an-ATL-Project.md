---
title: "Adding a New Interface in an ATL Project"
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
ms.assetid: 7d34b023-2c6b-4155-aca3-d47a40968063
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
# Adding a New Interface in an ATL Project
When you add an interface to your object or control, you create stubbed-out functions for each method in that interface. In your object or control, you can add only interfaces currently found in an existing type library. Also, the class in which you add the interface must implement the [BEGIN_COM_MAP](../Topic/BEGIN_COM_MAP.md) macro or, if the project is attributed, it must have the `coclass` attribute.  
  
 You can add a new interface to your control in one of two ways: manually or using code wizards in Class View.  
  
### To use code wizards in Class View to add an interface to an existing object or control  
  
1.  In [Class View](assetId:///8d7430a9-3e33-454c-a9e1-a85e3d2db925), right-click the class name of a control. For example, a full control or composite control, or any other control class that implements a BEGIN_COM_MAP macro in its header file.  
  
2.  On the shortcut menu, click **Add**, and then click **Implement Interface**.  
  
3.  Select the interfaces to implement in the [Implement Interface Wizard](../VS_visualcpp/Implement-Interface-Wizard.md). If the interface does not exist in any available typelib, then you must add it manually to the .idl file.  
  
### To add a new interface manually  
  
1.  Add the definition of your new interface to the .idl file.  
  
2.  Derive your object or control from the interface.  
  
3.  Create a new [COM_INTERFACE_ENTRY](../Topic/COM_INTERFACE_ENTRY%20\(ATL\).md) for the interface or, if the project is attributed, add the `coclass` attribute.  
  
4.  Implement methods on the interface.  
  
## See Also  
 [ATL Project Wizard](../VS_visualcpp/ATL-Project-Wizard.md)   
 [Visual C++ Project Types](../VS_visualcpp/Visual-C---Project-Types.md)   
 [Creating Desktop Projects By Using Application Wizards](../VS_visualcpp/Creating-Desktop-Projects-By-Using-Application-Wizards.md)   
 [Programming with ATL and C Run-Time Code](../VS_visualcpp/Programming-with-ATL-and-C-Run-Time-Code.md)   
 [Fundamentals of ATL COM Objects](../VS_visualcpp/Fundamentals-of-ATL-COM-Objects.md)   
 [Default ATL Project Configurations](../VS_visualcpp/Default-ATL-Project-Configurations.md)