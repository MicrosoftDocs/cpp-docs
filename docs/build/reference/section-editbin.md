---
description: "Learn more about: /SECTION (EDITBIN)"
title: "/SECTION (EDITBIN)"
ms.date: "11/04/2016"
f1_keywords: ["/section_editbin"]
helpviewer_keywords: ["-SECTION editbin option", "SECTION editbin option", "alignment characters in sections", "/SECTION editbin option"]
ms.assetid: 4680ab4e-c984-4251-8241-93440cad7615
---
# /SECTION (EDITBIN)

```
/SECTION:name[=newname][,attributes][alignment]
```

## Remarks

This option changes the attributes of a section, overriding the attributes that were set when the object file for the section was compiled or linked.

After the colon ( **:** ), specify the *name* of the section. To change the section name, follow *name* with an equal sign (=) and a *newname* for the section.

To set or change the section's `attributes`, specify a comma (**,**) followed by one or more attributes characters. To negate an attribute, precede its character with an exclamation point (!). The following characters specify memory attributes:

|Attribute|Setting|
|---------------|-------------|
|c|code|
|d|discardable|
|e|executable|
|i|initialized data|
|k|cached virtual memory|
|m|link remove|
|o|link info|
|p|paged virtual memory|
|r|read|
|s|shared|
|u|uninitialized data|
|w|write|

To control *alignment*, specify the character **A** followed by one of the following characters to set the size of alignment in bytes, as follows:

|Character|Alignment size in bytes|
|---------------|-----------------------------|
|1|1|
|2|2|
|4|4|
|8|8|
|p|16|
|t|32|
|s|64|
|x|no alignment|

Specify the `attributes` and *alignment* characters as a string with no white space. The characters are not case sensitive.

## See also

[EDITBIN Options](editbin-options.md)
