---
description: "Learn more about: piecewise_contruct_t Structure"
title: "piecewise_contruct_t Structure"
ms.date: "11/04/2016"
f1_keywords: ["utility/std::piecewise_contruct_t"]
helpviewer_keywords: ["piecewise_contruct_t class", "piecewise_contruct_t structure"]
---
# piecewise_contruct_t Structure

The struct `piecewise_construct_t` is an empty structure type used to keep separate constructor and function overloading. Specifically, `pair` has a constructor with `piecewise_construct_t` as the first argument, followed by two `tuple` arguments.

## Syntax

```cpp
struct piecewise_construct_t { explicit piecewise_construct_t() = default; };

inline constexpr piecewise_construct_t piecewise_construct{};
```
