---
title: "Could not find dependent assemblies for assembly &#39;assembly&#39;. The assembly manifest may be corrupt."
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
  - "vs.tasklisterror.cannotfinddependencies"
ms.assetid: 6d6e6dda-6cec-49d0-9659-63dfdbd7d247
caps.latest.revision: 8
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
# Could not find dependent assemblies for assembly &#39;assembly&#39;. The assembly manifest may be corrupt.
The project system was unable to read an assembly referenced by your project such that the project system is unable to determine the dependencies of the assembly. This error will not prevent the project from building. However, a run-time error is possible.  
  
 **To correct this error**  
  
-   Reinstall Visual Studio (if the assembly came with [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] or the [!INCLUDE[dnprdnshort](../error-messages/tool-errors/includes/dnprdnshort_md.md)]).  
  
     \- or -  
  
-   Reinstall the appropriate third-party control.  
  
## See Also  
 [Troubleshooting Broken References](../Topic/Troubleshooting%20Broken%20References.md)   
 [NIB How to: Add or Remove References By Using the Add Reference Dialog Box](http://msdn.microsoft.com/en-us/3bd75d61-f00c-47c0-86a2-dd1f20e231c9)   
 [Assemblies in the Common Language Runtime](http://msdn.microsoft.com/en-us/33a0bc6a-6bb3-44c7-ada7-4a046e8c0945)