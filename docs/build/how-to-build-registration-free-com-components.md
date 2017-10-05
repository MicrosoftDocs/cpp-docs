---
title: "How to: Build Registration-Free COM Components | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-tools"]
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: ["C++"]
helpviewer_keywords: ["COM components, registration-free"]
ms.assetid: 7e585d6a-0314-45b2-8f1b-cae9ac4df037
caps.latest.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# How to: Build Registration-Free COM Components
Registration-free COM components are COM components that have manifests built into the DLLs.  
  
### To build manifests into COM components  
  
1.  Open the project property pages for the COM component.  
  
2.  Expand the **Configuration Properties** node, and then expand the **Manifest Tool** node.  
  
3.  Select the **Input and Output** property page, and then set the **Embed Manifest** property equal to **Yes**.  
  
4.  Click **OK**.  
  
5.  Build the solution.  
  
## See Also  
 [Isolated Applications](http://msdn.microsoft.com/library/aa375190)   
 [About Side-by-Side Assemblies](http://msdn.microsoft.com/library/ff951640)   
 [How to: Build Isolated Applications to Consume COM Components](../build/how-to-build-isolated-applications-to-consume-com-components.md)