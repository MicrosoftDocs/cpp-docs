---
description: "Learn more about: Resource Compiler Error RW2002"
title: "Resource Compiler Error RW2002"
ms.date: "11/04/2016"
f1_keywords: ["RW2002"]
helpviewer_keywords: ["RW2002"]
ms.assetid: b1d1a49b-b50b-4b0b-9f09-c7762e2dbe8f
---
# Resource Compiler Error RW2002

Parsing error

### To fix by checking the following possible causes

1. **Accelerator type required (ASCII or VIRTKEY)**

   The *type* field in the **ACCELERATORS** statement must contain either the ASCII or VIRTKEY value.

1. **BEGIN expected in accelerator table**

   The **BEGIN** keyword must immediately follow the **ACCELERATORS** keyword.

1. **BEGIN expected in dialog**

   The **BEGIN** keyword must immediately follow the **DIALOG** keyword.

1. **BEGIN expected in menu**

   The **BEGIN** keyword must immediately follow the **MENU** keyword.

1. **BEGIN expected in RCData**

   The **BEGIN** keyword must immediately follow the **RCDATA** keyword.

1. **BEGIN keyword expected in string table**

   The **BEGIN** keyword must immediately follow the **STRINGTABLE** keyword.

1. **Cannot re-use string constants**

   You are using the same value twice in a **STRINGTABLE** statement. Make sure you are not mixing overlapping decimal and hexadecimal values. Each ID in a **STRINGTABLE** must be unique. For maximum efficiency, use contiguous constants that start on a multiple of 16.

1. **Control character out of range [^A - ^Z]**

   A control character in the **ACCELERATORS** statement is invalid. The character following the caret (**^**) must be between A and Z, inclusive.

1. **Empty menus not allowed**

   An **END** keyword appears before any menu items are defined in the **MENU** statement. The Resource Compiler does not permit empty menus . Make sure you do not have any open quotation marks within the **MENU** statement.

1. **END expected in dialog**

   The **END** keyword must occur at the end of a **DIALOG** statement. Make sure there are no open quotes left from the preceding statement.

1. **END expected in menu**

   The **END** keyword must come at the end of a **MENU** statement. Make sure you do not have any open quotation marks or a mismatched pair of **BEGIN** and **END** statements.

1. **Expected comma in accelerator Table**

   The Resource Compiler requires a comma between the *event* and *idvalue* fields in the **ACCELERATORS** statement.

1. **Expected control class name**

   The *class* field of a **CONTROL** statement in the **DIALOG** statement must be one of the following types: BUTTON, COMBOBOX, EDIT, LISTBOX, SCROLLBAR, STATIC, or user-defined. Make sure the class is spelled correctly.

1. **Expected font face name**

   The *typeface* field of the FONT option in the **DIALOG** statement must be an ASCII character string enclosed in double quotation marks. This field specifies the name of a font.

1. **Expected ID value for menuitem**

   The **MENU** statement must contain a *menuID* field, which specifies the name or number that identifies the menu resource.

1. **Expected menu string**

   Each **MENUITEM** and **POPUP** statement must contain a *text* field, which is a string enclosed in double quotation marks that specifies the name of the menu item or pop-up menu. A **MENUITEM SEPARATOR** statement requires no quoted string.

1. **Expected numeric command value**

   The Resource Compiler was expecting a numeric *idvalue* field in the **ACCELERATORS** statement. Make sure that you have used a `#define` constant to specify the value and that the constant is spelled correctly.

1. **Expected numeric constant in string table**

   A numeric constant, defined in a `#define` statement, must immediately follow the **BEGIN** keyword in a **STRINGTABLE** statement.

1. **Expected numeric point size**

   The *pointsize* field of the FONT option in the **DIALOG** statement must be an integer point size value.

1. **Expected numerical dialog constant**

   A **DIALOG** statement requires integer values for the *x, y, width*, and *height* fields. Make sure that these values are included after the **DIALOG** keyword and that they are not negative.

1. **Expected string in STRINGTABLE**

   A string is expected after each *stringid* value in a **STRINGTABLE** statement.

1. **Expected string or constant accelerator command**

   The Resource Compiler was not able to determine what kind of key is being set up for the accelerator. The *event* field in the **ACCELERATORS** statement might be invalid.

1. **Expecting number for ID**

   Expecting a number for the *id* field of a control statement in the **DIALOG** statement. Make sure you have a number or `#define` statement for the control ID.

1. **Expecting quoted string in dialog class**

   The *class* field of the CLASS option in the **DIALOG** statement must be an integer or a string, enclosed in double quotation marks.

1. **Expecting quoted string in dialog title**

   The *captiontext* field of the CAPTION option in the **DIALOG** statement must be an ASCII character string enclosed in double quotation marks.

1. **File not found: filename**

   The file specified in the Resource Compiler command line was not found. Check to see whether the file has been moved to another directory and whether the filename or path is typed correctly. Files are searched for using the **INCLUDE** environment variable or the Visual Studio setting, if available.

1. **Font names must be ordinals**

   The *pointsize* field in the FONT statement must be an integer, not a string.

1. **Invalid accelerator**

   An *event* field in the **ACCELERATORS** statement was not recognized or was more than two characters in length.

1. **Invalid accelerator type (ASCII or VIRTKEY)**

   The *type* field in the **ACCELERATORS** statement must contain either the ASCII or VIRTKEY value.

1. **Invalid control character**

   A control character in the **ACCELERATORS** statement is invalid. A valid control character consists of one letter (only) following a caret (^).

1. **Invalid control type**

   Each control statement in a **DIALOG** statement must be one of the following: CHECKBOX, COMBOBOX, CONTROL, CTEXT, DEFPUSHBUTTON, EDITTEXT, GROUPBOX, ICON, LISTBOX, LTEXT, PUSHBUTTON, RADIOBUTTON, RTEXT, SCROLLBAR. Make sure these control statements are spelled correctly.

1. **Invalid type**

   The resource type was not among the types defined in the WINDOWS.h file.

1. **Text string or ordinal expected in control**

   The *text* field of a **CONTROL** statement in the **DIALOG** statement must be either a text string or an ordinal reference to the type of control. If using an ordinal, make sure that you have a `#define` statement for the control.

1. **Mismatched parentheses**

   Make sure you have closed every open parenthesis in the **DIALOG** statement.

1. **Unexpected value in RCData**

   The *raw-data* values in the **RCDATA** statement must be integers or strings, each separated by a comma. Make sure you did not leave out a comma or leave out a quotation mark around a string.

1. **Unknown menu subtype**

   The *item-definition* field of the **MENU** statement can contain only **MENUITEM** and **POPUP** statements.
