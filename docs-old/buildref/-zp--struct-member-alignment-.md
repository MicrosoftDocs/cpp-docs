---
title: "-Zp (Struct Member Alignment)"
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
  - "/zp"
  - "VC.Project.VCCLCompilerTool.StructMemberAlignment"
  - "VC.Project.VCCLWCECompilerTool.StructMemberAlignment"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Struct Member Alignment compiler option"
  - "Zp compiler option"
  - "/Zp compiler option [C++]"
  - "-Zp compiler option [C++]"
ms.assetid: 5242f656-ed9b-48a3-bc73-cfcf3ed2520f
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
# /Zp (Struct Member Alignment)
Controls how the members of a structure are packed into memory and specifies the same packing for all structures in a module.  
  
## Syntax  
  
```  
/Zp[1|2|4|8|16]  
```  
  
## Remarks  
 When you specify this option, each structure member after the first is stored on either the size of the member type or `n`-byte boundaries (where `n` is 1, 2, 4, 8, or 16), whichever is smaller.  
  
 The available values are described in the following table.  
  
 1  
 Packs structures on 1-byte boundaries. Same as **/Zp**.  
  
 2  
 Packs structures on 2-byte boundaries.  
  
 4  
 Packs structures on 4-byte boundaries.  
  
 8  
 Packs structures on 8-byte boundaries (default).  
  
 16  
 Packs structures on 16-byte boundaries.  
  
 You should not use this option unless you have specific alignment requirements.  
  
 You can also use [pack](../c/pack.md) to control structure packing. For more information about alignment, see:  
  
-   [align](../cpp/align--c---.md)  
  
-   [__alignof Operator](../cpp/__alignof-operator.md)  
  
-   [__unaligned](../cpp/__unaligned.md)  
  
-   [Examples of Structure Alignment](../build/examples-of-structure-alignment.md) (x64 specific)  
  
### To set this compiler option in the Visual Studio development environment  
  
1.  Open the project's **Property Pages** dialog box. For details, see [How to: Open Project Property Pages](../notintoc/how-to--open-project-property-pages.md).  
  
2.  Click the **C/C++** folder.  
  
3.  Click the **Code Generation** property page.  
  
4.  Modify the **Struct Member Alignment** property.  
  
### To set this compiler option programmatically  
  
-   See \<xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.StructMemberAlignment*>.  
  
## See Also  
 [Compiler Options](../buildref/compiler-options.md)   
 [Setting Compiler Options](../buildref/setting-compiler-options.md)