---
description: "Learn more about: Compiler Error C2049"
title: "Compiler Error C2049"
ms.date: 08/18/2022
f1_keywords: ["C2049"]
helpviewer_keywords: ["C2049"]
---
# Compiler Error C2049

> '*namespace-name*': non-inline namespace cannot be reopened as inline

The **`inline`** keyword may be used on a namespace definition extension only if it was also used on the original namespace definition.

To resolve this issue, make the use of the **`inline`** specifier consistent across all parts of the namespace.
