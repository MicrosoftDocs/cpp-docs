---
title: "Compiler Warning (level 4) C4220 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C4220"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4220"
ms.assetid: aba18868-825f-4763-9af6-3296406a80e4
caps.latest.revision: 7
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
# Compiler Warning (level 4) C4220
varargs matches remaining parameters  
  
 Under the default Microsoft extensions (/Ze), a pointer to a function matches a pointer to a function with similar, but variable, arguments.  
  
## Example  
  
```  
// C4220.c  
// compile with: /W4  
  
int ( *pFunc1) ( int a, ... );  
int ( *pFunc2) ( int a, int b);  
  
int main()  
{  
   if ( pFunc1 != pFunc2 ) {};  // C4220  
}  
```  
  
 Such pointers do not match under ANSI compatibility ([/Za](../../build/reference/za-ze-disable-language-extensions.md)).