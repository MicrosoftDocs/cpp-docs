---
title: "-INCLUDE (Force Symbol References)"
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
H1: /INCLUDE (Force Symbol References)
ms.assetid: 4a039677-360a-480f-bd0b-448e239b449c
caps.latest.revision: 8
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
# -INCLUDE (Force Symbol References)
```  
/INCLUDE:symbol  
```  
  
## Remarks  
 where:  
  
 `symbol`  
 Specifies a symbol to be added to the symbol table.  
  
## Remarks  
 The /INCLUDE option tells the linker to add a specified symbol to the symbol table.  
  
 To specify multiple symbols, type a comma (,), a semicolon (;), or a space between the symbol names. On the command line, specify /INCLUDE:`symbol` once for each symbol.  
  
 The linker resolves `symbol` by adding the object that contains the symbol definition to the program. This feature is useful for including a library object that otherwise would not be linked to the program.  
  
 Specifying a symbol with this option overrides the removal of that symbol by [/OPT:REF](../VS_visualcpp/-OPT--Optimizations-.md).  
  
### To set this linker option in the Visual Studio development environment  
  
1.  Open the project's **Property Pages** dialog box. For details, see [Setting Visual C++ Project Properties](../VS_visualcpp/Working-with-Project-Properties.md).  
  
2.  Click the **Linker** folder.  
  
3.  Click the **Input** property page.  
  
4.  Modify the **Force Symbol References** property.  
  
### To set this linker option programmatically  
  
-   See <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.ForceSymbolReferences?qualifyHint=False>.  
  
## See Also  
 [Setting Linker Options](../VS_visualcpp/Setting-Linker-Options.md)   
 [Linker Options](../VS_visualcpp/Linker-Options.md)