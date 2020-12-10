---
description: "Learn more about: bad_any_cast Class"
title: "bad_any_cast Class"
ms.date: "04/04/2019"
f1_keywords: ["any/std::bad_any_cast", "any/std::bad_any_cast::what"]
helpviewer_keywords: ["any/std::bad_any_cast", "any/std::bad_any_cast::what"]
---
# bad_any_cast Class

Objects thrown by a failed `any_cast`.

## Syntax

```cpp
class bad_any_cast
```

### Member functions

|Name|Description|
|-|-|
|[what](#what)|Returns the type.|

## <a name="what"></a> what

Returns the type.

```cpp
const char* what() const noexcept override;
```
