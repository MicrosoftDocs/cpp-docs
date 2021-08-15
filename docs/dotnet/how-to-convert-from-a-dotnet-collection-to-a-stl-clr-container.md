---
description: "Learn more about: How to: Convert from a .NET Collection to a STL/CLR Container"
title: "How to: Convert from a .NET Collection to a STL/CLR Container"
ms.date: "11/04/2016"
helpviewer_keywords: ["STL/CLR, converting from .NET collections", "STL/CLR Containers [STL/CLR]"]
ms.assetid: bb927c48-78e8-4150-bd0b-787c651f4a87
---
# How to: Convert from a .NET Collection to a STL/CLR Container

This topic shows how to convert .NET collections to their equivalent STL/CLR containers. As an example we show how to convert a .NET <xref:System.Collections.Generic.List%601> to a STL/CLR [vector](../dotnet/vector-stl-clr.md) and how to convert a .NET <xref:System.Collections.Generic.Dictionary%602> to a STL/CLR [map](../dotnet/map-stl-clr.md), but the procedure is similar for all collections and containers.

### To create a container from a collection

1. To convert an entire collection, create a STL/CLR container and pass the collection to the constructor.

   The first example demonstrates this procedure.

-OR-

1. Create a generic STL/CLR container by creating a [collection_adapter](./adapter-stl-clr.md#collection_adapter) object. This template class takes a .NET collection interface as an argument. To verify which interfaces are supported, see [collection_adapter (STL/CLR)](./adapter-stl-clr.md#collection_adapter).

1. Copy the contents of the .NET collection to the container. This can be done by using a STL/CLR [algorithm](../dotnet/algorithm-stl-clr.md), or by iterating over the .NET collection and inserting a copy of each element into the STL/CLR container.

   The second example demonstrates this procedure.

## Examples

In this example, we create a generic <xref:System.Collections.Generic.List%601> and add 5 elements to it. Then, we create a `vector` using the constructor that takes a <xref:System.Collections.Generic.IEnumerable%601> as an argument.

```cpp
// cliext_convert_list_to_vector.cpp
// compile with: /clr

#include <cliext/adapter>
#include <cliext/algorithm>
#include <cliext/vector>

using namespace System;
using namespace System::Collections;
using namespace System::Collections::Generic;

int main(array<System::String ^> ^args)
{
    List<int> ^primeNumbersColl = gcnew List<int>();
    primeNumbersColl->Add(2);
    primeNumbersColl->Add(3);
    primeNumbersColl->Add(5);
    primeNumbersColl->Add(7);
    primeNumbersColl->Add(11);

    cliext::vector<int> ^primeNumbersCont =
        gcnew cliext::vector<int>(primeNumbersColl);

    Console::WriteLine("The contents of the cliext::vector are:");
    cliext::vector<int>::const_iterator it;
    for (it = primeNumbersCont->begin(); it != primeNumbersCont->end(); it++)
    {
        Console::WriteLine(*it);
    }
}
```

```Output
The contents of the cliext::vector are:
2
3
5
7
11
```

In this example, we create a generic <xref:System.Collections.Generic.Dictionary%602> and add 5 elements to it. Then, we create a `collection_adapter` to wrap the <xref:System.Collections.Generic.Dictionary%602> as a simple STL/CLR container. Finally, we create a `map` and copy the contents of the <xref:System.Collections.Generic.Dictionary%602> to the `map` by iterating over the `collection_adapter`. During this process, we create a new pair by using the `make_pair` function, and insert the new pair directly into the `map`.

```cpp
// cliext_convert_dictionary_to_map.cpp
// compile with: /clr

#include <cliext/adapter>
#include <cliext/algorithm>
#include <cliext/map>

using namespace System;
using namespace System::Collections;
using namespace System::Collections::Generic;

int main(array<System::String ^> ^args)
{
    System::Collections::Generic::Dictionary<float, int> ^dict =
        gcnew System::Collections::Generic::Dictionary<float, int>();
    dict->Add(42.0, 42);
    dict->Add(13.0, 13);
    dict->Add(74.0, 74);
    dict->Add(22.0, 22);
    dict->Add(0.0, 0);

    cliext::collection_adapter<System::Collections::Generic::IDictionary<float, int>> dictAdapter(dict);
    cliext::map<float, int> aMap;
    for each (KeyValuePair<float, int> ^kvp in dictAdapter)
    {
        cliext::pair<float, int> aPair = cliext::make_pair(kvp->Key, kvp->Value);
        aMap.insert(aPair);
    }

    Console::WriteLine("The contents of the cliext::map are:");
    cliext::map<float, int>::const_iterator it;
    for (it = aMap.begin(); it != aMap.end(); it++)
    {
        Console::WriteLine("Key: {0:F} Value: {1}", it->first, it->second);
    }
}
```

```Output
The contents of the cliext::map are:
Key: 0.00 Value: 0
Key: 13.00 Value: 13
Key: 22.00 Value: 22
Key: 42.00 Value: 42
Key: 74.00 Value: 74
```

## See also

[STL/CLR Library Reference](../dotnet/stl-clr-library-reference.md)<br/>
[adapter (STL/CLR)](../dotnet/adapter-stl-clr.md)<br/>
[How to: Convert from a STL/CLR Container to a .NET Collection](../dotnet/how-to-convert-from-a-stl-clr-container-to-a-dotnet-collection.md)
