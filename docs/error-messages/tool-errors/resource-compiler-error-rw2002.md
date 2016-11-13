---
title: "Resource Compiler Error RW2002 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "RW2002"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "RW2002"
ms.assetid: b1d1a49b-b50b-4b0b-9f09-c7762e2dbe8f
caps.latest.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
---
# Resource Compiler Error RW2002
Parsing error  
  
### To fix by checking the following possible causes  
  
1.  **Accelerator type required (ASCII or VIRTKEY)**  
  
     The `type` field in the **ACCELERATORS** statement must contain either the ASCII or VIRTKEY value.  
  
2.  **BEGIN expected in accelerator table**  
  
     The **BEGIN** keyword must immediately follow the **ACCELERATORS** keyword.  
  
3.  **BEGIN expected in dialog**  
  
     The **BEGIN** keyword must immediately follow the **DIALOG** keyword.  
  
4.  **BEGIN expected in menu**  
  
     The **BEGIN** keyword must immediately follow the **MENU** keyword.  
  
5.  **BEGIN expected in RCData**  
  
     The **BEGIN** keyword must immediately follow the **RCDATA** keyword.  
  
6.  **BEGIN keyword expected in string table**  
  
     The **BEGIN** keyword must immediately follow the **STRINGTABLE** keyword.  
  
7.  **Cannot re-use string constants**  
  
     You are using the same value twice in a **STRINGTABLE** statement. Make sure you are not mixing overlapping decimal and hexadecimal values. Each ID in a **STRINGTABLE** must be unique. For maximum efficiency, use contiguous constants that start on a multiple of 16.  
  
8.  **Control character out of range [^A - ^Z]**  
  
     A control character in the **ACCELERATORS** statement is invalid. The character following the caret (**^**) must be between A and Z, inclusive.  
  
9. **Empty menus not allowed**  
  
     An **END** keyword appears before any menu items are defined in the **MENU** statement. The Resource Compiler does not permit empty menus . Make sure you do not have any open quotation marks within the **MENU** statement.  
  
10. **END expected in dialog**  
  
     The **END** keyword must occur at the end of a **DIALOG** statement. Make sure there are no open quotes left from the preceding statement.  
  
11. **END expected in menu**  
  
     The **END** keyword must come at the end of a **MENU** statement. Make sure you do not have any open quotation marks or a mismatched pair of **BEGIN** and **END** statements.  
  
12. **Expected comma in accelerator Table**  
  
     The Resource Compiler requires a comma between the `event` and *idvalue* fields in the **ACCELERATORS** statement.  
  
13. **Expected control class name**  
  
     The `class` field of a **CONTROL** statement in the **DIALOG** statement must be one of the following types: BUTTON, COMBOBOX, EDIT, LISTBOX, SCROLLBAR, STATIC, or user-defined. Make sure the class is spelled correctly.  
  
14. **Expected font face name**  
  
     The *typeface* field of the FONT option in the **DIALOG** statement must be an ASCII character string enclosed in double quotation marks. This field specifies the name of a font.  
  
15. **Expected ID value for menuitem**  
  
     The **MENU** statement must contain a *menuID* field, which specifies the name or number that identifies the menu resource.  
  
16. **Expected menu string**  
  
     Each **MENUITEM** and **POPUP** statement must contain a *text* field, which is a string enclosed in double quotation marks that specifies the name of the menu item or pop-up menu. A **MENUITEM SEPARATOR** statement requires no quoted string.  
  
17. **Expected numeric command value**  
  
     The Resource Compiler was expecting a numeric *idvalue* field in the **ACCELERATORS** statement. Make sure that you have used a `#define` constant to specify the value and that the constant is spelled correctly.  
  
18. **Expected numeric constant in string table**  
  
     A numeric constant, defined in a `#define` statement, must immediately follow the **BEGIN** keyword in a **STRINGTABLE** statement.  
  
19. **Expected numeric point size**  
  
     The *pointsize* field of the FONT option in the **DIALOG** statement must be an integer point size value.  
  
20. **Expected numerical dialog constant**  
  
     A **DIALOG** statement requires integer values for the *x, y, width*, and *height* fields. Make sure that these values are included after the **DIALOG** keyword and that they are not negative.  
  
21. **Expected string in STRINGTABLE**  
  
     A string is expected after each *stringid* value in a **STRINGTABLE** statement.  
  
22. **Expected string or constant accelerator command**  
  
     The Resource Compiler was not able to determine what kind of key is being set up for the accelerator. The `event` field in the **ACCELERATORS** statement might be invalid.  
  
23. **Expecting number for ID**  
  
     Expecting a number for the `id` field of a control statement in the **DIALOG** statement. Make sure you have a number or `#define` statement for the control ID.  
  
24. **Expecting quoted string in dialog class**  
  
     The `class` field of the CLASS option in the **DIALOG** statement must be an integer or a string, enclosed in double quotation marks.  
  
25. **Expecting quoted string in dialog title**  
  
     The `captiontext` field of the CAPTION option in the **DIALOG** statement must be an ASCII character string enclosed in double quotation marks.  
  
26. **File not found: filename**  
  
     The file specified in the Resource Compiler command line was not found. Check to see whether the file has been moved to another directory and whether the filename or path is typed correctly. Files are searched for using the **INCLUDE** environment variable or the Visual Workbench setting, if available.  
  
27. **Font names must be ordinals**  
  
     The *pointsize* field in the FONT statement must be an integer, not a string.  
  
28. **Invalid accelerator**  
  
     An `event` field in the **ACCELERATORS** statement was not recognized or was more than two characters in length.  
  
29. **Invalid accelerator type (ASCII or VIRTKEY)**  
  
     The `type` field in the **ACCELERATORS** statement must contain either the ASCII or VIRTKEY value.  
  
30. **Invalid control character**  
  
     A control character in the **ACCELERATORS** statement is invalid. A valid control character consists of one letter (only) following a caret (^).  
  
31. **Invalid control type**  
  
     Each control statement in a **DIALOG** statement must be one of the following: CHECKBOX, COMBOBOX, CONTROL, CTEXT, DEFPUSHBUTTON, EDITTEXT, GROUPBOX, ICON, LISTBOX, LTEXT, PUSHBUTTON, RADIOBUTTON, RTEXT, SCROLLBAR. Make sure these control statements are spelled correctly.  
  
32. **Invalid type**  
  
     The resource type was not among the types defined in the WINDOWS.h file.  
  
33. **Text string or ordinal expected in control**  
  
     The *text* field of a **CONTROL** statement in the **DIALOG** statement must be either a text string or an ordinal reference to the type of control. If using an ordinal, make sure that you have a `#define` statement for the control.  
  
34. **Mismatched parentheses**  
  
     Make sure you have closed every open parenthesis in the **DIALOG** statement.  
  
35. **Unexpected value in RCData**  
  
     The *raw-data* values in the **RCDATA** statement must be integers or strings, each separated by a comma. Make sure you did not leave out a comma or leave out a quotation mark around a string.  
  
36. **Unknown menu subtype**  
  
     The *item-definition* field of the **MENU** statement can contain only **MENUITEM** and **POPUP** statements.