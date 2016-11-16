---
title: "Inappropriate use of &lt;keyword&gt; keyword in a module | Microsoft Docs"
ms.custom: ""
ms.date: "2015-07-20"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-visual-basic"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vbc42028"
  - "BC42028"
helpviewer_keywords: 
  - "BC42028"
ms.assetid: a9bc1e9d-ba2c-4a71-b147-0fb66f670316
caps.latest.revision: 12
author: "stevehoag"
ms.author: "shoag"
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
# Inappropriate use of &lt;keyword&gt; keyword in a module
Modules do not have instances, support inheritance, or implement interfaces. Therefore, the following keywords do not apply to a module declaration:  
  
-   [MustInherit](/dotnet/articles/visual-basic/language-reference/modifiers/mustinherit)  
  
-   [NotInheritable](/dotnet/articles/visual-basic/language-reference/modifiers/notinheritable)  
  
-   [Overloads](/dotnet/articles/visual-basic/language-reference/modifiers/overloads)  
  
-   [Private](/dotnet/articles/visual-basic/language-reference/modifiers/private)  
  
-   [Protected](/dotnet/articles/visual-basic/language-reference/modifiers/protected)  
  
-   [Shadows](/dotnet/articles/visual-basic/language-reference/modifiers/shadows)  
  
-   [Shared](/dotnet/articles/visual-basic/language-reference/modifiers/shared)  
  
-   [Static](/dotnet/articles/visual-basic/language-reference/modifiers/static)  
  
 The only keywords supported in a [Module Statement](/dotnet/articles/visual-basic/language-reference/statements/module-statement) are [Public](/dotnet/articles/visual-basic/language-reference/modifiers/public) and [Friend](/dotnet/articles/visual-basic/language-reference/modifiers/friend).  
  
 In addition, you cannot use the [Implements](/dotnet/articles/visual-basic/language-reference/statements/implements-clause) statement or the [Inherits Statement](/dotnet/articles/visual-basic/language-reference/statements/inherits-statement) in the statement block of the module.  
  
 By default, this message is a warning. For more information about how to hide warnings or treat warnings as errors, see [Configuring Warnings in Visual Basic](/visualstudio/ide/configuring-warnings-in-visual-basic).  
  
 **Error ID:** BC42028  
  
### To correct this error  
  
-   If you intend this programming element to be a module, use only the `Public` or `Friend` keyword in its declaration. By default, a module uses to `Friend` if you do not specify its access level.  
  
-   If you intend to create instances of this programming element, declare it as a class. You can then use the keywords that apply to a class declaration.  
  
## See Also  
 [Class Statement](/dotnet/articles/visual-basic/language-reference/statements/class-statement)