---
title: "Compiler Error C2292 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C2292"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2292"
ms.assetid: 256b392f-2b8f-4162-b578-e7633984e162
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
# Compiler Error C2292
'identifier': best case inheritance representation: 'representation1' declared but 'representation2' required  
  
 Compiling the following code with [/vmb](../../build/reference/vmb-vmg-representation-method.md) ("Best-case always" representation) causes C2292.  
  
```  
// C2292.cpp  
// compile with: /vmb  
class __single_inheritance X;  
  
struct A { };  
struct B { };  
struct X : A, B { };  // C2292, X uses multiple inheritance  
```