---
description: "Learn more about: How to: Convert from a STL/CLR Container to a .NET Collection"
title: "How to: Convert from a STL/CLR Container to a .NET Collection"
ms.date: "11/04/2016"
helpviewer_keywords: ["STL/CLR Containers [STL/CLR]", "STL/CLR, converting to .NET collections"]
ms.assetid: 70b2dfd9-869c-4e0f-9a29-b1ee0cb0d107
---
# How to: Convert from a STL/CLR Container to a .NET Collection

This topic shows how to convert STL/CLR containers to their equivalent .NET collections. As an example, we show how to convert a STL/CLR [vector](../dotnet/vector-stl-clr.md) to a .NET <xref:System.Collections.Generic.ICollection%601> and how to convert a STL/CLR [map](../dotnet/map-stl-clr.md) to a .NET <xref:System.Collections.Generic.IDictionary%602>, but the procedure is similar for all collections and containers.

### To create a collection from a container

1. Use one of the following methods:

   - To convert part of a container, call the [make_collection](./adapter-stl-clr.md#make_collection) function, and pass the begin iterator and end iterator of the STL/CLR container to be copied into the .NET collection. This template function takes an STL/CLR iterator as a template argument. The first example demonstrates this method.

   - To convert an entire container, cast the container to an appropriate .NET collection interface or interface collection. The second example demonstrates this method.

## Examples

In this example, we create a STL/CLR `vector` and add 5 elements to it. Then, we create a .NET collection by calling the `make_collection` function. Finally, we display the contents of the newly created collection.

```cpp
// cliext_convert_vector_to_icollection.cpp
// compile with: /clr

#include <cliext/adapter>
#include <cliext/vector>

using namespace cliext;
using namespace System;
using namespace System::Collections::Generic;

int main(array<System::String ^> ^args)
{
    cliext::vector<int> primeNumbersCont;
    primeNumbersCont.push_back(2);
    primeNumbersCont.push_back(3);
    primeNumbersCont.push_back(5);
    primeNumbersCont.push_back(7);
    primeNumbersCont.push_back(11);

    System::Collections::Generic::ICollection<int> ^iColl =
        make_collection<cliext::vector<int>::iterator>(
            primeNumbersCont.begin() + 1,
            primeNumbersCont.end() - 1);

    Console::WriteLine("The contents of the System::Collections::Generic::ICollection are:");
    for each (int i in iColl)
    {
        Console::WriteLine(i);
    }
}
```

```Output
The contents of the System::Collections::Generic::ICollection are:
3
5
7
```

In this example, we create a STL/CLR `map` and add 5 elements to it. Then, we create a .NET <xref:System.Collections.Generic.IDictionary%602> and assign the `map` directly to it. Finally, we display the contents of the newly created collection.

```cpp
// cliext_convert_map_to_idictionary.cpp
// compile with: /clr

#include <cliext/adapter>
#include <cliext/map>

using namespace cliext;
using namespace System;
using namespace System::Collections::Generic;

int main(array<System::String ^> ^args)
{
    cliext::map<float, int> ^aMap = gcnew cliext::map<float, int>;
    aMap->insert(cliext::make_pair<float, int>(42.0, 42));
    aMap->insert(cliext::make_pair<float, int>(13.0, 13));
    aMap->insert(cliext::make_pair<float, int>(74.0, 74));
    aMap->insert(cliext::make_pair<float, int>(22.0, 22));
    aMap->insert(cliext::make_pair<float, int>(0.0, 0));

    System::Collections::Generic::IDictionary<float, int> ^iDict = aMap;

    Console::WriteLine("The contents of the IDictionary are:");
    for each (KeyValuePair<float, int> ^kvp in iDict)
    {
        Console::WriteLine("Key: {0:F} Value: {1}", kvp->Key, kvp->Value);
    }
}
```

```Output
The contents of the IDictionary are:
Key: 0.00 Value: 0
Key: 13.00 Value: 13
Key: 22.00 Value: 22
Key: 42.00 Value: 42
Key: 74.00 Value: 74
```

## See also

[STL/CLR Library Reference](../dotnet/stl-clr-library-reference.md)<br/>
[How to: Convert from a .NET Collection to a STL/CLR Container](../dotnet/how-to-convert-from-a-dotnet-collection-to-a-stl-clr-container.md)<br/>
[range_adapter (STL/CLR)](./adapter-stl-clr.md#range_adapter)
