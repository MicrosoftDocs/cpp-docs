---
description: "Learn more about: Formatting the Output of a Custom Build Step or Build Event"
title: "Formatting the Output of a Custom Build Step or Build Event"
ms.date: "08/27/2018"
helpviewer_keywords: ["builds [C++], build events", "custom build steps [C++], output format", "events [C++], build", "build events [C++], output format", "build steps [C++], output format", "builds [C++], custom build steps"]
ms.assetid: 92ad3e38-24d7-4b89-90e6-5a16f5f998da
---
# Formatting the Output of a Custom Build Step or Build Event

If the output of a custom build step or build event is formatted correctly, users get the following benefits:

- Warnings and errors are counted in the **Output** window.

- Output appears in the **Task List** window.

- Clicking on the output in the **Output** window displays the appropriate topic.

- F1 operations are enabled in the **Task List** window or **Output** window.

The format of the output should be:

> {<em>filename</em>**(**<em>line#</em> \[**,** <em>column#</em>]**)** &#124; *toolname*} **:** \[ <em>any text</em> ] {**error** &#124; **warning**} <em>code+number</em>**:**<em>localizable string</em> \[ <em>any text</em> ]

Where:

- {*a* &#124; *b*} is a choice of either *a* or *b*.

- \[<em>item</em>] is an optional string or parameter.

- **Bold** represents a literal.

For example:

> C:\\*sourcefile.cpp*(134) : error C2143: syntax error : missing ';' before '}'
>
> LINK : fatal error LNK1104: cannot open file '*somelib.lib*'

## See also

[Understanding Custom Build Steps and Build Events](understanding-custom-build-steps-and-build-events.md)
