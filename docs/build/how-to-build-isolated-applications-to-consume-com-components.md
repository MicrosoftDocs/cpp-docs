---
title: "How to: Build Isolated Applications to Consume COM Components | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-tools"]
ms.topic: "conceptual"
dev_langs: ["C++"]
helpviewer_keywords: ["isolated applications [C++]"]
ms.assetid: 04587547-1174-44ab-bd99-1292358fba20
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# How to: Build Isolated Applications to Consume COM Components
Isolated applications are applications that have manifests built into the program. You can create isolated applications to consume COM components.  
  
### To add COM references to manifests of isolated applications  
  
1.  Open the project property pages for the isolated application.  
  
2.  Expand the **Configuration Properties** node, and then expand the **Manifest Tool** node.  
  
3.  Select the **Isolated COM** property page, and then set the **Component File Name** property to the name of the COM component that you want the isolated application to consume.  
  
4.  Click **OK**.  
  
### To build manifests into isolated applications  
  
1.  Open the project property pages for the isolated application.  
  
2.  Expand the **Configuration Properties** node, and then expand the **Manifest Tool** node.  
  
3.  Select the **Input and Output** property page, and then set the **Embed Manifest** property equal to **Yes**.  
  
4.  Click **OK**.  
  
5.  Build the solution.  
  
## See Also  
 [Isolated Applications](https://msdn.microsoft.com/library/aa375190)   
 [About Side-by-Side Assemblies](https://msdn.microsoft.com/library/ff951640)