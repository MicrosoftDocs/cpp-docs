---
description: "Learn more about binding delay-loaded imports"
title: "Bind delay-loaded imports"
ms.date: "01/19/2021"
helpviewer_keywords: ["/DELAY:NOBIND linker option", "DELAY:NOBIND linker option"]
---
# Bind delay-loaded imports

The default linker behavior is to create a bindable import address table (IAT) for the delay-loaded DLL. If the DLL is bound, the helper function attempts to use the bound information instead of calling `GetProcAddress` on each of the referenced imports. If either the timestamp or the preferred address doesn't match the one in the loaded DLL, the helper function assumes the bound import address table is out of date. It proceeds as if the IAT doesn't exist.

If you never intend to bind the delay-loaded imports of a DLL, specify [`/delay:nobind`](delay-delay-load-import-settings.md) on the linker command line. The linker won't generate the bound import address table, which saves space in the image file.

## See also

[Linker support for delay-loaded DLLs](linker-support-for-delay-loaded-dlls.md)
