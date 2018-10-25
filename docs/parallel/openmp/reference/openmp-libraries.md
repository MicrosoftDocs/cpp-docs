---
title: "OpenMP libraries | Microsoft Docs"
ms.custom: ""
ms.date: "10/24/2018"
ms.technology: ["cpp-parallel"]
ms.topic: "reference"
dev_langs: ["C++"]
ms.assetid: f89abf97-67e3-4327-bc30-43f85b9533a2
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# OpenMP libraries

Discusses the .lib files that make up the OpenMP run-time libraries in Visual C++.

The following libraries contain the Visual C++ OpenMP run-time library functions.

|OpenMP run-time library|Characteristics|
|------------------------------|---------------------|
|VCOMP.LIB|Multithreaded, dynamic link (import library for VCOMP.LIB).|
|VCOMPD.LIB|Multithreaded, dynamic link (import library for VCOMPD.LID) (debug)|

If _DEBUG is defined in a compilation and if `#include omp.h` is in source code, VCOMPD.LIB will be the default lib. Otherwise, VCOMP.LIB will be used.

You can use [/NODEFAULTLIB (ignore libraries)](../../../build/reference/nodefaultlib-ignore-libraries.md) to remove the default lib and explicitly link with the lib of your choice.

The OpenMP DLLs are in the Visual C++ redistributable directory and need to be distributed with applications that use OpenMP.

## See also

[Library reference](openmp-library-reference.md)
