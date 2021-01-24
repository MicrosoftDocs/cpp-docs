---
description: "Learn more about: Design Principles for Collection and Enumerator Interfaces"
title: "Designing Collection and Enumerator Interfaces (ATL)"
ms.date: "11/04/2016"
helpviewer_keywords: ["enumerator interfaces", "collection interfaces"]
ms.assetid: ea19a39e-6333-41a1-be62-5435c236640e
---
# Design Principles for Collection and Enumerator Interfaces

There are different design principles behind each type of interface:

- A collection interface provides *random* access to a *single* item in the collection via the `Item` method, it lets clients discover how many items are in the collection via the `Count` property, and often allows clients to add and remove items.

- An enumerator interface provides *serial* access to *multiple* items in a collection, it doesn't allow the client to discover how many items are in the collection (until the enumerator stops returning items), and it doesn't provide any way of adding or removing items.

Each type of interface plays a different role in providing access to the elements in a collection.

## See also

[Collections and Enumerators](../atl/atl-collections-and-enumerators.md)
