---
description: "Learn more about: Writing Your Own Manipulators Without Arguments"
title: "Writing Your Own Manipulators Without Arguments"
ms.date: 06/21/2022
helpviewer_keywords: ["manipulators"]
ms.assetid: 2dc62d09-45b7-454d-bd9d-55f3c72c206d
ms.custom: devdivchpfy22
---

# Writing Your Own Manipulators Without Arguments

Writing manipulators that don't use arguments requires neither class derivation nor use of complex macros. Suppose your printer requires the pair \<ESC>[ to enter bold mode. You can insert this pair directly into the stream:

```cpp
cout << "regular " << '\033' << '[' << "boldface" << endl;
```

Or you can define the `bold` manipulator, which inserts the characters:

```cpp
ostream& bold(ostream& os) {
    return os << '\033' << '[';
}
cout << "regular " << bold << "boldface" << endl;
```

The globally defined `bold` function takes an `ostream` reference argument and returns the `ostream` reference. It isn't a member function or a friend because it doesn't need access to any private class elements. The `bold` function connects to the stream because the stream's `<<` operator is overloaded to accept that type of function, using a declaration that looks something like this:

```cpp
_Myt& operator<<(ios_base& (__cdecl *_Pfn)(ios_base&))
{
    // call ios_base manipulator
    (*_Pfn)(*(ios_base *)this);

    return (*this);
}
```

You can use this feature to extend other overloaded operators. In this case, it's incidental that `bold` inserts characters into the stream. The function is called when it's inserted into the stream, not necessarily when the adjacent characters are printed. Thus, printing could be delayed because of the stream's buffering.

## See also

[Output Streams](../standard-library/output-streams.md)
