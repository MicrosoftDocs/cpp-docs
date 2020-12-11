---
description: "Learn more about: spectre"
title: "spectre"
ms.date: "01/23/2018"
f1_keywords: ["spectre_cpp", "spectre", "nomitigation"]
helpviewer_keywords: ["__declspec keyword (C++), spectre", "spectre __declspec keyword"]
---
# spectre

**Microsoft Specific**

Tells the compiler not to insert Spectre variant 1 speculative execution barrier instructions for a function.

## Syntax

> **__declspec( spectre(nomitigation) )**

## Remarks

The [/Qspectre](../build/reference/qspectre.md) compiler option causes the compiler to insert speculative execution barrier instructions. They're inserted where analysis indicates that a Spectre variant 1 security vulnerability exists. The specific instructions emitted depend on the processor. While these instructions should have a minimal impact on code size or performance, there may be cases where your code is not affected by the vulnerability, and requires maximum performance.

Expert analysis might determine that a function is safe from a Spectre variant 1 bounds check bypass defect. In that case, you can suppress the generation of mitigation code within a function by applying `__declspec(spectre(nomitigation))` to the function declaration.

> [!CAUTION]
> The **/Qspectre** speculative execution barrier instructions provide important security protection and have a negligible affect on performance. Therefore, we recommend that you do not suppress them, except in the rare case where the performance of a function is a critical concern and the function is known to be safe.

## Example

The following code shows how to use `__declspec(spectre(nomitigation))`.

```cpp
// compile with: /c /Qspectre
static __declspec(spectre(nomitigation))
int noSpectreIssues() {
    // No Spectre variant 1 vulnerability here
    // ...
    return 0;
}

int main() {
    noSpectreIssues();
    return 0;
}
```

**END Microsoft Specific**

## See also

[__declspec](../cpp/declspec.md)<br/>
[Keywords](../cpp/keywords-cpp.md)<br/>
[/Qspectre](../build/reference/qspectre.md)
