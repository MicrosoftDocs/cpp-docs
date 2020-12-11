---
description: "Learn more about: /SWAPRUN"
title: "/SWAPRUN"
ms.date: "11/04/2016"
f1_keywords: ["/swaprun_editbin"]
helpviewer_keywords: ["/SWAPRUN editbin option", "-SWAPRUN editbin option", "SWAPRUN editbin option"]
ms.assetid: 6eefd7f3-ca47-48e3-8509-323d27cf4ae7
---
# /SWAPRUN

```
/SWAPRUN:{[!]NET|[!]CD}
```

## Remarks

This option edits the image to tell the operating system to copy the image to a swap file and run it from there. Use this option for images that reside on networks or removable media.

You can add or remove the NET or CD qualifiers:

- NET indicates that the image resides on a network.

- CD indicates that the image resides on a CD-ROM or similar removable medium.

- Use !NET and !CD to reverse the effects of NET and CD.

## See also

[EDITBIN Options](editbin-options.md)
