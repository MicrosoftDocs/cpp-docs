---
description: "Learn more about: .Pdb Files as Linker Input"
title: ".Pdb Files as Linker Input"
ms.date: "11/04/2016"
helpviewer_keywords: [".pdb files, as linker input", "PDB files, as linker input"]
ms.assetid: c1071478-2369-4b03-9df8-71761cf82f3b
---
# .Pdb Files as Linker Input

Object (.obj) files compiled using the /Zi option contain the name of a program database (PDB). You do not specify the object's PDB file name to the linker; LINK uses the embedded name to find the PDB if it is needed. This also applies to debuggable objects contained in a library; the PDB for a debuggable library must be available to the linker along with the library.

LINK also uses a PDB to hold debugging information for the .exe file or the .dll file. The program's PDB is both an output file and an input file, because LINK updates the PDB when it rebuilds the program.

## See also

[LINK Input Files](link-input-files.md)<br/>
[MSVC Linker Options](linker-options.md)
