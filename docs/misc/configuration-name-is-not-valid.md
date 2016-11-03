---
title: "Configuration name is not valid. | Microsoft Docs"
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
  - "vs.message.VS_E_INVALID_CFG_NAME"
  - "vs.message.0x800A00B7"
ms.assetid: aa439582-0863-41d3-825c-7c45b1773cde
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
# Configuration name is not valid.
This error generally occurs when the name entered for the build configuration includes illegal characters, such as \<, >, &#124;, and *.  
  
### To correct this error  
  
1.  Check that the configuration name does not contain the following characters: \<, >, *, &#124;, :, \\, /, &, %, ", ., #, ?, or a leading or trailing space. In addition, the configuration name cannot use names reserved for Windows or DOS, such as "nul", "aux", "con', "com#", "lpt#", and so on.  
  
2.  Re-type the name.  
  
## See Also  
 [Compiling and Building](/visual-studio/ide/compiling-and-building-in-visual-studio)