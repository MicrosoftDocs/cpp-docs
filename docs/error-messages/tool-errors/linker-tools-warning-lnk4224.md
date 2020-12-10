---
description: "Learn more about: Linker Tools Warning LNK4224"
title: "Linker Tools Warning LNK4224"
ms.date: "11/04/2016"
f1_keywords: ["LNK4224"]
helpviewer_keywords: ["LNK4224"]
ms.assetid: 8624b70e-0b93-43cf-b457-834d38632d0b
---
# Linker Tools Warning LNK4224

> *option* is no longer supported; ignored

## Remarks

An invalid, obsolete linker option was specified and ignored.

For example, LNK4224 can occur if a /comment directive appears in .obj. The /comment directive would have been added via the [comment (C/C++)](../../preprocessor/comment-c-cpp.md) pragma, using the deprecated exestr option. Use dumpbin [/ALL](../../build/reference/all.md) to view the linker directives in an .obj file.

If possible, modify the source for the .obj and remove the pragma. If you do ignore this warning, it is possible that an .executable compiled with **/clr:pure** will not run as expected. The **/clr:pure** compiler option is deprecated in Visual Studio 2015 and unsupported in Visual Studio 2017.

## Example

The following sample generates LNK4224.

```cpp
// LNK4224.cpp
// compile with: /c /Zi
// post-build command: link LNK4224.obj /debug /debugtype:map
int main () {
   return 0;
}
```
