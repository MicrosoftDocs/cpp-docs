---
description: "Learn more about: <stdexcept>"
title: "<stdexcept>"
ms.date: "11/04/2016"
f1_keywords: ["<stdexcept>"]
helpviewer_keywords: ["stdexcept header"]
ms.assetid: 495c10b1-1e60-4514-9f8f-7fda11a2f522
---
# `<stdexcept>`

Defines several standard classes used for reporting exceptions. The classes form a derivation hierarchy all derived from class [`exception`](exception-class.md) and include two general types of exceptions: logical errors and run-time errors. The logical errors are caused by programmer mistakes. They derive from the base class `logic_error` and include:

- `domain_error`
- `invalid_argument`
- `length_error`
- `out_of_range`

The run-time errors occur because of mistakes in either the library functions or in the run-time system. They derive from the base class `runtime_error` and include:

- `overflow_error`
- `range_error`
- `underflow_error`

### Classes

|Class|Description|
|-|-|
|[`domain_error` class](domain-error-class.md)|The class serves as the base class for all exceptions thrown to report a domain error.|
|[`invalid_argument` class](invalid-argument-class.md)|The class serves as the base class for all exceptions thrown to report an invalid argument.|
|[`length_error` class](length-error-class.md)|The class serves as the base class for all exceptions thrown to report an attempt to generate an object too long to be specified.|
|[`logic_error` class](logic-error-class.md)|The class serves as the base class for all exceptions thrown to report errors presumably detectable before the program executes, such as violations of logical preconditions.|
|[`out_of_range` class](out-of-range-class.md)|The class serves as the base class for all exceptions thrown to report an argument that is out of its valid range.|
|[`overflow_error` class](overflow-error-class.md)|The class serves as the base class for all exceptions thrown to report an arithmetic overflow.|
|[`range_error` class](range-error-class.md)|The class serves as the base class for all exceptions thrown to report a range error.|
|[`runtime_error` class](runtime-error-class.md)|The class serves as the base class for all exceptions thrown to report errors presumably detectable only when the program executes.|
|[`underflow_error` class](underflow-error-class.md)|The class serves as the base class for all exceptions thrown to report an arithmetic underflow.|

## See also

[Header Files Reference](cpp-standard-library-header-files.md)\
[Thread Safety in the C++ Standard Library](thread-safety-in-the-cpp-standard-library.md)
