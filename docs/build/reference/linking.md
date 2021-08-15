---
description: "Learn more about: Linking"
title: "MSVC linker reference"
ms.date: "12/10/2018"
ms.assetid: bb736587-d13b-4f3c-8982-3cc2c015c59c
---
# Linking

In a C++ project, the *linking* step is performed after the compiler has compiled the source code into object files (*.obj). The linker (link.exe) combines the object files into a single executable file.

Linker options can be set inside or outside of Visual Studio. Within Visual Studio, you access linker options by right-clicking on a project node in **Solution Explorer** and choosing **Properties** to display the property pages. Choose **Linker** in the left pane to expand the node and see all the options.

## Linker command-line syntax

When you run LINK outside of Visual Studio, you can specify input in one or more ways:

- On the command line

- Using command files

- In environment variables

LINK first processes options specified in the LINK environment variable, followed by options in the order they are specified on the command line and in command files. If an option is repeated with different arguments, the last one processed takes precedence.

Options apply to the entire build; no options can be applied to specific input files.

To run LINK.EXE, use the following command syntax:

```
LINK arguments
```

The `arguments` include options and filenames and can be specified in any order. Options are processed first, then files. Use one or more spaces or tabs to separate arguments.

> [!NOTE]
> You can start this tool only from the Visual Studio command prompt. You cannot start it from a system command prompt or from File Explorer.

## Command line

On the command line, an option consists of an option specifier, either a dash (-) or a forward slash (/), followed by the name of the option. Option names cannot be abbreviated. Some options take an argument, specified after a colon (:). No spaces or tabs are allowed within an option specification, except within a quoted string in the /COMMENT option. Specify numeric arguments in decimal or C-language notation. Option names and their keyword or filename arguments are not case sensitive, but identifiers as arguments are case sensitive.

To pass a file to the linker, specify the filename on the command line after the LINK command. You can specify an absolute or relative path with the filename, and you can use wildcards in the filename. If you omit the dot (.) and filename extension, LINK assumes .obj for the purpose of finding the file. LINK does not use filename extensions or the lack of them to make assumptions about the contents of files; it determines the type of file by examining it, and processes it accordingly.

link.exe returns zero for success (no errors).  Otherwise, the linker returns the error number that stopped the link.  For example, if the linker generates LNK1104, the linker returns 1104.  Accordingly, the lowest error number returned on an error by the linker is 1000.  A return value of 128 represents a configuration problem with either the operating system or a .config file; the loader didn't load either link.exe or c2.dll.

## LINK Command Files

You can pass command-line arguments to LINK in the form of a command file. To specify a command file to the linker, use the following syntax:

> **LINK \@**<em>commandfile</em>

The *commandfile* is the name of a text file. No space or tab is allowed between the at sign (**\@**) and the filename. There is no default extension; you must specify the full filename, including any extension. Wildcards cannot be used. You can specify an absolute or relative path with the filename. LINK does not use an environment variable to search for the file.

In the command file, arguments can be separated by spaces or tabs (as on the command line) and by newline characters.

You can specify all or part of the command line in a command file. You can use more than one command file in a LINK command. LINK accepts the command-file input as if it were specified in that location on the command line. Command files cannot be nested. LINK echoes the contents of command files, unless the [/NOLOGO](nologo-suppress-startup-banner-linker.md) option is specified.

## Example

The following command to build a DLL passes the names of object files and libraries in separate command files and uses a third command file for specification of the /EXPORTS option:

```cmd
link /dll @objlist.txt @liblist.txt @exports.txt
```

## LINK Environment Variables

The LINK tool uses the following environment variables:

- LINK and \_LINK\_, if defined. The LINK tool prepends the options and arguments defined in the LINK environment variable and appends the options and arguments defined in the \_LINK\_ environment variable to the command line arguments before processing.

- LIB, if defined. The LINK tools uses the LIB path when searching for an object, library, or other file specified on the command line or by the [/BASE](base-base-address.md) option. It also uses the LIB path to find a .pdb file named in an object. The LIB variable can contain one or more path specifications, separated by semicolons. One path must point to the \lib subdirectory of your Visual C++ installation.

- PATH, if the tool needs to run CVTRES and cannot find the file in the same directory as LINK itself. (LINK requires CVTRES to link a .res file.) PATH must point to the \bin subdirectory of your Visual C++ installation.

- TMP, to specify a directory when linking OMF or .res files.

## See also

[C/C++ Building Reference](c-cpp-building-reference.md)
[MSVC Linker Options](linker-options.md)
[Module-Definition (.def) Files](module-definition-dot-def-files.md)
[Linker Support for Delay-Loaded DLLs](linker-support-for-delay-loaded-dlls.md)
