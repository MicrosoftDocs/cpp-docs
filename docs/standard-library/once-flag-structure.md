---
description: "Learn more about: once_flag Structure"
title: "once_flag Structure"
ms.date: "09/17/2018"
f1_keywords: ["mutex/std::once_flag"]
ms.assetid: 71bfb88d-ca8c-4082-a6e1-ff52151e8629
---
# once_flag Structure

Represents a **`struct`** that is used with the template function [call_once](../standard-library/mutex-functions.md#call_once) to ensure that initialization code is called only once, even in the presence of multiple threads of execution.

## Syntax

struct once_flag
   {
   constexpr once_flag() noexcept;
   };

## Remarks

The `once_flag` **`struct`** has only a default constructor.

Objects of type `once_flag` can be created, but they cannot be copied.

## Requirements

**Header:** \<mutex>

**Namespace:** std

## See also

[Header Files Reference](../standard-library/cpp-standard-library-header-files.md)\
[\<mutex>](../standard-library/mutex.md)
