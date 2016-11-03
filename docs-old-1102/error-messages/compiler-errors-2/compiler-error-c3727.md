---
title: "Compiler Error C3727"
ms.custom: ""
ms.date: "10/28/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C3727"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3727"
ms.assetid: 17b9fe7b-ee9e-483f-9c27-1f709255a9e0
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
# Compiler Error C3727
'event': a managed event must be a member function or a data member that is a pointer to a delegate  
  
 .NET events must be a pointer to a delegate type.  
  
 The following sample generates C3727:  
  
```  
// C3727.cpp  
// compile with: /clr:oldSyntax  
#using <mscorlib.dll>  
  
__gc class PseudoDelegate  
{  
};  
  
// use the following declaration to resolve the error.  
// __delegate void PseudoDelegate(int);  
  
__gc class MyAttr  
{  
   __event PseudoDelegate* MyE;  
};   // C3727  
  
int main()  
{  
}  
```