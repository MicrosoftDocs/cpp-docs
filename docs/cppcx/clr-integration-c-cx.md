---
description: "Learn more about: CLR integration (C++/CX)"
title: "CLR integration (C++/CX)"
ms.date: "01/22/2017"
ms.assetid: 76e213cf-2f3d-4181-b35b-9fd25d5b307c
---
# CLR integration (C++/CX)

Some Windows Runtime types receive special handling in C++/CX and the languages that are based on the common language runtime (CLR). This article discusses how several types in one language map to another language. For example, the CLR maps Windows.Foundation.IVector to System.Collections.IList, Windows.Foundation.IMap to System.Collections.IDictionary, and so on. Similarly, C++/CX specially maps types such as Platform::Delegate and Platform::String.

## Mapping the Windows Runtime to C++/CX

When C++/CX reads a Windows metadata (.winmd) file, the compiler automatically maps common Windows Runtime namespaces and types to C++/CX namespaces and types. For example, the numeric Windows Runtime type `UInt32` is automatically mapped to `default::uint32`.

C++/CX maps several other Windows Runtime types to the **Platform** namespace. For example, the **Windows::Foundation** HSTRING handle, which represents a read-only Unicode text string, is mapped to the C++/CX `Platform::String` class. When a Windows Runtime operation returns an error HRESULT, it's mapped to a C++/CX `Platform::Exception`.

The C++/CX also maps certain types in Windows Runtime namespaces to enhance the functionality of the type. For these types, C++/CX provides helper constructors and methods that are specific to C++ and are not available in the type's standard .winmd file.

The following lists show value structs that support new constructors and helper methods. If you have previously written code that uses struct initialization lists, change it to use the newly added constructors.

**Windows::Foundation**

- Point

- Rect

- Size

**Windows::UI**

- Color

**Windows::UI::Xaml**

- CornerRadius

- Duration

- GridLength

- Thickness

**Windows::UI::Xaml::Interop**

- TypeName

**Windows::UI::Xaml::Media**

- Matrix

**Windows::UI::Xaml::Media::Animation**

- KeyTime

- RepeatBehavior

**Windows::UI::Xaml::Media::Media3D**

- Matrix3D

## Mapping the CLR to C++/CX

When the Microsoft C++ or C# compilers read a .winmd file, they automatically map certain types in the metadata file to appropriate C++/CX or CLR types. For example, in the CLR, the IVector\<T> interface is mapped to IList\<T>. But in C++/CX, the IVector\<T> interface is not mapped to another type.

IReference\<T> in the Windows Runtime maps to Nullable\<T> in .NET.

## See also

[Interoperating with Other Languages](../cppcx/interoperating-with-other-languages-c-cx.md)
