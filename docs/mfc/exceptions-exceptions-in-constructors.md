---
description: "Learn more about: Exceptions: Exceptions in Constructors"
title: "Exceptions: Exceptions in Constructors"
ms.date: "11/04/2016"
helpviewer_keywords: ["constructors [MFC], exceptions", "throwing exceptions [MFC], in constructors", "exceptions [MFC], in constructors"]
ms.assetid: a78eae5a-5821-4b27-9478-1436320ed1e1
---
# Exceptions: Exceptions in Constructors

When throwing an exception in a constructor, clean up whatever objects and memory allocations you have made prior to throwing the exception, as explained in [Exceptions: Throwing Exceptions from Your Own Functions](exceptions-throwing-exceptions-from-your-own-functions.md).

When throwing an exception in a constructor, the memory for the object itself has already been allocated by the time the constructor is called. So, the compiler will automatically deallocate the memory occupied by the object after the exception is thrown.

For more information, see [Exceptions: Freeing Objects in Exceptions](exceptions-freeing-objects-in-exceptions.md).

## See also

[Exception Handling](exception-handling-in-mfc.md)
