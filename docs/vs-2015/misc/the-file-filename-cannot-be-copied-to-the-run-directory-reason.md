---
title: "The file &#39;filename&#39; cannot be copied to the run directory. &lt;reason&gt; | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vs.tasklisterror.cant_copy_to_run_dir"
ms.assetid: 80474e62-7cef-48e9-a7c0-820345d5b591
caps.latest.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# The file &#39;filename&#39; cannot be copied to the run directory. &lt;reason&gt;
This error is displayed when:  
  
-   A reference that has the `CopyLocal` property (see the Properties window when the reference is selected in Solution Explorer) set to `true` could not be copied to the directory from which the project is being run.  
  
-   A dependency of a reference with a `CopyLocal` property set to `true` could not be copied to the directory from which the project is being run.  
  
-   Any other file that needed to be copied locally cannot be copied to the directory from which the project is being run.  
  
 Most commonly, the `reason` cited at the end of the error message will report that the file is in use by another process. It is likely that the file is locked by something else within [!INCLUDE[vsprvs](../includes/vsprvs-md.md)].  
  
 There may be a problem associated with building projects into the same output directory. In this case, build the two projects to different directories. When building into different directories, the project system copies all dependent assemblies into a project's output directory.  
  
 Adding the output of any project you are working on as a Toolbox item will cause the managed designers to lock the reference.  
  
 The project system will not be able to update the output directory if the output is currently running.  
  
 **To correct this error**  
  
-   Check your computer's available disk space  
  
-   Check whether you are hitting the MAX_PATH limit imposed by the file system  
  
     The situation will not prevent the project from building. However, it may prevent the project from running correctly, because this warning indicates that a private copy of a referenced assembly could not be updated correctly. Although the project may appear to run, you may get a type load exceptions or other unexpected behavior when executing certain code paths.  
  
## See Also  
 [NIB: How to: Set the Copy Local Property of a Reference](http://msdn.microsoft.com/en-us/dfe2ba13-f27f-4356-a481-ea67d5acacbd)