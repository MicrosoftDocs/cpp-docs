---
title: "Virtual Base Class Hierarchies"
ms.custom: na
ms.date: "10/13/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: na
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "classes [C++], virtual base classes"
  - "class hierarchies, virtual base classes"
  - "derived classes, class hierarchy considerations"
  - "virtual functions, in virtual base class hierarchies"
  - "base classes, virtual"
  - "virtual base classes, hierarchies"
  - "hierarchies, virtual base class"
ms.assetid: d24fda17-f829-48d6-84ec-8100f26bc5cf
caps.latest.revision: 7
ms.author: "mblome"
manager: "douge"
translation.priority.mt: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
---
# Virtual Base Class Hierarchies
Some class hierarchies are broad but have many things in common. The common code is implemented in a base class, whereas the specific code is in the derived classes.  
  
 It is important for the base classes to establish a protocol through which the derived classes can attain maximum functionality. These protocols are commonly implemented using virtual functions. Sometimes the base class provides a default implementation for such functions. In a class hierarchy such as the `Document` hierarchy in the figure Sample of Directed Acyclic Graph (see [Single Inheritance](../cpp/single-inheritance.md)), two useful functions are `Identify` and `WhereIs`.  
  
 When called, the `Identify` function returns a correct identification, appropriate to the kind of document: For a `Book`, a function call such as `doc->Identify()` must return the ISBN number; however, for a `HelpFile`, a product name and revision number are probably more appropriate. Similarly, `WhereIs` should return a row and shelf for a `Book`, but for a `HelpFile` it should return a disk location — perhaps a directory and filename.  
  
 It is important that all implementations of the `Identify` and `WhereIs` functions return the same kind of information. In this case, a character string is appropriate.  
  
 These functions are implemented as virtual functions and then invoked using a pointer to a base class. The binding to the actual code occurs at run time, selecting the correct `Identify` or `WhereIs` function.  
  
## See Also  
 [Overview of Derived Classes](../notintoc/overview-of-derived-classes.md)