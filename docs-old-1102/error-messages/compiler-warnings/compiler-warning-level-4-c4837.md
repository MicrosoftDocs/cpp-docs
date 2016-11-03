---
title: "Compiler Warning (level 4) C4837"
ms.custom: ""
ms.date: "10/28/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C4837"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4837"
ms.assetid: 9a3c7b6b-ffe4-443d-96af-43deb80d85b4
caps.latest.revision: 4
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
# Compiler Warning (level 4) C4837
trigraph detected: '??%c' replaced by '%c'  
  
 The detected trigraph is replaced by the indicated character.  
  
 The compiler translates trigraphs before any other processing is completed. Use the character escape sequence, `\?`, to prevent the misinterpretation of a character sequence that resembles a trigraph. For more information about trigraphs, see [Trigraphs](../../c-language/trigraphs.md). For more information about escape sequences, see [Escape Sequences](../../c-language/escape-sequences.md).  
  
 C4837 is off by default. See [Compiler Warnings That Are Off by Default](../../preprocessor/compiler-warnings-that-are-off-by-default.md) for more information.  
  
### To correct this error  
  
1.  Use the character escape sequence, `\?`, instead of one of the '?' characters in the source code.  
  
## See Also  
 [Trigraphs](../../c-language/trigraphs.md)   
 [Escape Sequences](../../c-language/escape-sequences.md)   
 [Compiler Warnings That Are Off by Default](../../preprocessor/compiler-warnings-that-are-off-by-default.md)