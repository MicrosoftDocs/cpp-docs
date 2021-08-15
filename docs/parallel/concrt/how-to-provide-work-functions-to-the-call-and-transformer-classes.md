---
description: "Learn more about: How to: Provide Work Functions to the call and transformer Classes"
title: "How to: Provide Work Functions to the call and transformer Classes"
ms.date: "11/04/2016"
helpviewer_keywords: ["call class, example", "using the transformer class [Concurrency Runtime]", "using the call class [Concurrency Runtime]"]
ms.assetid: df715ce4-8507-41ca-b204-636d11707a73
---
# How to: Provide Work Functions to the call and transformer Classes

This topic illustrates several ways to provide work functions to the [concurrency::call](../../parallel/concrt/reference/call-class.md) and [concurrency::transformer](../../parallel/concrt/reference/transformer-class.md) classes.

The first example shows how to pass a lambda expression to a `call` object. The second example shows how to pass a function object to a `call` object. The third example shows how to bind a class method to a `call` object.

For illustration, every example in this topic uses the `call` class. For an example that uses the `transformer` class, see [How to: Use transformer in a Data Pipeline](../../parallel/concrt/how-to-use-transformer-in-a-data-pipeline.md).

## Example: call class

The following example shows a common way to use the `call` class. This example passes a lambda function to the `call` constructor.

[!code-cpp[concrt-call-lambda#1](../../parallel/concrt/codesnippet/cpp/how-to-provide-work-functions-to-the-call-and-transformer-classes_1.cpp)]

This example produces the following output.

```Output
13 squared is 169.
```

## Example: call class with function object

The following example resembles the previous one, except that it uses the `call` class together with a function object (functor).

[!code-cpp[concrt-call-functor#1](../../parallel/concrt/codesnippet/cpp/how-to-provide-work-functions-to-the-call-and-transformer-classes_2.cpp)]

## Example: Functions to bind call object

The following example resembles the previous one, except that it uses the [std::bind1st](../../standard-library/functional-functions.md#bind1st) and [std::mem_fun](../../standard-library/functional-functions.md#mem_fun) functions to bind a `call` object to a class method.

Use this technique if you have to bind a `call` or `transformer` object to a specific class method instead of the function call operator, `operator()`.

[!code-cpp[concrt-call-method#1](../../parallel/concrt/codesnippet/cpp/how-to-provide-work-functions-to-the-call-and-transformer-classes_3.cpp)]

You can also assign the result of the `bind1st` function to a [std::function](../../standard-library/function-class.md) object or use the **`auto`** keyword, as shown in the following example.

[!code-cpp[concrt-call-method#2](../../parallel/concrt/codesnippet/cpp/how-to-provide-work-functions-to-the-call-and-transformer-classes_4.cpp)]

## Compiling the Code

Copy the example code and paste it in a Visual Studio project, or paste it in a file that is named `call.cpp` and then run the following command in a Visual Studio Command Prompt window.

> **cl.exe /EHsc call.cpp**

## See also

[Asynchronous Agents Library](../../parallel/concrt/asynchronous-agents-library.md)<br/>
[Asynchronous Message Blocks](../../parallel/concrt/asynchronous-message-blocks.md)<br/>
[How to: Use transformer in a Data Pipeline](../../parallel/concrt/how-to-use-transformer-in-a-data-pipeline.md)<br/>
[call Class](../../parallel/concrt/reference/call-class.md)<br/>
[transformer Class](../../parallel/concrt/reference/transformer-class.md)
