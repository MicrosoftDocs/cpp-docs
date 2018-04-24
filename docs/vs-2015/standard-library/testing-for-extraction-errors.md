---
title: "Testing for Extraction Errors | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "extraction errors"
ms.assetid: 6a681028-adba-4557-8f7b-f137932905f8
caps.latest.revision: 12
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Testing for Extraction Errors
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [Testing for Extraction Errors](https://docs.microsoft.com/cpp/standard-library/testing-for-extraction-errors).  
  
Output error processing functions, discussed in [Error Processing Functions](../standard-library/output-file-stream-member-functions.md), apply to input streams. Testing for errors during extraction is important. Consider this statement:  
  
```  
cin>> n;  
```  
  
 If `n` is a signed integer, a value greater than 32,767 (the maximum allowed value, or MAX_INT) sets the stream's `fail` bit, and the `cin` object becomes unusable. All subsequent extractions result in an immediate return with no value stored.  
  
## See Also  
 [Input Streams](../standard-library/input-streams.md)





