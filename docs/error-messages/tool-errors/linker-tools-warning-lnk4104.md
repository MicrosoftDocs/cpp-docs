---
description: "Learn more about: Linker Tools Warning LNK4104"
title: "Linker Tools Warning LNK4104"
ms.date: "11/04/2016"
f1_keywords: ["LNK4104"]
helpviewer_keywords: ["LNK4104"]
ms.assetid: ca6728db-d616-419a-a570-65e8445c6079
---
# Linker Tools Warning LNK4104

export of symbol 'symbol' should be PRIVATE

The `symbol` can be one of the following:

- `DllCanUnloadNow`

- `DllGetClassObject`

- `DllGetClassFactoryFromClassString`

- `DllGetDocumentation`

- `DllInitialize`

- `DllInstall`

- `DllRegisterServer`

- `DllRegisterServerEx`

- `DllRegisterServerExW`

- `DllUnload`

- `DllUnregisterServer`

- `RasCustomDeleteEntryNotify`

- `RasCustomDial`

- `RasCustomDialDlg`

- `RasCustomEntryDlg`

This warning is emitted when you are building an import library for a DLL and export one of the above functions without specifying it as PRIVATE in the module-definition file. In general, these functions are exported for use only by OLE. Placing them in the import library can lead to unusual behavior when a program linked to the library incorrectly makes calls to them. For more information about the PRIVATE keyword, see [EXPORTS](../../build/reference/exports.md).
