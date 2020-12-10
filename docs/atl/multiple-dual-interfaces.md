---
description: "Learn more about: Multiple Dual Interfaces"
title: "Multiple Dual Interfaces"
ms.date: "11/04/2016"
ms.topic: "reference"
helpviewer_keywords: ["multiple dual interfaces", "COM_INTERFACE_ENTRY2 macro", "dual interfaces, exposing multiple", "multiple dual interfaces, exposing with ATL", "IDispatchImpl class, multiple dual interfaces", "COM_INTERFACE_ENTRY_IID macro"]
ms.assetid: 7fea86e6-247f-4063-be6e-85588a9e3719
---
# Multiple Dual Interfaces

You may want to combine the advantages of a dual interface (that is, the flexibility of both vtable and late binding, thus making the class available to scripting languages as well as C++) with the techniques of multiple inheritance.

Although it is possible to expose multiple dual interfaces on a single COM object, it is not recommended. If there are multiple dual interfaces, there must be only one `IDispatch` interface exposed. The techniques available to ensure that this is the case carry penalties such as loss of function or increased code complexity. The developer considering this approach should carefully weigh the advantages and disadvantages.

## Exposing a Single IDispatch Interface

It is possible to expose multiple dual interfaces on a single object by deriving from two or more specializations of `IDispatchImpl`. However, if you allow clients to query for the `IDispatch` interface, you will need to use the [COM_INTERFACE_ENTRY2](reference/com-interface-entry-macros.md#com_interface_entry2) macro (or [COM_INTERFACE_ENTRY_IID](reference/com-interface-entry-macros.md#com_interface_entry_iid))) to specify which base class to use for the implementation of `IDispatch`.

[!code-cpp[NVC_ATL_COM#23](../atl/codesnippet/cpp/multiple-dual-interfaces_1.h)]

Because only one `IDispatch` interface is exposed, clients that can only access your objects through the `IDispatch` interface will not be able to access the methods or properties in any other interface.

## Combining Multiple Dual Interfaces into a Single Implementation of IDispatch

ATL does not provide any support for combining multiple dual interfaces into a single implementation of `IDispatch`. However, there are several known approaches to manually combining the interfaces, such as creating a templated class that contains a union of the separate `IDispatch` interfaces, creating a new object to perform the `QueryInterface` function, or using a typeinfo-based implementation of nested objects to create the `IDispatch` interface.

These approaches have problems with potential namespace collisions, as well as code complexity and maintainability. It is not recommended that you create multiple dual interfaces.

## See also

[Dual Interfaces and ATL](../atl/dual-interfaces-and-atl.md)
