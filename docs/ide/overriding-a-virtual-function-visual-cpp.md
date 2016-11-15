---
title: "Overriding a Virtual Function (Visual C++) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vc.codewiz.virtualfunc.override"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "virtual functions, overriding"
  - "base classes, overriding virtual functions defined in"
  - "Properties window, overriding virtual functions in"
ms.assetid: 2d8c76f2-7a6b-4c9c-8de5-4282ce7755b6
caps.latest.revision: 7
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
# Overriding a Virtual Function (Visual C++)
You can override virtual functions defined in a base class from the Visual Studio [Properties window](/visualstudio/ide/reference/properties-window).  
  
### To override a virtual function in the Properties window  
  
1.  In Class View, click the class.  
  
2.  In the Properties window, click the **Overrides** button.  
  
    > [!NOTE]
    >  The **Overrides** button is available when you select either the class name in Class View or when you click within the source window.  
  
     The left column lists the virtual functions. If the name of a virtual function also appears in the right column, then an override has already been implemented.  
  
3.  If the function has no override, then click the cell in the right column in the Properties window to display the suggested name of the function override as \<add>*FuncName*.  
  
4.  Click the suggested name to add stub code for the function.  
  
5.  To edit an overriding function, double-click the name of the function in Class View and edit the code in the source window.  
  
 To remove an override, click the override function name in the right column and select \<delete>*FuncName*. The function's code is commented out.  
  
## See Also  
 [Adding Functionality with Code Wizards](../ide/adding-functionality-with-code-wizards-cpp.md)   
 [Adding a Class](../ide/adding-a-class-visual-cpp.md)   
 [Adding a Member Function](../ide/adding-a-member-function-visual-cpp.md)   
 [Adding a Member Variable](../ide/adding-a-member-variable-visual-cpp.md)   
 [MFC Message Handler](../mfc/reference/adding-an-mfc-message-handler.md)   
 [Navigating the Class Structure](../ide/navigating-the-class-structure-visual-cpp.md)