---
title: "-link (Pass Options to Linker) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "/link"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "/link compiler option [C++]"
  - "pass options to linker"
  - "link compiler option [C++]"
  - "linker [C++], passing options to"
  - "-link compiler option [C++]"
  - "cl.exe compiler [C++], passing options to linker"
ms.assetid: 16902a94-c094-4328-841f-3ac94ca04848
caps.latest.revision: 9
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
# /link (Pass Options to Linker)
Passes one or more linker options to the linker.  
  
## Syntax  
  
```  
/link linkeroptions  
```  
  
## Arguments  
 `linkeroptions`  
 The linker option or options to be passed to the linker.  
  
## Remarks  
 The **/link** option and its linker options must appear after any file names and CL options. A space is required between **/link** and `linkeroptions`. For more information, see [Setting Linker Options](../../build/reference/setting-linker-options.md).  
  
### To set this compiler option in the Visual Studio development environment  
  
1.  Open the project's **Property Pages** dialog box. For details, see [Working with Project Properties](../../ide/working-with-project-properties.md).  
  
2.  Click the **Linker** folder.  
  
3.  Click a linker property page.  
  
4.  Modify one or more properties.  
  
### To set this compiler option programmatically  
  
-   This compiler option cannot be changed programmatically.  
  
## See Also  
 [Compiler Options](../../build/reference/compiler-options.md)   
 [Setting Compiler Options](../../build/reference/setting-compiler-options.md)