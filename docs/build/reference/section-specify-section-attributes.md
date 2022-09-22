---
description: "Learn more about: /SECTION (Specify Section Attributes)"
title: "/SECTION (Specify Section Attributes)"
ms.date: 09/09/2022
f1_keywords: ["VC.Project.VCLinkerTool.SpecifySectionAttributes", "/section"]
helpviewer_keywords: ["SECTION linker option", "-SECTION linker option", "section attributes", "/SECTION linker option"]
---
# `/SECTION` (Specify Section Attributes)

> **`/SECTION:`***`name`***`,`**\[\[**`!`**]{**`D`**\|**`E`**\|**`K`**\|**`P`**\|**`R`**\|**`S`**\|**`W`**}]\[**`,ALIGN=`***`number`*]

## Remarks

The **`/SECTION`** option changes the attributes of a section, overriding the attributes set when the *`.obj`* file for the section was compiled.

A *section* in a portable executable (PE) file is a named contiguous block of memory that contains either code or data. Some sections contain code or data that your program declared and uses directly. Other data sections are created for you by the linker and library manager (LIB) and contain information vital to the operating system. For more information, see [PE Format](/windows/win32/Debug/pe-format).

Specify a colon (**`:`**) and a section name *`name`*. The *`name`* is case sensitive.

Don't use the following names, as they conflict with standard names. For example, `.sdata` is used on RISC platforms:

- `.arch`

- `.bss`

- `.data`

- `.edata`

- `.idata`

- `.pdata`

- `.rdata`

- `.reloc`

- `.rsrc`

- `.sbss`

- `.sdata`

- `.srdata`

- `.text`

- `.xdata`

Specify one or more attributes for the section. The attribute characters, listed below, aren't case sensitive. You must specify all attributes that you want the section to have. An omitted attribute character causes that attribute bit to be turned off. If you don't specify `R`, `W`, or `E`, the existing read, write, or executable status remains unchanged.

To negate an attribute, precede its character with an exclamation point (`!`). The meanings of the attribute characters are shown in this table:

| Character | Attribute | Meaning |
|--|--|--|
| `E` | Execute | The section is executable |
| `R` | Read | Allows read operations on data |
| `W` | Write | Allows write operations on data |
| `S` | Shared | Shares the section among all processes that load the image |
| `D` | Discardable | Marks the section as discardable |
| `K` | Cacheable | Marks the section as not cacheable |
| `P` | Pageable | Marks the section as not pageable |

`K` and `P` are unusual in that the section flags that correspond to them are used in the negative sense. If you specify one of them on the `.text` section by using the **`/SECTION:.text,K`** option, there's no difference in the section flags when you run [`DUMPBIN`](dumpbin-options.md) with the [`/HEADERS`](headers.md) option; the section was already implicitly cached. To remove the default, specify **`/SECTION:.text,!K`** instead. DUMPBIN reveals section characteristics, including "Not Cached."

A section in the PE file that doesn't have `E`, `R`, or `W` set is probably invalid.

The **`ALIGN=`***`number`* argument lets you specify an alignment value for a particular section. The *`number`* argument is in bytes and must be a power of two. For more information, see [`/ALIGN`](align-section-alignment.md).

### To set this linker option in the Visual Studio development environment

1. Open the project's **Property Pages** dialog box. For more information, see [Set compiler and build properties](../working-with-project-properties.md).

1. Choose the **Configuration Properties** > **Linker** > **General** property page.

1. Modify the **Specify Section Attributes** property. Choose **OK** or **Apply** to save your changes.

### To set this linker option programmatically

- See <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.AdditionalOptions%2A>.

## See also

[MSVC linker reference](linking.md)\
[MSVC linker options](linker-options.md)
