---
title: "-Zc:auto (Deduce Variable Type) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "/Zc:auto"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "-Zc compiler options (C++)"
  - "Deduce variable type (C++)"
  - "/Zc compiler options (C++)"
  - "Zc compiler options (C++)"
ms.assetid: 5f5bc102-44c3-4688-bbe1-080594dcee5c
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
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
# /Zc:auto (Deduce Variable Type)
The **/Zc:auto[-]** compiler option tells the compiler how to use the [auto keyword](../../cpp/auto-keyword.md) to declare variables. If you specify the default option, **/Zc:auto**, the compiler deduces the type of the declared variable from its initialization expression. If you specify **/Zc:auto-**, the compiler allocates the variable to the automatic storage class.  
  
## Syntax  
  
```  
/Zc:auto[-]  
```  
  
## Remarks  
 The C++ standard defines an original and a revised meaning for the `auto` keyword. Before [!INCLUDE[cpp_dev10_long](../../build/includes/cpp_dev10_long_md.md)], the keyword declares a variable in the automatic storage class; that is, a variable that has a local lifetime. Starting with [!INCLUDE[cpp_dev10_long](../../build/includes/cpp_dev10_long_md.md)], the keyword deduces the type of a variable from the declaration's initialization expression. Use the **/Zc:auto[-]** compiler option to tell the compiler to use the original or revised meaning of the `auto` keyword.  
  
 The compiler issues an appropriate diagnostic message if your use of the `auto` keyword contradicts the current compiler option. For more information, see [auto Keyword](../../cpp/auto-keyword.md). For more information about conformance issues with Visual C++, see [Nonstandard Behavior](../../cpp/nonstandard-behavior.md).  
  
### To set this compiler option in Visual Studio  
  
1.  Open the project's **Property Pages** dialog box. For details, see [Working with Project Properties](../../ide/working-with-project-properties.md).  
  
2.  Click the **Configuration Properties** node.  
  
3.  Click the **C/C++** node.  
  
4.  Click the **Command Line** node.  
  
5.  Add **/Zc:auto** or **/Zc:auto-** to the **Additional options:** pane.  
  
## See Also  
 [/Zc (Conformance)](../../build/reference/zc-conformance.md)   
 [auto Keyword](../../cpp/auto-keyword.md)