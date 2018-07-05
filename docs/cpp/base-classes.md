---
title: "Base Classes | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-language"]
ms.topic: "language-reference"
dev_langs: ["C++"]
helpviewer_keywords: ["inheritance, multiple", "base classes [C++], virtual", "derived classes [C++], multiple bases", "multiple inheritance, base classes", "virtual base classes [C++]", "base classes [C++]"]
ms.assetid: 6e6d54d0-6f21-4a16-9103-22935d98f596
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# Base Classes
The inheritance process creates a new derived class that is made up of the members of the base class(es) plus any new members added by the derived class. In a multiple-inheritance, it is possible to construct an inheritance graph where the same base class is part of more than one of the derived classes. The following figure shows such a graph.  
  
 ![Multiple instances of a base class](../cpp/media/vc38xn1.gif "vc38XN1")  
Multiple Instances of a Single Base Class  
  
 In the figure, pictorial representations of the components of `CollectibleString` and `CollectibleSortable` are shown. However, the base class, `Collectible`, is in `CollectibleSortableString` through the `CollectibleString` path and the `CollectibleSortable` path. To eliminate this redundancy, such classes can be declared as [virtual base classes](multiple-base-classes#virtual-base-classes.md) when they are inherited.  
  
