---
title: "Compiler Error C3848 | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C3848"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3848"
ms.assetid: 32d3ccef-01ec-4f8b-bbff-fb9b1a76b4c4
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C3848
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C3848](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c3848).  
  
  
expression having type 'type' would lose some const-volatile qualifiers in order to call 'function'  
  
 A variable with a specified const-volatile type can only call member functions defined with same or greater const-volatile qualifications.  
  
 The following samples generate C3848:  
  
```  
// C3848.cpp  
void glbFunc1()  
{  
}  
  
typedef void (* pFunc1)();  
  
struct S3  
{  
   operator pFunc1() // const  
   {  
      return &glbFunc1;  
   }  
};  
  
int main()  
{  
   const S3 s3;  
   s3();   // C3848, uncomment const qualifier  
}  
```

