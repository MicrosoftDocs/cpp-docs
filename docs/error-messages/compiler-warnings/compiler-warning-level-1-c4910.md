---
description: "Learn more about: Compiler Warning (level 1) C4910"
title: "Compiler Warning (level 1) C4910"
ms.date: "11/04/2016"
f1_keywords: ["C4910"]
helpviewer_keywords: ["C4910"]
ms.assetid: 67963560-fbca-4ca7-93db-06beaf7055f0
---
# Compiler Warning (level 1) C4910

'\<identifier>' : '__declspec(dllexport)' and 'extern' are incompatible on an explicit instantiation

The explicit template instantiation named *\<identifier>* is modified by both the `__declspec(dllexport)` and **`extern`** keywords. However, these keywords are mutually exclusive. The `__declspec(dllexport)` keyword means instantiate the template class, while the **`extern`** keyword means do not automatically instantiate the template class.

## See also

[Explicit Instantiation](../../cpp/explicit-instantiation.md)<br/>
[dllexport, dllimport](../../cpp/dllexport-dllimport.md)<br/>
[General Rules and Limitations](../../cpp/general-rules-and-limitations.md)
