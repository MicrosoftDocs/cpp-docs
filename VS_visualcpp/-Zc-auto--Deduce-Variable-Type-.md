---
title: "-Zc:auto (Deduce Variable Type)"
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
H1: /Zc:auto (Deduce Variable Type)
ms.assetid: 5f5bc102-44c3-4688-bbe1-080594dcee5c
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
# -Zc:auto (Deduce Variable Type)
The **/Zc:auto[-]** compiler option tells the compiler how to use the [auto keyword](../VS_visualcpp/auto-Keyword.md) to declare variables. If you specify the default option, **/Zc:auto**, the compiler deduces the type of the declared variable from its initialization expression. If you specify **/Zc:auto-**, the compiler allocates the variable to the automatic storage class.  
  
## Syntax  
  
```  
/Zc:auto[-]  
```  
  
## Remarks  
 The C++ standard defines an original and a revised meaning for the `auto` keyword. Before Visual C++ 2010, the keyword declares a variable in the automatic storage class; that is, a variable that has a local lifetime. Starting with Visual C++ 2010, the keyword deduces the type of a variable from the declaration's initialization expression. Use the **/Zc:auto[-]** compiler option to tell the compiler to use the original or revised meaning of the `auto` keyword.  
  
 The compiler issues an appropriate diagnostic message if your use of the `auto` keyword contradicts the current compiler option. For more information, see [auto Keyword](../VS_visualcpp/auto-Keyword.md). For more information about conformance issues with Visual C++, see [Nonstandard Behavior](../VS_visualcpp/Nonstandard-Behavior.md).  
  
### To set this compiler option in Visual Studio  
  
1.  Open the project's **Property Pages** dialog box. For details, see [Working with Project Properties](../VS_visualcpp/Working-with-Project-Properties.md).  
  
2.  Click the **Configuration Properties** node.  
  
3.  Click the **C/C++** node.  
  
4.  Click the **Command Line** node.  
  
5.  Add **/Zc:auto** or **/Zc:auto-** to the **Additional options:** pane.  
  
## See Also  
 [/Zc (Conformance)](../VS_visualcpp/-Zc--Conformance-.md)   
 [auto Keyword](../VS_visualcpp/auto-Keyword.md)