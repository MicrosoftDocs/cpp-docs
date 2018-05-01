---
title: "MSBuild Error MSB3145 | Microsoft Docs"
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
  - "MSBuild.GenerateBootstrapper.InvalidUrl"
helpviewer_keywords: 
  - "MSB3145"
ms.assetid: 183d4e7e-bdc6-402f-a1b6-531505be605f
caps.latest.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# MSBuild Error MSB3145
**MSB3145: Build input parameter '\<property>=\<value>' is not a web url or UNC share.**  
  
 This error occurs when the value of the `SupportUrl`, `ComponentsUrl`, or `ApplicationUrl` project property is not valid. The value must be a valid URI or UNC path.  
  
## See Also  
 [\<PackageFiles> Element](http://msdn.microsoft.com/library/3ea252d7-18a3-47d8-af83-47feebcfe82b)