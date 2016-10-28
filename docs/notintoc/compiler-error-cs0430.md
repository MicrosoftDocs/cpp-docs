---
title: "Compiler Error CS0430"
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
  - "CS0430"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0430"
ms.assetid: b63c4f9a-b1cd-41d2-a02e-2ed0f177450f
caps.latest.revision: 12
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
# Compiler Error CS0430
The extern alias 'alias' was not specified in a /reference option  
  
 This error occurs when extern Alias is encountered but Alias was not specified as a reference on the command line. To resolve CS0430, compile with **/reference**.  
  
## Example  
  
```  
// CS0430_a.cs  
// compile with: /target:library   
public class MyClass {}  
```  
  
## Example  
 Compiling with **/reference:MyType=cs0430_a.dll** to refer to the DLL created in the previous sample resolves this error. The following sample generates CS0430.  
  
```  
// CS0430_b.cs  
extern alias MyType;   // CS0430  
public class Test   
{  
   public static void Main() {}  
}  
  
```