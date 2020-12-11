---
description: "Learn more about: Help Files (HTML Help)"
title: "Help Files (HTML Help)"
ms.date: "11/04/2016"
helpviewer_keywords: ["file types [C++], HTML Help files"]
ms.assetid: d30a1b1b-318f-4a78-8b60-93da53a224a8
---
# Help Files (HTML Help)

The following files are created when you add the HTML Help type of Help support to your application by selecting the **Context-sensitive help** check box and then selecting **HTML Help format** in the [Advanced Features](../../mfc/reference/advanced-features-mfc-application-wizard.md) page of the MFC Application Wizard.

|File name|Directory location|Solution Explorer location|Description|
|---------------|------------------------|--------------------------------|-----------------|
|*Projname*.hhp|*Projname*\hlp|HTML Help files|The help project file. It contains the data needed to compile the help files into an .hxs file or a .chm file.|
|*Projname*.hhk|*Projname*\hlp|HTML Help files|Contains an index of the help topics.|
|*Projname*.hhc|*Projname*\hlp|HTML Help files|The contents of the help project.|
|Makehtmlhelp.bat|*Projname*|Source Files|Used by the system to build the Help project when the project is compiled.|
|Afxcore.htm|*Projname*\hlp|HTML Help Topics|Contains the standard help topics for standard MFC commands and screen objects. Add your own help topics to this file.|
|Afxprint.htm|*Projname*\hlp|HTML Help Topics|Contains the help topics for the printing commands.|
|*.jpg; \*.gif|*Projname*\hlp\Images|Resource Files|Contain images for the different generated help file topics.|

## See also

[File Types Created for Visual Studio C++ projects](file-types-created-for-visual-cpp-projects.md)
