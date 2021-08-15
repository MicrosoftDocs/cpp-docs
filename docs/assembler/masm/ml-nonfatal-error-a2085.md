---
description: "Learn more about: ML Nonfatal Error A2085"
title: "ML Nonfatal Error A2085"
ms.date: "12/17/2019"
ms.custom: "error-reference"
f1_keywords: ["A2085"]
helpviewer_keywords: ["A2085"]
ms.assetid: c2fef415-a32b-4249-896c-6d981fc6e327
---
# ML Nonfatal Error A2085

**instruction or register not accepted in current CPU mode**

An attempt was made to use an instruction, register, or keyword that was not valid for the current processor mode.

For example, 32-bit registers require [.386](dot-386.md) or above. Control registers such as CR0 require privileged mode [.386P](dot-386p.md) or above. This error will also be generated for the **NEAR32**, **FAR32**, and **FLAT** keywords, which require .**386** or above.

## See also

[ML Error Messages](ml-error-messages.md)
