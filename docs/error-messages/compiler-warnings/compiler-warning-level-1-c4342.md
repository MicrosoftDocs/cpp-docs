---
description: "Learn more about: Compiler Warning (level 1) C4342"
title: "Compiler Warning (level 1) C4342"
ms.date: "11/04/2016"
f1_keywords: ["C4342"]
helpviewer_keywords: ["C4342"]
ms.assetid: 47d4d5ab-069f-4cdc-98c3-10d649577a37
---
# Compiler Warning (level 1) C4342

behavior change: '*function*' called, but a member operator was called in previous versions

In versions of Visual C++ before Visual Studio 2002, a member was called, but this behavior has been changed and the compiler now finds the best match in namespace scope.

If a member operator was found, the compiler would previously not consider any namespace scope operators. If there is a better match at namespace scope, the current compiler correctly calls it, whereas previous compilers wouldn't consider it.

This warning should be disabled after you successfully port your code to the current version.  The compiler may give false positives, generating this warning for code where there is no behavior change.

This warning is off by default. For more information, see [Compiler Warnings That Are Off by Default](../../preprocessor/compiler-warnings-that-are-off-by-default.md).

The following sample generates C4342:

```cpp
// C4342.cpp
// compile with: /EHsc /W1
#include <fstream>
#pragma warning(default: 4342)
using namespace std;
struct X : public ofstream {
   X();
};

X::X() {
   open( "ofs_bug_ev.txt." );
   if ( is_open() ) {
      *this << "Text" << "<-should be text" << endl;   // C4342
      *this << ' ' << "<-should be space symbol" << endl;   // C4342
   }
}

int main() {
   X b;
   b << "Text" << "<-should be text" << endl;
   b << ' ' << "<-should be space symbol" << endl;
}
```
