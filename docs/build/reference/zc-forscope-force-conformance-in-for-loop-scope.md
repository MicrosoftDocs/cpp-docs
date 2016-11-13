---
title: "-Zc:forScope (Force Conformance in for Loop Scope) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "VC.Project.VCCLCompilerTool.ForceConformanceInForLoopScope"
  - "VC.Project.VCCLWCECompilerTool.ForceConformanceInForLoopScope"
  - "/zc:forScope"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "/Zc compiler options [C++]"
  - "-Zc compiler options [C++]"
  - "Conformance compiler options"
  - "Zc compiler options [C++]"
ms.assetid: 3031f02d-3b14-4ad0-869e-22b0110c3aed
caps.latest.revision: 15
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
translation.priority.ht: 
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "ru-ru"
  - "zh-cn"
  - "zh-tw"
translation.priority.mt: 
  - "cs-cz"
  - "pl-pl"
  - "pt-br"
  - "tr-tr"
---
# /Zc:forScope (Force Conformance in for Loop Scope)
Used to implement standard C++ behavior for [for](../../cpp/for-statement-cpp.md) loops with Microsoft extensions ([/Ze](../../build/reference/za-ze-disable-language-extensions.md)).  **/Zc:forScope** is on by default.  
  
## Syntax  
  
```  
/Zc:forScope[-]  
```  
  
## Remarks  
 The **/Zc:forScope-** option is deprecated and will be removed in a future release. Use of **/Zc:forScope-** generates deprecation warning D9035.  
  
 Standard behavior is to let a **for** loop's initializer go out of scope after the **for** loop. Under **/Zc:forScope-** and [/Ze](../../build/reference/za-ze-disable-language-extensions.md), the **for** loop's initializer remains in scope until the local scope ends.  
  
 The following code compiles under **/Ze** but not under **/Za**:  
  
```cpp  
// zc_forScope.cpp  
// compile by using: cl /Zc:forScope- /Za zc_forScope.cpp  
// C2065, D9035 expected  
int main() {  
    // Compile by using cl /Zc:forScope- zc_forScope.cpp  
    // to compile this non-standard code as-is.  
    // Uncomment the following line to resolve C2065 for /Za.  
    // int i;  
    for (int i = 0; i < 1; i++)  
        ;  
    i = 20;   // i has already gone out of scope under /Za  
}  
```  
  
 If you use **/Zc:forScope-**, warning C4288 (off by default) is generated if a variable is in scope because of a declaration that was made in a previous scope. To demonstrate this, remove the `//` characters in the example code to declare `int i`.  
  
 You can modify the run-time behavior of **/Zc:forScope** by using the [conform](../../preprocessor/conform.md) pragma.  
  
 If you use **/Zc:forScope-** in a project that has an existing .pch file, a warning is generated, **/Zc:forScope-** is ignored, and compilation continues by using the existing .pch files. If you want a new .pch file generated, use [/Yc (Create Precompiled Header File)](../../build/reference/yc-create-precompiled-header-file.md).  
  
 For more information about conformance issues in Visual C++, see [Nonstandard Behavior](../../cpp/nonstandard-behavior.md).  
  
### To set this compiler option in the Visual Studio development environment  
  
1.  Open the project's **Property Pages** dialog box. For details, see [Working with Project Properties](../../ide/working-with-project-properties.md).  
  
2.  In the navigation pane, open the **Configuration Properties**, **C/C++**, **Language** property page.  
  
3.  Modify the **Force Conformance in For Loop Scope** property.  
  
### To set this compiler option programmatically  
  
-   See <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.ForceConformanceInForLoopScope%2A>.  
  
## See Also  
 [/Zc (Conformance)](../../build/reference/zc-conformance.md)   
 [/Za, /Ze (Disable Language Extensions)](../../build/reference/za-ze-disable-language-extensions.md)