---
title: "Compiler Error C3852 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C3852"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3852"
ms.assetid: 194e5c5e-0dfb-414e-86db-791c11eb610c
caps.latest.revision: 6
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
# Compiler Error C3852
'member' having type 'type': aggregate initialization could not initialize this member  
  
 An attempt was made to assign a default initialization as part of an aggregate initialization to a data member that cannot receive a default initialization in an aggregate initialization.  
  
 The following samples generate C3852:  
  
```  
// C3852.cpp  
struct S  
{  
   short s;  
};  
  
struct S1  
{  
   int i;  
   const S s;  
};  
  
struct S2  
{  
   int i;  
   char & rc;  
};  
  
int main()  
{  
   S1 s1 = { 1 };   // C3852 const member   
   // try the following line instead  
   // S1 s1 = { 1, 2 };  
  
   S2 s2 = { 2 };   // C3852 reference member  
   // try the following line instead  
   // char c = 'a';  
   S2 s2 = { 2, c };  
}  
```