---
description: "Learn more about: SafeIntException Class"
title: "SafeIntException Class"
ms.date: "10/22/2018"
ms.topic: "reference"
f1_keywords: ["SafeIntException Class", "SafeIntException", "SafeIntException.SafeIntException", "SafeIntException::SafeIntException"]
helpviewer_keywords: ["SafeIntException class", "SafeIntException, constructor"]
ms.assetid: 88bef958-1f48-4d55-ad4f-d1f9581a293a
---
# SafeIntException Class

The `SafeInt` class uses `SafeIntException` to identify why a mathematical operation cannot be completed.

> [!NOTE]
> The latest version of this library is located at [https://github.com/dcleblanc/SafeInt](https://github.com/dcleblanc/SafeInt).

## Syntax

```cpp
class SafeIntException;
```

## Members

### Public Constructors

Name                                                    | Description
------------------------------------------------------- | ------------------------------------
[SafeIntException::SafeIntException](#safeintexception) | Creates a `SafeIntException` object.

## Remarks

The [SafeInt class](safeint-class.md) is the only class that uses the `SafeIntException` class.

## Inheritance Hierarchy

`SafeIntException`

## Requirements

**Header:** safeint.h

**Namespace:** msl::utilities

## <a name="safeintexception"></a> SafeIntException::SafeIntException

Creates a `SafeIntException` object.

```cpp
SafeIntException();

SafeIntException(
   SafeIntError code
);
```

### Parameters

*code*<br/>
[in] An enumerated data value that describes the error that occurred.

### Remarks

The possible values for *code* are defined in the file Safeint.h. For convenience, the possible values are also listed here.

- `SafeIntNoError`
- `SafeIntArithmeticOverflow`
- `SafeIntDivideByZero`
