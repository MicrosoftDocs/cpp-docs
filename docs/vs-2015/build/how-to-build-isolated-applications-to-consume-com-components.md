---
title: "How to: Build Isolated Applications to Consume COM Components | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "isolated applications [C++]"
ms.assetid: 04587547-1174-44ab-bd99-1292358fba20
caps.latest.revision: 14
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# How to: Build Isolated Applications to Consume COM Components
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [How to: Build Isolated Applications to Consume COM Components](https://docs.microsoft.com/cpp/build/how-to-build-isolated-applications-to-consume-com-components).  
  
  
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
 [Isolated Applications](http://msdn.microsoft.com/library/aa375190)   
 [Side-by-side Assemblies](_win32_side_by_side_assemblies)
