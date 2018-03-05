---
title: "setlocale | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-tools"]
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: ["setlocale_CPP", "vc-pragma.setlocale"]
dev_langs: ["C++"]
helpviewer_keywords: ["pragmas, setlocale", "setlocale pragma"]
ms.assetid: e60b43d9-fbdf-4c4e-ac85-805523a13b86
caps.latest.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
ms.workload: ["cplusplus"]
---
# setlocale
Defines the locale (Country/Region and language) to be used when translating wide-character constants and string literals.  
  
## Syntax  
  
```  
  
#pragma setlocale( "[locale-string]" )  
```  
  
## Remarks  
 Because the algorithm for converting multibyte characters to wide characters may vary by locale or the compilation may take place in a different locale from where an executable file will be run, this pragma provides a way to specify the target locale at compile time. This guarantees that the wide-character strings will be stored in the correct format.  
  
 The default *locale-string* is "".  
  
 The "C" locale maps each character in the string to its value as a `wchar_t` (unsigned short). Other values that are valid for `setlocale` are those entries that are found in the [Language Strings](../c-runtime-library/language-strings.md) list. For example, you could issue:  
  
```  
#pragma setlocale("dutch")  
```  
  
 The ability to issue a language string depends on the code page and language ID support on your computer.  
  
## See Also  
 [Pragma Directives and the __Pragma Keyword](../preprocessor/pragma-directives-and-the-pragma-keyword.md)