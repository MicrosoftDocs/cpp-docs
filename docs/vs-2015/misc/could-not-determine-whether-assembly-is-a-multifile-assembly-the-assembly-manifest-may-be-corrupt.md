---
title: "Could not determine whether &#39;assembly&#39; is a multifile assembly. The assembly manifest may be corrupt. | Microsoft Docs"
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
  - "vs.tasklisterror.cannotfindscatterinfo"
ms.assetid: 2d4af6ef-c2f8-4764-af8b-580d433bfbc9
caps.latest.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# Could not determine whether &#39;assembly&#39; is a multifile assembly. The assembly manifest may be corrupt.
The project system was unable to read an assembly referenced by your project such that the project system is unable to determine which files were referenced by the assembly.  
  
 **To correct this error**  
  
-   Reinstall Visual Studio (if the assembly came with [!INCLUDE[vsprvs](../includes/vsprvs-md.md)] or the [!INCLUDE[dnprdnshort](../includes/dnprdnshort-md.md)]).  
  
     \- or -  
  
-   Reinstall the appropriate third-party control.  
  
     This error will not prevent the project from building. However, a run-time error is possible.  
  
## See Also  
 [Troubleshooting Broken References](http://msdn.microsoft.com/library/00a9ade9-652e-40de-8ada-85f63cd183ee)   
 [NIB How to: Add or Remove References By Using the Add Reference Dialog Box](http://msdn.microsoft.com/en-us/3bd75d61-f00c-47c0-86a2-dd1f20e231c9)   
 [Assemblies in the Common Language Runtime](http://msdn.microsoft.com/en-us/33a0bc6a-6bb3-44c7-ada7-4a046e8c0945)