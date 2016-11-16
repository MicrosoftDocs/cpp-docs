---
title: "MSBuild Error MSB3149 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "MSBuild.GenerateBootstrapper.NoResources"
helpviewer_keywords: 
  - "MSB3149"
ms.assetid: 63857405-d420-457d-9ba7-80e1a2a9dcb7
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
# MSBuild Error MSB3149
**MSB3149: No resources available for building a bootstrapper.**  
  
 This error occurs when no bootstrapper resource files (setup.xml) could be found which matched any culture.  
  
### To correct this error  
  
-   Go to **Control Panel**, select **Add or Remove Programs**, and repair the Visual Studio SDK, or copy the files to the appropriate directory (\<SDK install path>\bootstrapper\engine\\<culture\>\setup.xml).  
  
## See Also  
 [Product and Package Schema Reference](/visualstudio/deployment/product-and-package-schema-reference)