---
description: "Learn more about: Quick Reference (C++/CX)"
title: "Quick Reference (C++/CX)"
ms.date: "12/30/2016"
ms.assetid: ba457195-26e5-43aa-b99d-24a871e550f4
---
# Quick Reference (C++/CX)

The Windows Runtime supports Universal Windows Platform (UWP) apps that execute only in a trustworthy operating system environment, use authorized functions, data types, and devices, and are distributed through the Microsoft Store. The C++/CX simplify the writing of apps for the Windows Runtime. This article is a quick reference; for more complete documentation, see [Type System](../cppcx/type-system-c-cx.md).

When you build on the command line, use the **/ZW** compiler option to build a UWP app or Windows Runtime component. To access Windows Runtime declarations, which are defined in the Windows Runtime metadata (.winmd) files, specify the `#using` directive or the **/FU** compiler option. When you create a project for a UWP app, Visual Studio by default sets these options and adds references to all Windows Runtime libraries.

## Quick reference

|Concept|Standard C++|C++/CX|Remarks|
|-------------|--------------------|------------------------------------------------------------------|-------------|
|Fundamental types|C++ fundamental types.|C++/CX fundamental types that implement fundamental types that are defined in the Windows Runtime.|The `default` namespace contains C++/CX built-in, fundamental types. The compiler implicitly maps C++/CX fundamental types to standard C++ types.<br /><br /> The `Platform` family of namespaces contains types that implement fundamental Windows Runtime types.|
||**`bool`**|**`bool`**|An 8-bit Boolean value.|
||**`wchar_t`**, **`char16_t`**|`char16`|A 16-bit nonnumeric value that represents a Unicode (UTF-16) code point.|
||**`short`**<br /><br /> **`unsigned short`**|`int16`<br /><br /> `uint16`|A 16-bit signed integer.<br /><br /> A 16-bit unsigned integer.|
||**`int`**<br /><br /> **`unsigned int`**|**`int`**<br /><br /> `uint32`|A 32-bit signed integer.<br /><br /> A 32-bit unsigned integer.|
||**`long long`** -or- **`__int64`**<br /><br /> **`unsigned long long`**|`int64`<br /><br /> `uint64`|A 64-bit signed integer.<br /><br /> A 64-bit unsigned integer.|
||**`float`**, **`double`**|`float32, float64`|A 32-bit or 64-bit IEEE 754 floating-point number.|
||**`enum`**|**`enum class`**<br /><br /> -or-<br /><br /> **`enum struct`**|A 32-bit enumeration.|
||(Does not apply)|`Platform::Guid`|A 128-bit nonnumeric value (a GUID) in the `Platform` namespace.|
||`std::time_get`|`Windows::Foundation::DateTime`|A date-time structure.|
||(Does not apply)|`Windows::Foundation::TimeSpan`|A timespan structure.|
||(Does not apply)|`Platform::Object^`|The reference-counted base object in the C++ view of the Windows Runtime type system.|
||`std::wstring`<br /><br /> `L"..."`|`Platform::String^`|`Platform::String^` is  a reference-counted, immutable, sequence of Unicode characters that represent text.|
|Pointer|Pointer to object (`*`):<br /><br /> `std::shared_ptr`|Handle-to-object (`^`, pronounced "hat"):<br /><br /> *T^ identifier*|All Windows Runtime classes are declared by using the handle-to-object modifier. Members of the object are accessed by using the arrow (`->`) class-member-access operator.<br /><br /> The hat modifier means "pointer to a Windows Runtime object that is automatically reference counted." More precisely, handle-to-object declares that the compiler should insert code to automatically manage the object's reference count, and delete the object if the reference count goes to zero.|
|Reference|Reference to an object (`&`):<br /><br /> *T* `&` *identifier*|Tracking reference (`%`):<br /><br /> *T* `%` *identifier*|Only Windows Runtime types can be declared by using the tracking reference modifier. Members of the object are accessed by using the dot (`.`) class-member-access operator.<br /><br /> The tracking reference means "a reference to a Windows Runtime object that is automatically reference counted." More precisely, a tracking reference declares that the compiler should insert code to automatically manage the object's reference count, and delete the object if the reference count goes to zero.|
|Dynamic type declaration|`new`|`ref new`|Allocates a Windows Runtime object and then returns a handle to that object.|
|Object lifetime management|`delete` *identifier*<br /><br /> `delete[]`  *identifier*|(Invokes the destructor.)|Lifetime is determined by reference counting. A call to delete invokes the destructor but itself does not free memory.|
|Array declaration|*T  identifier* `[]`<br /><br /> `std::array` *identifier*|`Array<` *T* `^>^` *identifier* `(` *size* `)`<br /><br /> -or-<br /><br /> `WriteOnlyArray<` *T* `^>`  *identifier* `(` *size* `)`|Declares a one-dimensional modifiable or write-only array of type T^. The array itself is also a reference-counted object that must be declared by using the handle-to-object modifier.<br /><br /> (Array declarations use a template header class that is in the `Platform` namespace.)|
|Class declaration|**`class`** *identifier* `{}`<br /><br /> **`struct`** *identifier* `{}`|**`ref class`** *identifier* `{}`<br /><br /> **`ref struct`** *identifier* `{}`|Declares a runtime class that has default private accessibility.<br /><br /> Declares a runtime class that has default public accessibility.|
|Structure declaration|**`struct`** *identifier* `{}`<br /><br /> (that is, a Plain Old Data structure (POD))|**`value class`** *identifier* `{}`<br /><br /> **`value struct`** *identifier* `{}`|Declares a POD struct that has default private accessibility.<br /><br /> A value class can be represented in Windows metadata, but a standard C++ class cannot be.<br /><br /> Declares a POD struct that has default public accessibility.<br /><br /> A value struct can be represented in Windows metadata, but a standard C++ struct cannot be.|
|Interface declaration|abstract class that contains only pure virtual functions.|**`interface class`** *identifier* `{}`<br /><br /> **`interface struct`** *identifier* `{}`|Declares an interface that has default private accessibility.<br /><br /> Declares an interface that has default public accessibility.|
|Delegate|`std::function`|`public delegate` *return-type* *delegate-type-identifier* `(` *[ parameters ]* `);`|Declares an object that can be invoked like a function call.|
|Event|(Does not apply)|**`event`** *delegate-type-identifier* *event-identifier* `;`<br /><br /> *delegate-type-identifier* *delegate-identifier* = `ref new`*delegate-type-identifier*`( this`*[, parameters]*`);`<br /><br /> *event-identifier* `+=` *delegate-identifier* `;`<br /><br /> -or-<br /><br /> `EventRegistrationToken` *token-identifier* = *obj*`.`*event-identifier*`+=`*delegate-identifier*`;`<br /><br /> -or-<br /><br /> **`auto`** *token-identifier* = *obj*. *event-identifier*`::add(`*delegate-identifier*`);`<br /><br /> *obj* `.` *event-identifier* `-=` *token-identifier* `;`<br /><br /> -or-<br /><br /> *obj* `.` *event-identifier* `::remove(` *token-identifier* `);`|Declares an event object, which stores a collection of event handlers (delegates) that are called when an event occurs.<br /><br /> Creates an event handler.<br /><br /> Adds an event handler.<br /><br /> Adding an event handler returns an event token (*token-identifier*). If you intend to explicitly remove the event handler, you must save the event token for later use.<br /><br /> Removes an event handler.<br /><br /> To remove an event handler, you must specify the event token that you saved when the event handler was added.|
|Property|(Does not apply)|**`property`** *T* *identifier*;<br /><br /> **`property`** *T* *identifier* `[` *index* `];`<br /><br /> **`property`** *T* `default[` *index* `];`|Declares that a class or object member function is accessed by using the same syntax that's used to access a data member or indexed array element.<br /><br /> Declares a property on a class or object member function.<br /><br /> Declares an indexed property on an object member function.<br /><br /> Declares an indexed property on a class member function.|
|Parameterized types|templates|`generic <typename` *T* `> interface class` *identifier* `{}`<br /><br /> `generic <typename` *T* `> delegate` *[return-type]* *delegate-identifier* `() {}`|Declares a parameterized interface class.<br /><br /> Declares a parameterized delegate.|
|Nullable value types|`boost::optional<T>`|[Platform::IBox \<T>](../cppcx/platform-ibox-interface.md)|Enables variables of scalar types and value structs to have a value of **`nullptr`**.|

## See also

[C++/CX Language Reference](../cppcx/visual-c-language-reference-c-cx.md)
