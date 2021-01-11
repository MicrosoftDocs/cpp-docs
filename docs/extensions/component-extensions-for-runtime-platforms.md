---
description: "Learn more about: Component Extensions for .NET and UWP"
title: "Component Extensions for .NET and UWP"
ms.date: "10/12/2018"
ms.topic: "overview"
helpviewer_keywords: ["what's new [C++], keywords", "what's new [C++], language features", "C++, keywords", "keywords [C++]", "Managed Extensions for C++, replacement syntax"]
ms.assetid: 1e400ee6-3ac9-4910-a608-9d3d5993e423
---
# Component Extensions for .NET and UWP

The C++ standard allows compiler vendors to provide non-standard extensions to the language. Microsoft provides extensions to help you connect native C++ code to code that runs on the .NET Framework or the Universal Windows Platform (UWP). The .NET extensions are called C++/CLI and produce code that executes in the .NET managed execution environment that is called the Common Language Runtime (CLR). The UWP extensions are called C++/CX and they produce native machine code.

> [!NOTE]
> For new applications, we recommend using C++/WinRT rather than C++/CX. C++/WinRT is a new, standard C++17 language projection for Windows Runtime APIs. We will continue to support C++/CX and WRL, but highly recommend that new applications use C++/WinRT. For more information, see [C++/WinRT](/windows/uwp/cpp-and-winrt-apis/index).

### Two runtimes, one set of extensions

C++/CLI extends the ISO/ANSI C++ standard, and is defined under the Ecma C++/CLI Standard. For more information, see [.NET Programming with C++/CLI (Visual C++)](../dotnet/dotnet-programming-with-cpp-cli-visual-cpp.md).

The C++/CX extensions are a subset of C++/CLI. Although the extension syntax is identical in most cases, the code that is generated depends on whether you specify the `/ZW` compiler option to target UWP, or the `/clr` option to target .NET. These switches are set automatically when you use Visual Studio to create a project.

## Data Type Keywords

The language extensions include *aggregate keywords*, which consist of two tokens separated by white space. The tokens might have one meaning when they are used separately, and another meaning when they are used together. For example, the word "ref" is an ordinary identifier, and the word "class" is a keyword that declares a native class. But when these words are combined to form **ref class**, the resulting aggregate keyword declares an entity that is known as a *runtime class*.

The extensions also include *context-sensitive* keywords. A keyword is treated as context-sensitive depending on the kind of statement that contains it, and its placement in that statement. For example, the token "property" can be an identifier, or it can declare a special kind of public class member.

The following table lists keywords in the C++ language extension.

|Keyword|Context sensitive|Purpose|Reference|
|-------------|-----------------------|-------------|---------------|
|**ref class**<br /><br /> **ref struct**|No|Declares a class.|[Classes and Structs](classes-and-structs-cpp-component-extensions.md)|
|**value class**<br /><br /> **value struct**|No|Declares a value class.|[Classes and Structs](classes-and-structs-cpp-component-extensions.md)|
|**interface class**<br /><br /> **interface struct**|No|Declares an interface.|[interface class](interface-class-cpp-component-extensions.md)|
|**enum class**<br /><br /> **enum struct**|No|Declares an enumeration.|[enum class](enum-class-cpp-component-extensions.md)|
|**`property`**|Yes|Declares a property.|[property](property-cpp-component-extensions.md)|
|**delegate**|Yes|Declares a delegate.|[delegate  (C++/CLI and C++/CX)](delegate-cpp-component-extensions.md)|
|**event**|Yes|Declares an event.|[event](event-cpp-component-extensions.md)|

## Override Specifiers

You can use the following keywords to qualify override behavior for derivation. Although the **`new`** keyword is not an extension of C++, it is listed here because it can be used in an additional context. Some specifiers are also valid for native programming. For more information, see [How to: Declare Override Specifiers in Native Compilations (C++/CLI)](../dotnet/how-to-declare-override-specifiers-in-native-compilations-cpp-cli.md).

|Keyword|Context Sensitive|Purpose|Reference|
|-------------|-----------------------|-------------|---------------|
|**abstract**|Yes|Indicates that functions or classes are abstract.|[abstract](abstract-cpp-component-extensions.md)|
|**`new`**|No|Indicates that a function is not an override of a base class version.|[new (new slot in vtable)](new-new-slot-in-vtable-cpp-component-extensions.md)|
|**override**|Yes|Indicates that a method must be an override of a base-class version.|[override](override-cpp-component-extensions.md)|
|**sealed**|Yes|Prevents classes from being used as base classes.|[sealed](sealed-cpp-component-extensions.md)|

## Keywords for Generics

The following keywords have been added to support generic types. For more information, see [Generics](generics-cpp-component-extensions.md).

|Keyword|Context sensitive|Purpose|
|-------------|-----------------------|-------------|
|**generic**|No|Declares a generic type.|
|**where**|Yes|Specifies the constraints that are applied to a generic type parameter.|

## Miscellaneous Keywords

The following keywords have been added to the C++ extensions.

|Keyword|Context sensitive|Purpose|Reference|
|-------------|-----------------------|-------------|---------------|
|**finally**|Yes|Indicates default exception handlings behavior.|[Exception Handling](exception-handling-cpp-component-extensions.md)|
|**for each, in**|No|Enumerates elements of a collection.|[for each, in](../dotnet/for-each-in.md)|
|**gcnew**|No|Allocates types on the garbage-collected heap. Use instead of **`new`** and **`delete`**.|[ref new, gcnew](ref-new-gcnew-cpp-component-extensions.md)|
|**ref new**|Yes|Allocates a Windows Runtime type. Use instead of **`new`** and **`delete`**.|[ref new, gcnew](ref-new-gcnew-cpp-component-extensions.md)|
|**initonly**|Yes|Indicates that a member can only be initialized at declaration or in a static constructor.|[initonly (C++/CLI)](../dotnet/initonly-cpp-cli.md)|
|**literal**|Yes|Creates a literal variable.|[literal](literal-cpp-component-extensions.md)|
|**`nullptr`**|No|Indicates that a handle or pointer does not point at an object.|[nullptr](nullptr-cpp-component-extensions.md)|

## Template Constructs

The following language constructs are implemented as templates, instead of as keywords. If you specify the `/ZW` compiler option, they are defined in the `lang` namespace. If you specify the `/clr` compiler option, they are defined in the `cli` namespace.

|Keyword|Purpose|Reference|
|-------------|-------------|---------------|
|**array**|Declares an array.|[Arrays](arrays-cpp-component-extensions.md)|
|**interior_ptr**|(CLR only) Points to data in a reference type.|[interior_ptr (C++/CLI)](interior-ptr-cpp-cli.md)|
|**pin_ptr**|(CLR only) Points to CLR reference types to temporarily suppress the garbage-collection system.|[pin_ptr (C++/CLI)](pin-ptr-cpp-cli.md)|
|**safe_cast**|Determines and executes the optimal casting method for a runtime type.|[safe_cast](safe-cast-cpp-component-extensions.md)|
|**`typeid`**|(CLR only) Retrieves a <xref:System.Type?displayProperty=fullName> object that describes the given type or object.|[typeid](typeid-cpp-component-extensions.md)|

## Declarators

The following type declarators instruct the runtime to automatically manage the lifetime and deletion of allocated objects.

|Operator|Purpose|Reference|
|--------------|-------------|---------------|
|`^`|Declares a handle to an object; that is, a pointer to a Windows Runtime or CLR object that is automatically deleted when it is no longer usable.|[Handle to Object Operator (^)](handle-to-object-operator-hat-cpp-component-extensions.md)|
|`%`|Declares a tracking reference; that is, a reference to a Windows Runtime or CLR object that is automatically deleted when it is no longer usable.|[Tracking Reference Operator](tracking-reference-operator-cpp-component-extensions.md)|

## Additional Constructs and Related Topics

This section lists additional programming constructs, and topics that pertain to the CLR.

|Topic|Description|
|-----------|-----------------|
|[__identifier (C++/CLI)](identifier-cpp-cli.md)|(Windows Runtime and CLR) Enables the use of keywords as identifiers.|
|[Variable Argument Lists (...) (C++/CLI)](variable-argument-lists-dot-dot-dot-cpp-cli.md)|(Windows Runtime and CLR) Enables a function to take a variable number of arguments.|
|[.NET Framework Equivalents to C++ Native Types (C++/CLI)](../dotnet/managed-types-cpp-cli.md#dotnet)|Lists the CLR types that are used in place of C++ integral types.|
|[appdomain](../cpp/appdomain.md) **`__declspec`** modifier|**`__declspec`** modifier that mandates that static and global variables exist per appdomain.|
|[C-Style Casts with /clr (C++/CLI)](c-style-casts-with-clr-cpp-cli.md)|Describes how C-style casts are interpreted.|
|[__clrcall](../cpp/clrcall.md) calling convention|Indicates the CLR-compliant calling convention.|
|`__cplusplus_cli`|[Predefined Macros](../preprocessor/predefined-macros.md)|
|[Custom Attributes](user-defined-attributes-cpp-component-extensions.md)|Describes how to define your own CLR attributes.|
|[Exception Handling](exception-handling-cpp-component-extensions.md)|Provides an overview of exception handling.|
|[Explicit Overrides](explicit-overrides-cpp-component-extensions.md)|Demonstrates how member functions can override arbitrary members.|
|[Friend Assemblies (C++)](../dotnet/friend-assemblies-cpp.md)|Discusses how a client assembly can access all types in an assembly component.|
|[Boxing](boxing-cpp-component-extensions.md)|Demonstrates the conditions in which values types are boxed.|
|[Compiler Support for Type Traits](compiler-support-for-type-traits-cpp-component-extensions.md)|Discusses how to detect characteristics of types at compile time.|
|[managed, unmanaged](../preprocessor/managed-unmanaged.md) pragmas|Demonstrates how managed and unmanaged functions can co-exist in the same module.|
|[process](../cpp/process.md) **`__declspec`** modifier|**`__declspec`** modifier that mandates that static and global variables exist per process.|
|[Reflection (C++/CLI)](../dotnet/reflection-cpp-cli.md)|Demonstrates the CLR version of run-time type information.|
|[String](string-cpp-component-extensions.md)|Discusses compiler conversion of string literals to <xref:System.String>.|
|[Type Forwarding (C++/CLI)](type-forwarding-cpp-cli.md)|Enables the movement of a type in a shipping assembly to another assembly so that client code does not have to be recompiled.|
|[User-Defined Attributes](user-defined-attributes-cpp-component-extensions.md)|Demonstrates user-defined attributes.|
|[#using Directive](../preprocessor/hash-using-directive-cpp.md)|Imports external assemblies.|
|[XML Documentation](../build/reference/xml-documentation-visual-cpp.md)|Explains XML-based code documentation by using [/doc (Process Documentation Comments) (C/C++)](../build/reference/doc-process-documentation-comments-c-cpp.md)|

## See also

[.NET Programming with C++/CLI (Visual C++)](../dotnet/dotnet-programming-with-cpp-cli-visual-cpp.md)<br/>
[Native and .NET Interoperability](../dotnet/native-and-dotnet-interoperability.md)
