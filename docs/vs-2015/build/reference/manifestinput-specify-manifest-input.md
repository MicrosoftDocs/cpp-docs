---
title: "-MANIFESTINPUT (Specify Manifest Input) | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
ms.assetid: a0b0c21e-1f9b-4d8c-bb3f-178f57fa7f1b
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# /MANIFESTINPUT (Specify Manifest Input)
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [-MANIFESTINPUT (Specify Manifest Input)](https://docs.microsoft.com/cpp/build/reference/manifestinput-specify-manifest-input).  
  
  
Specifies a manifest input file to include in the manifest that's embedded in the image.  
  
## Syntax  
  
```csharp  
/MANIFESTINPUT:filename  
```  
  
#### Parameters  
 `filename`  
 The manifest file to include in the embedded manifest.  
  
## Remarks  
 The **/MANIFESTINPUT** option specifies the path of an input file to use to create the embedded manifest in an executable image. If you have multiple manifest input files, use the switch multiple times—once for each input file. The manifest input files are merged to create the embedded manifest. This option requires the **/MANIFEST:EMBED** option.  
  
 This option can’t be set directly in [!INCLUDE[vsprvs](../../includes/vsprvs-md.md)]. Instead, use the **Additional Manifest Files** property of the project to specify additional manifest files to include. For more information, see [Input and Output, Manifest Tool, Configuration Properties, \<Projectname> Property Pages Dialog Box](../../ide/input-and-output-manifest-tool.md).  
  
## See Also  
 [Setting Linker Options](../../build/reference/setting-linker-options.md)   
 [Linker Options](../../build/reference/linker-options.md)

