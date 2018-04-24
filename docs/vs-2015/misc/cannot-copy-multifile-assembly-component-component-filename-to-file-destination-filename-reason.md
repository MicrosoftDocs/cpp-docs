---
title: "Cannot copy multifile assembly component &#39;component_filename&#39; to file &#39;destination_filename&#39;. &lt;reason.&gt; | Microsoft Docs"
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
  - "vs.tasklisterror.cannotcopyscattercomponent"
ms.assetid: 22f851fc-431b-4cdf-9de1-3a29727fa1e6
caps.latest.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# Cannot copy multifile assembly component &#39;component_filename&#39; to file &#39;destination_filename&#39;. &lt;reason.&gt;
The specified component was not copied to the bin directory.  
  
 Some assemblies consist of multiple files. This diagnostic is displayed whenever a file that is part of a multifile assembly cannot be copied to the run directory.  
  
 There could be several reasons for failure. For example, running out of disk space or reaching the MAX_PATH limit for path lengths. Also, a process, perhaps Visual Studio, might be holding onto the component that cannot be copied.  
  
 **To correct this error**  
  
-   Check for adequate free disk space.  
  
-   Try moving the project to a folder whose path length is less than the path length of the current project folder.  
  
-   Change the output directory to a folder with a smaller absolute path length. This is applicable for client (non-Web) projects only.  
  
-   Restart [!INCLUDE[vsprvs](../includes/vsprvs-md.md)].  
  
## See Also  
 [Debugging Web Applications: Errors and Troubleshooting](http://msdn.microsoft.com/library/63f2742e-2031-48a8-9773-d9b547c62230)