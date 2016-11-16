---
title: "Compiler Warning (level 4) C4324 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C4324"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4324"
ms.assetid: 420fa929-d9c0-40b4-8808-2d8ad3ca8090
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
# Compiler Warning (level 4) C4324
'struct_name' : structure was padded due to __declspec(align())  
  
 Padding was added at the end of a structure because you specified a [__declspec(align)](../../cpp/align-cpp.md) value.  
  
 For example, the following code generates C4324:  
  
```  
// C4324.cpp  
// compile with: /W4  
struct __declspec(align(32)) A  
{  
   char a;  
};   // C4324  
  
int main()  
{  
}  
```