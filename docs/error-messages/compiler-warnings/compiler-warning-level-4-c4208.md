---
title: "Compiler Warning (level 4) C4208 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C4208"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4208"
ms.assetid: 5cb0a36e-3fb5-422f-a5f9-e40b70776c27
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
# Compiler Warning (level 4) C4208
nonstandard extension used : delete [exp] - exp evaluated but ignored  
  
 With Microsoft extensions (/Ze), you can delete an array using a value within brackets with the [delete operator](../../cpp/delete-operator-cpp.md). The value is ignored.  
  
```  
// C4208.cpp  
// compile with: /W4  
int main()  
{  
   int * MyArray = new int[18];  
   delete [18] MyArray;      // C4208  
   MyArray = new int[18];  
   delete [] MyArray;        // ok  
}  
```  
  
 Such values are invalid under ANSI compatibility ([/Za](../../build/reference/za-ze-disable-language-extensions.md)).