---
title: "Inferred Dependents | Microsoft Docs"
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
  - "inferred dependents in NMAKE"
  - "dependents, inferred"
ms.assetid: 9303045c-69b3-4f35-bffc-19d5cd6ea3c3
caps.latest.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Inferred Dependents
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [Inferred Dependents](https://docs.microsoft.com/cpp/build/inferred-dependents).  
  
  
An inferred dependent is derived from an inference rule and is evaluated before explicit dependents. If an inferred dependent is out-of-date with respect to its target, NMAKE invokes the commands block for the dependency. If an inferred dependent does not exist or is out-of-date with respect to its own dependents, NMAKE first updates the inferred dependent. For more information about inferred dependents, see [Inference Rules](../build/inference-rules.md).  
  
## See Also  
 [Dependents](../build/dependents.md)

