---
description: "Learn more about: How Catch Blocks are Evaluated (C++)"
title: "How Catch Blocks are Evaluated (C++)"
ms.date: "11/04/2016"
helpviewer_keywords: ["try-catch keyword [C++], catchable types", "catch keyword [C++], types of catch handlers", "C++ exception handling, catch handlers", "exception handling, catching and deleting exceptions", "types [C++], exception handling"]
ms.assetid: 202dbf07-8ace-4b3b-b3ae-4b45c275e0b4
---
# How Catch Blocks are Evaluated (C++)

C++ enables you to throw exceptions of any type, although in general it is recommended to throw types that are derived from std::exception. A C++ exception can be caught by a **`catch`** handler that specifies the same type as the thrown exception, or by a handler that can catch any type of exception.

If the type of thrown exception is a class, which also has a base class (or classes), it can be caught by handlers that accept base classes of the exception's type, as well as references to bases of the exception's type. Note that when an exception is caught by a reference, it is bound to the actual thrown exception object; otherwise, it is a copy (much the same as an argument to a function).

When an exception is thrown, it may be caught by the following types of **`catch`** handlers:

- A handler that can accept any type (using the ellipsis syntax).

- A handler that accepts the same type as the exception object; because it is a copy, **`const`** and **`volatile`** modifiers are ignored.

- A handler that accepts a reference to the same type as the exception object.

- A handler that accepts a reference to a **`const`** or **`volatile`** form of the same type as the exception object.

- A handler that accepts a base class of the same type as the exception object; since it is a copy, **`const`** and **`volatile`** modifiers are ignored. The **`catch`** handler for a base class must not precede the **`catch`** handler for the derived class.

- A handler that accepts a reference to a base class of the same type as the exception object.

- A handler that accepts a reference to a **`const`** or **`volatile`** form of a base class of the same type as the exception object.

- A handler that accepts a pointer to which a thrown pointer object can be converted via standard pointer conversion rules.

The order in which **`catch`** handlers appear is significant, because handlers for a given **`try`** block are examined in order of their appearance. For example, it is an error to place the handler for a base class before the handler for a derived class. After a matching **`catch`** handler is found, subsequent handlers are not examined. As a result, an ellipsis **`catch`** handler must be the last handler for its **`try`** block. For example:

```cpp
// ...
try
{
    // ...
}
catch( ... )
{
    // Handle exception here.
}
// Error: the next two handlers are never examined.
catch( const char * str )
{
    cout << "Caught exception: " << str << endl;
}
catch( CExcptClass E )
{
    // Handle CExcptClass exception here.
}
```

In this example, the ellipsis **`catch`** handler is the only handler that is examined.

## See also

[Modern C++ best practices for exceptions and error handling](../cpp/errors-and-exception-handling-modern-cpp.md)
