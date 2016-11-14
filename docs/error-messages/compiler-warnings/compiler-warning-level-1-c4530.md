---
title: "Compiler Warning (level 1) C4530 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C4530"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4530"
ms.assetid: a04dcdb2-84db-459d-9e5e-4e743887465f
caps.latest.revision: 8
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
# Compiler Warning (level 1) C4530
C++ exception handler used, but unwind semantics are not enabled. Specify /EHsc  
  
 C++ exception handling was used but [/EHsc](../../build/reference/eh-exception-handling-model.md) was not selected.  
  
 When the /EHsc option has not been enabled, an object with automatic storage in the frame, between the function doing the throw and the function catching the throw, will not be destroyed. However, an object with automatic storage created in a **try** or **catch** block will be destroyed.  
  
 The following sample generates C4530:  
  
```  
// C4530.cpp  
// compile with: /W1  
int main() {  
   try{} catch(int*) {}   // C4530  
}  
```  
  
 Compile the sample with /EHsc to resolve the warning.