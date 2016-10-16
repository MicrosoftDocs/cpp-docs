---
title: "Testing for Extraction Errors"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "extraction errors"
ms.assetid: 6a681028-adba-4557-8f7b-f137932905f8
caps.latest.revision: 8
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
# Testing for Extraction Errors
Output error processing functions, discussed in [Error Processing Functions](../stdcpplib/output-file-stream-member-functions.md), apply to input streams. Testing for errors during extraction is important. Consider this statement:  
  
```  
cin >> n;  
```  
  
 If `n` is a signed integer, a value greater than 32,767 (the maximum allowed value, or MAX_INT) sets the stream's `fail` bit, and the `cin` object becomes unusable. All subsequent extractions result in an immediate return with no value stored.  
  
## See Also  
 [Input Streams](../stdcpplib/input-streams.md)