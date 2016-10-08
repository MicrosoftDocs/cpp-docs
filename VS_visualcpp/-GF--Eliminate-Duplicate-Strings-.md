---
title: "-GF (Eliminate Duplicate Strings)"
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
H1: /GF (Eliminate Duplicate Strings)
ms.assetid: bb7b5d1c-8e1f-453b-9298-8fcebf37d16c
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
# -GF (Eliminate Duplicate Strings)
Enables the compiler to create a single copy of identical strings in the program image and in memory during execution. This is an optimization called *string pooling* that can create smaller programs.  
  
## Syntax  
  
```  
/GF  
```  
  
## Remarks  
 If you use **/GF**, the operating system does not swap the string portion of memory and can read the strings back from the image file.  
  
 **/GF** pools strings as read-only. If you try to modify strings under **/GF**, an application error occurs.  
  
 String pooling allows what were intended as multiple pointers to multiple buffers to be multiple pointers to a single buffer. In the following code, `s` and `t` are initialized with the same string. String pooling causes them to point to the same memory:  
  
```  
char *s = "This is a character buffer";  
char *t = "This is a character buffer";  
```  
  
> [!NOTE]
>  The [/ZI](../VS_visualcpp/-Z7---Zi---ZI--Debug-Information-Format-.md) option, used for Edit and Continue, automatically sets the **/GF** option.  
  
> [!NOTE]
>  The **/GF** compiler option creates an addressable section for each unique string. And by default, an object file can contain up to 65,536 addressable sections. If your program contains more than 65,536 strings, use the [/bigobj](../VS_visualcpp/-bigobj--Increase-Number-of-Sections-in-.Obj-file-.md) compiler option to create more sections.  
  
 **/GF** is in effect when [/O1](../VS_visualcpp/-O1---O2--Minimize-Size--Maximize-Speed-.md) or **/O2** is used.  
  
### To set this compiler option in the Visual Studio development environment  
  
1.  Open the project's **Property Pages** dialog box. For details, see [How to: Open Project Property Pages](../Topic/How%20to:%20Open%20Project%20Property%20Pages.md).  
  
2.  Click the **C/C++** folder.  
  
3.  Click the **Code Generation** property page.  
  
4.  Modify the **Enable String Pooling** property.  
  
### To set this compiler option programmatically  
  
-   See <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.StringPooling?qualifyHint=False>.  
  
## See Also  
 [Compiler Options](../VS_visualcpp/Compiler-Options.md)   
 [Setting Compiler Options](../VS_visualcpp/Setting-Compiler-Options.md)