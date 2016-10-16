---
title: "Compiler Error CS1958"
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
  - "CS1958"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS1958"
ms.assetid: bb6f3bb2-ea93-4d2e-984c-da9c99f5653f
caps.latest.revision: 5
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
# Compiler Error CS1958
Object and collection initializer expressions may not be applied to a delegate creation expression,  
  
 A delegate has no members like a class or struct has, and so there is nothing for an object initializer to initialize. If you encounter this error, it is probably because there are braces after the delegate creation expression. Just remove the braces and this error will disappear.  
  
### To correct this error  
  
1.  Remove the braces.  
  
## Example  
 The following code produces CS1958:  
  
```  
// cs1958.cs  
public class MemberInitializerTest  
{     
    delegate void D<T>();  
    public static void GenericMethod<T>() { }  
    public static void Run()  
    {  
        D<int> genD = new D<int>(GenericMethod<int>) { }; // CS1958  
       // Try the following line instead  
      // D<int> genD = new D<int>(GenericMethod<int>);  
    }  
}  
```