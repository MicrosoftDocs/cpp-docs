---
description: "Learn more about: Type Forwarding (C++/CLI)"
title: "Type Forwarding (C++/CLI)"
ms.date: "10/12/2018"
ms.topic: "reference"
helpviewer_keywords: ["type forwarding, C++"]
ms.assetid: ae730b69-0c27-41cc-84e1-3132783866ea
---
# Type Forwarding (C++/CLI)

*Type forwarding* allows you to move a type from one assembly (assembly A) into another assembly (assembly B), such that, it is not necessary to recompile clients that consume assembly A.

## Windows Runtime

This feature is not supported in the Windows Runtime.

## Common Language Runtime

The following code example demonstrates how to use type forwarding.

### Syntax

```cpp
#using "new.dll"
[assembly:TypeForwardedTo(type::typeid)];
```

### Parameters

*new*<br/>
The assembly into which you are moving the type definition.

*type*<br/>
The type whose definition you are moving into another assembly.

### Remarks

After a component (assembly) ships and is being used by client applications, you can use type forwarding to move a type from the component (assembly) into another assembly, ship the updated component (and any additional assemblies required), and the client applications will still work without being recompiled.

Type forwarding only works for components referenced by existing applications. When you rebuild an application, there must be the appropriate assembly references for any types used in the application.

When forwarding a type (Type A) from an assembly, you must add the `TypeForwardedTo` attribute for that type, as well as an assembly reference. The assembly that you reference must contain one of the following:

- The definition for Type A.

- A `TypeForwardedTo` attribute for Type A, as well as an assembly reference.

Examples of types that can be forwarded include:

- ref classes

- value classes

- enums

- interfaces

You cannot forward the following types:

- Generic types

- Native types

- Nested types (if you want to forward a nested type, you should forward the enclosing type)

You can forward a type to an assembly authored in any language targeting the common language runtime.

So, if a source code file that is used to build assembly A.dll contains a type definition (`ref class MyClass`), and you wanted to move that type definition to assembly B.dll, you would:

1. Move the `MyClass` type definition to a source code file used to build B.dll.

2. Build assembly B.dll

3. Delete the `MyClass` type definition from the source code used to build A.dll, and replace it with the following:

    ```cpp
    #using "B.dll"
    [assembly:TypeForwardedTo(MyClass::typeid)];
    ```

4. Build assembly A.dll.

5. Use A.dll without recompiling client applications.

### Requirements

Compiler option: `/clr`
