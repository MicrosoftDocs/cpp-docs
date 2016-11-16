---
title: "Compiler Error C2736 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C2736"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2736"
ms.assetid: 95a6bc28-c0cb-49dc-87e6-e993dbbba881
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
# Compiler Error C2736
'keyword' keyword is not permitted in cast  
  
 The keyword is invalid in a cast.  
  
 The following sample generates C2736:  
  
```  
// C2736.cpp  
int main() {  
   return (virtual) 0;   // C2736  
   // try the following line instead  
   // return 0;  
}  
```