---
description: "Learn more about: Compiler Warning (level 1) C4819"
title: "Compiler Warning (level 1) C4819"
ms.date: "04/08/2019"
f1_keywords: ["C4819"]
helpviewer_keywords: ["C4819"]
ms.assetid: c0316e85-249c-414d-9df0-622d077c6bc2
---
# Compiler Warning (level 1) C4819

> The file contains a character that cannot be represented in the current code page (*number*). Save the file in Unicode format to prevent data loss.

C4819 occurs when you compile an ANSI source file on a system using a codepage that can't represent all characters in the file.

There are several ways to resolve C4819. One simple way is to remove the offending character, if you don't need it, for example, if it's in a comment. You can set the system codepage in the Control Panel to one that supports the character set used by your source code. You can use Unicode [escape sequences](../../c-language/escape-sequences.md) to create characters or strings that use only the basic ANSI character set in your source code. Finally, you can save the file in a Unicode format with a signature, also known as a byte-order mark (BOM).

To save a file in Unicode format, in Visual Studio, choose **File** > **Save As**. In the **Save File As** dialog box, select the drop-down on the **Save** button and choose **Save with Encoding**. If you save to the same file name, you may need to confirm that you want to replace the file. In the **Advanced Save Options** dialog, choose an encoding that can represent all the characters in the file—for example, **Unicode (UTF-8 with signature) - Codepage 65001**—and then choose **OK**.
