---
title: "Setting up a static link to the Registrar code (C++ only)"
description: "How to statically link C++ code to the ATL Registrar code."
ms.date: 09/03/2020
helpviewer_keywords: ["statically linking to ATL Registrar code", "linking [C++], to ATL Registrar code"]
ms.assetid: 835f5885-87a6-48fa-91e6-60988ee65538
---
# Setting up a static link to the Registrar code (C++ Only)

C++ clients can create a static link to the Registrar's code. Static linking of the Registrar's parser adds approximately 5K to a release build.

The simplest way to set up static linking assumes you have specified [`DECLARE_REGISTRY_RESOURCEID`](reference/registry-macros.md#declare_registry_resourceid) in your object's declaration. (It's the default specification used by the ATL.)

## To create a static link using `DECLARE_REGISTRY_RESOURCEID`

1. Specify **`/D _ATL_STATIC_REGISTRY`** instead of **`/D _ATL_DLL`** on the CL command line. For more information, see [`/D`](../build/reference/d-preprocessor-definitions.md).

1. Recompile.

## See also

[Registry component (Registrar)](../atl/atl-registry-component-registrar.md)
