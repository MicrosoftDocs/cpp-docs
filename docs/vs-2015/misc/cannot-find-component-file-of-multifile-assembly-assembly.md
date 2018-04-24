---
title: "Cannot find component &#39;file&#39; of multifile assembly &#39;assembly&#39; | Microsoft Docs"
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
  - "vs.tasklisterror.cannotfindscattercomponent"
ms.assetid: b21ac9b8-e7fc-4a5c-bfd0-9776c9739d97
caps.latest.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# Cannot find component &#39;file&#39; of multifile assembly &#39;assembly&#39;
One file in a multifile assembly could not be found. A multifile assembly references one or more files, such as modules or resource files.  
  
 The assembly being copied could be a direct reference, visible in the **References** node in Solution Explorer, or it could be an assembly that is a dependency of a direct reference.  
  
 **To correct this error**  
  
-   Reinstall the component.  
  
     The project may build, but it might not run.  
  
## See Also  
 [Troubleshooting Broken References](http://msdn.microsoft.com/library/00a9ade9-652e-40de-8ada-85f63cd183ee)   
 [NIB How to: Add or Remove References By Using the Add Reference Dialog Box](http://msdn.microsoft.com/en-us/3bd75d61-f00c-47c0-86a2-dd1f20e231c9)   
 [Assemblies in the Common Language Runtime](http://msdn.microsoft.com/en-us/33a0bc6a-6bb3-44c7-ada7-4a046e8c0945)