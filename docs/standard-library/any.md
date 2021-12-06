---
description: "Learn more about the classes and functions declared in the <any> header in the C++ Standard Library."
title: "<any>"
ms.date: 09/20/2021
f1_keywords: ["<any>"]
helpviewer_keywords: ["<any>"]
no-loc: ["any", "std", "class"]
---
# `<any>`;

Defines the class `std::any` and several supporting functions and classes.

## Requirements

**Header:** `<any>`

**Namespace:** `std`

**Standard:** C++17 (Use at least **`/std:c++17`** to compile.)

## Members

### Functions

| Name | Description |
|--|--|
| [`any_cast`](../standard-library/any-functions.md#any_cast) | Makes an object into an `any`. |
| [`make_any`](../standard-library/any-functions.md#make_any) | Takes values and creates an `any` object. |
| [`swap`](../standard-library/any-functions.md#swap) | Exchanges the elements of two `any` objects. |

### Classes

| Name | Description |
|--|--|
| [`any`](../standard-library/any-class.md) | An `any` instance either stores a type that satisfies the constructor requirements or has no value. |
| [`bad_any_cast`](../standard-library/bad-any-cast-class.md) | Objects thrown by a failed `any_cast`. |

## See also

[Header files reference](../standard-library/cpp-standard-library-header-files.md)
