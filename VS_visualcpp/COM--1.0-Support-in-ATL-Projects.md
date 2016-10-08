---
title: "COM+ 1.0 Support in ATL Projects"
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
ms.assetid: 51fb08ac-d632-4657-a4e0-d3f989f0b6f8
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
# COM+ 1.0 Support in ATL Projects
You can use the [ATL Project Wizard](../VS_visualcpp/Creating-an-ATL-Project.md) to create a project with basic support for COM+ 1.0 components.  
  
 COM+ 1.0 is designed for developing distributed component-based applications. It also provides a run-time infrastructure for deploying and managing these applications.  
  
 If you select the **Support COM+ 1.0** check box, the wizard modifies the build script in the link step. Specifically, the COM+ 1.0 project links to the following libraries:  
  
-   comsvcs.lib  
  
-   Mtxguid.lib  
  
 If you select the **Support COM+ 1.0** check box, you can also select **Support component registrar**. The component registrar allows your COM+ 1.0 object to get a list of components, register components, or unregister components (individually or all at once).  
  
## See Also  
 [Fundamentals of ATL COM Objects](../VS_visualcpp/Fundamentals-of-ATL-COM-Objects.md)   
 [Programming with ATL and C Run-Time Code](../VS_visualcpp/Programming-with-ATL-and-C-Run-Time-Code.md)   
 [Default ATL Project Configurations](../VS_visualcpp/Default-ATL-Project-Configurations.md)