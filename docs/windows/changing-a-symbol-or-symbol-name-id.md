---
title: "Changing a Symbol"
ms.date: "11/04/2016"
f1_keywords: ["vc.editors.symbol.changing", "vc.editors.symbol.restrictions.name", "vc.editors.symbol.changing.value", "vc.editors.symbol.restrictions.value", "vc.editors.symbol.changing.header"]
helpviewer_keywords: ["symbol names", "symbols [C++], names", "restrictions, symbol names", "numeric values", "symbols [C++], numeric values", "numeric values, changing symbols", "symbols [C++], value restrictions", "restrictions, symbol values", "resource files [C++], multiple", "Resource Includes dialog box [C++]", "symbol header files [C++], changing names", "symbols [C++], symbol header files", "Resource.h"]
ms.assetid: 26541832-8dba-4177-b642-e08f94502ea7
---
# Changing a Symbol

When you create a new resource or resource object, the development environment assigns it a default symbol name, for example, IDD_DIALOG1. You can use the [Properties Window](/visualstudio/ide/reference/properties-window) to change the default symbol name or to change the name of any symbol already associated with a resource.

For symbols associated with a single resource, you can also use the **Properties** window to change the symbol value. You can use the [Resource Symbols dialog box](../windows/resource-symbols-dialog-box.md) to change the value of symbols not currently assigned to a resource. For more information, see [Changing Unassigned Symbols](../windows/changing-unassigned-symbols.md).

Normally all symbol definitions are saved in `Resource.h`. However, you may need to change this include filename so that you can, for example, work with more than one resource file in the same directory.

For information on adding resources to managed projects, please see [Resources in Desktop Apps](/dotnet/framework/resources/index) in the *.NET Framework Developer's Guide*.

## To change a resource's symbol name (ID)

1. In [Resource View](../windows/resource-view-window.md), select the resource.

   > [!NOTE]
   > If your project doesn't already contain an .rc file, please see [Creating a New Resource Script File](../windows/how-to-create-a-resource-script-file.md).

1. In the **Properties** window, type a new symbol name or select from the list of existing symbols in the **ID** box.

   If you type a new symbol name, it is automatically assigned a value.

You can use the [Resource Symbols dialog box](../windows/resource-symbols-dialog-box.md) to change the names of symbols not currently assigned to a resource. For more information, see [Changing Unassigned Symbols](../windows/changing-unassigned-symbols.md).

### Symbol name restrictions

The restrictions on symbol names are as follows:

- All [symbols](../windows/symbols-resource-identifiers.md) must be unique within the scope of the application. This prevents conflicting symbol definitions in the header files.

- Valid characters for a symbol name include A-Z, a-z, 0-9, and underscores ( _ ).

- Symbol names cannot begin with a number and are limited to 247 characters.

- Symbol names cannot contain spaces.

- Symbol names are not case sensitive, but the case of the first symbol definition is preserved. The header file that defines the symbols is used by both the resource compiler/editor and C++ program(s) to refer resources defined in a resource file. For two symbol names that differ only in case, the C++ program will see two separate symbols while the resource compiler/editor will see both names as referring to one single symbol.

   > [!NOTE]
   > If you do not follow the standard symbol name scheme (ID*_[keyword]) outlined below, and your symbol name happens to be the same as a keyword known to the resource script compiler, trying to build the resource script file will result in seemingly random error generation that is difficult to diagnose. To prevent this, adhere to the standard naming scheme.

Symbol names have descriptive prefixes that indicate the kind of resource or object they represent. These descriptive prefixes begin with the text combination ID. The Microsoft Foundation Class Library (MFC) uses the symbol naming conventions shown in the following table.

|Category|Prefix|Use|
|--------------|------------|---------|
|Resources|IDR_ IDD_ IDC_ IDI_ IDB_|Accelerator or menu (and associated or custom resources) Dialog box Cursor Icon Bitmap|
|Menu items|ID_|Menu item|
|Commands|ID_|Command|
|Controls and child windows|IDC_|Control|
|Strings|IDS_|String in the string table|
|MFC|AFX_|Reserved for predefined MFC symbols|

## To change a symbol value assigned to a single resource or object

1. In [Resource View](../windows/resource-view-window.md), select the resource.

   > [!NOTE]
   > If your project doesn't already contain an .rc file, please see [Creating a New Resource Script File](../windows/how-to-create-a-resource-script-file.md).

1. In the **Properties** window, type the symbol name followed by an equal sign and an integer in the **ID** box, for example:

    ```
    IDC_EDITNAME=5100
    ```

The new value is stored in the symbol header file the next time you save the project. Only the symbol name remains visible in the ID box; the equal sign and value are not displayed after they are validated.

### Symbol value restrictions

A symbol value can be any integer expressed in the normal manner for #define preprocessor directives. Here are some examples of symbol values:

```
18
4001
0x0012
-3456
```

Symbol values for resources (accelerators, bitmaps, cursors, dialog boxes, icons, menus, string tables, and version information) must be decimal numbers in the range from 0 to 32,767 (but cannot be hexadecimal). Symbol values for parts of resources, such as dialog box controls or individual strings in the string table, can be from 0 to 65,534 or from -32,768 to 32,767.

Resource symbols are 16 bit numbers. You may enter them as signed or unsigned, however, they are used internally as unsigned integers. So negative numbers will be cast to their corresponding positive value.

Here are some limitations of symbol values:

- The Visual Studio development environment and MFC use some number ranges for special purposes. All numbers with the most significant bit set (-32,768 to -1 or 32,768 to 65,534, depending on sign) are reserved by MFC.

- You cannot define a symbol value using other symbol strings. For example, the following symbol definition is not supported:

    ```cpp
    #define IDC_MYEDIT  IDC_OTHEREDIT  //not supported
    ```

- You cannot use preprocessor macros with arguments as value definitions. For example:

    ```cpp
    #define   IDD_ABOUT  ID(7) //not supported
    ```

   is not a valid expression regardless of what `ID` evaluates to at compile time.

- Your application may have an existing file containing symbols defined with expressions. For more information on how to include the symbols as read-only symbols, see [Using Shared (Read Only) or Calculated Symbols](../windows/including-shared-read-only-or-calculated-symbols.md).

For more information on number ranges, see [TN023: Standard MFC Resources](../mfc/tn023-standard-mfc-resources.md).

## To change the name of the resource symbol header file

1. In [Resource View](../windows/resource-view-window.md), right-click your .rc file and choose [Resource Includes](../windows/resource-includes-dialog-box.md) from the shortcut menu.

   > [!NOTE]
   > If your project doesn't already contain an .rc file, please see [Creating a New Resource Script File](../windows/how-to-create-a-resource-script-file.md).

1. In the **Symbol header file** box, type the new name for the include file.

## Requirements

Win32

## See also

- [Predefined Symbol IDs](../windows/predefined-symbol-ids.md)
- [Viewing Resource Symbols](../windows/viewing-resource-symbols.md)
