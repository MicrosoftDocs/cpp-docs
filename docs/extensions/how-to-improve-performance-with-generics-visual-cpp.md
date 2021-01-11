---
description: "Learn more about: How to: Improve Performance with Generics (C++/CLI)"
title: "How to: Improve Performance with Generics (C++/CLI)"
ms.date: "10/12/2018"
ms.topic: "reference"
helpviewer_keywords: ["performance, C++", "C++, performance", "C++, generics", "generics [C++], performance"]
ms.assetid: f14a175b-301f-46cc-86e4-c82d35f9aa3e
---
# How to: Improve Performance with Generics (C++/CLI)

With generics, you can create reusable code based on a type parameter. The actual type of the type parameter is deferred until called by client code. For more information on generics, see [Generics](generics-cpp-component-extensions.md).

This article will discuss how generics can help increase the performance of an application that uses collections.

## Example: Two main drawbacks of .NET Framework collections

The .NET Framework comes with many collection classes in the <xref:System.Collections?displayProperty=fullName> namespace. Most of these collections operate on objects of type <xref:System.Object?displayProperty=fullName>. This allows collections to store any type, since all types in the .NET Framework, even value types, derive from <xref:System.Object?displayProperty=fullName>. However, there are two drawbacks to this approach.

First, if the collection is storing value types such as integers, the value must be boxed before being added to the collection and unboxed when the value is retrieved from the collection. These are expensive operations.

Second, there is no way to control which types can be added to a collection. It is perfectly legal to add an integer and a string to the same collection, even though this is probably not what was intended. Therefore, in order for your code to be type safe, you have to check that the type retrieved from the collection really is what was expected.

The following code example shows the two main drawbacks of the .NET Framework collections before generics.

```cpp
// perf_pre_generics.cpp
// compile with: /clr

using namespace System;
using namespace System::Collections;

int main()
{
    // This Stack can contain any type.
    Stack ^s = gcnew Stack();

    // Push an integer to the Stack.
    // A boxing operation is performed here.
    s->Push(7);

    // Push a String to the same Stack.
    // The Stack now contains two different data types.
    s->Push("Seven");

    // Pop the items off the Stack.
    // The item is returned as an Object, so a cast is
    // necessary to convert it to its proper type.
    while (s->Count> 0)
    {
        Object ^o = s->Pop();
        if (o->GetType() == Type::GetType("System.String"))
        {
            Console::WriteLine("Popped a String: {0}", (String ^)o);
        }
        else if (o->GetType() == Type::GetType("System.Int32"))
        {
            Console::WriteLine("Popped an int: {0}", (int)o);
        }
        else
        {
            Console::WriteLine("Popped an unknown type!");
        }
    }
}
```

```Output
Popped a String: Seven
Popped an int: 7
```

## Example: Benefit of using generic collection

The new <xref:System.Collections.Generic?displayProperty=fullName> namespace contains many of the same collections found in the <xref:System.Collections?displayProperty=fullName> namespace, but they have been modified to accept generic type parameters. This eliminates the two drawbacks of non-generic collections: the boxing and unboxing of value types and the inability to specify the types to be stored in the collections. Operations on the two collections are identical; they differ only in how they are instantiated.

Compare the example written above with this example that uses a generic <xref:System.Collections.Generic.Stack%601> collection. On large collections that are frequently accessed, the performance of this example will be significantly greater than the preceding example.

```cpp
// perf_post_generics.cpp
// compile with: /clr

#using <System.dll>

using namespace System;
using namespace System::Collections::Generic;

int main()
{
    // This Stack can only contain integers.
    Stack<int> ^s = gcnew Stack<int>();

    // Push an integer to the Stack.
    // A boxing operation is performed here.
    s->Push(7);
    s->Push(14);

    // You can no longer push a String to the same Stack.
    // This will result in compile time error C2664.
    //s->Push("Seven");

    // Pop an item off the Stack.
    // The item is returned as the type of the collection, so no
    // casting is necessary and no unboxing is performed for
    // value types.
    int i = s->Pop();
    Console::WriteLine(i);

    // You can no longer retrieve a String from the Stack.
    // This will result in compile time error C2440.
    //String ^str = s->Pop();
}
```

```Output
14
```

## See also

[Generics](generics-cpp-component-extensions.md)
