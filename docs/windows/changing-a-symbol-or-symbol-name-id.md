---
description: "Learn more about: How to: Manage Symbols"
title: "How to: Manage Symbols"
ms.date: "02/14/2019"
f1_keywords: ["vc.editors.symbol.changing", "vc.editors.symbol.restrictions.name", "vc.editors.symbol.changing.value", "vc.editors.symbol.restrictions.value", "vc.editors.symbol.changing.header", "vc.editors.symbol.changing.unassigned", "vc.editors.symbol.shared.calculated"]
helpviewer_keywords: ["symbol names", "symbols [C++], names", "restrictions, symbol names", "numeric values", "symbols [C++], numeric values", "numeric values, changing symbols", "symbols [C++], value restrictions", "restrictions, symbol values", "resource files [C++], multiple", "Resource Includes dialog box [C++]", "symbol header files [C++], changing names", "symbols [C++], symbol header files", "Resource.h", "symbols [C++], unassigned", "Change Symbol dialog box [C++]", "unassigned symbols", "symbols [C++], deleting", "symbols [C++], read-only", "symbols [C++], shared", "symbols [C++], calculated", "read-only symbols", "symbol directives", "calculated symbols", "shared symbols"]
ms.assetid: 26541832-8dba-4177-b642-e08f94502ea7
---
# How to: Manage Symbols

When you create a new resource or resource object, the development environment assigns it a default symbol name, for example, `IDD_DIALOG1`. You can use the [Properties window](/visualstudio/ide/reference/properties-window) to change the default symbol name or to change the name of any symbol already associated with a resource.

For symbols associated with a single resource, you can also use the **Properties** window to change the symbol value. You can use the [Resource Symbols dialog box](./creating-new-symbols.md) to change the value of symbols not currently assigned to a resource.

Normally all symbol definitions are saved in `Resource.h`. However, you may need to change this include filename so that you can, for example, work with more than one resource file in the same directory.

> [!NOTE]
> If your project doesn't already contain an .rc file, see [How to: Create Resources](how-to-create-a-resource-script-file.md).

## Symbol Name Restrictions

The restrictions on symbol names are as follows:

- All [symbols](symbols-resource-identifiers.md) must be unique within the scope of the application to prevent conflicting symbol definitions in the header files.

- Valid characters for a symbol name include A-Z, a-z, 0-9, and underscores ( _ ).

- Symbol names can't begin with a number and are limited to 247 characters.

- Symbol names can't contain spaces.

- Symbol names aren't case-sensitive, but the case of the first symbol definition is preserved.

   The header file that defines the symbols is used by both the resource compiler/editor and C++ program(s) to refer resources defined in a resource file. For two symbol names that differ only in case, the C++ program will see two separate symbols while the resource compiler/editor will see both names as referring to one single symbol.

> [!NOTE]
> If you don't follow the standard symbol name scheme (ID*_[keyword]) outlined below and your symbol name happens to be the same as a keyword known to the resource script compiler, trying to build the resource script file will result in seemingly random error generation that is difficult to diagnose. To prevent this, adhere to the standard naming scheme.

Symbol names have descriptive prefixes that indicate the kind of resource or object they represent. These descriptive prefixes begin with the text combination ID. The Microsoft Foundation Class (MFC) library uses the symbol naming conventions shown in the following table:

|Category|Prefix|Use|
|--------------|------------|---------|
|Resources|IDR_, IDD_, IDC_, IDI_, IDB_|Accelerator or menu (and associated or custom resources), dialog box, cursor, icon, bitmap|
|Menu items|ID_|Menu item|
|Commands|ID_|Command|
|Controls and child windows|IDC_|Control|
|Strings|IDS_|String in the string table|
|MFC|AFX_|Reserved for predefined MFC symbols|

### To change a symbol name (ID)

1. In [Resource View](how-to-create-a-resource-script-file.md#create-resources), select the resource.

1. In the **Properties** window, type a new symbol name or select from the list of existing symbols in the **ID** box.

   If you type a new symbol name, it's automatically assigned a value.

> [!NOTE]
> You can use the [Resource Symbols dialog box](./creating-new-symbols.md) to change the names of symbols not currently assigned to a resource.

## Symbol Value Restrictions

A symbol value can be any integer expressed in the normal manner for `#define` preprocessor directives. Here are some examples of symbol values:

```
18
4001
0x0012
-3456
```

Symbol values for resources such as accelerators, bitmaps, cursors, dialog boxes, icons, menus, string tables, and version information, must be decimal numbers in the range from 0 to 32,767 but can't be hexadecimal. Symbol values for parts of resources, such as dialog box controls or individual strings in the string table, can be from 0 to 65,534 or from -32,768 to 32,767. For more information on number ranges, see [TN023: Standard MFC Resources](../mfc/tn023-standard-mfc-resources.md).

Resource symbols are 16-bit numbers. You may enter them as signed or unsigned, however, they're used internally as unsigned integers, so negative numbers will be cast to their corresponding positive value.

Some limitations of symbol values are:

- The Visual Studio development environment and MFC use some number ranges for special purposes. All numbers with the most significant bit set (-32,768 to -1 or 32,768 to 65,534, depending on sign) are reserved by MFC.

- You can't define a symbol value using other symbol strings. For example, the following symbol definition isn't supported:

    ```cpp
    #define IDC_MYEDIT  IDC_OTHEREDIT  //not supported
    ```

- You can't use preprocessor macros with arguments as value definitions. The following example isn't a valid expression regardless of what `ID` evaluates to at compile time:

    ```cpp
    #define   IDD_ABOUT  ID(7) //not supported
    ```

- Your application may have an existing file containing symbols defined with expressions.

### To change a symbol value

1. In [Resource View](how-to-create-a-resource-script-file.md#create-resources), select the resource.

1. In the **Properties** window, type the symbol name followed by an equal sign and an integer in the **ID** box, for example:

    ```
    IDC_EDITNAME=5100
    ```

   The new value is stored in the symbol header file the next time you save the project. Only the symbol name remains visible in the ID box and the equal sign and value aren't displayed after they're validated.

## Change or Delete Symbols

While in the [Resource Symbols dialog box](./creating-new-symbols.md), you can edit or delete existing symbols that aren't already assigned to a resource or object.

### To change an unassigned symbol

1. In the **Name** box, select the unassigned symbol, and choose **Change**.

1. Edit the symbol's name or value in the boxes provided in the **Change Symbol** dialog box.

> [!NOTE]
> To change a symbol that's assigned to a resource or object, you must use the resource editor or **Properties** window.

### To delete an unassigned (unused) symbol

In the **Resource Symbols** dialog box, select the symbol that you want to delete, and choose **Delete**.

> [!NOTE]
> Before deleting an unused symbol in a resource file, make sure it's not used elsewhere in the program or by resource files included at compile time.

## Include Symbols

The first time the development environment reads a resource file created by another application, it marks all included header files as read-only. Though you can use the [Resource Includes dialog box](./how-to-include-resources-at-compile-time.md) to add additional read-only symbol header files.

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

1. In [Resource View](how-to-create-a-resource-script-file.md#create-resources), right-click your *.rc* file and select [Resource Includes](./how-to-include-resources-at-compile-time.md).

1. In the **Read-only symbol directives** box, use the `#include` compiler directive to specify the file where you want the read-only symbols to be kept.

   Don't call the file `Resource.h`, since that is the filename normally used by the main symbol header file.

   > [!NOTE]
   > What you type in the **Read-Only symbol directives** box is included in the resource file exactly as you type it. Make sure what you type does not contain any spelling or syntax errors.

   Use the **Read-only symbol directives** box to include files with symbol definitions only. Don't include resource definitions, else duplicate resource definitions will be created when the file is saved.

1. Place the symbols in the file you specified.

   The symbols in files included in this way are evaluated each time you open your resource file, but they aren't replaced on the disk when you save your file.

1. Select **OK**.

### To change the name of the resource symbol header file

1. In [Resource View](how-to-create-a-resource-script-file.md#create-resources), right-click your *.rc* file and choose [Resource Includes](./how-to-include-resources-at-compile-time.md).

1. In the **Symbol header file** box, type the new name for the include file.

## Requirements

Win32

## See also

[Resource Identifiers (Symbols)](symbols-resource-identifiers.md)<br/>
[How to: Create Symbols](creating-new-symbols.md)<br/>
[Predefined Symbol IDs](predefined-symbol-ids.md)<br/>
