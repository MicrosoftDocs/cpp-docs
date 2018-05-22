---
title: "VSCT Samples in C# and C++ | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
helpviewer_keywords: 
  - "VSCT files, samples"
ms.assetid: 3218584b-c619-487c-9486-514b04937020
caps.latest.revision: 6
manager: "douge"
---
# VSCT Samples in C# and C++
VSCT has become the new way of defining commands. Because of this, a change has occurred in how the VSCT samples are compiled in C# and C++. Commands are now defined in C++ with external files and in C# with a Symbols section in the .vsct file.  
  
## Defining Commands  
  
### C++ External Files  
 In the C++ samples, the VSCT compiler includes external files to define constants used inside the definitions of your commands. The way to include these files and thereby define the constants in the definitions of your commands is to add an `Extern` tag inside the .vsct file and specify the name of the external file references inside the `href` attribute. These files are:  
  
-   Guids.h  
  
-   CommandIDs.h  
  
-   Resources.h  
  
 The following snippet from a C++ .vsct file demonstrates how to include these files:  
  
 `<!--This is the file with the definition of the Guids specific for this sample.-->`  
  
 `<Extern href="Guids.h"/>`  
  
 `<!--Definition of the IDs of the commands and VSCT elements specific for this sample.-->`  
  
 `<Extern href="CommandIds.h"/>`  
  
 `<!--Definition of the resources exposed by this package. Here it is used for the ID of the bitmap.-->`  
  
 `<Extern href="Resource.h"/>`  
  
### C# Symbols  
 In the C# samples, the .vsct file has a `Symbols` section in the file itself to define commands. The definition of symbols in a .vsct file in C# stems from the way the IDs of the elements are defined by the command table. The following is a snippet from a C# .vsct file that specifies commands and constants associated with them:  
  
 `<Symbols>`  
  
 `<!--The first GUID defined here is the one for the package. It does not contain numeric IDs.-->`  
  
 `<GuidSymbol name="guidMenuAndCommandsPkg" value="{746D5114-B030-4D64-9A6D-E2ABE1E78E56}" />`  
  
 `<!--The GUID for the command set is the one that contains the numeric IDs used in this sample`  
  
 `with the only exception of the one used for the bitmap.-->`  
  
 `<GuidSymbol name="guidMenuAndCommandsCmdSet" value="{10A79DAE-B33C-4FDB-8922-B056628858A1}">`  
  
 `<!--Menus-->`  
  
 `<IDSymbol name="MyToolbar" value="0x101" />`  
  
 `<!--Groups-->`  
  
 `<IDSymbol name="MyMenuGroup" value="0x1010" />`  
  
 `<IDSymbol name="MyToolbarGroup" value="0x1011" />`  
  
 `<IDSymbol name="MyMainToolbarGroup" value="0x1012" />`  
  
 `<IDSymbol name="MyEditorCtxGroup" value="0x1013" />`  
  
 `<!--Commands-->`  
  
 `<IDSymbol name="cmdidMyCommand" value="0x2001" />`  
  
 `<IDSymbol name="cmdidMyGraph" value="0x2002" />`  
  
 `<IDSymbol name="cmdidMyZoom" value="0x2003" />`  
  
 `<IDSymbol name="cmdidDynamicTxt" value="0x2004" />`  
  
 `<IDSymbol name="cmdidDynVisibility1" value="0x2005" />`  
  
 `<IDSymbol name="cmdidDynVisibility2" value="0x2006" />`  
  
 `</GuidSymbol>`  
  
 `<!--Last is the definition of the GUID used for the Bitmap and the ID of its used slots.-->`  
  
 `<GuidSymbol name="guidGenericCmdBmp" value="{0A4C51BD-3239-4370-8869-16E0AE8C0A46}">`  
  
 `<IDSymbol name="bmpArrow" value="1" />`  
  
 `</GuidSymbol>`  
  
 `</Symbols>`  
  
## Embedding Bitmaps  
  
### C#  
 Bitmaps in C++ and C# CTO binaries are stored externally on disk. The bitmap id is defined in a way so that the definition must provide a GUID attribute for the bitmap, a `resID` attribute of the bitmap strip containing the bitmaps, and then the numeric ids of the elements used inside a button definition (`usedList` attribute). An important aspect of this declaration is that the element id must be the actual index (1-based) of the bitmap inside the bitmap strip.  
  
 In the following example a bitmap strip is included that contains only one element. The ID for this element is defined as guidMenuAndCommandsCmdSet:bmpArrow, so bmpArrow must be defined as 1. It is also the declaration of the bitmap.  
  
 `<Bitmap guid="guidGenericCmdBmp" href="GenericCmd.bmp"    usedList="bmpArrow"/>`  
  
## See Also  
 [Visual Studio Command Table (.Vsct) Files](http://msdn.microsoft.com/library/1313adb4-add4-4e74-90e2-f4be522f5259)