---
description: "Learn more about: OpenMP Library Reference"
title: "OpenMP Library Reference"
ms.date: "12/02/2019"
ms.assetid: a25188c6-edde-43d0-84b5-780e797b08fc
---
# OpenMP Library Reference

Provides links to constructs used in the OpenMP API.

The Visual C++ implementation of the OpenMP standard includes the following constructs.

|Construct|Description|
|---------------|-----------------|
|[Directives](openmp-directives.md)|Provides links to directives used in the OpenMP API.|
|[Clauses](openmp-clauses.md)|Provides links to clauses used in the OpenMP API.|
|[Functions](openmp-functions.md)|Provides links to functions used in the OpenMP API.|
|[Environment Variables](openmp-environment-variables.md)|Provides links to environment variables used in the OpenMP API.|

The Visual C++ OpenMP run-time library functions are contained in the following libraries.

|OpenMP run-time library|Characteristics|
|------------------------------|---------------------|
|VCOMP.LIB|Multithreaded, dynamic link (import library for VCOMP140.DLL).|
|VCOMPD.LIB|Multithreaded, dynamic link (import library for VCOMP140D.DLL) (debug)|

If _DEBUG is defined in a compilation and if `#include <omp.h>` is in source code, VCOMPD.LIB will be the default lib, otherwise, VCOMP.LIB will be used.

You can use [/NODEFAULTLIB (ignore libraries)](../../../build/reference/nodefaultlib-ignore-libraries.md) to remove the default lib and explicitly link with the lib of your choice.

The OpenMP DLLs are in the Visual C++ redistributable directory and need to be distributed with applications that use OpenMP.

## See also

[OpenMP](../../../parallel/openmp/openmp-in-visual-cpp.md)
