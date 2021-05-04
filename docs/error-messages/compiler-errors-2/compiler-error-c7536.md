---
description: "Learn about the causes of Compiler error C7536 and how to fix it."
title: "Compiler Error C7536"
ms.date: 05/03/2021
f1_keywords: ["C7536"]
helpviewer_keywords: ["C7536"]
---
# Compiler Error C7536

> ifc failed integrity checks.  Expected SHA2: '*hash-value*'

The compiler raises C7536 whenever the *`.ifc`* file has been tampered with. The header of the module interface contains an SHA2 hash of the contents below it. On import, the *`.ifc`* file is hashed, then checked against the hash provided in the header. If these don't match, error C7536 is raised:

```Output
error C7536: ifc failed integrity checks.
Expected SHA2: '66d5c8154df0c71d4cab7665bab4a125c7ce5cb9a401a4d8b461b706ddd771c6'
```

This error is new in Visual Studio 2017 version 15.9. It's only generated when creating or consuming modules, specified by the `/experimental:module` compiler option.
