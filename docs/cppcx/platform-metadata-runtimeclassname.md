---
description: "Learn more about: Platform::Metadata::RuntimeClassName"
title: "Platform::Metadata::RuntimeClassName"
ms.date: "12/30/2016"
ms.topic: "reference"
f1_keywords: ["VCCORLIB/Platform::Metadata::RuntimeClassName"]
helpviewer_keywords: ["RuntimeClassName", "Platform::Metadata::RuntimeClassName"]
ms.assetid: fdef8f85-ab94-4edd-ba50-ee0da9358ff6
---
# Platform::Metadata::RuntimeClassName

When applied to a class definition, ensures that a private class returns a valid name from the GetRuntimeClassName function..

## Syntax

```cpp
[Platform::Metadata::RuntimeClassName] name
```

#### Parameters

*name*<br/>
The name of an existing public type that is visible in the Windows Runtime.

### Remarks

Use this attribute on private ref classes to specify a custom runtime type name and/or when the existing name does not meet the requirements. Specify as a name a public interface that the class implements.

### Example

The following example shows how to use the attribute. In this example, the runtime type name of HellowWorldImpl is Test::Native::MyComponent::IHelloWorld

```cpp
namespace Test
{
    namespace Native
    {
        namespace MyComponent
        {
            public interface class IHelloWorld
            {
                Platform::String^ SayHello();
            };

            private ref class HelloWorldImpl sealed :[Platform::Metadata::RuntimeClassName] IHelloWorld
            {
            public:
                HelloWorldImpl();
                virtual Platform::String^ SayHello();
            };

            Platform::String^ HelloWorldImpl::SayHello()
            {
                return L"Hello World!";
            }
        }
    }
}
```

## See also

[Platform::Metadata Namespace](../cppcx/platform-metadata-namespace.md)
