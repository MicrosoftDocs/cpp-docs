---
description: "Learn more about: Using C++ Interop (Implicit PInvoke)"
title: "Using C++ Interop (Implicit PInvoke)"
ms.date: "11/04/2016"
helpviewer_keywords: ["blittable types [C++]", "platform invoke [C++], implicit", "interop [C++], features", "data marshaling [C++], C++ Interop features", "porting [C++], C++ native to .NET", "COM interfaces [C++]", "implicit platform invoke", "examples [C++], interoperability", "types [C++], blittable", "marshaling [C++], C++ Interop features", "platform invoke [C++], examples", "interoperability [C++]", "C++ Interop", "interoperability [C++], Implicit PInvoke", "C++, interop", "C++ COM Interop", ".NET [C++], porting C++ native to"]
ms.assetid: 5f710bf1-88ae-4c4e-8326-b3f0b7c4c68a
---
# Using C++ Interop (Implicit PInvoke)

Unlike other .NET languages, Visual C++ has interoperability support that allows managed and unmanaged code to exist in the same application and even in the same file (with the [managed, unmanaged](../preprocessor/managed-unmanaged.md) pragmas). This allows Visual C++ developers to integrate .NET functionality into existing Visual C++ applications without disturbing the rest of the application.

You can also call unmanaged functions from a managed compiland using [dllexport, dllimport](../cpp/dllexport-dllimport.md).

Implicit PInvoke is useful when you do not need to specify how function parameters will be marshaled, or any of the other details that can be specified when explicitly calling DllImportAttribute.

Visual C++ provides two ways for managed and unmanaged functions to interoperate:

- [Using Explicit PInvoke in C++ (DllImport Attribute)](../dotnet/using-explicit-pinvoke-in-cpp-dllimport-attribute.md)

Explicit PInvoke is supported by the .NET Framework and is available in most .NET languages. But as its name implies, C++ Interop is specific to Visual C++.

## C++ Interop

C++ Interop provides better type safety, and it is typically less tedious to implement. However, C++ Interop is not an option if the unmanaged source code is not available, or for cross-platform projects.

## C++ COM Interop

The interoperability features supported by Visual C++ offer a particular advantage over other .NET languages when it comes to interoperating with COM components. Instead of being limited to the restrictions of the .NET Framework [Tlbimp.exe (Type Library Importer)](/dotnet/framework/tools/tlbimp-exe-type-library-importer), such as limited support for data types and the mandatory exposure of every member of every COM interface, C++ Interop allows COM components to be accessed at will and does not require separate interop assemblies. Unlike Visual Basic and C#, Visual C++ can use COM objects directly using the usual COM mechanisms (such as **CoCreateInstance** and **QueryInterface**). This is possible due to C++ Interop features that cause the compiler to automatically insert the transition code to move from managed to unmanaged functions and back again.

Using C++ Interop, COM components can be used as they are normally used or they can be wrapped inside C++ classes. These wrapper classes are called custom runtime callable wrappers, or CRCWs, and they have two advantages over using COM directly in application code:

- The resulting class can be used from languages other than Visual C++.

- The details of the COM interface can be hidden from the managed client code. .NET data types can be used in place of native types, and the details of data marshaling can be performed transparently inside the CRCW.

Regardless of whether COM is used directly or through a CRCW, argument types other than simple, blittable types must be marshaled.

## Blittable Types

For unmanaged APIs that use simple, intrinsic types (see [Blittable and Non-Blittable Types](/dotnet/framework/interop/blittable-and-non-blittable-types)), no special coding is required because these data types have the same representation in memory, but more complex data types require explicit data marshaling. For an example, see [How to: Call Native DLLs from Managed Code Using PInvoke](../dotnet/how-to-call-native-dlls-from-managed-code-using-pinvoke.md).

## Example

```cpp
// vcmcppv2_impl_dllimp.cpp
// compile with: /clr:pure user32.lib
using namespace System::Runtime::InteropServices;

// Implicit DLLImport specifying calling convention
extern "C" int __stdcall MessageBeep(int);

// explicit DLLImport needed here to use P/Invoke marshalling because
// System::String ^ is not the type of the first parameter to printf
[DllImport("msvcrt.dll", EntryPoint = "printf", CallingConvention = CallingConvention::Cdecl,  CharSet = CharSet::Ansi)]
// or just
// [DllImport("msvcrt.dll")]
int printf(System::String ^, ...);

int main() {
   // (string literals are System::String by default)
   printf("Begin beep\n");
   MessageBeep(100000);
   printf("Done\n");
}
```

```Output
Begin beep
Done
```

## In This Section

- [How to: Marshal ANSI Strings Using C++ Interop](../dotnet/how-to-marshal-ansi-strings-using-cpp-interop.md)

- [How to: Marshal Unicode Strings Using C++ Interop](../dotnet/how-to-marshal-unicode-strings-using-cpp-interop.md)

- [How to: Marshal COM Strings Using C++ Interop](../dotnet/how-to-marshal-com-strings-using-cpp-interop.md)

- [How to: Marshal Structures Using C++ Interop](../dotnet/how-to-marshal-structures-using-cpp-interop.md)

- [How to: Marshal Arrays Using C++ Interop](../dotnet/how-to-marshal-arrays-using-cpp-interop.md)

- [How to: Marshal Callbacks and Delegates By Using C++ Interop](../dotnet/how-to-marshal-callbacks-and-delegates-by-using-cpp-interop.md)

- [How to: Marshal Embedded Pointers Using C++ Interop](../dotnet/how-to-marshal-embedded-pointers-using-cpp-interop.md)

- [How to: Access Characters in a System::String](../dotnet/how-to-access-characters-in-a-system-string.md)

- [How to: Convert char * String to System::Byte Array](../dotnet/how-to-convert-char-star-string-to-system-byte-array.md)

- [How to: Convert System::String to wchar_t* or char\*](../dotnet/how-to-convert-system-string-to-wchar-t-star-or-char-star.md)

- [How to: Convert System::String to Standard String](../dotnet/how-to-convert-system-string-to-standard-string.md)

- [How to: Convert Standard String to System::String](../dotnet/how-to-convert-standard-string-to-system-string.md)

- [How to: Obtain a Pointer to Byte Array](../dotnet/how-to-obtain-a-pointer-to-byte-array.md)

- [How to: Load Unmanaged Resources into a Byte Array](../dotnet/how-to-load-unmanaged-resources-into-a-byte-array.md)

- [How to: Modify Reference Class in a Native Function](../dotnet/how-to-modify-reference-class-in-a-native-function.md)

- [How to: Determine if an Image is Native or CLR](../dotnet/how-to-determine-if-an-image-is-native-or-clr.md)

- [How to: Add Native DLL to Global Assembly Cache](../dotnet/how-to-add-native-dll-to-global-assembly-cache.md)

- [How to: Hold Reference to Value Type in Native Type](../dotnet/how-to-hold-reference-to-value-type-in-native-type.md)

- [How to: Hold Object Reference in Unmanaged Memory](../dotnet/how-to-hold-object-reference-in-unmanaged-memory.md)

- [How to: Detect /clr Compilation](../dotnet/how-to-detect-clr-compilation.md)

- [How to: Convert Between System::Guid and _GUID](../dotnet/how-to-convert-between-system-guid-and-guid.md)

- [How to: Specify an out Parameter](../dotnet/how-to-specify-an-out-parameter.md)

- [How to: Use a Native Type in a /clr Compilation](../dotnet/how-to-use-a-native-type-in-a-clr-compilation.md)

- [How to: Declare Handles in Native Types](../dotnet/how-to-declare-handles-in-native-types.md)

- [How to: Wrap Native Class for Use by C#](../dotnet/how-to-wrap-native-class-for-use-by-csharp.md)

For information on using delegates in an interop scenario, see [delegate  (C++ Component Extensions)](../extensions/delegate-cpp-component-extensions.md).

## See also

- [Calling Native Functions from Managed Code](../dotnet/calling-native-functions-from-managed-code.md)
