---
title: "Satellite build for culture &#39;culture&#39; failed. &lt;reason&gt;"
ms.custom: ""
ms.date: "10/20/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vs.tasklisterror.satellite_build_failed"
ms.assetid: c97c589f-cf4d-4f6b-941a-7526a1091fce
caps.latest.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
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
# Satellite build for culture &#39;culture&#39; failed. &lt;reason&gt;
A satellite assembly for a particular culture could not be built. This error will cause the build process to fail.  
  
 This error can appear for two reasons:  
  
1.  ALINK.EXE is not installed on the system.  
  
2.  ALINK.EXE failed but did not return any extended error information.  
  
 **To correct this error**  
  
-   Reinstall [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] or just the [!INCLUDE[dnprdnshort](../error-messages/tool-errors/includes/dnprdnshort_md.md)].  
  
-   When \<reason> is reported as "The assembly linker could not be launched. The file exists," empty the Temp folder in which the files are generated (for example, C:\Documents and Settings\\<user\>\Local Settings\Temp).  
  
## See Also  
 [Al.exe (Assembly Linker)](../Topic/Al.exe%20\(Assembly%20Linker\).md)