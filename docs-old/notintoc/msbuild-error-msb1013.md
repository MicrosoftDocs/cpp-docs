---
title: "MSBuild Error MSB1013"
ms.custom: na
ms.date: "10/13/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: na
ms.topic: "article"
f1_keywords: 
  - "MSBuild.RepeatedResponseFileError"
helpviewer_keywords: 
  - "MSB1013"
ms.assetid: 3e85c710-99e6-4141-b058-63a144a06454
caps.latest.revision: 11
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
# MSBuild Error MSB1013
**The response file was specified twice. A response file can be specified only once.**  
  
 The command line contains references to more than one response file. For example, `msbuild @response.rsp @response.rsp`.  
  
 This error can also occur if the specified response file includes a reference to another response file that includes a reference to the original response file. A response file can be specified only once for each compilation.  
  
### To correct this error  
  
-   Remove the duplicate reference to the response file. For example, instead of using `msbuild @response.rsp @response.rsp`, use `msbuild @response.rsp`.  
  
-   Remove the reference to the original response file from the response file that it references.  
  
## See Also  
 [Command-Line Reference](../Topic/MSBuild%20Command-Line%20Reference.md)