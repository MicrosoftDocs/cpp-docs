---
title: "-FA, -Fa (Listing File) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "VC.Project.VCCLWCECompilerTool.AssemblerListingLocation"
  - "VC.Project.VCCLCompilerTool.ConfigureASMListing"
  - "VC.Project.VCCLWCECompilerTool.AssemblerOutput"
  - "VC.Project.VCCLCompilerTool.AssemblerListingLocation"
  - "/fa"
  - "VC.Project.VCCLCompilerTool.AssemblerOutput"
  - "VC.Project.VCCLCompilerTool.UseUnicodeForAssemblerListing"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "FA compiler option [C++]"
  - "/FA compiler option [C++]"
  - "-FA compiler option [C++]"
  - "listing file type"
  - "assembly-only listing"
ms.assetid: c7507d0e-c69d-44f9-b8e2-d2c398697402
caps.latest.revision: 12
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
---
# /FA, /Fa (Listing File)
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
  
1.  Open the project's **Property Pages** dialog box. For details, see [Setting Visual C++ Project Properties](../../ide/working-with-project-properties.md).  
  
2.  Click the **C/C++** folder.  
  
3.  Click the **Output Files** property page.  
  
4.  Modify the **ASM List Location** (**/Fa**) or **Assembler Output** (**/FA**) property (**/FAu** must be specified in the **Command Line** property page, **Additional Options** box..  
  
### To set this compiler option programmatically  
  
-   See <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AssemblerListingLocation%2A> or <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AssemblerOutput%2A>. To specify **/FAu**, see <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.  
  
## Example  
 The following command line produces a combined source and machine-code listing called HELLO.cod:  
  
```  
CL /FAcs HELLO.CPP  
```  
  
## See Also  
 [Output-File (/F) Options](../../build/reference/output-file-f-options.md)   
 [Compiler Options](../../build/reference/compiler-options.md)   
 [Setting Compiler Options](../../build/reference/setting-compiler-options.md)   
 [Specifying the Pathname](../../build/reference/specifying-the-pathname.md)