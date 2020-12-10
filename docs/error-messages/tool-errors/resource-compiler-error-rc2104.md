---
description: "Learn more about: Resource Compiler Error RC2104"
title: "Resource Compiler Error RC2104"
ms.date: "11/04/2016"
f1_keywords: ["RC2104"]
helpviewer_keywords: ["RC2104"]
ms.assetid: 792a3bd8-cb4c-4817-b288-4ce37082b582
---
# Resource Compiler Error RC2104

undefined keyword or key name: key

The specified keyword or key name is not defined.

This error is often caused by a typo in the resource definition, or in the included header file. It can also be caused by a missing header file.

To fix the issue, locate the header file that should contain the defined keyword or key name and verify that it is included in your resource file, and that the keyword or key name is spelled correctly. If your project was created with a precompiled header, and you subsequently remove it, make sure that the resource file still includes any required headers.

To verify the defined keywords and key names in your resource file, in Visual Studio, open the **Resource View** window—on the menu bar, choose **View**, **Resource View**—and then open the shortcut menu for the .rc file and choose **Resource Symbols** to view the list of defined symbols. To modify the included headers, open the shortcut menu for the .rc file and choose **Resource Includes**.

If you encounter this message:

```
undefined keyword or key name: MFT_STRING
```

open \MCL\MFC\Include\AfxRes.h and add this include directive:

```
#include <winresrc.h>
```
