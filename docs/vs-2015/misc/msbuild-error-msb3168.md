---
title: "MSBuild Error MSB3168 | Microsoft Docs"
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
  - "MSBuild.GenerateBootstrapper.DuplicateItems"
helpviewer_keywords: 
  - "MSB3168"
ms.assetid: b918c903-0030-4d87-a6ff-d8515a6f2228
caps.latest.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# MSBuild Error MSB3168
**MSB3168: Duplicate item '\<package>' will be ignored.**  
  
 This warning occurs if you have specified that the bootstrapper should install two identical bootstrapper packages. In this case, the bootstrapper will install only one instance.  
  
### To correct this error  
  
-   For more information about the cause and possible resolutions of an MSBuild error, see [Additional Resources](http://msdn.microsoft.com/library/29dd85ee-1530-43c1-b085-bb2330ac5a48).