---
title: "ATL Collections and Enumerators | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "enumerator interfaces"
  - "collections, ATL classes"
  - "enumerators, ATL classes"
  - "collection interfaces"
ms.assetid: b2d37119-3ab2-4e0a-b65b-f377f07e4098
caps.latest.revision: 15
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# ATL Collections and Enumerators
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [ATL Collections and Enumerators](https://docs.microsoft.com/cpp/atl/atl-collections-and-enumerators).  
  
  
A `collection` is a COM object that provides an interface that allows access to a group of data items (raw data or other objects). An interface that follows the standards for providing access to a group of objects is known as a *collection interface*.  
  
 At a minimum, collection interfaces must provide a **Count** property that returns the number of items in the collection, an **Item** property that returns an item from the collection based on an index, and a `_NewEnum` property that returns an enumerator for the collection. Optionally, collection interfaces can provide **Add** and **Remove** methods to allow items to be inserted into or deleted from the collection, and a **Clear** method to remove all items.  
  
 An `enumerator` is a COM object that provides an interface for iterating through items in a collection. Enumerator interfaces provide serial access to the elements of a collection via four required methods: `Next`, **Skip**, **Reset**, and `Clone`.  
  
 You can learn more about enumerator interfaces by reading about the archetypal (but entirely imaginary) [IEnumXXXX](https://msdn.microsoft.com/library/ms680089.aspx) interface.  
  
## In This Section  
 [ATL Collection and Enumerator Classes](../atl/atl-collection-and-enumerator-classes.md)  
 Briefly describes and provides links to the ATL classes that will help you implement collections and enumerators.  
  
 [Design Principles for Collection and Enumerator Interfaces](../atl/design-principles-for-collection-and-enumerator-interfaces.md)  
 Discusses the different design principles behind each type of interface.  
  
 [Implementing an STL-Based Collection](../atl/implementing-an-stl-based-collection.md)  
 An extended example that walks you through the implementation of a Standard Template Library (STL)-based collection.  
  
## Related Sections  
 [ATL](../atl/active-template-library-atl-concepts.md)  
 Provides links to conceptual topics on how to program using the Active Template Library.  
  
 [ATLCollections Sample](../top/visual-cpp-samples.md)  
 A sample that demonstrates the use of `ICollectionOnSTLImpl` and `CComEnumOnSTL`, and the implementation of custom copy policy classes.  
  
## See Also  
 [Concepts](../atl/active-template-library-atl-concepts.md)





