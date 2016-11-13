---
title: "Translation: Diagnostics | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
  - "C"
ms.assetid: 3730ca7c-0147-452d-bd4a-6a1e97e9793e
caps.latest.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
---
# Translation: Diagnostics
**ANSI 2.1.1.3** How a diagnostic is identified  
  
 Microsoft C produces error messages in the form:  
  
```  
  
filename( line-number ) : diagnostic Cnumbermessage  
```  
  
 where *filename* is the name of the source file in which the error was encountered; *line-number* is the line number at which the compiler detected the error; `diagnostic` is either "error" or "warning"; `number` is a unique four-digit number (preceded by a **C**, as noted in the syntax) that identifies the error or warning; `message` is an explanatory message.  
  
## See Also  
 [Implementation-Defined Behavior](../c-language/implementation-defined-behavior.md)