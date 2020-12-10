---
description: "Learn more about: Specifying the Threading Model for a Project (ATL)"
title: "Specifying the Threading Model for a Project (ATL)"
ms.date: "11/04/2016"
helpviewer_keywords: ["_ATL_FREE_THREADED macro", "_ATL_APARTMENT_THREADED macro", "ATL, multithreading", "threading [ATL], models", "_ATL_SINGLE_THREADED macro"]
ms.assetid: 6b571078-521c-4f3e-9f08-482aa235a822
---
# Specifying the Threading Model for a Project (ATL)

The following macros are available to specify the threading model of an ATL project:

|Macro|Guidelines for using|
|-----------|--------------------------|
|_ATL_SINGLE_THREADED|Define if all of your objects use the single threading model.|
|_ATL_APARTMENT_THREADED|Define if one or more of your objects use apartment threading.|
|_ATL_FREE_THREADED|Define if one or more of your objects use free or neutral threading. Existing code may contain references to the equivalent macro [_ATL_MULTI_THREADED](reference/compiler-options-macros.md#_atl_multi_threaded).|

If you do not define any of these macros for your project, _ATL_FREE_THREADED will be in effect.

The macros affect run-time performance as follows:

- Specifying the macro that corresponds to the objects in your project can improve run-time performance.

- Specifying a higher level of macro, for example if you specify _ATL_APARTMENT_THREADED when all of your objects are single threaded, will slightly degrade run-time performance.

- Specifying a lower level of macro, for example, if you specify _ATL_SINGLE_THREADED when one or more of your objects use apartment threading or free threading, can cause your application to fail at run time.

See [Options, ATL Simple Object Wizard](../atl/reference/options-atl-simple-object-wizard.md) for a description of the threading models available for an ATL object.

## See also

[Concepts](../atl/active-template-library-atl-concepts.md)
