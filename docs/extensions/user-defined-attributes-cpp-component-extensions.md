---
description: "Learn more about: User-Defined Attributes  (C++/CLI and C++/CX)"
title: "User-Defined Attributes  (C++/CLI and C++/CX)"
ms.date: "10/12/2018"
ms.topic: "reference"
helpviewer_keywords: ["metadata, extending", "custom attributes, extending metadata"]
ms.assetid: 98b29048-a3ea-4698-8441-f149cdaec9fb
---
# User-Defined Attributes  (C++/CLI and C++/CX)

C++/CLI and C++/CX enable you to create platform-specific attributes that extend the metadata of an interface, class or structure, method, parameter, or enumeration. These attributes are distinct from the [standard C++ attributes](../cpp/attributes.md).

## Windows Runtime

You can apply C++/CX attributes to properties, but not to constructors or methods.

### Requirements

Compiler option: `/ZW`

## Common Language Runtime

The information and syntax presented in this topic is meant to supersede the information presented in [attribute](../windows/attributes/attribute.md).

You can define a custom attribute by defining a type and making <xref:System.Attribute> a base class for the type and optionally applying the <xref:System.AttributeUsageAttribute> attribute.

For more information, see:

- [Attribute Targets](attribute-targets-cpp-component-extensions.md)

- [Attribute Parameter Types](attribute-parameter-types-cpp-component-extensions.md)

For information on signing assemblies in Visual C++, see [Strong Name Assemblies (Assembly Signing) (C++/CLI)](../dotnet/strong-name-assemblies-assembly-signing-cpp-cli.md).

### Requirements

Compiler option: `/clr`

### Examples

The following sample shows how to define a custom attribute.

```cpp
// user_defined_attributes.cpp
// compile with: /clr /c
using namespace System;

[AttributeUsage(AttributeTargets::All)]
ref struct Attr : public Attribute {
   Attr(bool i){}
   Attr(){}
};

[Attr]
ref class MyClass {};
```

The following example illustrates some important features of custom attributes. For example, this example shows a common usage of the custom attributes: instantiating a server that can fully describe itself to clients.

```cpp
// extending_metadata_b.cpp
// compile with: /clr
using namespace System;
using namespace System::Reflection;

public enum class Access { Read, Write, Execute };

// Defining the Job attribute:
[AttributeUsage(AttributeTargets::Class, AllowMultiple=true )]
public ref class Job : Attribute {
public:
   property int Priority {
      void set( int value ) { m_Priority = value; }
      int get() { return m_Priority; }
   }

   // You can overload constructors to specify Job attribute in different ways
   Job() { m_Access = Access::Read; }
   Job( Access a ) { m_Access = a; }
   Access m_Access;

protected:
   int m_Priority;
};

interface struct IService {
   void Run();
};

   // Using the Job attribute:
   // Here we specify that QueryService is to be read only with a priority of 2.
   // To prevent namespace collisions, all custom attributes implicitly
   // end with "Attribute".

[Job( Access::Read, Priority=2 )]
ref struct QueryService : public IService {
   virtual void Run() {}
};

// Because we said AllowMultiple=true, we can add multiple attributes
[Job(Access::Read, Priority=1)]
[Job(Access::Write, Priority=3)]
ref struct StatsGenerator : public IService {
   virtual void Run( ) {}
};

int main() {
   IService ^ pIS;
   QueryService ^ pQS = gcnew QueryService;
   StatsGenerator ^ pSG = gcnew StatsGenerator;

   //  use QueryService
   pIS = safe_cast<IService ^>( pQS );

   // use StatsGenerator
   pIS = safe_cast<IService ^>( pSG );

   // Reflection
   MemberInfo ^ pMI = pIS->GetType();
   array <Object ^ > ^ pObjs = pMI->GetCustomAttributes(false);

   // We can now quickly and easily view custom attributes for an
   // Object through Reflection */
   for( int i = 0; i < pObjs->Length; i++ ) {
      Console::Write("Service Priority = ");
      Console::WriteLine(static_cast<Job^>(pObjs[i])->Priority);
      Console::Write("Service Access = ");
      Console::WriteLine(static_cast<Job^>(pObjs[i])->m_Access);
   }
}
```

```Output
Service Priority = 0

Service Access = Write

Service Priority = 3

Service Access = Write

Service Priority = 1

Service Access = Read
```

The `Object^` type replaces the variant data type. The following example defines a custom attribute that takes an array of `Object^` as parameters.

Attribute arguments must be compile-time constants; in most cases, they should be constant literals.

See [typeid](typeid-cpp-component-extensions.md) for information on how to return a value of System::Type from a custom attribute block.

```cpp
// extending_metadata_e.cpp
// compile with: /clr /c
using namespace System;
[AttributeUsage(AttributeTargets::Class | AttributeTargets::Method)]
public ref class AnotherAttr : public Attribute {
public:
   AnotherAttr(array<Object^>^) {}
   array<Object^>^ var1;
};

// applying the attribute
[ AnotherAttr( gcnew array<Object ^> { 3.14159, "pi" }, var1 = gcnew array<Object ^> { "a", "b" } ) ]
public ref class SomeClass {};
```

The runtime requires that the public part of the custom attribute class must be serializable.  When authoring custom attributes, named arguments of your custom attribute are limited to compile-time constants.  (Think of it as a sequence of bits appended to your class layout in the metadata.)

```cpp
// extending_metadata_f.cpp
// compile with: /clr /c
using namespace System;
ref struct abc {};

[AttributeUsage( AttributeTargets::All )]
ref struct A : Attribute {
   A( Type^ ) {}
   A( String ^ ) {}
   A( int ) {}
};

[A( abc::typeid )]
ref struct B {};
```

## See also

[Component Extensions for .NET and UWP](component-extensions-for-runtime-platforms.md)
