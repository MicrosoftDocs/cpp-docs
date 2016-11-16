---
title: "Compiler Warning (level 1) C4047 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C4047"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4047"
ms.assetid: b75ad6fb-5c93-4434-a85f-c4083051a5de
caps.latest.revision: 10
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
# Compiler Warning (level 1) C4047
'operator' : 'identifier1' differs in levels of indirection from 'identifier2'  
  
 A pointer can point to a variable (one level of indirection), to another pointer that points to a variable (two levels of indirection), and so on.  
  
## Example  
 The following sample generates C4047:  
  
```  
// C4047.c  
// compile with: /W1  
  
int main() {  
   char **p = 0;   // two levels of indirection  
   char *q = 0;   // one level of indirection  
  
   char *p2 = 0;   // one level of indirection  
   char *q2 = 0;   // one level of indirection  
  
   p = q;   // C4047  
   p2 = q2;  
}  
```  
  
## Example  
 The following sample generates C4047:  
  
```  
// C4047b.c  
// compile with: /W1  
#include <stdio.h>  
  
int main() {  
   int i;  
   FILE *myFile = NULL;  
   errno_t  err = 0;  
   char file_name[256];  
   char *cs = 0;  
  
   err = fopen_s(&myFile, "C4047.txt", "r");  
   if ((err != 0) || (myFile)) {  
      printf_s("fopen_s failed!\n");  
      exit(-1);  
    }  
   i = fgets(file_name, 256, myFile);   // C4047  
   cs = fgets(file_name, 256, myFile);   // OK  
}  
```