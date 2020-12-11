---
description: "Learn more about: Compiler Error C3487"
title: "Compiler Error C3487"
ms.date: "11/04/2016"
f1_keywords: ["C3487"]
helpviewer_keywords: ["C3487"]
ms.assetid: 39bda474-4418-4a79-98bf-2b22fa92eaaa
---
# Compiler Error C3487

'return type': all return expressions must deduce to the same type: previously it was 'return type'

A lambda must specify its return type unless it contains a single return statement. If a lambda contains multiple return statements, they must all have the same type.

### To correct this error

- Specify a trailing return type for the lambda. Verify that all returns from the lambda are the same type or can be implicitly converted to the return type.

## Example

The following example generates C3487 because the return types of the lambda do not match:

```cpp
// C3487.cpp
// Compile by using: cl /c /W4 C3487.cpp

int* test(int* pi) {
   // To fix the error, uncomment the trailing return type below
   auto odd_pointer = [=]() /* -> int* */ {
      if (*pi % 2)
         return pi;
      return nullptr; // C3487 - nullptr is not an int* type
   };
   return odd_pointer();
}
```

## See also

[Lambda Expressions](../../cpp/lambda-expressions-in-cpp.md)
