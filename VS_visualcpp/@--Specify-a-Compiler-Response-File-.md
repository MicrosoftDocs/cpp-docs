---
title: "@ (Specify a Compiler Response File)"
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
ms.assetid: 400fffee-909d-4f60-bf76-45833e822685
caps.latest.revision: 10
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
# @ (Specify a Compiler Response File)
Specifies a compiler response file.  
  
## Syntax  
  
```  
@response_file  
```  
  
## Arguments  
 `response_file`  
 A text file containing compiler commands.  
  
## Remarks  
 A response file can contain any commands that you would specify on the command line. This can be useful if your command-line arguments exceed 127 characters.  
  
 It is not possible to specify the **@** option from within a response file. That is, a response file cannot embed another response file.  
  
 From the command line you can specify as many response file options (for example, `@respfile.1 @respfile.2`) as you want.  
  
### To set this compiler option in the Visual Studio development environment  
  
-   A response file cannot be specified from within the development environment and must be specified at the command line.  
  
### To set this compiler option programmatically  
  
-   This compiler option cannot be changed programmatically.  
  
## See Also  
 [Compiler Options](../VS_visualcpp/Compiler-Options.md)   
 [Setting Compiler Options](../VS_visualcpp/Setting-Compiler-Options.md)