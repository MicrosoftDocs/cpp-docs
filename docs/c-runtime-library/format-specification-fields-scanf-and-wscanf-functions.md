---
description: "Learn more about: Format specification fields: scanf and wscanf functions"
title: "Format specification fields: scanf and wscanf functions"
ms.date: 05/13/2022
ms.topic: "reference"
ms.custom: contperf-fy21q1
helpviewer_keywords: ["width, specifications in scanf function", "scanf format specifications", "scanf width specifications", "scanf type field characters", "type fields, scanf function", "format specification fields for scanf function", "type fields"]
---
# Format specification fields: `scanf` and `wscanf` functions

The information here applies to the entire `scanf` family of functions, including the secure versions. It describes the symbols used to tell the `scanf` functions how to parse the input stream, such as the input stream `stdin`, into values that are inserted into program variables.

The `format` argument is a string that specifies the interpretation of the input and can contain one or more of:

- White-space characters: blank (` `); tab (`\t`); or newline (`\n`). A white-space character causes `scanf` to read, but not store, all consecutive white-space characters in the input up to the next non-white-space character. One white-space character in the format matches any number (including 0) and combination of white-space characters in the input.

- Non-white-space characters, except for the percent sign (`%`). A non-white-space character causes `scanf` to read, but not store, a matching non-white-space character. If the next character in the input stream doesn't match, `scanf` terminates.

- Format specifications, introduced by the percent sign (`%`). A format specification causes `scanf` to read and convert characters in the input into a value of a specified type. The value is assigned to an argument in the argument list.

  A format specification has the following form:

  > **`%`**\[**`*`**]\[***`width`***]\[{**`h`**\|**`l`**\|**`ll`**\|**`I64`**\|**`L`**}]***`type`***

  Here, ***`width`***, **`h`**, **`l`**, **`ll`**, **`I64`**, and **`L`** represent a `scanf` [width specification](./scanf-width-specification.md), and ***`type`*** represents a `scanf` [type field character](./scanf-type-field-characters.md).

The `format` argument string is read from left to right. Characters outside format specifications are expected to match the sequence of characters in the input stream. The matching characters in the input stream are scanned but not stored. If a character in the input stream conflicts with the format specification, `scanf` terminates, and the character is left in the input stream as if it hadn't been read.

When the first format specification is encountered, the value of the first input field is converted according to this specification. This value is stored in the location specified by the first argument that follows the `format` argument. The second format specification causes the second input field to be converted and stored in the next argument, and so on, through the end of the format string.

An input field is defined as: All characters up to the first white-space character (space, tab, or newline), or up to the first character that can't be converted according to the format specification, or until the field width (if specified) is reached. If there are too many arguments for the given specifications, the extra arguments are evaluated but ignored. The results are unpredictable if there aren't enough arguments for the format specification.

Each field of the format specification is a single character or a number signifying a particular format option. The `type` character, which appears after the last optional format field, determines whether the input field is interpreted as a character, a string, or a number.

The simplest format specification contains only the percent sign and a `type` character (for example, `%s`). If a percent sign (`%`) is followed by a character that has no meaning as a format-control character, that character and the following characters (up to the next percent sign) are treated as an ordinary sequence of characters. That is, they're treated as a sequence of characters that must match the input. For example, to specify that a percent-sign character is to be input, use `%%`.

An asterisk (`*`) following the percent sign suppresses assignment of the next input field, which is interpreted as a field of the specified type. The field is scanned but not stored in an argument.

The secure versions (the ones with the `_s` suffix) of the `scanf` family of functions require each parameter of type `c`, `C`, `s`, `S` or `[` to have a buffer size parameter passed immediately following. For more information on the secure versions of the `scanf` family of functions, see [`scanf_s`, `_scanf_s_l`, `wscanf_s`, `_wscanf_s_l`](./reference/scanf-s-scanf-s-l-wscanf-s-wscanf-s-l.md).

## See also

[`scanf` Width specification](./scanf-width-specification.md)\
[`scanf` Type field characters](./scanf-type-field-characters.md)\
[`scanf`, `_scanf_l`, `wscanf`, `_wscanf_l`](./reference/scanf-scanf-l-wscanf-wscanf-l.md)\
[`scanf_s`, `_scanf_s_l`, `wscanf_s`, `_wscanf_s_l`](./reference/scanf-s-scanf-s-l-wscanf-s-wscanf-s-l.md)
