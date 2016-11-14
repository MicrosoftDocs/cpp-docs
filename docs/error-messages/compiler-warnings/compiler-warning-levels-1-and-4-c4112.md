---
title: "Compiler Warning (levels 1 and 4) C4112 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "C4112"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4112"
ms.assetid: aff64897-bb79-4a67-9b6f-902c6d44f3dc
caps.latest.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
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
# Compiler Warning (levels 1 and 4) C4112
\#line requires an integer between 1 and number  
  
 The [#line](../../preprocessor/hash-line-directive-c-cpp.md) directive specifies an integer parameter that is outside the allowable range.  
  
 If the specified parameter is less than 1, the line counter is reset to 1. If the specified parameter is greater than *number*, which is the compiler-defined limit, the line counter is unchanged. This is a level 1 warning under ANSI compatibility ([/Za](../../build/reference/za-ze-disable-language-extensions.md)) and a level 4 warning with Microsoft extensions ([/Ze](../../build/reference/za-ze-disable-language-extensions.md)).  
  
 The following sample generates C4112:  
  
```  
// C4112.cpp  
// compile with: /W4  
#line 0   // C4112, value must be between 1 and number  
  
int main() {  
}  
```