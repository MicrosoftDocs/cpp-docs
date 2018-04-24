---
title: "Compiler Error CS0058 | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "CS0058"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0058"
ms.assetid: 9535da60-03b9-41ab-93e1-e57b6440fca9
caps.latest.revision: 8
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Compiler Error CS0058
Inconsistent accessibility: return type 'type' is less accessible than delegate 'delegate'  
  
 A public construct must return a publicly accessible object. For more information, see [Access Modifiers](http://msdn.microsoft.com/library/6e81ee82-224f-4a12-9baf-a0dca2656c5b).  
  
 The following sample generates CS0058 because no access modifier is applied to MyClass and therefore it is given private accessibility by default:  
  
```  
// CS0058.cs  
class MyClass  
// try the following line instead  
// public class MyClass  
{  
}  
  
public delegate MyClass MyClassDel();   // CS0058  
  
public class A  
{  
   public static void Main()  
   {  
   }  
}  
```  
  
## See Also  
 [private](http://msdn.microsoft.com/library/654c0bb8-e6ac-4086-bf96-7474fa6aa1c8)