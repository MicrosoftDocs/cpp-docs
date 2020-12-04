---
description: "Learn more about: Resource Compiler Error RC2144"
title: "Resource Compiler Error RC2144"
ms.date: "11/04/2016"
f1_keywords: ["RC2144"]
helpviewer_keywords: ["RC2144"]
ms.assetid: 1b3ff39a-92cd-4a04-b1a3-b1fa6a805813
---
# Resource Compiler Error RC2144

PRIMARY LANGUAGE ID not a number

The PRIMARY LANGUAGE ID must be a hexadecimal language ID. See [Language and Country/Region Strings](../../c-runtime-library/locale-names-languages-and-country-region-strings.md) in the *Run-Time Library Reference* for a list of valid Language IDs.

This error can also occur if resources have been added and deleted from the .RC file using a tool. To fix this issue, open the .RC file in a text editor and clean up any unused resources manually.
