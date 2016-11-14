---
title: "Compiler Warning (level 1) C4526 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C4526"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4526"
ms.assetid: 490f8916-5fdc-4cad-b412-76c3382a5976
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
# Compiler Warning (level 1) C4526
'function' : static member function cannot override virtual function 'virtual function'override ignored, virtual function will be hidden  
  
 The static member function meets the criteria to override the virtual function, which makes the member function both virtual and static.  
  
 The following code generates C4526:  
  
```  
// C4526.cpp  
// compile with: /W1 /c  
// C4526 expected  
struct myStruct1 {  
   virtual void __stdcall func( int ) = 0;  
};  
  
struct myStruct2: public myStruct1 {  
   static void __stdcall func( int );  
};  
```  
  
 The following are possible fixes:  
  
-   If the function was intended to override the base class virtual function, remove the static specifier.  
  
-   If the function was intended to be a static member function, rename it so it doesn't conflict with the base class virtual function.