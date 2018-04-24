---
title: "The custom tool &#39;custom tool&#39; failed. &lt;reason&gt; | Microsoft Docs"
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
  - "vs.tasklisterror.generator_fail_errorinfo"
ms.assetid: e846b946-a123-49fe-b4bc-a7bbda501417
caps.latest.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# The custom tool &#39;custom tool&#39; failed. &lt;reason&gt;
The custom tool did not run successfully.  
  
 If you encounter an MSDataSetGenerator error when you update projects that contain N-Tier datasets, you must rerun the custom tool after all projects are updated.  
  
 The custom tool 'MSDataSetGenerator' failed. The project specified in the DataSetProject attribute in \<dataset name> must target a version of the .NET Framework that is equal to or later than the current project.  
  
### To correct MSDataSetGenerator errors in N-Tier datasets  
  
-   Right-click the .xsd file in Solution Explorer and then click **Run Custom Tool**.