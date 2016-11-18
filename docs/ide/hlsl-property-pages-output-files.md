---
title: "HLSL Property Pages: Output Files | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "VC.Project.FXCompilerTool.AssemblerOutput"
  - "VC.Project.FXCompilerTool.ObjectFileOutput"
  - "VC.Project.FXCompilerTool.HeaderFileOutput"
  - "VC.Project.FXCompilerTool.VariableName"
  - "VC.Project.FXCompilerTool.AssemblerOutputFile"
dev_langs: 
  - "C++"
ms.assetid: c5ba1e72-30de-43eb-a15a-5b0ae58e55c2
caps.latest.revision: 5
author: "BrianPeek"
ms.author: "brpeek"
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
# HLSL Property Pages: Output Files
To configure the following properties of the HLSL compiler (fxc.exe), use its **Output Files** property. For information about how to access the **Output Files** property page in the HLSL folder, see [Working with Project Properties](../ide/working-with-project-properties.md).  
  
## UIElement List  
 **Header Variable Name**  
 Specifies the name of an array that is used to encoded HLSL object code. The array is contained in a header file that is output by the HLSL compiler. The name of the header file is specified by the **Header File Name** property.  
  
 This property corresponds to the **/Vn[name]** command-line argument.  
  
 **Header File Name**  
 Specifies the name of the header file that is output by the HLSL compiler. The header contains HLSL object code that is encoded into an array. The name of the array is specified by the **Header Variable Name** property.  
  
 This property corresponds to the **/Fh[name]** command-line argument.  
  
 **Object File Name**  
 Specifies the name of the object file that is output by the HLSL compiler. By default, the value is **$(OutDir)%(Filename).cso**.  
  
 This property corresponds to the **/Fo[name]** command-line argument.  
  
 **Assembler Output**  
 **Assembly-Only Listing (/Fc)** to output just assembly language statements. **Assembly Code and Hex (/Fx)** to output both assembly language statements and the corresponding op-code in hexadecimal. By default, no listing is output.  
  
 **Assembler Output File**  
 Specifies the name of the assembly listing file that is output by the HLSL compiler.  
  
 This property corresponds to the **/Fc[name]** and **/Fx [name]** command-line arguments.  
  
## See Also  
 [HLSL Property Pages](../ide/hlsl-property-pages.md)   
 [HLSL Property Pages: General](../ide/hlsl-property-pages-general.md)   
 [HLSL Property Pages: Advanced](../ide/hlsl-property-pages-advanced.md)