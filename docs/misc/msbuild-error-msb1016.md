---
title: "MSBuild Error MSB1016"
ms.custom: ""
ms.date: "10/19/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "MSBuild.MissingVerbosityError"
helpviewer_keywords: 
  - "MSB1016"
ms.assetid: 967a9757-0513-48ae-bf1d-b1b019993c70
caps.latest.revision: 7
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
# MSBuild Error MSB1016
**Specify the verbosity level.**  
  
 A verbosity level must be specified for the **/verbosity** switch.  
  
### To correct this error  
  
1.  Specify the verbosity level using the format `/verbosity:<level>`. The available verbosity levels are: q[uiet], m[inimal], n[ormal], d[etailed], and diag[nostic], for example, `/verbosity:quiet`, `/verbosity:q`, or `/v:q`  
  
## See Also  
 [Command-Line Reference](../Topic/MSBuild%20Command-Line%20Reference.md)