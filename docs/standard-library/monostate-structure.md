---
description: "Learn more about: monostate Struct"
title: "monostate Struct"
ms.date: "04/04/2019"
f1_keywords: ["variant/std::monostate"]
helpviewer_keywords: ["monostate struct"]
---
# monostate Struct

The class monostate serves as the alternative type for a variant to make the variant type default constructible.

## Syntax

```cpp
struct monostate;

constexpr bool operator<(monostate, monostate) noexcept;
constexpr bool operator>(monostate, monostate) noexcept;
constexpr bool operator<=(monostate, monostate) noexcept;
constexpr bool operator>=(monostate, monostate) noexcept;
constexpr bool operator==(monostate, monostate) noexcept;
constexpr bool operator!=(monostate, monostate) noexcept;
```
