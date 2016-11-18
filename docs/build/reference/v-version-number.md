---
title: "-V (Version Number) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "/v"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "embedding version strings"
  - "/V compiler option [C++]"
  - "version numbers, specifying for .obj"
  - "V compiler option [C++]"
  - "-V compiler option [C++]"
ms.assetid: 3e93fb7a-5dfd-49a6-bd49-3dca8052e0f3
caps.latest.revision: 14
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
# /V (Version Number)
Embeds a text stringin the .obj file. Deprecated.  
  
## Syntax  
  
```  
/Vstring  
```  
  
## Arguments  
 `string`  
 A string specifying the version number or copyright notice to be embedded in an .obj file.  
  
## Remarks  
 The stringcan label an .obj file with a version number or a copyright notice. Any space or tab characters must be enclosed in double quotation marks (") if they are a part of the string. A backslash (\\) must precede any double quotation marks if they are a part of the string. A space between **/V** and `string` is optional.  
  
 You can also use [comment (C/C++)](../../preprocessor/comment-c-cpp.md) with the compiler comment-type argument to place the name and version number of the compiler in the .obj file.  
  
 **/V** is deprecated; **/V** was primarily used to support building virtual device drivers (VxDs), and building VxDs is no longer supported by the [!INCLUDE[vcprvc](../../build/includes/vcprvc_md.md)] toolset. For more information, see [Deprecated Compiler Options in Visual C++ 2005](http://msdn.microsoft.com/en-us/aa59fce3-50b8-4f66-9aeb-ce09a7a84cce).  
  
### To set this compiler option in the Visual Studio development environment  
  
1.  Open the project's **Property Pages** dialog box. For details, see [Working with Project Properties](../../ide/working-with-project-properties.md).  
  
2.  Click the **C/C++** folder.  
  
3.  Click the **Command Line** property page.  
  
4.  Type the compiler option in the **Additional Options** box.  
  
### To set this compiler option programmatically  
  
-   See <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.  
  
## See Also  
 [Compiler Options](../../build/reference/compiler-options.md)   
 [Setting Compiler Options](../../build/reference/setting-compiler-options.md)