---
title: "-C (Preserve Comments During Preprocessing)"
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
H1: /C (Preserve Comments During Preprocessing)
ms.assetid: 944567ca-16bc-4728-befe-d414a7787f26
caps.latest.revision: 11
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
# -C (Preserve Comments During Preprocessing)
Preserves comments during preprocessing.  
  
## Syntax  
  
```  
/C  
```  
  
## Remarks  
 This compiler option requires the **/E**, **/P**, or **/EP** option.  
  
 The following code sample will display the source code comment.  
  
```  
// C_compiler_option.cpp  
// compile with: /E /C /c  
int i;   // a variable  
```  
  
 This sample will produce the following output.  
  
```  
#line 1 "C_compiler_option.cpp"  
int i;   // a variable  
```  
  
### To set this compiler option in the Visual Studio development environment  
  
1.  Open the project's **Property Pages** dialog box. For details, see [How to: Open Project Property Pages](../Topic/How%20to:%20Open%20Project%20Property%20Pages.md).  
  
2.  Click the **C/C++** folder.  
  
3.  Click the **Preprocessor** property page.  
  
4.  Modify the **Keep Comments** property.  
  
### To set this compiler option programmatically  
  
-   See <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.KeepComments?qualifyHint=False>.  
  
## See Also  
 [Compiler Options](../VS_visualcpp/Compiler-Options.md)   
 [Setting Compiler Options](../VS_visualcpp/Setting-Compiler-Options.md)   
 [/E (Preprocess to stdout)](../VS_visualcpp/-E--Preprocess-to-stdout-.md)   
 [/P (Preprocess to a File)](../VS_visualcpp/-P--Preprocess-to-a-File-.md)   
 [/EP (Preprocess to stdout Without #line Directives)](../VS_visualcpp/-EP--Preprocess-to-stdout-Without-#line-Directives-.md)