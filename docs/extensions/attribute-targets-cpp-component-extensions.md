---
description: "Learn more about: Attribute Targets (C++/CLI and C++/CX)"
title: "Attribute Targets (C++/CLI and C++/CX)"
ms.date: "10/12/2018"
ms.topic: "reference"
helpviewer_keywords: ["custom attributes, targets"]
ms.assetid: b4e6e224-da77-4520-b6e6-b96846e0ebc1
---
# Attribute Targets (C++/CLI and C++/CX)

Attribute usage specifiers let you specify attribute targets.  Each attribute is defined to apply to certain language elements. For example, an attribute might be defined to apply only to classes and structs.  The following list shows the possible syntactic elements on which a custom attribute can be used. Combinations of these values (using logical or) may be used.

To specify attribute target, to pass one or more <xref:System.AttributeTargets> enumerators to <xref:System.AttributeUsageAttribute> when defining the attribute.

The following is a list of the valid attribute targets:

- `All` (applies to all constructs)

    ```cpp
    using namespace System;
    [AttributeUsage(AttributeTargets::All)]
    ref class Attr : public Attribute {};

    [assembly:Attr];
    ```

- `Assembly` (applies to an assembly as a whole)

    ```cpp
    using namespace System;
    [AttributeUsage(AttributeTargets::Assembly)]
    ref class Attr : public Attribute {};

    [assembly:Attr];
    ```

- `Module` (applies to a module as a whole)

    ```cpp
    using namespace System;
    [AttributeUsage(AttributeTargets::Module)]
    ref class Attr : public Attribute {};

    [module:Attr];
    ```

- `Class`

    ```cpp
    using namespace System;
    [AttributeUsage(AttributeTargets::Class)]
    ref class Attr : public System::Attribute {};

    [Attr]   // same as [class:Attr]
    ref class MyClass {};
    ```

- `Struct`

    ```cpp
    using namespace System;
    [AttributeUsage(AttributeTargets::Struct)]
    ref class Attr : public Attribute {};

    [Attr]   // same as [struct:Attr]
    value struct MyStruct{};
    ```

- `enum`

    ```cpp
    using namespace System;
    [AttributeUsage(AttributeTargets::Enum)]
    ref class Attr : public Attribute {};

    [Attr]   // same as [enum:Attr]
    enum struct MyEnum{e, d};
    ```

- `Constructor`

    ```cpp
    using namespace System;
    [AttributeUsage(AttributeTargets::Constructor)]
    ref class Attr : public Attribute {};

    ref struct MyStruct{
    [Attr] MyStruct(){}   // same as [constructor:Attr]
    };
    ```

- `Method`

    ```cpp
    using namespace System;
    [AttributeUsage(AttributeTargets::Method)]
    ref class Attr : public Attribute {};

    ref struct MyStruct{
    [Attr] void Test(){}   // same as [method:Attr]
    };
    ```

- `Property`

    ```cpp
    using namespace System;
    [AttributeUsage(AttributeTargets::Property)]
    ref class Attr : public Attribute {};

    ref struct MyStruct{
    [Attr] property int Test;   // same as [property:Attr]
    };
    ```

- `Field`

    ```cpp
    using namespace System;
    [AttributeUsage(AttributeTargets::Field)]
    ref class Attr : public Attribute {};

    ref struct MyStruct{
    [Attr] int Test;   // same as [field:Attr]
    };
    ```

- `Event`

    ```cpp
    using namespace System;
    [AttributeUsage(AttributeTargets::Event)]
    ref class Attr : public Attribute {};

    delegate void ClickEventHandler(int, double);

    ref struct MyStruct{
    [Attr] event ClickEventHandler^ OnClick;   // same as [event:Attr]
    };
    ```

- `Interface`

    ```cpp
    using namespace System;
    [AttributeUsage(AttributeTargets::Interface)]
    ref class Attr : public Attribute {};

    [Attr]   // same as [event:Attr]
    interface struct MyStruct{};
    ```

- `Parameter`

    ```cpp
    using namespace System;
    [AttributeUsage(AttributeTargets::Parameter)]
    ref class Attr : public Attribute {};

    ref struct MyStruct{
    void Test([Attr] int i);
    void Test2([parameter:Attr] int i);
    };
    ```

- `Delegate`

    ```cpp
    using namespace System;
    [AttributeUsage(AttributeTargets::Delegate)]
    ref class Attr : public Attribute {};

    [Attr] delegate void Test();
    [delegate:Attr] delegate void Test2();
    ```

- `ReturnValue`

    ```cpp
    using namespace System;
    [AttributeUsage(AttributeTargets::ReturnValue)]
    ref class Attr : public Attribute {};

    ref struct MyStruct {
    // Note required specifier
    [returnvalue:Attr] int Test() { return 0; }
    };
    ```

Typically, an attribute directly precedes the language element to which it applies. In some cases, however, the position of an attribute is not sufficient to determine the attribute's intended target. Consider this example:

```cpp
[Attr] int MyFn(double x)...
```

Syntactically, there is no way to tell if the attribute is intended to apply to the method or to the method's return value (in this case, it defaults to the method). In such cases, an attribute usage specifier may be used. For example, to make the attribute apply to the return value, use the `returnvalue` specifier, as follows:

```cpp
[returnvalue:Attr] int MyFn(double x)... // applies to return value
```

Attribute usage specifiers are required in the following situations:

- To specify an assembly- or module-level attribute.

- To specify that an attribute applies to a method's return value, not the method:

    ```cpp
    [method:Attr] int MyFn(double x)...     // Attr applies to method
    [returnvalue:Attr] int MyFn(double x)...// Attr applies to return value
    [Attr] int MyFn(double x)...            // default: method
    ```

- To specify that an attribute applies to a property's accessor, not the property:

    ```cpp
    [method:MyAttr(123)] property int Property()
    [property:MyAttr(123)] property int Property()
    [MyAttr(123)] property int get_MyPropy() // default: property
    ```

- To specify that an attribute applies to an event's accessor, not the event:

    ```cpp
    delegate void MyDel();
    ref struct X {
       [field:MyAttr(123)] event MyDel* MyEvent;   //field
       [event:MyAttr(123)] event MyDel* MyEvent;   //event
       [MyAttr(123)] event MyDel* MyEvent;   // default: event
    }
    ```

An attribute usage specifier applies only to the attribute that immediately follows it; that is,

```cpp
[returnvalue:Attr1, Attr2]
```

is different from

```cpp
[returnvalue:Attr1, returnvalue:Attr2]
```

## Example

### Description

This sample shows how to specify multiple targets.

### Code

```cpp
using namespace System;
[AttributeUsage(AttributeTargets::Class | AttributeTargets::Struct, AllowMultiple = true )]
ref struct Attr : public Attribute {
   Attr(bool i){}
   Attr(){}
};

[Attr]
ref class MyClass {};

[Attr]
[Attr(true)]
value struct MyStruct {};
```

## See also

[User-Defined Attributes](user-defined-attributes-cpp-component-extensions.md)
