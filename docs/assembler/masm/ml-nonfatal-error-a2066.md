---
description: "Learn more about: ML Nonfatal Error A2066"
title: "ML Nonfatal Error A2066"
ms.date: "12/17/2019"
ms.custom: "error-reference"
f1_keywords: ["A2066"]
helpviewer_keywords: ["A2066"]
ms.assetid: 58220fdf-fb8f-47fc-a36d-737867361185
---
# ML Nonfatal Error A2066

**incompatible CPU mode and segment size**

An attempt was made to open a segment with a **USE16**, **USE32**, or **FLAT** attribute that was not compatible with the specified CPU, or to change to a 16-bit CPU while in a 32-bit segment.

The **USE32** and **FLAT** attributes must be preceded by the .386 or greater processor directive.

## See also

[ML Error Messages](ml-error-messages.md)
