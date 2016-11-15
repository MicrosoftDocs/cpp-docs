---
title: "Compiler Error C2026 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C2026"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2026"
ms.assetid: 8e64b6e1-b967-479b-be97-d12dc4a8e389
caps.latest.revision: 8
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
# Compiler Error C2026
string too big, trailing characters truncated  
  
 The string was longer than the limit of 16380 single-byte characters.  
  
 Prior to adjacent strings being concatenated, a string cannot be longer than 16380 single-byte characters.  
  
 A Unicode string of about one half this length would also generate this error.  
  
 If you have a string defined as follows, it generates C2026:  
  
```  
char sz[] =  
"\  
imagine a really, really \  
long string here\  
";  
```  
  
 You could break it up as follows:  
  
```  
char sz[] =  
"\  
imagine a really, really "  
"long string here\  
";  
```  
  
 You may want to store exceptionally large string literals (32K or more) in a custom resource or an external file. See [Creating a New Custom or Data Resource](../../mfc/creating-a-new-custom-or-data-resource.md) for more information.