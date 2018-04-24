---
title: "Template Classes for Arrays, Lists, and Maps | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vc.classes.template"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "arrays [C++], classes"
  - "template classes, for arrays/lists and maps"
  - "list classes"
  - "map classes"
  - "template classes"
ms.assetid: a8331c4b-068a-48f8-a629-b8449601e121
caps.latest.revision: 13
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Template Classes for Arrays, Lists, and Maps
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [Template Classes for Arrays, Lists, and Maps](https://docs.microsoft.com/cpp/mfc/template-classes-for-arrays-lists-and-maps).  
  
  
These collection classes are templates whose parameters determine the types of the objects stored in the aggregates. The `CArray`, `CMap`, and `CList` classes use global helper functions that must usually be customized. For more information about these helper functions, see [Collection Class Helpers](../mfc/reference/collection-class-helpers.md). The typed pointer classes are wrappers for other classes in the class library. By using these wrappers, you enlist the compiler's type-checking to help you avoid errors. For more information on using these classes, see [Collections](../mfc/collections.md).  
  
 These classes provide templates you can use to create arrays, lists, and maps using any type you like.  
  
 [CArray](../mfc/reference/carray-class.md)  
 Template class for making arrays of arbitrary types.  
  
 [CList](../mfc/reference/clist-class.md)  
 Template class for making lists of arbitrary types.  
  
 [CMap](../mfc/reference/cmap-class.md)  
 Template class for making maps with arbitrary key and value types.  
  
 [CTypedPtrArray](../mfc/reference/ctypedptrarray-class.md)  
 Template class for type-safe arrays of pointers.  
  
 [CTypedPtrList](../mfc/reference/ctypedptrlist-class.md)  
 Template class for type-safe lists of pointers.  
  
 [CTypedPtrMap](../mfc/reference/ctypedptrmap-class.md)  
 Template class for type-safe maps with pointers.  
  
## See Also  
 [Class Overview](../mfc/class-library-overview.md)





