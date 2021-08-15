---
description: "Learn more about: Array and WriteOnlyArray (C++/CX)"
title: "Array and WriteOnlyArray (C++/CX)"
ms.date: "01/22/2017"
ms.assetid: ef7cc5f9-cae6-4636-8220-f789e5b6aea4
---
# Array and WriteOnlyArray (C++/CX)

You can freely use regular C-style arrays or [`std::array`](../standard-library/array-class-stl.md) in a C++/CX program (although [`std::vector`](../standard-library/vector-class.md) is often a better choice), but in any API that is published in metadata, you must convert a C-style array or vector to a [`Platform::Array`](../cppcx/platform-array-class.md) or [`Platform::WriteOnlyArray`](../cppcx/platform-writeonlyarray-class.md) type depending on how it is being used. The [`Platform::Array`](../cppcx/platform-array-class.md) type is neither as efficient nor as powerful as [`std::vector`](../standard-library/vector-class.md), so as a general guideline you should avoid its use in internal code that performs lots of operations on the array elements.

The following array types can be passed across the ABI:

1. `const Platform::Array^`

1. `Platform::Array^*`

1. `Platform::WriteOnlyArray`

1. return value of `Platform::Array^`

You use these array types to implement the three kinds of array patterns that are defined by the Windows Runtime.

PassArray\
Used when the caller passes an array to a method. The C++ input parameter type is **`const`** [`Platform::Array`](../cppcx/platform-array-class.md)\<T>.

FillArray\
Used when the caller passes an array for the method to fill. The C++ input parameter type is [`Platform::WriteOnlyArray`](../cppcx/platform-writeonlyarray-class.md)\<T>.

ReceiveArray\
Used when the caller receives an array that the method allocates. In C++/CX you can return the array in the return value as an Array^ or you can return it as an out parameter as type Array^*.

## PassArray pattern

When client code passes an array to a C++ method and the method does not modify it, the method accepts the array as a `const Array^`. At the Windows Runtime application binary interface (ABI) level, this is known as a *PassArray*. The next example shows how to pass an array that's allocated in JavaScript to a C++ function that reads from it.

[!code-javascript[cx_arrays#101](../cppcx/codesnippet/JavaScript/array-and-writeonlyarray-c-_1.js)]

The following snippet shows the C++ method:

[!code-cpp[cx_arrays#01](../cppcx/codesnippet/CPP/js-array/class1.cpp#01)]

## ReceiveArray pattern

In the *ReceiveArray* pattern, client code declares an array and passes it to a method which allocates the memory for it and initializes it. The C++ input parameter type is a pointer-to-hat: `Array<T>^*`. The following example shows how to declare an array object in JavaScript, and pass it to a C++ function that allocates the memory, initializes the elements, and returns it to JavaScript. JavaScript treats the allocated array as a return value, but the C++ function treats it as an out parameter.

[!code-javascript[cx_arrays#102](../cppcx/codesnippet/JavaScript/array-and-writeonlyarray-c-_3.js)]

The following snippet shows two ways to implement the C++ method:

[!code-cpp[cx_arrays#02](../cppcx/codesnippet/CPP/js-array/class1.cpp#02)]

## Fill arrays

When you want to allocate an array in the caller, and initialize or modify it in the callee, use `WriteOnlyArray`. The next example shows how to implement a C++ function that uses `WriteOnlyArray` and call it from JavaScript.

[!code-javascript[cx_arrays#103](../cppcx/codesnippet/JavaScript/array-and-writeonlyarray-c-_5.js)]

The following snippet shows how to implement the C++ method:

[!code-cpp[cx_arrays#03](../cppcx/codesnippet/CPP/js-array/class1.cpp#03)]

## Array conversions

This example shows how to use a [`Platform::Array`](../cppcx/platform-array-class.md) to construct other kinds of collections:

[!code-cpp[cx_arrays#05](../cppcx/codesnippet/CPP/js-array/class1.cpp#05)]

The next example shows how to construct a [`Platform::Array`](../cppcx/platform-array-class.md) from a C-style array and return it from a public method.

[!code-cpp[cx_arrays#06](../cppcx/codesnippet/CPP/js-array/class1.cpp#06)]

## Jagged arrays

The Windows Runtime type system does not support the concept of jagged arrays and therefore you cannot use `IVector<Platform::Array<T>>` as a return value or method parameter in a public method. To pass a jagged array or a sequence of sequences across the ABI, use `IVector<IVector<T>^>`.

## Use ArrayReference to avoid copying data

In some scenarios where data is being passed across the ABI into a [`Platform::Array`](../cppcx/platform-array-class.md), and you ultimately want to process that data in a C-style array for efficiency, you can use [Platform::ArrayReference](../cppcx/platform-arrayreference-class.md) to avoid the extra copy operation. When you pass a [`Platform::ArrayReference`](../cppcx/platform-arrayreference-class.md) as an argument to a parameter that takes a `Platform::Array`, the `ArrayReference` will store the data directly into a C-style array that you specify. Just be aware that `ArrayReference` has no lock on the source data, so if it that data is modified or deleted on another thread before the call completes, the results will be undefined.

The following code snippet shows how to copy the results of a [`DataReader`](/uwp/api/windows.storage.streams.datareader) operation into a `Platform::Array` (the usual pattern), and then how to substitute `ArrayReference` to copy the data directly into a C-style array:

[!code-cpp[cx_arrays#07](../cppcx/codesnippet/CPP/js-array/class1.h#07)]

## Avoid exposing an Array as a property

In general, you should avoid exposing a `Platform::Array` type as a property in a ref class because the entire array is returned even when client code is only attempting to access a single element. When you need to expose a sequence container as a property in a public ref class, [`Windows::Foundation::IVector`](/uwp/api/windows.foundation.collections.ivector-1) is a better choice. In private or internal APIs (which are not published to metadata), consider using a standard C++ container such as [`std::vector`](../standard-library/vector-class.md).

## See also

[Type System](../cppcx/type-system-c-cx.md)<br/>
[C++/CX Language Reference](../cppcx/visual-c-language-reference-c-cx.md)<br/>
[Namespaces Reference](../cppcx/namespaces-reference-c-cx.md)
