---
title: "<future> enums"
description: "Learn more about: <future> enums"
ms.date: 11/04/2016
f1_keywords: ["future/std::future_errc", "future/std::future_status", "future/std::launch"]
---
# `<future>` enums

The `<future>` header provides the following enums:

## <a name="future_errc"></a> `future_errc` enumeration

Supplies symbolic names for all of the errors that are reported by the [`future_error`](../standard-library/future-error-class.md) class.

```cpp
class future_errc {
   broken_promise,
   future_already_retrieved,
   promise_already_satisfied,
   no_state
   };
```

## <a name="future_status"></a> `future_status` enumeration

Supplies symbolic names for the reasons that a timed wait function can return.

```cpp
enum future_status{
    ready,
    timeout,
    deferred
};
```

## <a name="launch"></a> `launch` enumeration

Represents a bitmask type that describes the possible modes for the template function [`async`](../standard-library/future-functions.md#async).

```cpp
class launch{
   async,
   deferred
   };
```

## See also

[\<future>](future.md)
