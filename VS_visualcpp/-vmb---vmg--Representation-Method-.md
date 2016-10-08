---
title: "-vmb, -vmg (Representation Method)"
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
H1: /vmb, /vmg (Representation Method)
ms.assetid: ecdb391c-7dab-40b1-916b-673d10889fd4
caps.latest.revision: 9
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
# -vmb, -vmg (Representation Method)
Select the method that the compiler uses to represent pointers to class members.  
  
 Use **/vmb** if you always define a class before you declare a pointer to a member of the class.  
  
 Use **/vmg** to declare a pointer to a member of a class before defining the class. This need can arise if you define members in two different classes that reference each other. For such mutually referencing classes, one class must be referenced before it is defined.  
  
## Syntax  
  
```  
/vmb  
/vmg  
```  
  
## Remarks  
 You can also use [pointers_to_members](../VS_visualcpp/pointers_to_members.md) or [Inheritance Keywords](../VS_visualcpp/Inheritance-Keywords.md) in your code to specify a pointer representation.  
  
### To set this compiler option in the Visual Studio development environment  
  
1.  Open the project's **Property Pages** dialog box. For details, see [How to: Open Project Property Pages](../Topic/How%20to:%20Open%20Project%20Property%20Pages.md).  
  
2.  Click the **C/C++** folder.  
  
3.  Click the **Command Line** property page.  
  
4.  Type the compiler option in the **Additional Options** box.  
  
### To set this compiler option programmatically  
  
-   See <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions?qualifyHint=False>.  
  
## See Also  
 [Compiler Options](../VS_visualcpp/Compiler-Options.md)   
 [Setting Compiler Options](../VS_visualcpp/Setting-Compiler-Options.md)