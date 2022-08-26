---
description: "Learn more about: Compiler Error C2038"
title: "Compiler Error C2038"
ms.date: 08/18/2022
f1_keywords: ["C2038"]
helpviewer_keywords: ["C2038"]
---
# Compiler Error C2038

> the std namespace cannot be inline

The C++ standard does not allow the `std` namespace to be declared `inline`.

To resolve this issue, remove the `inline` specifier.
