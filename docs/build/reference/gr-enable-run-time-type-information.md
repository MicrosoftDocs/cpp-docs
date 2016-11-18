---
title: "-GR (Enable Run-Time Type Information) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "/gr"
  - "VC.Project.VCCLWCECompilerTool.RuntimeTypeInfo"
  - "VC.Project.VCCLCompilerTool.RuntimeTypeInfo"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "-Gr compiler option [C++]"
  - "Gr compiler option [C++]"
  - "RTTI compiler option"
  - "/Gr compiler option [C++]"
  - "enable run-time type information compiler option [C++]"
ms.assetid: d1f9f850-dcec-49fd-96ef-e72d01148906
caps.latest.revision: 18
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
# /GR (Enable Run-Time Type Information)
Adds code to check object types at run time.  
  
## Syntax  
  
```  
/GR[-]  
```  
  
## Remarks  
 When **/GR** is on, the compiler defines the `_CPPRTTI` preprocessor macro. By default, **/GR** is on. **/GR-** disables run-time type information.  
  
 Use **/GR** if the compiler cannot statically resolve an object type in your code. You usually need the **/GR** option when your code uses [dynamic_cast Operator](../../cpp/dynamic-cast-operator.md) or [typeid](../../cpp/typeid-operator.md). However, **/GR** increases the size of the .rdata sections of your image. If your code does not use **dynamic_cast** or **typeid**, **/GR-** may produce a smaller image.  
  
 For more information about run-time type checking, see [Run-Time Type Information](../../cpp/run-time-type-information.md) in the *C++ Language Reference*.  
  
### To set this compiler option in the Visual Studio development environment  
  
1.  Open the project's **Property Pages** dialog box. For details, see [Working with Project Properties](../../ide/working-with-project-properties.md).  
  
2.  Click the **C/C++** folder.  
  
3.  Click the **Language** property page.  
  
4.  Modify the **Enable Run-Time Type Info** property.  
  
### To set this compiler option programmatically  
  
-   See <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.RuntimeTypeInfo%2A>.  
  
## See Also  
 [Compiler Options](../../build/reference/compiler-options.md)   
 [Setting Compiler Options](../../build/reference/setting-compiler-options.md)