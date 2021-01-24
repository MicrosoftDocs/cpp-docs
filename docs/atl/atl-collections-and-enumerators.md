---
description: "Learn more about: ATL Collections and Enumerators"
title: "ATL Collections and Enumerators"
ms.date: "11/04/2016"
helpviewer_keywords: ["enumerator interfaces", "collections, ATL classes", "enumerators, ATL classes", "collection interfaces"]
ms.assetid: b2d37119-3ab2-4e0a-b65b-f377f07e4098
---
# ATL Collections and Enumerators

A `collection` is a COM object that provides an interface that allows access to a group of data items (raw data or other objects). An interface that follows the standards for providing access to a group of objects is known as a *collection interface*.

At a minimum, collection interfaces must provide a `Count` property that returns the number of items in the collection, an `Item` property that returns an item from the collection based on an index, and a `_NewEnum` property that returns an enumerator for the collection. Optionally, collection interfaces can provide `Add` and `Remove` methods to allow items to be inserted into or deleted from the collection, and a `Clear` method to remove all items.

An `enumerator` is a COM object that provides an interface for iterating through items in a collection. Enumerator interfaces provide serial access to the elements of a collection via four required methods: `Next`, `Skip`, `Reset`, and `Clone`.

You can learn more about enumerator interfaces by reading reference content such as [IEnumString](/windows/win32/api/objidl/nn-objidl-ienumstring) interface.

## In This Section

[ATL Collection and Enumerator Classes](../atl/atl-collection-and-enumerator-classes.md)<br/>
Briefly describes and provides links to the ATL classes that will help you implement collections and enumerators.

[Design Principles for Collection and Enumerator Interfaces](../atl/design-principles-for-collection-and-enumerator-interfaces.md)<br/>
Discusses the different design principles behind each type of interface.

[Implementing a C++ Standard Library-Based Collection](../atl/implementing-an-stl-based-collection.md)<br/>
An extended example that walks you through the implementation of a C++ Standard Library-based collection.

## Related Sections

[ATL](../atl/active-template-library-atl-concepts.md)<br/>
Provides links to conceptual topics on how to program using the Active Template Library.

[ATLCollections Sample](../overview/visual-cpp-samples.md)<br/>
A sample that demonstrates the use of `ICollectionOnSTLImpl` and `CComEnumOnSTL`, and the implementation of custom copy policy classes.

## See also

[Concepts](../atl/active-template-library-atl-concepts.md)
