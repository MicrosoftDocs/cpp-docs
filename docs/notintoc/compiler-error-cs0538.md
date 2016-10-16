---
title: "Compiler Error CS0538"
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
  - "CS0538"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0538"
ms.assetid: 46ac205e-16b0-4637-bd0f-9a755ac19f18
caps.latest.revision: 7
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
# Compiler Error CS0538
'name' in explicit interface declaration is not an interface  
  
 An attempt was made to explicitly declare an [interface](../Topic/interface%20\(C%23%20Reference\).md), but an interface was not specified.  
  
 The following sample generates CS0538:  
  
```  
// CS0538.cs  
interface MyIFace  
{  
   void F();  
}  
  
public class MyClass  
{  
   public void G()  
   {  
   }  
}  
  
class C: MyIFace  
{  
   void MyIFace.F()  
   {  
   }  
  
   void MyClass.G()   // CS0538, MyClass not an interface  
   {  
   }  
}  
```