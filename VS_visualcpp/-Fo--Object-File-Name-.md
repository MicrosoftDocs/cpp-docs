---
title: "-Fo (Object File Name)"
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
H1: /Fo (Object File Name)
ms.assetid: 0e6d593e-4e7f-4990-9e6e-92e1dcbcf6e6
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
# -Fo (Object File Name)
Specifies an object (.obj) file name or directory to be used instead of the default.  
  
## Syntax  
  
```  
/Fopathname  
```  
  
## Remarks  
 If you do not use this option, the object file uses the base name of the source file and the .obj extension. You can use any name and extension you want, but the recommended convention is to use .obj.  
  
### To set this compiler option in the Visual Studio development environment  
  
1.  Open the project's **Property Pages** dialog box. For details, see [How to: Open Project Property Pages](../Topic/How%20to:%20Open%20Project%20Property%20Pages.md).  
  
2.  Click the **C/C++** folder.  
  
3.  Click the **Output Files** property page.  
  
4.  Modify the **Object File Name** property.  In the development environment, the object file must have an extension of .obj.  
  
### To set this compiler option programmatically  
  
-   See <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.ObjectFile?qualifyHint=False>.  
  
## Example  
 The following command line creates an object file named THIS.obj in an existing directory, \OBJECT, on drive B.  
  
```  
CL /FoB:\OBJECT\ THIS.C  
```  
  
## See Also  
 [Output-File (/F) Options](../VS_visualcpp/Output-File---F--Options.md)   
 [Compiler Options](../VS_visualcpp/Compiler-Options.md)   
 [Setting Compiler Options](../VS_visualcpp/Setting-Compiler-Options.md)   
 [Specifying the Pathname](../VS_visualcpp/Specifying-the-Pathname.md)