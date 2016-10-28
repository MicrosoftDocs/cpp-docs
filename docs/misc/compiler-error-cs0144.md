---
title: "Compiler Error CS0144"
ms.custom: ""
ms.date: "10/25/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "CS0144"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0144"
ms.assetid: 3904cab1-05bd-44ec-81d0-e36c5656f742
caps.latest.revision: 8
ms.author: "wiwagn"
manager: "wpickett"
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
# Compiler Error CS0144
Cannot create an instance of the abstract class or interface 'interface'  
  
 You cannot create an instance of an [abstract](../Topic/abstract%20\(C%23%20Reference\).md) class or an [interface](../Topic/interface%20\(C%23%20Reference\).md). For more information, see [Interfaces](../Topic/Interfaces%20\(C%23%20Programming%20Guide\).md).  
  
 The following sample generates CS0144:  
  
```  
// CS0144.cs  
interface MyInterface  
{  
}  
public class MyClass  
{  
   public static void Main()  
   {  
      MyInterface myInterface = new MyInterface ();   // CS0144  
   }  
}  
```