---
title: "Compiler Error C2433 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C2433"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2433"
ms.assetid: 7079fedd-6059-4125-82ef-ebe275f1f9d1
caps.latest.revision: 11
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
# Compiler Error C2433
'identifier' : 'modifier' not permitted on data declarations  
  
 The `friend`, `virtual`, and `inline` modifiers cannot be used for data declarations.  
  
## Example  
 The following sample generates C2433.  
  
```  
// C2433.cpp  
class C{};  
  
int main() {  
   inline C c;   // C2433  
}  
```