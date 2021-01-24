---
description: "Learn more about: Format Specification Fields: scanf and wscanf Functions"
title: "Format Specification Fields: scanf and wscanf Functions"
ms.date: "11/04/2016"
ms.topic: "reference"
ms.custom: contperf-fy21q1
helpviewer_keywords: ["width, specifications in scanf function", "scanf format specifications", "scanf width specifications", "scanf type field characters", "type fields, scanf function", "format specification fields for scanf function", "type fields"]
ms.assetid: 7e95de1b-0b71-4de3-9f81-c9560c78e039
---
# Format Specification Fields: scanf and wscanf Functions

The information here applies to the entire `scanf` family of functions, including the secure versions and describes the symbols used to tell the `scanf` functions how to parse the input stream, such as the input stream `stdin` for `scanf`, into values that are inserted into program variables.

A format specification has the following form:

`%`[`*`] [[width](../c-runtime-library/scanf-width-specification.md)] [{[h &#124; l &#124; ll &#124; I64 &#124; L](../c-runtime-library/scanf-width-specification.md)}][type](../c-runtime-library/scanf-type-field-characters.md)

The `format` argument specifies the interpretation of the input and can contain one or more of the following:

- White-space characters: blank (' '); tab ('\t'); or newline ('\n'). A white-space character causes `scanf` to read, but not store, all consecutive white-space characters in the input up to the next non-white-space character. One white-space character in the format matches any number (including 0) and combination of white-space characters in the input.

- Non-white-space characters, except for the percent sign (`%`). A non-white-space character causes `scanf` to read, but not store, a matching non-white-space character. If the next character in the input stream does not match, `scanf` terminates.

- Format specifications, introduced by the percent sign (`%`). A format specification causes `scanf` to read and convert characters in the input into values of a specified type. The value is assigned to an argument in the argument list.

The format is read from left to right. Characters outside format specifications are expected to match the sequence of characters in the input stream; the matching characters in the input stream are scanned but not stored. If a character in the input stream conflicts with the format specification, `scanf` terminates, and the character is left in the input stream as if it had not been read.

When the first format specification is encountered, the value of the first input field is converted according to this specification and stored in the location that is specified by the first `argument`. The second format specification causes the second input field to be converted and stored in the second `argument`, and so on through the end of the format string.

An input field is defined as all characters up to the first white-space character (space, tab, or newline), or up to the first character that cannot be converted according to the format specification, or until the field width (if specified) is reached. If there are too many arguments for the given specifications, the extra arguments are evaluated but ignored. The results are unpredictable if there are not enough arguments for the format specification.

Each field of the format specification is a single character or a number signifying a particular format option. The `type` character, which appears after the last optional format field, determines whether the input field is interpreted as a character, a string, or a number.

The simplest format specification contains only the percent sign and a `type` character (for example, `%s`). If a percent sign (`%`) is followed by a character that has no meaning as a format-control character, that character and the following characters (up to the next percent sign) are treated as an ordinary sequence of characters, that is, a sequence of characters that must match the input. For example, to specify that a percent-sign character is to be input, use `%%`.

An asterisk (`*`) following the percent sign suppresses assignment of the next input field, which is interpreted as a field of the specified type. The field is scanned but not stored.

The secure versions (those with the `_s` suffix) of the `scanf` family of functions require that a buffer size parameter be passed immediately following each parameter of type `c`, `C`, `s`, `S` or `[`. For more information on the secure versions of the `scanf` family of functions, see [scanf_s, _scanf_s_l, wscanf_s, _wscanf_s_l](../c-runtime-library/reference/scanf-s-scanf-s-l-wscanf-s-wscanf-s-l.md).

## See also

[scanf Width Specification](../c-runtime-library/scanf-width-specification.md)<br/>
[scanf Type Field Characters](../c-runtime-library/scanf-type-field-characters.md)<br/>
[scanf, _scanf_l, wscanf, _wscanf_l](../c-runtime-library/reference/scanf-scanf-l-wscanf-wscanf-l.md)<br/>
[scanf_s, _scanf_s_l, wscanf_s, _wscanf_s_l](../c-runtime-library/reference/scanf-s-scanf-s-l-wscanf-s-wscanf-s-l.md)
