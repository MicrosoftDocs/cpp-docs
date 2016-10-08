---
title: "ATL Collections and Enumerators"
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
ms.topic: article
ms.assetid: b2d37119-3ab2-4e0a-b65b-f377f07e4098
caps.latest.revision: 10
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
# ATL Collections and Enumerators
A `collection` is a COM object that provides an interface that allows access to a group of data items (raw data or other objects). An interface that follows the standards for providing access to a group of objects is known as a *collection interface*.  
  
 At a minimum, collection interfaces must provide a **Count** property that returns the number of items in the collection, an **Item** property that returns an item from the collection based on an index, and a `_NewEnum` property that returns an enumerator for the collection. Optionally, collection interfaces can provide **Add** and **Remove** methods to allow items to be inserted into or deleted from the collection, and a **Clear** method to remove all items.  
  
 An `enumerator` is a COM object that provides an interface for iterating through items in a collection. Enumerator interfaces provide serial access to the elements of a collection via four required methods: `Next`, **Skip**, **Reset**, and `Clone`.  
  
 You can learn more about enumerator interfaces by reading about the archetypal (but entirely imaginary) [IEnumXXXX](https://msdn.microsoft.com/en-us/library/ms680089.aspx) interface.  
  
## In This Section  
 [ATL Collection and Enumerator Classes](../VS_visualcpp/ATL-Collection-and-Enumerator-Classes.md)  
 Briefly describes and provides links to the ATL classes that will help you implement collections and enumerators.  
  
 [Design Principles for Collection and Enumerator Interfaces](../VS_visualcpp/Design-Principles-for-Collection-and-Enumerator-Interfaces.md)  
 Discusses the different design principles behind each type of interface.  
  
 [Implementing an STL-Based Collection](../VS_visualcpp/Implementing-an-STL-Based-Collection.md)  
 An extended example that walks you through the implementation of a Standard Template Library (STL)-based collection.  
  
## Related Sections  
 [ATL](../VS_visualcpp/Active-Template-Library--ATL--Concepts.md)  
 Provides links to conceptual topics on how to program using the Active Template Library.  
  
 [ATLCollections Sample](../VS_visualcpp/Visual-C---Samples.md)  
 A sample that demonstrates the use of `ICollectionOnSTLImpl` and `CComEnumOnSTL`, and the implementation of custom copy policy classes.  
  
## See Also  
 [Concepts](../VS_visualcpp/Active-Template-Library--ATL--Concepts.md)