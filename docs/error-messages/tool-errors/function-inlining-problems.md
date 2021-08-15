---
description: "Learn more about: Function Inlining Problems"
title: "Function Inlining Problems"
ms.date: "11/04/2016"
helpviewer_keywords: ["/Ob1 C++ compiler option", "inline functions, problems", "-Ob1 C++ compiler option", "/Ob2 C++ compiler option", "-Ob2 C++ compiler option", "function inlining problems"]
ms.assetid: 65d59943-4b3c-4a43-aeb6-dccbf7686740
---
# Function Inlining Problems

If you are using function inlining, you must:

- Have the inline functions implemented in the header file you include.

- Have inlining turned ON in the header file.

```cpp
// LNK2019_function_inline.cpp
// compile with: /c
// post-build command: lib LNK2019_function_inline.obj
#include <stdio.h>
struct _load_config_used {
   void Test();
   void Test2() { printf("in Test2\n"); }
};

void _load_config_used::Test() { printf("in Test\n"); }
```

And then,

```cpp
// LNK2019_function_inline_2.cpp
// compile with: LNK2019_function_inline.lib
struct _load_config_used {
   void Test();
   void Test2();
};

int main() {
   _load_config_used x;
   x.Test();
   x.Test2();   // LNK2019
}
```

If you are using the `#pragma inline_depth` compiler directive, make sure you have a value of 2 or greater set. A value of zero will turn off inlining. Also make sure you are using the **/Ob1** or **/Ob2** compiler options.

Mixing inline and non-inline compile options on different modules can sometimes cause problems. If a C++ library is created with function inlining turned on ([/Ob1](../../build/reference/ob-inline-function-expansion.md) or [/Ob2](../../build/reference/ob-inline-function-expansion.md)) but the corresponding header file describing the functions has inlining turned off (no option), you will get error LNK2001. The functions do not get inlined into the code from the header file, but since they are not in the library file there is no address to resolve the reference.

Similarly, a project that uses function inlining yet defines the functions in a .cpp file rather than in the header file will also get LNK2019. The header file is included everywhere deemed appropriate, but the functions are only inlined when the .cpp file passes through the compiler; therefore, the linker sees the functions as unresolved externals when used in other modules.

```cpp
// LNK2019_FIP.h
struct testclass {
   void PublicStatMemFunc1(void);
};
```

and then,

```cpp
// LNK2019_FIP.cpp
// compile with: /c
#include "LNK2019_FIP.h"
inline void testclass::PublicStatMemFunc1(void) {}
```

and then,

```cpp
// LNK2019_FIP_2.cpp
// compile with: LNK2019_FIP.cpp
// LNK2019 expected
#include "LNK2019_FIP.h"
int main() {
   testclass testclsObject;

   // module cannot see the implementation of PublicStatMemFunc1
   testclsObject.PublicStatMemFunc1();
}
```

## See also

[Linker Tools Error LNK2019](../../error-messages/tool-errors/linker-tools-error-lnk2019.md)
