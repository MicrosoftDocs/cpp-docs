---
title: "Overriding a Virtual Function (Visual C++)"
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
ms.assetid: 2d8c76f2-7a6b-4c9c-8de5-4282ce7755b6
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
# Overriding a Virtual Function (Visual C++)
You can override virtual functions defined in a base class from the Visual Studio [Properties window](../Topic/Properties%20Window.md).  
  
### To override a virtual function in the Properties window  
  
1.  In Class View, click the class.  
  
2.  In the Properties window, click the **Overrides** button.  
  
    > [!NOTE]
    >  The **Overrides** button is available when you select either the class name in Class View or when you click within the source window.  
  
     The left column lists the virtual functions. If the name of a virtual function also appears in the right column, then an override has already been implemented.  
  
3.  If the function has no override, then click the cell in the right column in the Properties window to display the suggested name of the function override as <add\>*FuncName*.  
  
4.  Click the suggested name to add stub code for the function.  
  
5.  To edit an overriding function, double-click the name of the function in Class View and edit the code in the source window.  
  
 To remove an override, click the override function name in the right column and select <delete\>*FuncName*. The function's code is commented out.  
  
## See Also  
 [Adding Functionality with Code Wizards](../VS_visualcpp/Adding-Functionality-with-Code-Wizards--C---.md)   
 [Adding a Class](../VS_visualcpp/Adding-a-Class--Visual-C---.md)   
 [Adding a Member Function](../VS_visualcpp/Adding-a-Member-Function--Visual-C---.md)   
 [Adding a Member Variable](../VS_visualcpp/Adding-a-Member-Variable---Visual-C---.md)   
 [MFC Message Handler](../VS_visualcpp/Adding-an-MFC-Message-Handler.md)   
 [Navigating the Class Structure](../VS_visualcpp/Navigating-the-Class-Structure--Visual-C---.md)