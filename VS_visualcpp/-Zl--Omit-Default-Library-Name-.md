---
title: "-Zl (Omit Default Library Name)"
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
H1: /Zl (Omit Default Library Name)
ms.assetid: b27d39d0-44d6-498c-84ae-27c1326fee59
caps.latest.revision: 14
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
# -Zl (Omit Default Library Name)
Omits the default C runtime library name from the .obj file. By default, the compiler puts the name of the library into the .obj file to direct the linker to the correct library.  
  
## Syntax  
  
```  
/Zl  
```  
  
## Remarks  
 For more information on the default library, see [Use Run-Time Library](../VS_visualcpp/-MD---MT---LD--Use-Run-Time-Library-.md).  
  
 You can use **/Zl** to compile .obj files you plan to put into a library. Although omitting the library name saves only a small amount of space for a single .obj file, the total space saved is significant in a library that contains many object modules.  
  
 This option is an advanced option. Setting this option removes certain C Runtime library support that may be required by your application, resulting in link-time errors if your application depends on this support. If you use this option you must provide the required components in some other way.  
  
 Use [/NODEFAULTLIB (Ignore Libraries)](../VS_visualcpp/-NODEFAULTLIB--Ignore-Libraries-.md). to direct the linker to ignore library references in all .obj files.  
  
 For more information, see [CRT Library Features](../VS_visualcpp/CRT-Library-Features.md).  
  
 When compiling with **/Zl**, `_VC_NODEFAULTLIB` is defined.  For example:  
  
```  
// vc_nodefaultlib.cpp  
// compile with: /Zl  
void Test() {  
   #ifdef _VC_NODEFAULTLIB  
      int i;  
   #endif  
  
   int i;   // C2086  
}  
```  
  
### To set this compiler option in the Visual Studio development environment  
  
1.  Open the project's **Property Pages** dialog box. For details, see [How to: Open Project Property Pages](../Topic/How%20to:%20Open%20Project%20Property%20Pages.md).  
  
2.  Click the **C/C++** folder.  
  
3.  Click the **Advanced** property page.  
  
4.  Modify the **Omit Default Library Names** property.  
  
### To set this compiler option programmatically  
  
-   See <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.OmitDefaultLibName?qualifyHint=False>.  
  
## See Also  
 [Compiler Options](../VS_visualcpp/Compiler-Options.md)   
 [Setting Compiler Options](../VS_visualcpp/Setting-Compiler-Options.md)