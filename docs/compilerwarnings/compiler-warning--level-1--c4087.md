---
title: "Compiler Warning (level 1) C4087"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: na
ms.topic: "article"
f1_keywords: 
  - "C4087"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4087"
ms.assetid: 546e4d57-5c8e-422c-8ef1-92657336dad5
caps.latest.revision: 6
ms.author: "corob"
manager: "douge"
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
# Compiler Warning (level 1) C4087
'function' : declared with 'void' parameter list  
  
 The function declaration has no formal parameters, but the function call has actual parameters. Extra parameters are passed according to the calling convention of the function.  
  
 This warning is for the C compiler.  
  
## Example  
  
```  
// C4087.c  
// compile with: /W1  
int f1( void ) {  
}  
  
int main() {  
   f1( 10 );   // C4087  
}  
```