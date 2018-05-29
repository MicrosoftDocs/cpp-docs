---
title: "Inferred Dependents | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-tools"]
ms.topic: "conceptual"
dev_langs: ["C++"]
helpviewer_keywords: ["inferred dependents in NMAKE", "dependents, inferred"]
ms.assetid: 9303045c-69b3-4f35-bffc-19d5cd6ea3c3
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Inferred Dependents
An inferred dependent is derived from an inference rule and is evaluated before explicit dependents. If an inferred dependent is out-of-date with respect to its target, NMAKE invokes the commands block for the dependency. If an inferred dependent does not exist or is out-of-date with respect to its own dependents, NMAKE first updates the inferred dependent. For more information about inferred dependents, see [Inference Rules](../build/inference-rules.md).  
  
## See Also  
 [Dependents](../build/dependents.md)