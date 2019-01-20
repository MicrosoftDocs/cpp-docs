---
title: "Including Shared (Read-Only) or Calculated Symbols"
ms.date: "11/04/2016"
f1_keywords: ["vc.editors.symbol.shared.calculated"]
helpviewer_keywords: ["symbols [C++], read-only", "symbols [C++], shared", "symbols [C++], calculated", "read-only symbols", "symbol directives", "calculated symbols", "shared symbols"]
ms.assetid: 32b77faf-a066-4371-a072-9a5b84c0766d
---
# Including Shared (Read-Only) or Calculated Symbols

The first time the development environment reads a resource file created by another application, it marks all included header files as read-only. Subsequently, you can use the [Resource Includes dialog box](../windows/resource-includes-dialog-box.md) to add additional read-only symbol header files.

One reason you may want to use read-only symbol definitions is for symbol files that you plan to share among several projects.

You can also use included symbol files when you have existing resources with symbol definitions that use expressions rather than simple integers to define the symbol value. For example:

```cpp
#define   IDC_CONTROL1 2100
#define   IDC_CONTROL2 (IDC_CONTROL1+1)
```

The environment will correctly interpret these calculated symbols as long as:

- The calculated symbols are placed in a read-only symbols file.

- Your resource file contains resources to which these calculated symbols are already assigned.

- A numeric expression is expected.

> [!NOTE]
> If a string or a numeric expression is expected, then the expression is not evaluated.

### To include shared (read-only) symbols in your resource file

1. In [Resource View](../windows/resource-view-window.md), right-click your .rc file and choose [Resource Includes](../windows/resource-includes-dialog-box.md) from the shortcut menu.

   > [!NOTE]
   > If your project doesn't already contain an .rc file, please see [Creating a New Resource Script File](../windows/how-to-create-a-resource-script-file.md).

2. In the **Read-only symbol directives** box, use the `#include` compiler directive to specify the file where you want the read-only symbols to be kept.

   Do not call the file `Resource.h`, since that is the filename normally used by the main symbol header file.

   > [!NOTE]
   > **Important** What you type in the Read-Only symbol directives box is included in the resource file exactly as you type it. Make sure what you type does not contain any spelling or syntax errors.

   Use the **Read-only symbol directives** box to include files with symbol definitions only. Do not include resource definitions; otherwise, duplicate resource definitions will be created when the file is saved.

3. Place the symbols in the file you specified.

   The symbols in files included in this way are evaluated each time you open your resource file, but they are not replaced on the disk when you save your file.

4. Click **OK**.

## Requirements

Win32

## See also

- [Symbol Name Restrictions](../windows/symbol-name-restrictions.md)
- [Symbol Value Restrictions](../windows/symbol-value-restrictions.md)
- [Predefined Symbol IDs](../windows/predefined-symbol-ids.md)
- [Symbols: Resource Identifiers](../windows/symbols-resource-identifiers.md)
