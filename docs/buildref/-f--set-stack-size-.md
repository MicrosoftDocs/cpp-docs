---
title: "-F (Set Stack Size)"
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
  - "/f"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "set stack size compiler option"
  - "F compiler option [C++]"
  - "-F compiler option [C++]"
  - "/F compiler option [C++]"
  - "stack, setting size"
ms.assetid: 17320b6f-8305-445b-9ec2-75833f4b29e0
caps.latest.revision: 11
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
# /F (Set Stack Size)
Sets the program stack size in bytes.  
  
## Syntax  
  
```  
/F number  
```  
  
## Arguments  
 `number`  
 The stack size in bytes.  
  
## Remarks  
 Without this option the stack size defaults to 1 MB. The `number` argument can be in decimal or C-language notation. The argument can range from 1 to the maximum stack size accepted by the linker. The linker rounds up the specified value to the nearest 4 bytes. The space between **/F** and `number`is optional.  
  
 You may need to increase the stack size if your program gets stack-overflow messages.  
  
 You can also set the stack size by:  
  
-   Using the **/STACK** linker option. For more information, see [/STACK](../buildref/-stack.md).  
  
-   Using EDITBIN on the .exe file. For more information, see [EDITBIN Reference](../buildref/editbin-reference.md).  
  
### To set this compiler option in the Visual Studio development environment  
  
1.  Open the project's **Property Pages** dialog box. For details, see [How to: Open Project Property Pages](../notintoc/how-to--open-project-property-pages.md).  
  
2.  Click the **C/C++** folder.  
  
3.  Click the **Command Line** property page.  
  
4.  Type the compiler option in the **Additional Options** box.  
  
### To set this compiler option programmatically  
  
-   See \<xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions*>.  
  
## See Also  
 [Compiler Options](../buildref/compiler-options.md)   
 [Setting Compiler Options](../buildref/setting-compiler-options.md)