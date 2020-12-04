---
description: "Learn more about: Compiler Warning (level 1) C4067"
title: "Compiler Warning (level 1) C4067"
ms.date: "11/04/2016"
f1_keywords: ["C4067"]
helpviewer_keywords: ["C4067"]
ms.assetid: 1d10353e-8cd5-4b01-9184-a06189b965a4
---
# Compiler Warning (level 1) C4067

> unexpected tokens following preprocessor directive - expected a newline

## Remarks

The compiler found and ignored extra characters following a preprocessor directive. This can be caused by any unexpected characters, though a common cause is a stray semicolon after the directive. Comments do not cause this warning. The **/Za** compiler option enables this warning for more preprocessor directives than the default setting.

## Example

```cpp
// C4067a.cpp
// compile with: cl /EHsc /DX /W1 /Za C4067a.cpp
#include <iostream>
#include <string> s     // C4067
#if defined(X);         // C4067
std::string s{"X is defined"};
#else
std::string s{"X is not defined"};
#endif;                 // C4067 only under /Za
int main()
{
    std::cout << s << std::endl;
}
```

To resolve this warning, delete the stray characters, or move them into a comment block. Certain C4067 warnings may be disabled by removing the **/Za** compiler option.

```cpp
// C4067b.cpp
// compile with: cl /EHsc /DX /W1 C4067b.cpp
#include <iostream>
#include <string>
#if defined(X)
std::string s{"X is defined"};
#else
std::string s{"X is not defined"};
#endif
int main()
{
    std::cout << s << std::endl;
}
```
