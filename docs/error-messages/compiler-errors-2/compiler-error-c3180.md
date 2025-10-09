---
title: "Compiler Error C3180"
description: "Learn more about: Compiler Error C3180"
ms.date: 11/04/2016
f1_keywords: ["C3180"]
helpviewer_keywords: ["C3180"]
---
# Compiler Error C3180

> 'type name' : name exceeds meta-data limit of 'limit' characters

## Remarks

The compiler truncated the name for a managed type in metadata. The truncation will make the type unusable with the `#using` directive (or the equivalent in another language).

The type-name limit includes any namespace qualifications.
