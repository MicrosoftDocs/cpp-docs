---
title: "setlocale"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "article"
f1_keywords: 
  - "setlocale_CPP"
  - "vc-pragma.setlocale"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "pragmas, setlocale"
  - "setlocale pragma"
ms.assetid: e60b43d9-fbdf-4c4e-ac85-805523a13b86
caps.latest.revision: 6
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
# setlocale
Defines the locale (Country/Region and language) to be used when translating wide-character constants and string literals.  
  
## Syntax  
  
```  
  
#pragma setlocale( "[locale-string]" )  
```  
  
## Remarks  
 Because the algorithm for converting multibyte characters to wide characters may vary by locale or the compilation may take place in a different locale from where an executable file will be run, this pragma provides a way to specify the target locale at compile time. This guarantees that the wide-character strings will be stored in the correct format.  
  
 The default *locale-string* is "".  
  
 The "C" locale maps each character in the string to its value as a `wchar_t` (unsigned short). Other values that are valid for `setlocale` are those entries that are found in the [Language Strings](../crt/language-strings.md) list. For example, you could issue:  
  
```  
#pragma setlocale("dutch")  
```  
  
 The ability to issue a language string depends on the code page and language ID support on your computer.  
  
## See Also  
 [Pragma Directives and the __Pragma Keyword](../c/pragma-directives-and-the-__pragma-keyword.md)