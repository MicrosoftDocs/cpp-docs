---
title: "result_of Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp", "devlang-cpp"]
ms.topic: "reference"
f1_keywords: ["type_traits/std::result_of", "type_traits/std::result_of_t", "type_traits/std::result_of::type"]
dev_langs: ["C++"]
helpviewer_keywords: ["std::result_of", "std::result_of_t", "std::result_of::type"]
ms.assetid: 5374a096-4b4a-4712-aa97-6852c5cdd6be
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# result_of Class

Determines the return type of the callable type that takes the specified argument types.

## Syntax

```cpp
template<class>
struct result_of; // Causes a static assert

template <class Fn, class... ArgTypes>
struct result_of<Fn(ArgTypes...)>;

// Helper type
template<class T>
   using result_of_t = typename result_of<T>::type;
```

### Parameters

`Fn`
 The callable type to query.

`ArgTypes`
 The types of the argument list to the callable type to query.

## Remarks

Use this template to determine at compile time the result type of `Fn`(`ArgTypes`), where `Fn` is a callable type, reference to function, or reference to callable type, invoked using an argument list of the types in `ArgTypes`. The `type` member of the template class names the result type of `decltype(std::invoke(declval<Fn>(), declval<ArgTypes>()...))` if the unevaluated expression `std::invoke(declval<Fn>(), declval<ArgTypes>()...)` is well-formed. Otherwise, the template class has no member `type`. The type `Fn` and all types in the parameter pack `ArgTypes` must be complete types, `void`, or arrays of unknown bound.

## Requirements

**Header:** \<type_traits>

**Namespace:** std

## See also

[<type_traits>](../standard-library/type-traits.md)<br/>
