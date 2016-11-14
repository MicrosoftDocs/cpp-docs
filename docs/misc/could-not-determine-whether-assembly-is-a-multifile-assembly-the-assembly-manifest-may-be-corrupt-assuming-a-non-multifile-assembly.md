---
title: "Could not determine whether &#39;assembly&#39; is a multifile assembly. The assembly manifest may be corrupt. Assuming a non-multifile assembly. | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vs.tasklisterror.unknownscatterstatusforcopy"
ms.assetid: be49d3f2-b091-488c-8579-e27ef09d9c80
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
# Could not determine whether &#39;assembly&#39; is a multifile assembly. The assembly manifest may be corrupt. Assuming a non-multifile assembly.
The project system was unable to read an assembly referenced by your project, such that the project system is unable to determine whether you are referencing a multifile assembly. Therefore, the assembly may not be copied properly to the output directory.  
  
 **To correct this error**  
  
-   Reinstall [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] (if the assembly came with [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] or the .NET Framework).  
  
     \- or -  
  
-   Reinstall the appropriate third-party control.  
  
     This error will not prevent the project from building. However, a run-time error is possible.  
  
## See Also  
 [Troubleshooting Broken References](/visual-studio/ide/troubleshooting-broken-references)   
 [NIB How to: Add or Remove References By Using the Add Reference Dialog Box](http://msdn.microsoft.com/en-us/3bd75d61-f00c-47c0-86a2-dd1f20e231c9)   
 [Assemblies in the Common Language Runtime](http://msdn.microsoft.com/en-us/33a0bc6a-6bb3-44c7-ada7-4a046e8c0945)