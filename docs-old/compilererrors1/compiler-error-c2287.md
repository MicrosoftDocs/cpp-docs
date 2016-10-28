---
title: "Compiler Error C2287"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "error-reference"
f1_keywords: 
  - "C2287"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2287"
ms.assetid: 64556299-4e1f-4437-88b7-2464fc0b95bb
caps.latest.revision: 9
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
# Compiler Error C2287
'class': inheritance representation: 'representation1' is less general than the required 'representation2'  
  
 A class is declared with a simpler representation than required.  
  
 The following sample generates C2287:  
  
```  
// C2287.cpp  
// compile with: /vmg /c  
class __single_inheritance X;  
class __single_inheritance Y;  
  
struct A { };  
struct B { };  
struct X : A, B { };  // C2287  X uses multiple inheritance  
struct Y : A { };  // OK  
```