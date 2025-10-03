---
title: "Linker Tools Warning LNK4217"
description: "Learn more about: Linker Tools Warning LNK4217"
ms.date: 07/23/2019
f1_keywords: ["LNK4217"]
helpviewer_keywords: ["LNK4217"]
---
# Linker Tools Warning LNK4217

> symbol '*symbol*' defined in '*filename_1.obj*' is imported by '*filename_2.obj*' in function '*function*'

## Remarks

[__declspec(dllimport)](../../cpp/dllexport-dllimport.md) was specified for a symbol even though the symbol is defined in an object file in the same image. Remove the `__declspec(dllimport)` modifier to resolve this warning.

*symbol* is the symbol name that's defined within the image. *function* is the function that's importing the symbol.

This warning doesn't appear when you compile by using the [/clr](../../build/reference/clr-common-language-runtime-compilation.md) option.

## Example

LNK4217 can also occur if you attempt to link two modules together, when instead you should compile the second module with the import library of the first module.

```cpp
// main.cpp
__declspec(dllimport) void func();

int main()
{
    func();
    return 0;
}
```

And then,

```cpp
// tt.cpp
// compile with: /c
void func() {}
```

Attempting to compile these two modules as shown here will result in LNK4217:

```cmd
cl.exe /c main.cpp tt.cpp
link.exe main.obj tt.obj
```

To fix the error, after compiling the two files, pass tt.obj to lib.exe to create a .lib file, and then link main.obj with tt.lib as shown here:

```cmd
cl.exe /c main.cpp tt.cpp
lib.exe tt.obj /export:func /def
link.exe main.obj tt.lib
```

## See also

[Linker Tools Warning LNK4049](linker-tools-warning-lnk4049.md) \
[Linker Tools Warning LNK4286](linker-tools-warning-lnk4286.md) \
[dllexport, dllimport](../../cpp/dllexport-dllimport.md)
