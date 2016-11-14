---
title: "Invalid assembly strong name or name not specified | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vs.tasklisterror.invalid_strong_name"
ms.assetid: cb02b69d-09a9-478f-914c-fbdc420e973d
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
# Invalid assembly strong name or name not specified
The project property in the project system's object model that lets you specify a keyname or key container for projects that will be built into assemblies with a strong name (signed assembly) was blank. The build will not succeed if this message is displayed.  
  
### To correct this error  
  
1.  Ensure that either a key container name or a key file is specified in code.  
  
## See Also  
 [Creating and Using Strong-Named Assemblies](../Topic/Creating%20and%20Using%20Strong-Named%20Assemblies.md)