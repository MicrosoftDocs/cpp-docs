---
title: "Compiler Error C2087 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C2087"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2087"
ms.assetid: 89761e83-415a-4468-a4c6-b6dedfd1dd6a
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
# Compiler Error C2087
'identifier' : missing subscript  
  
 The definition of an array with multiple subscripts is missing a subscript value for a dimension higher than one.  
  
 The following sample generates C2087:  
  
```  
// C2087.cpp  
int main() {  
   char a[10][];   // C2087  
}  
```  
  
 Possible resolution:  
  
```  
// C2087b.cpp  
int main() {  
   char b[4][5];  
}  
```