---
title: "MSBuild Error MSB3163 | Microsoft Docs"
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
  - "MSBuild.GenerateBootstrapper.InvalidComponentsLocation"
helpviewer_keywords: 
  - "MSB3163"
ms.assetid: 35c5efbf-2fd7-478c-bb8e-3c4eabb3e4d4
caps.latest.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# MSBuild Error MSB3163
**MSB3163: Build input parameter 'ComponentsLocation='\<ComponentsLocation>'' is not valid. The value must be one of 'HomeSite', 'Relative', or 'Absolute'. Defaulting to 'HomeSite'.**  
  
 This error occurs when the specified value for the `ComponentsLocation` property (the location from which prerequisites are installed) is invalid. `ComponentsLocation` should be one of three values: `HomeSite`, `Relative`, or `Absolute`.  
  
## See Also  
 [\<PackageFiles> Element](http://msdn.microsoft.com/library/3ea252d7-18a3-47d8-af83-47feebcfe82b)