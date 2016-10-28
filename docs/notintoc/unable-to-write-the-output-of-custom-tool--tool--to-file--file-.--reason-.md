---
title: "Unable to write the output of custom tool &#39;tool&#39; to file &#39;file&#39;. &lt;reason&gt;"
ms.custom: na
ms.date: "10/13/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: na
ms.topic: "article"
f1_keywords: 
  - "vs.tasklisterror.cannot_write_gen_output"
ms.assetid: eafcee9e-186b-4019-9042-8d8f9fc0925a
caps.latest.revision: 7
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
# Unable to write the output of custom tool &#39;tool&#39; to file &#39;file&#39;. &lt;reason&gt;
The project system could not write the output of the custom tool to the specified file.  
  
 Provided that the file name of a custom tool's input remains unchanged, the output from a custom tool is written to the same file. This error occurs if the generated output is locked on disk.  
  
 **To correct this error**  
  
-   Restart [!INCLUDE[vsprvs](../build/includes/vsprvs_md.md)] and rerun the custom tool by right-clicking the affected file and selecting **Run Custom Tool** from the shortcut menu.  
  
     The generated file is probably out-of-date, because the project system could not update it.