---
description: "Learn more about: Application domains and Visual C++"
title: "Application Domains and Visual C++"
ms.date: "11/04/2016"
helpviewer_keywords: ["interop [C++], application domains", "application domains [C++], C++", "/clr compiler option [C++], application domains", "interoperability [C++], application domains", "mixed assemblies [C++], application domains"]
ms.assetid: 75a08efc-9b02-40ba-99b7-dcbd71010bbf
---
# Application domains and Visual C++

If you have a `__clrcall` virtual function, the vtable will be per application domain (appdomain). If you create an object in one appdomain, you can only call the virtual function from within that appdomain. In mixed mode (**/clr**) you will have per-process vtables if your type has no `__clrcall` virtual functions. The **/clr:pure** and **/clr:safe** compiler options are deprecated in Visual Studio 2015 and unsupported in Visual Studio 2017.

For more information, see:

- [appdomain](../cpp/appdomain.md)

- [__clrcall](../cpp/clrcall.md)

- [process](../cpp/process.md)

## See also

- [Mixed (Native and Managed) Assemblies](../dotnet/mixed-native-and-managed-assemblies.md)
