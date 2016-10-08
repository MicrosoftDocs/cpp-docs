---
title: "Base Classes"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: language-reference
ms.assetid: 6e6d54d0-6f21-4a16-9103-22935d98f596
caps.latest.revision: 7
manager: ghogen
translation.priority.ht: 
  - cs-cz
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - pl-pl
  - pt-br
  - ru-ru
  - tr-tr
  - zh-cn
  - zh-tw
---
# Base Classes
The inheritance process creates a new derived class that is made up of the members of the base class(es) plus any new members added by the derived class. In a multiple-inheritance, it is possible to construct an inheritance graph where the same base class is part of more than one of the derived classes. The following figure shows such a graph.  
  
 ![Multiple instances of a base class](../VS_visualcpp/media/vc38XN1.gif "vc38XN1")  
Multiple Instances of a Single Base Class  
  
 In the figure, pictorial representations of the components of `CollectibleString` and `CollectibleSortable` are shown. However, the base class, `Collectible`, is in `CollectibleSortableString` through the `CollectibleString` path and the `CollectibleSortable` path. To eliminate this redundancy, such classes can be declared as virtual base classes when they are inherited.  
  
 For information about declaring virtual base classes and how objects with virtual base classes are composed, see [Virtual Base Classes](../Topic/Virtual%20Base%20Classes.md).  
  
## See Also  
 [Overview of Derived Classes](../Topic/Overview%20of%20Derived%20Classes.md)