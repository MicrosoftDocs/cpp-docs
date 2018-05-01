---
title: "MSBuild Error MSB3151 | Microsoft Docs"
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
  - "MSBuild.GenerateBootstrapper.IncludedProductIncluded"
helpviewer_keywords: 
  - "MSB3151"
ms.assetid: e4766734-2e90-436e-850b-a8a9da535dee
caps.latest.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# MSBuild Error MSB3151
**MSB3151: Item '\<package>' already includes '\<package>'.**  
  
 This warning occurs when you have selected two bootstrapper packages, and one package is included in the other (for example, selecting the included package is redundant).  
  
### To correct this error  
  
-   Clear the check box for the redundantly included package.