---
description: "Learn more about: Performance Considerations for Interop (C++)"
title: "Performance Considerations for Interop (C++)"
ms.date: "11/04/2016"
helpviewer_keywords: ["/clr compiler option [C++], interop performance considerations", "platform invoke [C++], interoperability", "interop [C++], performance consideraitons", "mixed assemblies [C++], performance considerations", "interoperability [C++], performance considerations"]
ms.assetid: bb9a282e-c3f8-40eb-a2fa-45d80d578932
---
# Performance Considerations for Interop (C++)

This topic provides guidelines for reducing the effect of managed/unmanaged interop transitions on run-time performance.

Visual C++ supports the same interoperability mechanisms as other .NET languages such as Visual Basic and C# (P/Invoke), but it also provides interop support that is specific to Visual C++ (C++ interop). For performance-critical applications, it is important to understand the performance implications of each interop technique.

Regardless of the interop technique used, special transition sequences, called thunks, are required each time a managed function calls an unmanaged function and vice versa. These thunks are inserted automatically by the Microsoft C++ compiler, but it is important to keep in mind that cumulatively, these transitions can be expensive in terms of performance.

## Reducing Transitions

One way to avoid or reduce the cost of interop thunks is to refactor the interfaces involved to minimize managed/unmanaged transitions. Dramatic performance improvements can be made by targeting chatty interfaces, which are those that involved frequent calls across the managed/unmanaged boundary. A managed function that calls an unmanaged function in a tight loop, for example, is a good candidate for refactoring. If the loop itself is moved to the unmanaged side, or if a managed alternative to the unmanaged call is created (perhaps be queuing data on the managed side and then marshaling it to the unmanaged API all at once after the loop), the number of transitions can be reduced significantly.

## P/Invoke vs. C++ Interop

For .NET languages, such as Visual Basic and C#, the prescribed method for interoperating with native components is P/Invoke. Because P/Invoke is supported by the .NET Framework, Visual C++ supports it as well, but Visual C++ also provides its own interoperability support, which is referred to as C++ Interop. C++ Interop is preferred over P/Invoke because P/Invoke is not type-safe. As a result, errors are primarily reported at run time, but C++ Interop also has performance advantages over P/Invoke.

Both techniques require several things to happen whenever a managed function calls an unmanaged function:

- The function call arguments are marshaled from CLR to native types.

- A managed-to-unmanaged thunk is executed.

- The unmanaged function is called (using the native versions of the arguments).

- An unmanaged-to-managed thunk is executed.

- The return type and any "out" or "in,out" arguments are marshaled from native to CLR types.

The managed/unmanaged thunks are necessary for interop to work at all, but the data marshaling that is required depends on the data types involved, the function signature, and how the data will be used.

The data marshaling performed by C++ Interop is the simplest possible form: the parameters are simply copied across the managed/unmanaged boundary in a bitwise fashion; no transformation is performed at all. For P/Invoke, this is only true if all parameters are simple, blittable types. Otherwise, P/Invoke performs very robust steps to convert each managed parameter to an appropriate native type, and vice versa if the arguments are marked as "out", or "in,out".

In other words, C++ Interop uses the fastest possible method of data marshaling, whereas P/Invoke uses the most robust method. This means that C++ Interop (in a fashion typical for C++) provides optimal performance by default, and the programmer is responsible for addressing cases where this behavior is not safe or appropriate.

C++ Interop therefore requires that data marshaling must be provided explicitly, but the advantage is that the programmer is free to decide what is appropriate, given the nature of the data, and how it is to be used. Furthermore, although the behavior of P/Invoke data marshaling can be modified at customized to a degree, C++ Interop allows data marshaling to be customized on a call-by-call basis. This is not possible with P/Invoke.

For more information about C++ Interop, see [Using C++ Interop (Implicit PInvoke)](../dotnet/using-cpp-interop-implicit-pinvoke.md).

## See also

[Mixed (Native and Managed) Assemblies](../dotnet/mixed-native-and-managed-assemblies.md)
