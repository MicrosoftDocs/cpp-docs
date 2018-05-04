---
title: "exception Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-standard-libraries"]
ms.topic: "reference"
f1_keywords: ["exception"]
dev_langs: ["C++"]
helpviewer_keywords: ["exception class"]
ms.assetid: 4f181f67-5888-4b50-89a6-745091ffb2fe
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# exception Class

The class serves as the base class for all exceptions thrown by certain expressions and by the C++ Standard Library.

## Syntax

```cpp
class exception {
   public:
   exception();
   exception(const char* const &message);
   exception(const char* const &message, int);
   exception(const exception &right);
   exception& operator=(const exception &right);
   virtual ~exception();
   virtual const char *what() const;
   };
```

## Remarks

Specifically, this base class is the root of the standard exception classes defined in [\<stdexcept>](../standard-library/stdexcept.md). The C string value returned by `what` is left unspecified by the default constructor, but may be defined by the constructors for certain derived classes as an implementation-defined C string. None of the member functions throw any exceptions.

The `int` parameter allows you to specify that no memory should be allocated. The value of the `int` is ignored.

> [!NOTE]
> The constructors `exception(const char* const &message)` and `exception(const char* const &message, int)` are Microsoft extensions to the C++ Standard Library.

## Example

For examples of the use of the standard exception classes that inherit from the `exception` class, see any of the classes defined in [\<stdexcept>](../standard-library/stdexcept.md).

## Requirements

**Header:** \<exception>

**Namespace:** std

## See also

[Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md)<br/>
