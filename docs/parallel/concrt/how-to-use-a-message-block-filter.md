---
description: "Learn more about: How to: Use a Message Block Filter"
title: "How to: Use a Message Block Filter"
ms.date: "11/04/2016"
helpviewer_keywords: ["message-block filters, using [Concurrency Runtime]", "using message-block filters [Concurrency Runtime]"]
ms.assetid: db6b99fb-288d-4477-96dc-b9751772ebb2
---
# How to: Use a Message Block Filter

This document demonstrates how to use a filter function to enable an asynchronous message block to accept or reject a message on the basis of the payload of that message.

When you create a message block object such as a [concurrency::unbounded_buffer](reference/unbounded-buffer-class.md), a [concurrency::call](../../parallel/concrt/reference/call-class.md), or a [concurrency::transformer](../../parallel/concrt/reference/transformer-class.md), you can supply a *filter function* that determines whether the message block accepts or rejects a message. A filter function is a useful way to guarantee that a message block receives only certain values.

Filter functions are important because they enable you to connect message blocks to form *dataflow networks*. In a dataflow network, message blocks control the flow of data by processing only those messages that meet specific criteria. Compare this to the control-flow model, where the flow of data is regulated by using control structures such as conditional statements, loops, and so on.

This document provides a basic example of how to use a message filter. For additional examples that use message filters and the dataflow model to connect message blocks, see [Walkthrough: Creating a Dataflow Agent](../../parallel/concrt/walkthrough-creating-a-dataflow-agent.md) and [Walkthrough: Creating an Image-Processing Network](../../parallel/concrt/walkthrough-creating-an-image-processing-network.md).

## Example: count_primes function

Consider the following function, `count_primes`, which illustrates the basic usage of a message block that does not filter incoming messages. The message block appends prime numbers to a [std::vector](../../standard-library/vector-class.md) object. The `count_primes` function sends several numbers to the message block, receives the output values from the message block, and prints those numbers that are prime to the console.

[!code-cpp[concrt-primes-filter#1](../../parallel/concrt/codesnippet/cpp/how-to-use-a-message-block-filter_1.cpp)]

The `transformer` object processes all input values; however, it requires only those values that are prime. Although the application could be written so that the message sender sends only prime numbers, the requirements of the message receiver cannot always be known.

## Example: count_primes_filter function

The following function, `count_primes_filter`, performs the same task as the `count_primes` function. However, the `transformer` object in this version uses a filter function to accept only those values that are prime. The function that performs the action only receives prime numbers; therefore, it does not have to call the `is_prime` function.

Because the `transformer` object receives only prime numbers, the `transformer` object itself can hold the prime numbers. In other words, the `transformer` object in this example is not required to add the prime numbers to the `vector` object.

[!code-cpp[concrt-primes-filter#2](../../parallel/concrt/codesnippet/cpp/how-to-use-a-message-block-filter_2.cpp)]

The `transformer` object now processes only those values that are prime. In the previous example, `transformer` object processes all messages. Therefore, the previous example must receive the same number of messages that it sends. This example uses the result of the [concurrency::send](reference/concurrency-namespace-functions.md#send) function to determine how many messages to receive from the `transformer` object. The `send` function returns **`true`** when the message buffer accepts the message and **`false`** when the message buffer rejects the message. Therefore, the number of times that the message buffer accepts the message matches the count of prime numbers.

## Example: Finished message block filter code sample

The following code shows the complete example. The example calls both the `count_primes` function and the `count_primes_filter` function.

[!code-cpp[concrt-primes-filter#3](../../parallel/concrt/codesnippet/cpp/how-to-use-a-message-block-filter_3.cpp)]

## Compiling the Code

Copy the example code and paste it in a Visual Studio project, or paste it in a file that is named `primes-filter.cpp` and then run the following command in a Visual Studio Command Prompt window.

> **cl.exe /EHsc primes-filter.cpp**

## Robust Programming

A filter function can be a lambda function, a function pointer, or a function object. Every filter function takes one of the following forms:

```Output
bool (T)
bool (T const &)
```

To eliminate the unnecessary copying of data, use the second form when you have an aggregate type that is transmitted by value.

## See also

[Asynchronous Agents Library](../../parallel/concrt/asynchronous-agents-library.md)<br/>
[Walkthrough: Creating a Dataflow Agent](../../parallel/concrt/walkthrough-creating-a-dataflow-agent.md)<br/>
[Walkthrough: Creating an Image-Processing Network](../../parallel/concrt/walkthrough-creating-an-image-processing-network.md)<br/>
[transformer Class](../../parallel/concrt/reference/transformer-class.md)
