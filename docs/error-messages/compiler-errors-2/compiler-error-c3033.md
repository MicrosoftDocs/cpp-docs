---
title: "Compiler Error C3033"
description: "Learn more about: Compiler Error C3033"
ms.date: 11/04/2016
f1_keywords: ["C3033"]
helpviewer_keywords: ["C3033"]
---
# Compiler Error C3033

> 'var' : variable in 'clause' clause cannot have const-qualified type

## Remarks

Values passed to certain clauses cannot be **`const`** variables.

## Example

The following example generates C3033:

```cpp
// C3033.cpp
// compile with: /openmp /link vcomps.lib
int main() {
   const int val = 1;
   int val2 = 1;

   #pragma omp parallel reduction(+ : val)   // C3033
   ;

   #pragma omp parallel reduction(+ : val2)   // OK
   ;
}
```
