---
title: "-doc (Process Documentation Comments) (C-C++)"
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
H1: /doc (Process Documentation Comments) (C/C++)
ms.assetid: b54f7e2c-f28f-4f46-9ed6-0db09be2cc63
caps.latest.revision: 17
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
# -doc (Process Documentation Comments) (C-C++)
Causes the compiler to process documentation comments in source code files and to create an .xdc file for each source code file that has documentation comments.  
  
## Syntax  
  
```  
/doc[name]  
```  
  
## Arguments  
 `name`  
 The name of the .xdc file that the compiler will create. Only valid when one .cpp file is passed in the compilation.  
  
## Remarks  
 The .xdc files are processed into an .xml file with xdcmake.exe. For more information, see [XDCMake Reference](../VS_visualcpp/XDCMake-Reference.md).  
  
 You can add documentation comments to your source code files. For more information, see [Recommended Tags for Documentation Comments](../VS_visualcpp/Recommended-Tags-for-Documentation-Comments--Visual-C---.md).  
  
 **/doc** is not compatible with **/clr:oldSyntax**.  See [/clr (Common Language Runtime Compilation)](../VS_visualcpp/-clr--Common-Language-Runtime-Compilation-.md) for more information.  
  
 To use the generated .xml file with IntelliSense, make the file name of the .xml file the same as the assembly that you want to support and put the .xml file is in the same directory as the assembly. When the assembly is referenced in the Visual Studio project, the .xml file is also found. For more information, see [Using IntelliSense](../Topic/Using%20IntelliSense.md) and [Supplying XML Code Comments](../Topic/Supplying%20XML%20Code%20Comments.md).  
  
### To set this compiler option in the Visual Studio development environment  
  
1.  Open the project's **Property Pages** dialog box. For details, see [How to: Open Project Property Pages](../Topic/How%20to:%20Open%20Project%20Property%20Pages.md).  
  
2.  Expand the **Configuration Properties** node.  
  
3.  Expand the **C/C++** node.  
  
4.  Select the **Output Files** property page.  
  
5.  Modify the **Generate XML Documentation Files** property.  
  
### To set this linker option programmatically  
  
1.  See <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.GenerateXMLDocumentationFiles?qualifyHint=False>.  
  
## See Also  
 [Compiler Options](../VS_visualcpp/Compiler-Options.md)   
 [Setting Compiler Options](../VS_visualcpp/Setting-Compiler-Options.md)