---
title: "Compiler Error C3186 | Microsoft Docs"
ms.custom: ""
ms.date: "11/01/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C3186"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3186"
ms.assetid: 60540c31-b858-4dc0-8736-04a6b432087d
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
# Compiler Error C3186
multi-dimensional native array is not allowed  
  
 A native multidimensional array was declared incorrectly.  
  
 The following sample generates C3186:  
  
```  
// C3186.cpp  
// compile with: /clr  
#using <mscorlib.dll>  
int main()  
{  
   int a[,];   // C3186  
   int b[2][3];   // native multidimension array  
   array<int,2> ^c = new array<int, 2>(2,5);   // managed multidimension array  
}  
```