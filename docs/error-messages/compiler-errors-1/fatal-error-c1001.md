---
title: "Fatal Error C1001 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C1001"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C1001"
ms.assetid: 5736cdb3-22c8-4fad-aa85-d5e0d2b232f4
caps.latest.revision: 15
author: "corob-msft"
ms.author: "corob"
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
# Fatal Error C1001
INTERNAL COMPILER ERROR(compiler file file, line number)  
  
 The compiler cannot generate correct code for a construct, probably due to the combination of an expression and an optimization option. Try removing one or more optimization options and recompiling the function containing the line indicated in the error message.  
  
 You can probably fix the problem by removing one or more optimization options. To determine which option is at fault, remove options one at a time and recompile until the error message goes away. The options most commonly responsible are **/Og**, **/Oi**, and `/Oa`. Once you determine which option is responsible, you can disable it using the [optimize](../../preprocessor/optimize.md) pragma around the function where the error occurs and continue to use the option for the rest of the module.  
  
 The Microsoft Knowledge Base has more information about C1001; see [http://support.microsoft.com/default.aspx?scid=kb;en-us;134650](http://support.microsoft.com/default.aspx?scid=kb;en-us;134650).  
  
 Try rewriting the line where the error is reported, or several lines of code surrounding that line.