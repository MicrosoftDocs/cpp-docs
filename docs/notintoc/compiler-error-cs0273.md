---
title: "Compiler Error CS0273"
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
  - "CS0273"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0273"
ms.assetid: 851ad056-feee-48fd-834c-578a1a13e926
caps.latest.revision: 13
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
# Compiler Error CS0273
The accessibility modifier of the 'property_accessor' accessor must be more restrictive than the property or indexer 'property'  
  
 The accessibility modifier of the set/get accessor must be more restrictive than the property or indexer 'property/indexer'  
  
 This error occurs when you declare a property or indexer with an access modifier that is less restrictive than the access modifier on one of its accessors. To resolve this error, use the appropriate access modifier on either the property or the set accessor. For more information, see [Accessor Accessibility](../Topic/Restricting%20Accessor%20Accessibility%20\(C%23%20Programming%20Guide\).md).  
  
## Example  
 This sample contains an internal property with an internal set method. The following sample generates CS0273.  
  
```  
// CS0273.cs  
// compile with: /target:library  
public class MyClass  
{  
   internal int Property  
   {  
      get { return 0; }  
      internal set {}   // CS0273  
      // try the following line instead  
      // private set {}  
   }  
}  
```