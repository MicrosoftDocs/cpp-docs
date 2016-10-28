---
title: "Compiler Warning (level 2) CS0469"
ms.custom: na
ms.date: "10/13/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: na
ms.topic: "article"
f1_keywords: 
  - "CS0469"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0469"
ms.assetid: 773925ce-a8b2-4098-9ead-b96197442848
caps.latest.revision: 3
ms.author: "billchi"
manager: "douge"
translation.priority.ht: 
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "ru-ru"
  - "zh-cn"
  - "zh-tw"
translation.priority.mt: 
  - "cs-cz"
  - "pl-pl"
  - "pt-br"
  - "tr-tr"
---
# Compiler Warning (level 2) CS0469
The 'goto case' value is not implicitly convertible to type 'type'  
  
 When you use `goto case`, there must be an implicit conversion from the value of the goto case to the type of the switch.  
  
## Example  
 The following sample generates CS0469.  
  
```  
// CS0469.cs  
// compile with: /W:2  
class Test  
{  
   static void Main()  
   {  
      char c = (char)180;  
      switch (c)  
      {  
         case (char)127:  
            break;  
  
         case (char)180:   
            goto case 127;   // CS0469  
            // try the following line instead  
            // goto case (char) 127;  
      }  
   }  
}  
```