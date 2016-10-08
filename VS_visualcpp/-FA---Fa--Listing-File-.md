---
title: "-FA, -Fa (Listing File)"
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
H1: /FA, /Fa (Listing File)
ms.assetid: c7507d0e-c69d-44f9-b8e2-d2c398697402
caps.latest.revision: 12
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
# -FA, -Fa (Listing File)
Creates a listing file containing assembly code.  
  
## Syntax  
  
```  
/FA[c|s|u]  
/Fapathname  
```  
  
## Remarks  
 The arguments control the generation of source code and machine code and the extension of the listing file.  
  
 The following table describes the various values to **/FA**. It is possible to specify more than one value to **/FA**. For example, you can specify **/FAsu**.  
  
|Option|Listing contents and file extension|  
|------------|-----------------------------------------|  
|**/FA**|Assembly code; .asm|  
|**/FAc**|Machine and assembly code; .cod|  
|**/FAs**|Source and assembly code; .asm<br /><br /> If **/FAcs** is specified, the file extension will be .cod|  
|**/FAu**|Causes the output file to be created in UTF-8 format, with a byte order marker. By default, the file encoding is ANSI, but use **/FAu** if you want a listing file that displays correctly on any system, or if you are using Unicode source code files as input to the compiler.<br /><br /> If **/FAsu** is specified, and if a source code file uses Unicode encoding other than UTF-8, then the code lines in the .asm file may not display correctly.|  
  
 By default, the listing file gets the same base name as the source file. You can change the name of the listing file and the directory where it is created using the **/Fa** option.  
  
|/Fa usage|Result|  
|----------------|------------|  
|**/Fa**|One *source_file*.asm is created for each source code file in the compilation.|  
|**/Fa** *filename*|*filename*.asm is placed in the current directory. Only valid when compiling a single source code file.|  
|**/Fa** *filename.extension*|*filename.extension* is placed in the current directory. Only valid when compiling a single source code file.|  
|**/Fa** *directory*\|One *source_file*.asm is created and placed in the specified *directory* for each source code file in the compilation. Note the required trailing backslash. Only paths on the current disk are allowed.|  
|**/Fa** *directory*\\*filename*|*filename*.asm is placed in the specified `directory`. Only valid when compiling a single source code file.|  
|**/Fa** *directory*\\*filename.extension*|*filename.extension* is placed in the specified `directory`. Only valid when compiling a single source code file.|  
  
### To set this compiler option in the Visual Studio development environment  
  
1.  Open the project's **Property Pages** dialog box. For details, see [Setting Visual C++ Project Properties](../VS_visualcpp/Working-with-Project-Properties.md).  
  
2.  Click the **C/C++** folder.  
  
3.  Click the **Output Files** property page.  
  
4.  Modify the **ASM List Location** (**/Fa**) or **Assembler Output** (**/FA**) property (**/FAu** must be specified in the **Command Line** property page, **Additional Options** box..  
  
### To set this compiler option programmatically  
  
-   See <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AssemblerListingLocation?qualifyHint=False> or <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AssemblerOutput?qualifyHint=False>. To specify **/FAu**, see <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions?qualifyHint=False>.  
  
## Example  
 The following command line produces a combined source and machine-code listing called HELLO.cod:  
  
```  
CL /FAcs HELLO.CPP  
```  
  
## See Also  
 [Output-File (/F) Options](../VS_visualcpp/Output-File---F--Options.md)   
 [Compiler Options](../VS_visualcpp/Compiler-Options.md)   
 [Setting Compiler Options](../VS_visualcpp/Setting-Compiler-Options.md)   
 [Specifying the Pathname](../VS_visualcpp/Specifying-the-Pathname.md)