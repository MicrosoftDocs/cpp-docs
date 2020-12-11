---
description: "Learn more about: Requirements for STL/CLR Container Elements"
title: "Requirements for STL/CLR Container Elements"
ms.date: "11/04/2016"
ms.topic: "reference"
helpviewer_keywords: ["C++ Standard Library, template class containers", "STL/CLR, containers", "containers, STL/CLR", "containers, C++ Standard Library"]
ms.assetid: 59ab240c-15bf-4701-a9f9-e7c56e5ab53f
---
# Requirements for STL/CLR Container Elements

All reference types that are inserted into STL/CLR containers must have, at a minimum, the following elements:

- A public copy constructor.

- A public assignment operator.

- A public destructor.

Furthermore, associative containers such as [set](../dotnet/set-stl-clr.md) and [map](../dotnet/map-stl-clr.md) must have a public comparison operator defined, which is `operator<` by default. Some operations on containers might also require a public default constructor and a public equivalence operator to be defined.

Like reference types, value types and handles to reference types that are to be inserted into an associative container must have a comparison operator such as `operator<` defined. The requirements for a public copy constructor, public assignment operator, and a public destructor do not exist for value types or handles to reference types.

## See also

[C++ Standard Library Reference](../standard-library/cpp-standard-library-reference.md)
