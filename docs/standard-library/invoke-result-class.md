---
description: "Learn more about: invoke_result Class"
title: "invoke_result Class"
ms.date: "02/21/2019"
f1_keywords: ["type_traits/std::invoke_result", "type_traits/std::invoke_result_t", "type_traits/std::invoke_result::type"]
helpviewer_keywords: ["std::invoke_result", "std::invoke_result_t", "std::invoke_result::type"]
---
# invoke_result Class

Determines the return type of the callable type that takes the specified argument types at compile time. Added in C++17.

## Syntax

```cpp
template <class Callable, class... Args>
   struct invoke_result<Callable(Args...)>;

// Helper type
template<class Callable, class... Args>
   using invoke_result_t = typename invoke_result<Callable, Args...>::type;
```

### Parameters

*Callable*\
The callable type to query.

*Args*\
The types of the argument list to the callable type to query.

## Remarks

Use this template to determine the result type of *Callable*(*Args*...) at compile time, where *Callable* and all types in *Args* are any complete type, an array of unknown bound, or a possibly cv-qualified **`void`**. The `type` member of the class template names the return type of *Callable* when invoked using the arguments *Args*.... The `type` member is only defined if *Callable* can be called when invoked using the arguments *Args*... in an unevaluated context. Otherwise, the class template has no member `type`, which allows SFINAE tests on a particular set of argument types at compile time.

## Requirements

**Header:** \<type_traits>

**Namespace:** std

## See also

[<type_traits>](../standard-library/type-traits.md)\
[invoke](functional-functions.md#invoke)
