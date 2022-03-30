---
description: "Learn more about: Formatting the output of a custom build step or build event"
title: "Formatting the output of a custom build step or build event"
ms.date: 03/15/2022
helpviewer_keywords: ["builds [C++], build events", "custom build steps [C++], output format", "events [C++], build", "build events [C++], output format", "build steps [C++], output format", "builds [C++], custom build steps"]
ms.assetid: 92ad3e38-24d7-4b89-90e6-5a16f5f998da
---
# Formatting the output of a custom build step or build event

If the output of a custom build step or build event is formatted correctly, users get the following benefits:

- Warnings and errors are counted in the **Output** window.

- Output appears in the **Task List** window.

- Clicking on the output in the **Output** window displays the appropriate location.

- **F1** operations are enabled in the **Task List** window or **Output** window.

## Output format

The format of the output should be:

> { *filename*`(`*line-number* \[`,` *column-number*]`)` \| *tool-name* } `:` \[ *any-text* ] {`error` \| `warning`} *code-type-and-number* `:` *localizable-string* \[ *any-text* ]

Where:

- { *a* \| *b* } is a choice of either *a* or *b*,

- \[ *item* ] is an optional string or parameter,

- `text` represents a literal.

For example:

> C:\\sourcefile.cpp(134) : error C2143: syntax error : missing ';' before '}'
>
> LINK : fatal error LNK1104: cannot open file 'some-library.lib'

## See also

[Understanding custom build steps and build events](understanding-custom-build-steps-and-build-events.md)
