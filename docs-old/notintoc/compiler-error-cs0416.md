---
title: "Compiler Error CS0416"
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
  - "CS0416"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0416"
ms.assetid: 61bfe40d-5e87-47e5-933f-3491e28ace42
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
# Compiler Error CS0416
'type parameter': an attribute argument cannot use type parameters  
  
 A type parameter was used as an attribute argument, which is not allowed. Use a non-generic type.  
  
 The following sample generates CS0416:  
  
```  
// CS0416.cs  
public class MyAttribute : System.Attribute  
{  
   public MyAttribute(System.Type t)  
   {  
   }  
}  
  
class G<T>  
{  
  
   [MyAttribute(typeof(G<T>))]  // CS0416  
   public void F()  
   {  
   }  
  
}  
```