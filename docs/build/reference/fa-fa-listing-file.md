---
title: "/FA, /Fa (Listing File)"
ms.date: "11/04/2016"
f1_keywords: ["VC.Project.VCCLWCECompilerTool.AssemblerListingLocation", "VC.Project.VCCLCompilerTool.ConfigureASMListing", "VC.Project.VCCLWCECompilerTool.AssemblerOutput", "VC.Project.VCCLCompilerTool.AssemblerListingLocation", "/fa", "VC.Project.VCCLCompilerTool.AssemblerOutput", "VC.Project.VCCLCompilerTool.UseUnicodeForAssemblerListing"]
helpviewer_keywords: ["FA compiler option [C++]", "/FA compiler option [C++]", "-FA compiler option [C++]", "listing file type", "assembly-only listing"]
ms.assetid: c7507d0e-c69d-44f9-b8e2-d2c398697402
---
# /FA, /Fa (Listing File)

Creates a listing file containing assembler code.

## Syntax

> **/FA**[**c**\][**s**\][**u**]
> **/Fa**_pathname_

## Remarks

The **/FA** compiler option generates an assembler listing file for each translation unit in the compilation, which generally corresponds to a C or C++ source file. By default, only assembler is included in the listing file, which is encoded as ANSI. The optional **c**, **s**, and **u** arguments to **/FA** control whether machine code or source code are output together with the assembler listing, and whether the listing is encoded as UTF-8.

By default, each listing file gets the same base name as the source file, and has a .asm extension. When machine code is included by using the **c** option, the listing file has a .cod extension. You can change the name and extension of the listing file and the directory where it is created by using the **/Fa** option.

### /FA arguments

none<br/>
Only assembler language is included in the listing.

**c**<br/>
Optional. Includes machine code in the listing.

**s**<br/>
Optional. Includes source code in the listing.

**u**<br/>
Optional. Encodes the listing file in UTF-8 format, and includes a byte order marker. By default, the file is encoded as ANSI. Use `u` to create a listing file that displays correctly on any system, or if you are using Unicode source code files as input to the compiler.

If both **s** and **u** are specified, and if a source code file uses a Unicode encoding other than UTF-8, then the code lines in the .asm file may not display correctly.

### /Fa argument

none<br/>
One *source*.asm file is created for each source code file in the compilation.

*filename*<br/>
A listing file named *filename*.asm is placed in the current directory. This is only valid when compiling a single source code file.

*filename.extension*<br/>
A listing file named *filename.extension* is placed in the current directory. This is only valid when compiling a single source code file.

*directory*__\\__<br/>
One *source_file*.asm file is created and placed in the specified *directory* for each source code file in the compilation. Note the required trailing backslash. Only paths on the current disk are allowed.

*directory*__\\__*filename*<br/>
A listing file named *filename*.asm is placed in the specified *directory*. This is only valid when compiling a single source code file.

*directory*__\\__*filename.extension*<br/>
A listing file named *filename.extension* is placed in the specified *directory*. This is only valid when compiling a single source code file.

### To set this compiler option in the Visual Studio development environment

1. Open the project's **Property Pages** dialog box. For details, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).

1. Select the **Configuration Properties** > **C/C++** > **Output Files** property page.

1. Modify the **Assembler Output** property to set the **/FAc** and **/FAs** options for assembler, machine, and source code. Modify the **Use Unicode For Assembler Listing** property to set the **/FAu** option for ANSI or UTF-8 output. Modify the **ASM List Location** to set the **/Fa** option for listing file name and location.

Note that setting both **Assembler Output** and **Use Unicode For Assembler Listing** properties can cause [Command-Line Warning D9025](../../error-messages/tool-errors/command-line-warning-d9025.md). To combine these options in the IDE, use the **Additional Options** field in the **Command Line** property page instead.

### To set this compiler option programmatically

- See <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AssemblerListingLocation%2A> or <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AssemblerOutput%2A>. To specify **/FAu**, see <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.

## Example

The following command line produces a combined source and machine-code listing called HELLO.cod:

```cmd
CL /FAcs HELLO.CPP
```

## See also

[Output-File (/F) Options](output-file-f-options.md)<br/>
[MSVC Compiler Options](compiler-options.md)<br/>
[MSVC Compiler Command-Line Syntax](compiler-command-line-syntax.md)<br/>
[Specifying the Pathname](specifying-the-pathname.md)
