---
description: "Learn more about: Compiler Warning (level 1) C4462"
title: "Compiler Warning (level 1) C4462"
ms.date: "10/25/2017"
f1_keywords: ["C4462"]
helpviewer_keywords: ["C4462"]
ms.assetid: 4e20aca4-293e-4c75-a83d-961c27ab7840
---
# Compiler Warning (level 1) C4462

> cannot determine the GUID of the type. Program may fail at runtime.

Warning C4462 occurs in a Windows Runtime app or component when a public `TypedEventHandler` has as one of its type parameters a reference to the enclosing class.

This warning is automatically promoted to an error. If you wish to modify this behavior, use [#pragma warning](../../preprocessor/warning.md). For example, to make C4462 into a level 4 warning issue, add this line to your source code file:

```cpp
#pragma warning(4:4462)
```

## Example

This sample generates warning C4462:

```cpp
namespace N
{
    public ref struct EventArgs sealed {};
    public ref struct R sealed
    {
        R() {}
        event Windows::Foundation::TypedEventHandler<R ^, EventArgs^>^ e;
    };
}

[Platform::MTAThread]
int main()
{
    auto x = ref new N::R();
}
```

There are two ways to work around the error. One way, shown in the next example, is to give the event internal accessibility so that it is available to code in the same executable but not to code in other Windows Runtime components.

```cpp
internal:
    event Windows::Foundation::TypedEventHandler<R ^, EventArgs^>^ e;
```

If the event must be public, then you can use the other workaround, which is to expose it through a default interface:

```cpp
ref struct R;
public interface struct IR{ event Windows::Foundation::TypedEventHandler<R ^, EventArgs^>^ e;};

public ref struct R sealed : [Windows::Foundation::Metadata::Default] IR
{
    R() {}
    virtual event Windows::Foundation::TypedEventHandler<R ^, EventArgs^>^ e;
};
```

A GUID of the type `Windows::Foundation::TypedEventHandler<R^, EventArgs^>^` is only used when the type is accessed from another component. The first workaround works because it can only be accessed within its own component after the workaround. Otherwise, the compiler has to assume the worst case and emit the warning.
