---
description: "Learn more about: Casting (C++/CX)"
title: "Casting (C++/CX)"
ms.date: "06/19/2018"
ms.assetid: 5247f6c7-6a0a-4021-97c9-21c868bd9455
---
# Casting (C++/CX)

Four different cast operators apply to Windows Runtime types: [static_cast Operator](../cpp/static-cast-operator.md), [dynamic_cast Operator](../cpp/dynamic-cast-operator.md), **safe_cast Operator**, and [reinterpret_cast Operator](../cpp/reinterpret-cast-operator.md). **safe_cast** and **`static_cast`** throw an exception when the conversion can't be performed; [static_cast Operator](../cpp/static-cast-operator.md) also performs compile-time type checking. **`dynamic_cast`** returns **`nullptr`** if it fails to convert the type. Although **`reinterpret_cast`** returns a non-null value, it might be invalid. For this reason, we recommend that you not use **`reinterpret_cast`** unless you know that the cast will succeed. In addition, we recommend that you not use C-style casts in your C++/CX code because they are identical to **`reinterpret_cast`**.

The compiler and runtime also perform implicit casts—for example, in boxing operations when a value type or built-in type are passed as arguments to a method whose parameter type is `Object^`. In theory, an implicit cast should never cause an exception at run time; if the compiler can't perform an implicit conversion, it raises an error at compile time.

Windows Runtime is an abstraction over COM, which uses HRESULT error codes instead of exceptions. In general, the [Platform::InvalidCastException](../cppcx/platform-invalidcastexception-class.md) indicates a low-level COM error of E_NOINTERFACE.

## static_cast

A **`static_cast`** is checked at compile time to determine whether there is an inheritance relationship between the two types. The cast causes a compiler error if the types are not related.

A **`static_cast`** on a ref class also causes a run-time check to be performed. A **`static_cast`** on a ref class can pass compile time verification but still fail at run time; in this case a `Platform::InvalidCastException` is thrown. In general, you don't have to handle these exceptions because almost always they indicate programming errors that you can eliminate during development and testing.

Use **`static_cast`** if the code explicitly declares a relationship between the two types, and you therefore are sure that the cast should work.

```cpp
    interface class A{};
    public ref class Class1 sealed : A { };
    // ...
    A^ obj = ref new Class1(); // Class1 is an A
    // You know obj is a Class1. The compiler verifies that this is possible, and in C++/CX a run-time check is also performed.
    Class1^ c = static_cast<Class1^>(obj);
```

## safe_cast

The **safe_cast** operator is part of Windows Runtime. It performs a run-time type check and throws a `Platform::InvalidCastException` if the conversion fails. Use **safe_cast** when a run-time failure indicates an exceptional condition. The primary purpose of **safe_cast** is to help identify programming errors during the development and testing phases at the point where they occur. You don't have to handle the exception because the unhandled exception itself identifies the point of failure.

Use safe_cast if the code does not declare the relationship but you are sure that the cast should work.

```cpp
    // A and B are not related
    interface class A{};
    interface class B{};
    public ref class Class1 sealed : A, B { };
    // ...
    A^ obj = ref new Class1();

    // You know that obj’s backing type implements A and B, but
    // the compiler can’t tell this by comparing A and B. The run-time type check succeeds.
    B^ obj2 = safe_cast<B^>(obj);
```

## dynamic_cast

Use **`dynamic_cast`** when you cast an object (more specifically, a hat **^**) to a more derived type, you expect either that the target object might sometimes be **`nullptr`** or that the cast might fail, and you want to handle that condition as a regular code path instead of an exception. For example, in the **Blank App (Universal Windows)** project template, the `OnLaunched` method in app.xamp.cpp uses **`dynamic_cast`** to test whether the app window has content. It's not an error if it doesn’t have content; it is an expected condition. `Windows::Current::Content` is a `Windows::UI::XAML::UIElement` and the conversion is to a `Windows::UI.XAML::Controls::Frame`, which is a more derived type in the inheritance hierarchy.

```cpp
void App::OnLaunched(Windows::ApplicationModel::Activation::LaunchActivatedEventArgs^ args)
{
    auto rootFrame = dynamic_cast<Frame^>(Window::Current->Content);

    // Do not repeat app initialization when the window already has content,
    // just ensure that the window is active
    if (rootFrame == nullptr)
    {
        // Create a Frame to act as the navigation context and associate it with
        // a SuspensionManager key
        rootFrame = ref new Frame();
        // ...
    }
}
```

Another use of **`dynamic_cast`** is to probe an `Object^` to determine whether it contains a boxed value type. In this case, you attempt a `dynamic_cast<Platform::Box>` or a `dynamic_cast<Platform::IBox>`.

## dynamic_cast and tracking references (%)

You can also apply a **`dynamic_cast`** to a tracking reference, but in this case the cast behaves like **safe_cast**. It throws `Platform::InvalidCastException` on failure because a tracking reference cannot have a value of **`nullptr`**.

## reinterpret_cast

We recommend that you not use [reinterpret_cast](../cpp/reinterpret-cast-operator.md) because neither a compile-time check nor a run-time check is performed. In the worst case, a **`reinterpret_cast`** makes it possible for programming errors to go undetected at development time and cause subtle or catastrophic errors in your program’s behavior. Therefore, we recommend that you use **`reinterpret_cast`** only in those rare cases when you must cast between unrelated types and you know that the cast will succeed. An example of a rare use is to convert a Windows Runtime type to its underlying ABI type—this means that you are taking control of the reference counting for the object. To do this, we recommend that you use the [ComPtr Class](../cpp/com-ptr-t-class.md) smart pointer. Otherwise, you must specifically call Release on the interface. The following example shows how a ref class can be cast to an `IInspectable*`.

```cpp
#include <wrl.h>
using namespace Microsoft::WRL;
auto winRtObject = ref new SomeWinRTType();
ComPtr<IInspectable> inspectable = reinterpret_cast<IInspectable*>(winRtObject);
// ...
```

If you use **`reinterpret_cast`** to convert from oneWindows Runtime interface to another, you cause the object to be released twice. Therefore, only use this cast when you are converting to a non-C++ component extensions interface.

## ABI types

- ABI types live in headers in the Windows SDK. Conveniently, the headers are named after the namespaces—for example, `windows.storage.h`.

- ABI types live in a special namespace ABI—for example, `ABI::Windows::Storage::Streams::IBuffer*`.

- Conversions between a Windows Runtime interface type and its equivalent ABI type are always safe—that is, `IBuffer^` to `ABI::IBuffer*`.

- A Windows Runtime runtime class should always be converted to `IInspectable*` or its default interface, if that is known.

- After you convert to ABI types, you own the lifetime of the type and must follow the COM rules. We recommend that you use `WRL::ComPtr` to simplify lifetime management of ABI pointers.

The following table summarizes the cases in which it is safe to use **`reinterpret_cast`**. In every case, the cast is safe in both directions.

| Cast from, cast to | Cast to, cast from |
|--|--|
| `HSTRING` | `String^` |
| `HSTRING*` | `String^*` |
| `IInspectable*` | `Object^` |
| `IInspectable**` | `Object^*` |
| `IInspectable-derived-type*` | `same-interface-from-winmd^` |
| `IInspectable-derived-type**` | `same-interface-from-winmd^*` |
| `IDefault-interface-of-RuntimeClass*` | `same-RefClass-from-winmd^` |
| `IDefault-interface-of-RuntimeClass**` | `same-RefClass-from-winmd^*` |

## See also

- [Type System](../cppcx/type-system-c-cx.md)
- [C++/CX Language Reference](../cppcx/visual-c-language-reference-c-cx.md)
- [Namespaces Reference](../cppcx/namespaces-reference-c-cx.md)
