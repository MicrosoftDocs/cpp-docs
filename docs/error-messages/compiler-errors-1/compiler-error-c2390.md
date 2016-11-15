---
title: "Compiler Error C2390 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C2390"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2390"
ms.assetid: 06b749ee-d072-4db1-b229-715f2c0728b5
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
# Compiler Error C2390
'identifier' : incorrect storage class 'specifier'  
  
 The storage class is not valid for the global-scope identifier. The default storage class is used in place of the invalid class.  
  
 Possible resolutions:  
  
-   If the identifier is a function, declare it with `extern` storage.  
  
-   If the identifier is a formal parameter or local variable, declare it with auto storage.  
  
-   If the identifier is a global variable, declare it with no storage class (auto storage).  
  
## Example  
  
-   The following sample generates C2390:  
  
```  
// C2390.cpp  
register int i;   // C2390  
  
int main() {  
   register int j;   // OK  
}  
```