---
title: "&lt;new&gt; typedefs"
ms.date: "11/04/2016"
f1_keywords: ["new/std::new_handler"]
ms.assetid: aef01de1-06b5-4b6c-aebc-2c9f423d7e47
---
# &lt;new&gt; typedefs

| |
| - |
|[new_handler](#new_handler)|

## <a name="new_handler"></a>  new_handler

The type points to a function suitable for use as a new handler.

```cpp
typedef void (*new_handler)();
```

### Remarks

This type of handler function is called by **operator new** or `operator new[]` when they cannot satisfy a request for additional storage.

### Example

See [set_new_handler](../standard-library/new-functions.md#set_new_handler) for an example using `new_handler` as a return value.

## See also

[\<new>](../standard-library/new.md)<br/>
