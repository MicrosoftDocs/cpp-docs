---
description: "Learn more about: Compiler Error C3779"
title: "Compiler Error C3779"
ms.date: 05/19/2021
f1_keywords: ["C3779"]
helpviewer_keywords: ["C3779"]
---
# Compiler Error C3779

> '*function*': a function that returns '*auto or decltype(auto)*' cannot be used before it is defined

The **`auto`** return type of the specified function call couldn't be deduced. The compiler didn't have enough information at the call site.

## Remarks

This error can occur when you call a forward-declared member function that has an **`auto`** return type but no body or trailing return type. You can also get this error when the compiler can't find a candidate return type when it instantiates a template specialization. A common cause of this error is a missing interface header. The missing type can often be determined from the typename mentioned in a note that follows this error. To resolve this issue, for every type you use, include the header for the namespace the type is in.

## Examples

The following C++/WinRT sample generates C3779:

```cpp
// C3779.cpp
#include <winrt/Windows.Gaming.Input.h>

void CheckGamepads()
{
    auto gamepads =
        winrt::Windows::Gaming::Input::Gamepad::Gamepads();
    for (auto&& gamepad : gamepads)
    {
        check(gamepad);
    }
}
```

This code reports an error:

```Console
C3779.cpp(8): error C3779: winrt::impl::consume_Windows_Foundation_Collections_IIterable<D,winrt::Windows::Gaming::Input::Gamepad>::First': a function that returns 'auto' cannot be used before it is defined
with
[
    D=winrt:::Windows:::Gaming:::Input:::Gamepad
]
note: see declaration of 'winrt::impl::consume_Windows_Foundation_Collections_IIterable<D,winrt::Windows::Gaming::Input::Gamepad>::First'
with
[
    D=winrt::Windows::Gaming::Input::IVisualCollection
]
```

The note implies that the return type definition depends on `Windows::Foundation::Collections::IIterable`. To resolve the issue, include the header for its containing namespace:

```cpp
// C3779b.cpp
#include <winrt/Windows.Foundation.Collections.h>
#include <winrt/Windows.Gaming.Input.h>

void CheckGamepads()
{
    auto gamepads =
        winrt::Windows::Gaming::Input::Gamepad::Gamepads();
    for (auto&& gamepad : gamepads)
    {
        check(gamepad);
    }
}
```

## See also

[Consume APIs with C++/WinRT](/windows/uwp/cpp-and-winrt-apis/consume-apis)\
[Why does my C++/WinRT project get errors of the form "consume_Something: function that returns 'auto' cannot be used before it is defined"?](https://devblogs.microsoft.com/oldnewthing/20190530-00/?p=102529)
