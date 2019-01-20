---
title: "Arrays in Expressions"
ms.date: "11/04/2016"
helpviewer_keywords: ["expressions [C++], arrays in", "arrays [C++], in expressions"]
ms.assetid: 6e5a795b-d6bd-4e39-b313-6a20d47c4d4b
---
# Arrays in Expressions

When an identifier of an array type appears in an expression other than `sizeof`, address-of (**&**), or initialization of a reference, it is converted to a pointer to the first array element. For example:

```cpp
char szError1[] = "Error: Disk drive not ready.";
char *psz = szError1;
```

The pointer `psz` points to the first element of the array `szError1`. Note that arrays, unlike pointers, are not modifiable l-values. Therefore, the following assignment is illegal:

```cpp
szError1 = psz;
```

## See also

- [Arrays](../cpp/arrays-cpp.md)
