---
title: "Compiler Error C2825 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C2825"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2825"
ms.assetid: c832f1c1-5184-4fc2-9356-12b21daa7af3
caps.latest.revision: 9
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
# Compiler Error C2825
var : must be a class or namespace when followed by '::'  
  
 An unsuccessful attempt was made to form a qualified name.  
  
 For example, make sure that your code does not contain a function declaration where the function name begins with ::.  
  
## Example  
 The following sample generates C2825:  
  
```  
// C2825.cpp  
typedef int i;  
int main() {  
   int* p = new int;  
   p->i::i();   // C2825  
   // try the following line instead  
   // p->i::~i();  
}  
```