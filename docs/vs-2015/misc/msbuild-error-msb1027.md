---
title: "MSBuild Error MSB1027 | Microsoft Docs"
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
  - "MSBuild.CannotAutoDisableAutoResponseFile"
helpviewer_keywords: 
  - "MSB1027"
ms.assetid: 2ef8d643-616c-4608-be76-5c2c8e18a9e7
caps.latest.revision: 4
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# MSBuild Error MSB1027
**The /noautoresponse switch cannot be specified in the MSBuild.rsp auto-response file, nor in any response file that is referenced by the auto-response file.**  
  
 The **/noautoresponse** switch was found inside either the MSBuild.rsp file, or in another response file included by the MSBuild.rsp file. The auto-response file cannot be used to turn itself off.  
  
### To correct this error  
  
-   Specify a different response file  
  
-   Remove the **/noautoresponse** switch from the MSBuild.rsp response file.  
  
## See Also  
 [Command-Line Reference](http://msdn.microsoft.com/library/edaa65ec-ab8a-42a1-84cb-d76d5b2f4584)