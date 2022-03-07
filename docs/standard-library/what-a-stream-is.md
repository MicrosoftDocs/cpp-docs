---
description: "Learn more about: What a Stream Is"
title: "What a Stream Is"
ms.date: "11/04/2016"
helpviewer_keywords: ["reading data [C++], iostream programming", "data [C++], reading", "streams [C++], in iostream classes", "streams [C++]"]
---
# What a Stream Is

Like C, C++ doesn't have built-in input/output capability. All C++ compilers, however, come bundled with a systematic, object-oriented I/O package, known as the `iostream` classes. The stream is the central concept of the `iostream` classes. You can think of a stream object as a smart file that acts as a source and destination for bytes. A stream's characteristics are determined by its class and by customized insertion and extraction operators.

Through device drivers, the disk operating system deals with the keyboard, screen, printer, and communication ports as extended files. The `iostream` classes interact with these extended files. Built-in classes support reading from and writing to memory with syntax identical to that for disk I/O, which makes it easy to derive stream classes.

## In This Section

[Input/Output Alternatives](../standard-library/input-output-alternatives.md)

## See also

[`iostream` Programming](../standard-library/iostream-programming.md)
