---
title: "-MANIFESTINPUT (Specify Manifest Input)"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
H1: /MANIFESTINPUT (Specify Manifest Input)
ms.assetid: a0b0c21e-1f9b-4d8c-bb3f-178f57fa7f1b
caps.latest.revision: 5
manager: ghogen
translation.priority.ht: 
  - cs-cz
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - pl-pl
  - pt-br
  - ru-ru
  - tr-tr
  - zh-cn
  - zh-tw
---
# -MANIFESTINPUT (Specify Manifest Input)
Specifies a manifest input file to include in the manifest that's embedded in the image.  
  
## Syntax  
  
```c#  
/MANIFESTINPUT:filename  
```  
  
#### Parameters  
 `filename`  
 The manifest file to include in the embedded manifest.  
  
## Remarks  
 The **/MANIFESTINPUT** option specifies the path of an input file to use to create the embedded manifest in an executable image. If you have multiple manifest input files, use the switch multiple times—once for each input file. The manifest input files are merged to create the embedded manifest. This option requires the **/MANIFEST:EMBED** option.  
  
 This option can’t be set directly in Visual Studio. Instead, use the **Additional Manifest Files** property of the project to specify additional manifest files to include. For more information, see [Input and Output, Manifest Tool, Configuration Properties, <Projectname\> Property Pages Dialog Box](../VS_visualcpp/Input-and-Output--Manifest-Tool--Configuration-Properties---Projectname--Property-Pages-Dialog-Box.md).  
  
## See Also  
 [Setting Linker Options](../VS_visualcpp/Setting-Linker-Options.md)   
 [Linker Options](../VS_visualcpp/Linker-Options.md)