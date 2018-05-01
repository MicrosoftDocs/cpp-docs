---
title: "Could not create output directory &#39;directory&#39;. &lt;reason&gt; | Microsoft Docs"
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
  - "vs.tasklisterror.cannot_create_output_dir"
ms.assetid: b4d1d19f-f582-49d0-a9a9-d3f4ce0a447b
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# Could not create output directory &#39;directory&#39;. &lt;reason&gt;
The project system could not create a project directory.  
  
 The project system will attempt to create all output directories as soon as the project is opened. The following is a list of the output directories created by the project system:  
  
 *projectfolder*\obj\\`configname`  
 A temporary configuration-specific output directory.  
  
 *projectfolder*\obj\\`configname`\temp  
 Working area used by the compiler.  
  
 *projectfolder*\obj\\`configname`\temppe  
 Temporary assemblies used by designers at design-time are created here.  
  
 outputdir  
 The directory specified by the Output Path property. See [Build Page, Project Designer (C#)](http://msdn.microsoft.com/library/77ff1bfc-d633-4634-ba29-9afdb6d7e362) for more information.  
  
 The most common reason for failing to create one of the directories under the obj folder is exceeding the MAX_PATH limit for directory names.  
  
 Less common reasons will include permission denied and out of disk space.  
  
 **To correct this error**  
  
-   If the path is too long, change the project location or shorten the name of the project configuration.  
  
     The build process will fail if this error occurs.  
  
## See Also  
 [NIB How to: Modify Project Properties and Configuration Settings](http://msdn.microsoft.com/en-us/e7184bc5-2f2b-4b4f-aa9a-3ecfcbc48b67)