---
description: "Learn more about: Rules for Module-Definition Statements"
title: "Rules for Module-Definition Statements"
ms.date: "11/04/2016"
f1_keywords: [".def"]
helpviewer_keywords: ["module definition files, statement syntax", "module definition files"]
ms.assetid: f65cd3a7-65d7-4d06-939f-a8b1ecd50f2d
---
# Rules for Module-Definition Statements

The following syntax rules apply to all statements in a .def file. Other rules that apply to specific statements are described with each statement.

- Statements, attribute keywords, and user-specified identifiers are case sensitive.

- Long file names containing spaces or semicolons (;) must be enclosed in quotation marks (").

- Use one or more spaces, tabs, or newline characters to separate a statement keyword from its arguments and to separate statements from each other. A colon (:) or equal sign (=) that designates an argument is surrounded by zero or more spaces, tabs, or newline characters.

- A **NAME** or **LIBRARY** statement, if used, must precede all other statements.

- The **SECTIONS** and **EXPORTS** statements can appear more than once in the .def file. Each statement can take multiple specifications, which must be separated by one or more spaces, tabs, or newline characters. The statement keyword must appear once before the first specification and can be repeated before each additional specification.

- Many statements have an equivalent LINK command-line option. See the description of the corresponding LINK option for additional details.

- Comments in the .def file are designated by a semicolon (;) at the beginning of each comment line. A comment cannot share a line with a statement, but it can appear between specifications in a multiline statement. (**SECTIONS** and **EXPORTS** are multiline statements.)

- Numeric arguments are specified in base 10 or hexadecimal.

- If a string argument matches a [reserved word](reserved-words.md), it must be enclosed in double quotation marks (").

## See also

[Module-Definition (.Def) Files](module-definition-dot-def-files.md)
