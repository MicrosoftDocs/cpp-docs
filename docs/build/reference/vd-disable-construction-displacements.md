---
title: "-vd (Disable Construction Displacements) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "/vd"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "-vd0 compiler option [C++]"
  - "vd1 compiler option [C++]"
  - "/vdn (Disable Construction Displacement) compiler option"
  - "constructor displacements"
  - "vtordisp fields"
  - "/vd0 compiler option [C++]"
  - "-vd1 compiler option [C++]"
  - "/vd1 compiler option [C++]"
  - "displacements compiler option"
  - "vd0 compiler option [C++]"
  - "Disable Construction Displacements compiler option"
ms.assetid: 93258964-14d7-4b1c-9cbc-d6f4d74eab69
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
# /vd (Disable Construction Displacements)
## Syntax  
  
```  
/vdn  
```  
  
## Arguments  
 `0`  
 Suppresses the vtordisp constructor/destructor displacement member. Choose this option only if you are certain that all class constructors and destructors call virtual functions virtually.  
  
 `1`  
 Enables the creation of hidden vtordisp constructor/destructor displacement members. This choice is the default.  
  
 `2`  
 Allows you to use [dynamic_cast Operator](../../cpp/dynamic-cast-operator.md) on an object being constructed. For example, a dynamic_cast from a virtual base class to a derived class.  
  
 **/vd2** adds a vtordisp field when you have a virtual base with virtual functions. **/vd1** should be sufficient. The most common case where **/vd2** is necessary is when the only virtual function in your virtual base is a destructor.  
  
## Remarks  
 These options apply only to C++ code that uses virtual bases.  
  
 [!INCLUDE[vcprvc](../../build/includes/vcprvc_md.md)] implements C++ construction displacement support in situations where virtual inheritance is used. Construction displacements solve the problem created when a virtual function, declared in a virtual base and overridden in a derived class, is called from a constructor during construction of a further derived class.  
  
 The problem is that the virtual function may be passed an incorrect `this` pointer as a result of discrepancies between the displacements to the virtual bases of a class and the displacements to its derived classes. The solution provides a single construction displacement adjustment, called a vtordisp field, for each virtual base of a class.  
  
 By default, vtordisp fields are introduced whenever the code defines user-defined constructors and destructors and also overrides virtual functions of virtual bases.  
  
 These options affect entire source files. Use [vtordisp](../../preprocessor/vtordisp.md) to suppress and then re-enable vtordisp fields on a class-by-class basis.  
  
### To set this compiler option in the Visual Studio development environment  
  
1.  Open the project's **Property Pages** dialog box. For details, see [Working with Project Properties](../../ide/working-with-project-properties.md).  
  
2.  Click the **C/C++** folder.  
  
3.  Click the **Command Line** property page.  
  
4.  Type the compiler option in the **Additional Options** box.  
  
### To set this compiler option programmatically  
  
-   See <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.  
  
## See Also  
 [Compiler Options](../../build/reference/compiler-options.md)   
 [Setting Compiler Options](../../build/reference/setting-compiler-options.md)