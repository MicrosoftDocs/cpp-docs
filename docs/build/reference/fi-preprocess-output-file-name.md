---
title: "-Fi (Preprocess Output File Name) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "/Fi"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Fi compiler option (C++)"
  - "-Fi compiler option (C++)"
  - "/Fi compiler option (C++)"
  - "preprocessing output files, file name"
ms.assetid: 6d0ba983-a8b7-41ec-84f5-b4688ef8efee
caps.latest.revision: 5
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
# /Fi (Preprocess Output File Name)
Specifies the name of the output file to which the [/P (Preprocess to a File)](../../build/reference/p-preprocess-to-a-file.md) compiler option writes preprocessed output.  
  
## Syntax  
  
```  
/Fipathname  
```  
  
#### Parameters  
  
|Parameter|Description|  
|---------------|-----------------|  
|`pathname`|The name and path of the output file produced by the **/P** compiler option.|  
  
## Remarks  
 Use the **/Fi** compiler option in combination with the **/P** compiler option.  
  
 If you specify only a path for the `pathname` parameter, the base name of the source file is used as the base name of the preprocessed output file. The `pathname` parameter does not require a particular file name extension. However, an extension of ".i" is used if you do not specify a file name extension.  
  
## Example  
 The following command line preprocesses PROGRAM.cpp, preserves comments, adds [#line](../../preprocessor/hash-line-directive-c-cpp.md) directives, and writes the result to the MYPROCESS.i file.  
  
```  
CL /P /FiMYPROCESS.I PROGRAM.CPP  
```  
  
## See Also  
 [Compiler Options](../../build/reference/compiler-options.md)   
 [/P (Preprocess to a File)](../../build/reference/p-preprocess-to-a-file.md)   
 [Specifying the Pathname](../../build/reference/specifying-the-pathname.md)