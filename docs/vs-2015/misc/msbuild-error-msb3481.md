---
title: "MSBuild Error MSB3481 | Microsoft Docs"
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
  - "MSBuild.SignFile.CertNotInStore"
helpviewer_keywords: 
  - "MSB3481"
ms.assetid: 55f99775-3bd5-4e1b-b184-c6405d75e8ff
caps.latest.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# MSBuild Error MSB3481
**MSB3481: The signing certificate could not be located. Ensure that it is in the current user's personal store.**  
  
 This error is generated when the signing certificate was not found in your personal certificate store. This error is similar to [MSBuild Error MSB3486](../misc/msbuild-error-msb3486.md), which means that the certificate was found, but does not match.  
  
### To correct this error  
  
-   Make sure that a valid certificate that matches your project's .pfx file is in your personal certificate store.  
  
## See Also  
 [\<PackageFiles> Element](http://msdn.microsoft.com/library/3ea252d7-18a3-47d8-af83-47feebcfe82b)