---
description: "Learn more about: Friend Assemblies (C++)"
title: "Friend Assemblies (C++)"
ms.date: "11/04/2016"
helpviewer_keywords: ["friend assemblies, Visual C++"]
ms.assetid: 8d55fee0-b7c2-4fbe-a23b-dfe424dc71cd
---
# Friend Assemblies (C++)

For applicable runtimes, the *friend assemblies* language feature makes types that are at namespace scope or global scope in an assembly component accessible to one or more client assemblies or .netmodules.

## All Runtimes

**Remarks**

(This language feature is not supported in all runtimes.)

## Windows Runtime

**Remarks**

(This language feature is not supported in the Windows Runtime.)

### Requirements

Compiler option: **/ZW**

## Common Language Runtime

**Remarks**

#### To make types at namespace scope or global scope in an assembly component accessible to a client assembly or .netmodule

1. In the component, specify an assembly attribute <xref:System.Runtime.CompilerServices.InternalsVisibleToAttribute>, and pass the name of the client assembly or .netmodule that will access types at namespace scope or global scope in the component.  You can specify multiple client assemblies or .netmodules by specifying additional attributes.

1. In the client assembly or .netmodule, when you reference the component assembly by using `#using`, pass the **`as_friend`** attribute.  If you specify the **`as_friend`** attribute for an assembly that does not specify `InternalsVisibleToAttribute`, a runtime exception will be thrown if you try to access a type at namespace scope or global scope in the component.

A build error will result if the assembly that contains the <xref:System.Runtime.CompilerServices.InternalsVisibleToAttribute> attribute does not have a strong name but the client assembly that uses the **`as_friend`** attribute does.

Although types at namespace scope and global scope can be known to a client assembly or .netmodule, member accessibility is still in effect.  For example, you cannot access a private member.

Access to all types in an assembly must be explicitly granted.  For example, assembly C does not have access to all types in assembly A if assembly C references assembly B and assembly B has access to all types in assembly A.

For information about how to sign—that is, how to give a strong name to—an assembly that is built by using the Microsoft C++ compiler, see [Strong Name Assemblies (Assembly Signing) (C++/CLI)](../dotnet/strong-name-assemblies-assembly-signing-cpp-cli.md).

As an alternative to using the friend assemblies feature, you can use <xref:System.Security.Permissions.StrongNameIdentityPermission> to restrict access to individual types.

### Requirements

Compiler option: **/clr**

### Examples

The following code example defines a component that specifies a client assembly that has access to the types in the component.

```cpp
// friend_assemblies.cpp
// compile by using: /clr /LD
using namespace System::Runtime::CompilerServices;
using namespace System;
// an assembly attribute, not bound to a type
[assembly:InternalsVisibleTo("friend_assemblies_2")];

ref class Class1 {
public:
   void Test_Public() {
      Console::WriteLine("Class1::Test_Public");
   }
};
```

The next code example accesses a private type in the component.

```cpp
// friend_assemblies_2.cpp
// compile by using: /clr
#using "friend_assemblies.dll" as_friend

int main() {
   Class1 ^ a = gcnew Class1;
   a->Test_Public();
}
```

```Output
Class1::Test_Public
```

The next code example defines a component but does not specify a client assembly that will have access to the types in the component.

Notice that the component is linked by using **/opt:noref**. This ensures that private types are emitted in the component's metadata, which is not required when the `InternalsVisibleTo` attribute is present. For more information, see [/OPT (Optimizations)](../build/reference/opt-optimizations.md).

```cpp
// friend_assemblies_3.cpp
// compile by using: /clr /LD /link /opt:noref
using namespace System;

ref class Class1 {
public:
   void Test_Public() {
      Console::WriteLine("Class1::Test_Public");
   }
};
```

The following code example defines a client that tries to access a private type in a component that does not give access to its private types. Because of the behavior of the runtime, if you want to catch the exception, you must attempt to access a private type in a helper function.

```cpp
// friend_assemblies_4.cpp
// compile by using: /clr
#using "friend_assemblies_3.dll" as_friend
using namespace System;

void Test() {
   Class1 ^ a = gcnew Class1;
}

int main() {
   // to catch this kind of exception, use a helper function
   try {
      Test();
   }
   catch(MethodAccessException ^ e) {
      Console::WriteLine("caught an exception");
   }
}
```

```Output
caught an exception
```

The next code example shows how to create a strong-name component that specifies a client assembly that will have access to the types in the component.

```cpp
// friend_assemblies_5.cpp
// compile by using: /clr /LD /link /keyfile:friend_assemblies.snk
using namespace System::Runtime::CompilerServices;
using namespace System;
// an assembly attribute, not bound to a type

[assembly:InternalsVisibleTo("friend_assemblies_6, PublicKey=00240000048000009400000006020000002400005253413100040000010001000bf45d77fd991f3bff0ef51af48a12d35699e04616f27ba561195a69ebd3449c345389dc9603d65be8cd1987bc7ea48bdda35ac7d57d3d82c666b7fc1a5b79836d139ef0ac8c4e715434211660f481612771a9f7059b9b742c3d8af00e01716ed4b872e6f1be0e94863eb5745224f0deaba5b137624d7049b6f2d87fba639fc5")];

private ref class Class1 {
public:
   void Test_Public() {
      Console::WriteLine("Class1::Test_Public");
   }
};
```

Notice that the component must specify its public key. We suggest that you run the following commands sequentially at a command prompt to create a key pair and get the public key:

**sn -d friend_assemblies.snk**

**sn -k friend_assemblies.snk**

**sn -i friend_assemblies.snk friend_assemblies.snk**

**sn -pc friend_assemblies.snk key.publickey**

**sn -tp key.publickey**

The next code example accesses a private type in the strong-name component.

```cpp
// friend_assemblies_6.cpp
// compile by using: /clr /link /keyfile:friend_assemblies.snk
#using "friend_assemblies_5.dll" as_friend

int main() {
   Class1 ^ a = gcnew Class1;
   a->Test_Public();
}
```

```Output
Class1::Test_Public
```

## See also

[Component Extensions for Runtime Platforms](../extensions/component-extensions-for-runtime-platforms.md)
