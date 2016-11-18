---
title: "-E (Preprocess to stdout) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "/e"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "-E compiler option [C++]"
  - "/E compiler option [C++]"
  - "preprocessor output, copy to stdout"
  - "preprocessor output"
ms.assetid: ddbb1725-d950-4978-ab2f-30a5cd7b778c
caps.latest.revision: 10
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
# /E (Preprocess to stdout)
Preprocesses C and C++ source files and copies the preprocessed files to the standard output device.  
  
## Syntax  
  
```  
/E  
```  
  
## Remarks  
 In this process, all preprocessor directives are carried out, macro expansions are performed, and comments are removed. To preserve comments in the preprocessed output, use the [/C (Preserve Comments During Preprocessing)](../../build/reference/c-preserve-comments-during-preprocessing.md) compiler option as well.  
  
 **/E** adds `#line` directives to the output at the beginning and end of each included file and around lines removed by preprocessor directives for conditional compilation. These directives renumber the lines of the preprocessed file. As a result, errors generated during later stages of processing refer to the line numbers of the original source file rather than lines in the preprocessed file.  
  
 The **/E** option suppresses compilation. You must resubmit the preprocessed file for compilation. **/E** also suppresses the output files from the **/FA**, **/Fa**, and **/Fm** options. For more information, see [/FA, /Fa (Listing File)](../../build/reference/fa-fa-listing-file.md) and [/Fm (Name Mapfile)](../../build/reference/fm-name-mapfile.md).  
  
 To suppress `#line` directives, use the [/EP (Preprocess to stdout Without #line Directives)](../../build/reference/ep-preprocess-to-stdout-without-hash-line-directives.md) option instead.  
  
 To send the preprocessed output to a file instead of to `stdout`, use the [/P (Preprocess to a File)](../../build/reference/p-preprocess-to-a-file.md) option instead.  
  
 To suppress `#line` directives and send the preprocessed output to a file, use **/P** and **/EP** together.  
  
 You cannot use precompiled headers with the **/E** option.  
  
 Note that when preprocessing to a separate file, spaces are not emitted after tokens. This can result in an illegal program or have unintended side effects. The following program compiles successfully:  
  
```  
#define m(x) x  
m(int)main( )  
{  
   return 0;  
}  
```  
  
 However, if you compile with:  
  
```  
cl -E test.cpp > test2.cpp  
```  
  
 `int main` in test2.cpp will incorrectly be `intmain`.  
  
### To set this compiler option in the Visual Studio development environment  
  
1.  Open the project's **Property Pages** dialog box. For details, see [Working with Project Properties](../../ide/working-with-project-properties.md).  
  
2.  Click the **C/C++** folder.  
  
3.  Click the **Command Line** property page.  
  
4.  Type the compiler option in the **Additional Options**box.  
  
### To set this compiler option programmatically  
  
-   See <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.GeneratePreprocessedFile%2A>.  
  
## Example  
 The following command line preprocesses `ADD.C`, preserves comments, adds `#line` directives, and displays the result on the standard output device:  
  
```  
CL /E /C ADD.C  
```  
  
## See Also  
 [Compiler Options](../../build/reference/compiler-options.md)   
 [Setting Compiler Options](../../build/reference/setting-compiler-options.md)