---
title: "Compiler Warning (level 1) CS1570 | Microsoft Docs"
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
  - "CS1570"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS1570"
ms.assetid: a121d5c4-8b90-4cda-af5b-6ba8f23b2b1e
caps.latest.revision: 7
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Compiler Warning (level 1) CS1570
XML comment on 'construct' has badly formed XML — 'reason'  
  
 When using [/doc](http://msdn.microsoft.com/library/849eea59-c936-4311-bad8-d07404480f2a), any comments in the source code must be in XML. Any error with your XML markup will generate CS1570. For example:  
  
-   If you are passing a string to a **cref**, such as in an [\<exception>](http://msdn.microsoft.com/library/dd73aac5-3c74-4fcf-9498-f11bff3a2f3c) tag, the string must be enclosed in double quotation marks.  
  
-   If you are using a tag, such as [\<seealso>](http://msdn.microsoft.com/library/8e157f3f-f220-4fcf-9010-88905b080b18), which does not have a closing tag, you must specify a forward slash before the closing angle bracket.  
  
-   If you need to use a greater-than or less-than symbol in the text of description, you need to represent them with **&gt;** or **&lt;**.  
  
-   The file or path attribute on an [\<include>](http://msdn.microsoft.com/library/a8a70302-6196-4643-bd09-ef33f411f18f) tag was missing or improperly formed.  
  
 The following sample generates CS1570:  
  
```  
// CS1570.cs  
// compile with: /W:1  
namespace ns  
{  
   // the following line generates CS1570  
   /// <summary> returns true if < 5 </summary>  
   // try this instead  
   // /// <summary> returns true if <5 </summary>  
  
   public class MyClass  
   {  
      public static void Main ()  
      {  
      }  
   }  
}  
```