---
description: "Learn more about: ATL Module Classes"
title: "ATL Module Classes"
ms.date: "11/04/2016"
helpviewer_keywords: ["CComModule class, what's changed", "ATL, module classes", "module classes"]
ms.assetid: fd75382d-c955-46ba-a38e-37728b7fa00f
---
# ATL Module Classes

This topic discusses the module classes that were new in ATL 7.0.

## CComModule Replacement Classes

Earlier versions of ATL used `CComModule`. In ATL 7.0, `CComModule` functionality is replaced by several classes:

- [CAtlBaseModule](../atl/reference/catlbasemodule-class.md) Contains information required by most applications that use ATL. Contains the HINSTANCE of the module and the resource instance.

- [CAtlComModule](../atl/reference/catlcommodule-class.md) Contains information required by the COM classes in ATL.

- [CAtlWinModule](../atl/reference/catlwinmodule-class.md) Contains information required by the windowing classes in ATL.

- [CAtlDebugInterfacesModule](../atl/reference/catldebuginterfacesmodule-class.md) Contains support for interface debugging.

- [CAtlModule](../atl/reference/catlmodule-class.md) The following `CAtlModule`-derived classes are customized to contain information required in a particular application type. Most members in these classes can be overridden:

  - [CAtlDllModuleT](../atl/reference/catldllmodulet-class.md) Used in DLL applications. Provides code for the standard exports.

  - [CAtlExeModuleT](../atl/reference/catlexemodulet-class.md) Used in EXE applications. Provides code required in an EXE.

  - [CAtlServiceModuleT](../atl/reference/catlservicemodulet-class.md) Provides support to create Windows NT and Windows 2000 Services.

`CComModule` is still available for backward compatibility.

## Reasons for Distributing CComModule Functionality

The functionality of `CComModule` was distributed into several new classes for the following reasons:

- Make the functionality in `CComModule` granular.

   Support for COM, windowing, interface debugging, and application-specific (DLL or EXE) features is now in separate classes.

- Automatically declare global instance of each of these modules.

   A global instance of the required module classes is linked into the project.

- Remove the necessity of calling Init and Term methods.

   Init and Term methods have moved into the constructors and destructors for the module classes; there is no longer a need to call Init and Term.

## See also

[Concepts](../atl/active-template-library-atl-concepts.md)<br/>
[Class Overview](../atl/atl-class-overview.md)
