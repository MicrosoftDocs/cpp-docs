---
title: "Type-Safe Access to Controls in a Dialog Box"
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
ms.topic: article
ms.assetid: 67021025-dd93-4d6a-8bed-a1348fe50685
caps.latest.revision: 7
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
# Type-Safe Access to Controls in a Dialog Box
The controls in a dialog box can use the interfaces of MFC control classes such as `CListBox` and `CEdit`. You can create a control object and attach it to a dialog control. Then you can access the control through its class interface, calling member functions to operate on the control. The methods described here are designed to give you type-safe access to a control. This is especially useful for controls such as edit boxes and list boxes.  
  
 There are two approaches to making a connection between a control in a dialog box and a C++ control member variable in a `CDialog`-derived class:  
  
-   [Without Code Wizards](../VS_visualcpp/Type-Safe-Access-to-Controls-Without-Code-Wizards.md)  
  
-   [With Code Wizards](../VS_visualcpp/Type-Safe-Access-to-Controls-With-Code-Wizards.md)  
  
## See Also  
 [Dialog Boxes](../VS_visualcpp/Dialog-Boxes.md)