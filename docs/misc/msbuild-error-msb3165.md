---
title: "MSBuild Error MSB3165 | Microsoft Docs"
ms.custom: ""
ms.date: "10/29/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vsdeploy.chm:13165"
  - "MSBuild.GenerateBootstrapper.DifferingPublicKeys"
helpviewer_keywords: 
  - "MSB3165"
ms.assetid: 2f50462e-947d-4211-b197-e58eddcfd373
caps.latest.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
translation.priority.ht: 
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "ru-ru"
  - "zh-cn"
  - "zh-tw"
translation.priority.mt: 
  - "cs-cz"
  - "pl-pl"
  - "pt-br"
  - "tr-tr"
---
# MSBuild Error MSB3165
**MSB3165: The value of the '\<public key>' attribute in '\<package>' does not match that of file '\<file>'.**  
  
 This warning occurs when the public key specified in the bootstrapper package file does not match the signature of the redistributable package on disk, or the redistributable package is not signed. The build will take the public key value of that on disk if it is signed, or take the hash of the redistributable package on disk if it is not signed.  
  
## See Also  
 [\<PackageFiles> Element](../Topic/%3CPackageFiles%3E%20Element%20\(Bootstrapper\).md)   
 [Product and Package Schema Reference](/visual-studio/deployment/product-and-package-schema-reference)