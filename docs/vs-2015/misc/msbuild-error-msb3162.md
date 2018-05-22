---
title: "MSBuild Error MSB3162 | Microsoft Docs"
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
  - "MSBuild.GenerateBootstrapper.DependencyNotFound"
helpviewer_keywords: 
  - "MSB3162"
ms.assetid: 35189e5d-c065-4d57-bf78-6433771a5063
caps.latest.revision: 4
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# MSBuild Error MSB3162
**MSB3162: Item '\<package>' could not find dependent item '\<package>'.**  
  
 This error occurs when one bootstrapper package depends on another, but the manifest for the dependent bootstrapper prerequisite cannot be found.