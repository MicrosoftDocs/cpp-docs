---
title: "Compiler Error C2026 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2026"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2026"]
ms.assetid: 8e64b6e1-b967-479b-be97-d12dc4a8e389
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
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
  
 You may want to store exceptionally large string literals (32K or more) in a custom resource or an external file. See [Creating a New Custom or Data Resource](../../windows/creating-a-new-custom-or-data-resource.md) for more information.