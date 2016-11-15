---
title: "MSBuild Error MSB3144 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "MSBuild.GenerateBootstrapper.InvalidInput"
helpviewer_keywords: 
  - "MSB3144"
ms.assetid: 955e0db3-afe2-4c03-8e95-3419878374df
caps.latest.revision: 5
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
# MSBuild Error MSB3144
**MSB3144: Not enough data was provided to generate a bootstrapper. Please provide a value for at least one of the parameters: 'ApplicationFile' or 'BootstrapperItems'."**  
  
 This error occurs when not enough data has been provided to generate a bootstrapper. The build process creates an empty bootstrapper with no application installer and no packages.  
  
### To correct this error  
  
-   Provide a value for at least one of the parameters `ApplicationFile` or `BootstrapperItems`.  
  
## See Also  
 [Product and Package Schema Reference](/visualstudio/deployment/product-and-package-schema-reference)