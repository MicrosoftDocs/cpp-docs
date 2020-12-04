---
description: "Learn more about: Compiler Warning (level 4) C4673"
title: "Compiler Warning (level 4) C4673"
ms.date: "11/04/2016"
f1_keywords: ["C4673"]
helpviewer_keywords: ["C4673"]
ms.assetid: 95626ec6-f05b-43c7-8b9a-a60a6f98dd30
---
# Compiler Warning (level 4) C4673

throwing 'identifier' the following types will not be considered at the catch site

A throw object cannot be handled in the **`catch`** block. Each type that cannot be handled is listed in the error output immediately following the line containing this warning. Each unhandled type has its own warning. Read the warning for each specific type for more information.

The following sample generates C4673:

```cpp
// C4673.cpp
// compile with: /EHsc /W4
class Base {
private:
   char * m_chr;
public:
   Base() {
      m_chr = 0;
   }

   ~Base() {
      if(m_chr)
         delete m_chr;
   }
};

class Derv : private Base {
public:
   Derv() {}
   ~Derv() {}
};

int main() {
   try {
      Derv D1;
      // delete previous line, uncomment the next line to resolve
      // Base D1;
      throw D1;   // C4673
   }

   catch(...) {}
}
```
