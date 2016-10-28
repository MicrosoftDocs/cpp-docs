---
title: "-Zm (Specify Precompiled Header Memory Allocation Limit)"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "article"
f1_keywords: 
  - "/zm"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "PCH files, memory allocation limit"
  - "Zm compiler option [C++]"
  - "/Zm compiler option [C++]"
  - "precompiled header files, memory allocation limit"
  - "Specify Precompiled Header Memory Allocation Limit compiler option"
  - "cl.exe compiler, memory allocation limit"
  - ".pch files, memory allocation limit"
  - "memory allocation, Memory Allocation Limit compiler option"
  - "-Zm compiler option [C++]"
ms.assetid: 94c77d5e-6672-46a7-92e0-3f69e277727d
caps.latest.revision: 16
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
# /Zm (Specify Precompiled Header Memory Allocation Limit)
Determines the amount of memory that the compiler allocates to construct precompiled headers.  
  
## Syntax  
  
```  
/Zmfactor  
```  
  
## Arguments  
 `factor`  
 A scaling factor that determines the amount of memory that the compiler uses to construct precompiled headers.  
  
 The `factor` argument is a percentage of the default size of a compiler-defined work buffer. The default value of `factor` is 100 (percent), but you can specify larger or smaller amounts.  
  
## Remarks  
 In earlier versions of Visual C++, the compiler used several discrete heaps, and each had a finite limit. Currently, the compiler dynamically grows the heaps as necessary up to a total heap size limit, and requires a fixed-size buffer only to construct precompiled headers. Consequently, the **/Zm** compiler option is rarely necessary.  
  
 If the compiler runs out of heap space and emits the [C1060](../compilererrors1/fatal-error-c1060.md) error message when you use the **/Zm** compiler option, you might have reserved too much memory. Consider removing the **/Zm** option. If the compiler emits the [C1076](../compilererrors1/fatal-error-c1076.md) error message, an accompanying [C3859](../compilererrors2/compiler-error-c3859.md) message specifies the `factor` argument to use when you recompile by using the **/Zm** compiler option.  
  
 The following table shows how the `factor` argument affects the memory allocation limit if you assume the size of the default precompiled header buffer is 75 MB.  
  
|Value of `factor`|Memory allocation limit|  
|-----------------------|-----------------------------|  
|10|7.5 MB|  
|100|75 MB|  
|200|150 MB|  
|1000|750 MB|  
|2000|1500 MB|  
  
## Other Ways to Set the Memory Allocation Limit  
  
#### To set the /Zm compiler option in the Visual Studio development environment  
  
1.  Open the project's **Property Pages** dialog box. For details, see [How to: Open Project Property Pages](../notintoc/how-to--open-project-property-pages.md).  
  
2.  In the navigation pane, select **Configuration Properties**, **C/C++**, **Command Line**.  
  
3.  Enter the **/Zm** compiler option in the **Additional Options** box.  
  
#### To set the /Zm compiler option programmatically  
  
-   See \<xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions*>.  
  
## See Also  
 [Compiler Options](../buildref/compiler-options.md)   
 [Setting Compiler Options](../buildref/setting-compiler-options.md)