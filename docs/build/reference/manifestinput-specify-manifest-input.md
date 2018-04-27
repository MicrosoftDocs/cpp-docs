---
title: "-MANIFESTINPUT (Specify Manifest Input) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-tools"]
ms.topic: "reference"
dev_langs: ["C++"]
ms.assetid: a0b0c21e-1f9b-4d8c-bb3f-178f57fa7f1b
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# /MANIFESTINPUT (Specify Manifest Input)
Specifies a manifest input file to include in the manifest that's embedded in the image.  
  
## Syntax  
  
```  
/MANIFESTINPUT:filename  
```  
  
#### Parameters  
 `filename`  
 The manifest file to include in the embedded manifest.  
  
## Remarks  
 The **/MANIFESTINPUT** option specifies the path of an input file to use to create the embedded manifest in an executable image. If you have multiple manifest input files, use the switch multiple times—once for each input file. The manifest input files are merged to create the embedded manifest. This option requires the **/MANIFEST:EMBED** option.  
  
 This option can’t be set directly in [!INCLUDE[vsprvs](../../assembler/masm/includes/vsprvs_md.md)]. Instead, use the **Additional Manifest Files** property of the project to specify additional manifest files to include. For more information, see [Input and Output, Manifest Tool, Configuration Properties, \<Projectname> Property Pages Dialog Box](../../ide/input-and-output-manifest-tool.md).  
  
## See Also  
 [Setting Linker Options](../../build/reference/setting-linker-options.md)   
 [Linker Options](../../build/reference/linker-options.md)