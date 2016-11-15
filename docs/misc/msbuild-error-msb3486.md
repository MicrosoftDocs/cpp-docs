---
title: "MSBuild Error MSB3486 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "MSBuild.SignFile.CertificateError"
helpviewer_keywords: 
  - "MSB3486"
ms.assetid: 75d03d8e-3a28-4010-b602-61fe037dec74
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
# MSBuild Error MSB3486
**MSB3486: Cannot get certificate from store '\<certificate store>'.**  
  
 The `ResolveKeySource` MSBuild task generates this error when the certificate matching the thumbprint of your project's .pfx file is not found in your personal certificate store.  
  
### To correct this error  
  
-   Make sure that the thumbprint of your project's .pfx file matches that of the certificate in your personal certificate store.  
  
## See Also  
 [\<PackageFiles> Element](http://msdn.microsoft.com/Library/3ea252d7-18a3-47d8-af83-47feebcfe82b)