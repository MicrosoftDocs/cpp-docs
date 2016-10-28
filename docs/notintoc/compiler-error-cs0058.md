---
title: "Compiler Error CS0058"
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
  - "CS0058"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0058"
ms.assetid: 9535da60-03b9-41ab-93e1-e57b6440fca9
caps.latest.revision: 8
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
# Compiler Error CS0058
Inconsistent accessibility: return type 'type' is less accessible than delegate 'delegate'  
  
 A public construct must return a publicly accessible object. For more information, see [Access Modifiers](../Topic/Access%20Modifiers%20\(C%23%20Programming%20Guide\).md).  
  
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
 [private](../Topic/private%20\(C%23%20Reference\).md)