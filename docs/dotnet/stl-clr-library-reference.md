---
description: "Learn more about: STL/CLR Library Reference"
title: "STL/CLR Library Reference"
ms.date: 09/18/2018
ms.topic: "reference"
helpviewer_keywords: ["STL/CLR Library", "STL/CLR, redistribution", "cliext directory"]
ms.assetid: a9d9ca00-7bf2-48c1-b205-3ae6f8c25f82
---
# STL/CLR Library Reference

The STL/CLR Library provides an interface similar to the C++ Standard Library containers for use with C++ and the .NET Framework common language runtime (CLR). STL/CLR is completely separate from the Microsoft implementation of the C++ Standard Library. STL/CLR is maintained for legacy support but is not kept up-to-date with the C++ standard. We strongly recommend using the native [C++ Standard Library](../standard-library/cpp-standard-library-reference.md) containers instead of STL/CLR whenever possible.

To use STL/CLR:

- Include headers from the **cliext** include subdirectory instead of the usual C++ Standard Library equivalents.

- Qualify library names with `cliext::` instead of `std::`.

The STL/CLR Library provides an STL-like interface for use with C++ and the .NET Framework common language runtime (CLR). This library is maintained for legacy support but is not kept up-to-date with the C++ standard. We strongly recommend using the native [C++ Standard Library](../standard-library/cpp-standard-library-reference.md) containers instead of STL/CLR.

## In This Section

[cliext Namespace](../dotnet/cliext-namespace.md)<br/>
Discusses the namespace that contains all the types of the STL/CLR Library.

[STL/CLR Containers](../dotnet/stl-clr-containers.md)<br/>
Provides an overview of the containers that are found in the C++ Standard Library, including requirements for container elements, types of elements that can be inserted, and ownership issues.

[Requirements for STL/CLR Container Elements](../dotnet/requirements-for-stl-clr-container-elements.md)<br/>
Describes minimum requirements for all reference types that are inserted into C++ Standard Library containers.

[How to: Convert from a .NET Collection to a STL/CLR Container](../dotnet/how-to-convert-from-a-dotnet-collection-to-a-stl-clr-container.md)<br/>
Describes how to convert a .NET collection to an STL/CLR container.

[How to: Convert from a STL/CLR Container to a .NET Collection](../dotnet/how-to-convert-from-a-stl-clr-container-to-a-dotnet-collection.md)<br/>
Describes how to convert an STL/CLR container to a .NET collection.

[How to: Expose an STL/CLR Container from an Assembly](../dotnet/how-to-expose-an-stl-clr-container-from-an-assembly.md)<br/>
Shows how to display the elements of several STL/CLR containers written in a C++ assembly.

In addition, this section also describes the following components of STL/CLR:

:::row:::
   :::column span="":::
      [`adapter` (STL/CLR)](../dotnet/adapter-stl-clr.md)\
      [`algorithm` (STL/CLR)](../dotnet/algorithm-stl-clr.md)\
      [`deque` (STL/CLR)](../dotnet/deque-stl-clr.md)\
      [`for each`, `in`](../dotnet/for-each-in.md)\
      [`functional` (STL/CLR)](../dotnet/functional-stl-clr.md)\
      [`hash_map` (STL/CLR)](../dotnet/hash-map-stl-clr.md)\
      [`hash_multimap` (STL/CLR)](../dotnet/hash-multimap-stl-clr.md)\
      [`hash_multiset` (STL/CLR)](../dotnet/hash-multiset-stl-clr.md)\
      [`hash_set` (STL/CLR)](../dotnet/hash-set-stl-clr.md)\
      [`list` (STL/CLR)](../dotnet/list-stl-clr.md)\
   :::column-end:::
   :::column span="":::
      [`map` (STL/CLR)](../dotnet/map-stl-clr.md)\
      [`multimap` (STL/CLR)](../dotnet/multimap-stl-clr.md)\
      [`multiset` (STL/CLR)](../dotnet/multiset-stl-clr.md)\
      [`numeric` (STL/CLR)](../dotnet/numeric-stl-clr.md)\
      [`priority_queue` (STL/CLR)](../dotnet/priority-queue-stl-clr.md)\
      [`queue` (STL/CLR)](../dotnet/queue-stl-clr.md)\
      [`set` (STL/CLR)](../dotnet/set-stl-clr.md)\
      [`stack` (STL/CLR)](../dotnet/stack-stl-clr.md)\
      [`utility` (STL/CLR)](../dotnet/utility-stl-clr.md)\
      [`vector` (STL/CLR)](../dotnet/vector-stl-clr.md)\
   :::column-end:::
:::row-end:::

## See also

[C++ Standard Library](../standard-library/cpp-standard-library-reference.md)
