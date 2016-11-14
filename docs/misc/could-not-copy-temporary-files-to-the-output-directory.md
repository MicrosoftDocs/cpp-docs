---
title: "Could not copy temporary files to the output directory | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vs.tasklisterror.cannot_copy_to_run_dir"
ms.assetid: b8b54984-74c9-4b9b-8164-d0d13c141055
caps.latest.revision: 12
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
translation.priority.ht: 
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "ru-ru"
  - "zh-cn"
  - "zh-tw"
translation.priority.mt: 
  - "cs-cz"
  - "pl-pl"
  - "pt-br"
  - "tr-tr"
---
# Could not copy temporary files to the output directory
The project system could not copy temporary files to the output directory. Compilers always build to intermediate directories, for example, obj\\`configname`. At the conclusion of the build process, the project system copies the files from the intermediate directory into the project output directory.  
  
 This problem may occur when one of the assemblies that you compile is larger than 64 kilobytes (KB) and one (or both) of the following conditions is true:  
  
-   Your solution contains projects that are compiled to the same output folder.  
  
-   The Copy Local property on one of the referenced assemblies or projects is set to False.  
  
 **To correct this error**  
  
-   Compile the outputs for individual projects to different folders.  
  
-   Set the Copy Local property for the referenced assembly or project to True.  
  
-   Verify that you do not have the Object Browser window open.  
  
-   Verify that you do not have the same project (or projects) open in another instance of [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)].  
  
## See Also  
 [NIB: How to: Set the Copy Local Property of a Reference](http://msdn.microsoft.com/en-us/dfe2ba13-f27f-4356-a481-ea67d5acacbd)