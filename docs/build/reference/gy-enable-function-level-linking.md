---
title: "-Gy (Enable Function-Level Linking) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "VC.Project.VCCLCompilerTool.EnableFunctionLevelLinking"
  - "/gy"
  - "VC.Project.VCCLWCECompilerTool.EnableFunctionLevelLinking"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "enable function-level linking compiler option [C++]"
  - "COMDAT function"
  - "Gy compiler option [C++]"
  - "-Gy compiler option [C++]"
  - "/Gy compiler option [C++]"
  - "packaged functions"
ms.assetid: 0d3cf14c-ed7d-4ad3-b4b6-104e56f61046
caps.latest.revision: 17
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
# /Gy (Enable Function-Level Linking)
Allows the compiler to package individual functions in the form of packaged functions (COMDATs).  
  
## Syntax  
  
```  
/Gy[-]  
```  
  
## Remarks  
 The linker requires that functions be packaged separately as COMDATs to exclude or order individual functions in a DLL or .exe file.  
  
 You can use the linker option [/OPT (Optimizations)](../../build/reference/opt-optimizations.md) to exclude unreferenced packaged functions from the .exe file.  
  
 You can use the linker option [/ORDER (Put Functions in Order)](../../build/reference/order-put-functions-in-order.md) to include packaged functions in a specified order in the .exe file.  
  
 Inline functions are always packaged if they are instantiated as calls (which occurs, for example, if inlining is off or you take a function address). In addition, C++ member functions defined in the class declaration are automatically packaged; other functions are not, and selecting this option is required to compile them as packaged functions.  
  
> [!NOTE]
>  The [/ZI](../../build/reference/z7-zi-zi-debug-information-format.md) option, used for Edit and Continue, automatically sets the **/Gy** option.  
  
### To set this compiler option in the Visual Studio development environment  
  
1.  Open the project's **Property Pages** dialog box. For details, see [Working with Project Properties](../../ide/working-with-project-properties.md).  
  
2.  Click the **C/C++** folder.  
  
3.  Click the **Code Generation** property page.  
  
4.  Modify the **Enable Function-Level Linking** property.  
  
### To set this compiler option programmatically  
  
-   See <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.EnableFunctionLevelLinking%2A>.  
  
## See Also  
 [Compiler Options](../../build/reference/compiler-options.md)   
 [Setting Compiler Options](../../build/reference/setting-compiler-options.md)