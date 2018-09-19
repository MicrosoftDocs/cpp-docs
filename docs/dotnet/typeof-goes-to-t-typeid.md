---
title: "typeof Goes to T::typeid | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-cli"]
ms.topic: "conceptual"
dev_langs: ["C++"]
helpviewer_keywords: ["typeid operator", "__typeof keyword", "typeid keyword [C++]"]
ms.assetid: 6a0d35a7-7a1a-4070-b187-cff37cfdc205
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "dotnet"]
---
# typeof Goes to T::typeid

The `typeof` operator used in Managed Extensions for C++ has been supplanted by the `typeid` keyword in Visual C++.

In Managed Extensions, the `__typeof()` operator returns the associated `Type*` object when passed the name of a managed type. For example:

```
// Creates and initializes a new Array instance.
Array* myIntArray =
   Array::CreateInstance( __typeof(Int32), 5 );
```

In the new syntax, `__typeof` has been replaced by an additional form of `typeid` that returns a `Type^` when a managed type is specified.

```
// Creates and initializes a new Array instance.
Array^ myIntArray =
   Array::CreateInstance( Int32::typeid, 5 );
```

## See Also

[General Language Changes (C++/CLI)](../dotnet/general-language-changes-cpp-cli.md)<br/>
[typeid](../windows/typeid-cpp-component-extensions.md)