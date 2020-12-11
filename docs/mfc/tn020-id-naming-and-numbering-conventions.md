---
description: "Learn more about: TN020: ID Naming and Numbering Conventions"
title: "TN020: ID Naming and Numbering Conventions"
ms.date: "11/04/2016"
f1_keywords: ["vc.id"]
helpviewer_keywords: ["TN020", "resource identifiers, naming and numbering", "resource identifiers"]
ms.assetid: aecbd2cf-68b3-47f6-ae21-b1f507917245
---
# TN020: ID Naming and Numbering Conventions

This note describes the ID naming and numbering conventions that MFC 2.0 uses for resources, commands, strings, controls, and child windows.

The MFC ID naming and numbering conventions are intended to meet the following requirements:

- Provide a consistent ID-naming standard used across the MFC library and MFC applications that are supported by the Visual C++ resource editor. This makes it easier for the programmer to interpret the type and origin of a resource from its ID.

- Emphasize the strong 1-to-1 relationship between certain types of IDs.

- Conform to already widely used standards for naming IDs in Windows.

- Partition the ID-numbering space. ID numbers can be assigned by the programmer, MFC, Windows, and Visual C++-edited resources. Appropriate partitioning will help avoid duplication of ID numbers.

## The ID Prefix Naming Convention

Several types of IDs can occur in an application. The MFC ID-naming convention defines different prefixes for different resource types.

MFC uses the prefix "IDR_" to indicate a resource ID that applies to multiple resource types. For example, for a given frame window, MFC uses the same "IDR_" prefix to indicate a menu, accelerator, string and icon resource. The following table shows the various prefixes and their usage:

|Prefix|Use|
|------------|---------|
|IDR_|For multiple resource types (primarily used for menus, accelerators, and ribbons).|
|IDD_|For dialog template resources (for example, IDD_DIALOG1).|
|IDC_|For cursor resources.|
|IDI_|For icon resources.|
|IDB_|For bitmap resources.|
|IDS_|For string resources.|

Within a DIALOG resource, MFC follows these conventions:

|Prefix or label|Use|
|---------------------|---------|
|IDOK, IDCANCEL|For standard push button IDs.|
|IDC_|For other dialog controls.|

The "IDC_" prefix is also used for cursors. This naming conflict is not usually a problem because a typical application will have few cursors and many dialog controls.

Within a menu resource, MFC follows these conventions:

|Prefix|Use|
|------------|---------|
|IDM_|For menu items that do not use the MFC command architecture.|
|ID_|For menu commands that use the MFC command architecture.|

Commands that follow the MFC command architecture must have an ON_COMMAND command handler and can have an ON_UPDATE_COMMAND_UI handler. If these command handlers follow the MFC command architecture, they will function correctly whether they are bound to a menu command, a toolbar button, or a dialog bar button. The same "ID_" prefix is also used for a menu prompt string that is displayed on the program's message bar. Most of the menu items in your application should follow the MFC command conventions. All of the standard command IDs (for example, ID_FILE_NEW) follow this convention.

MFC also uses "IDP_" as a specialized form of strings (instead of "IDS_"). Strings with the "IDP_" prefix are prompts, that is, strings used in message boxes. "IDP_" strings can contain "%1" and "%2" as placeholders of strings determined by the program. "IDP_" strings usually have help topics associated with them, and "IDS_" strings do not. "IDP_" strings are always localized, and "IDS_" strings might not be localized.

The MFC library also uses the "IDW_" prefix as a specialized form of control IDs (instead of "IDC_"). These IDs are assigned to child windows such as views and splitters by the framework classes. MFC implementation IDs are prefixed with "AFX_".

## The ID-Numbering Convention

The following table lists the valid ranges for the IDs of the specific types. Some of the limits are technical implementation limits, and others are conventions that are designed to prevent your IDs from colliding with Windows predefined IDs or MFC default implementations.

We strongly recommend that you define all IDs inside the recommended ranges. The lower limit of these ranges is 1 because 0 is not used. We recommend that you use the common convention and use 100 or 101 as the first ID.

|Prefix|Resource type|Valid range|
|------------|-------------------|-----------------|
|IDR_|multiple|1 through 0x6FFF|
|IDD_|dialog templates|1 through 0x6FFF|
|IDC_,IDI_,IDB_|cursors, icons, bitmaps|1 through 0x6FFF|
|IDS_, IDP_|general strings|1 through 0x7FFF|
|ID_|commands|0x8000 through 0xDFFF|
|IDC_|controls|8 through 0xDFFF|

Reasons for these range limits:

- By convention, the ID value of 0 is not used.

- Windows implementation limitations restrict true resource IDs to be less than or equal to 0x7FFF.

- MFC's internal framework reserves these ranges:

  - 0x7000 through 0x7FFF (see afxres.h)

  - 0xE000 through 0xEFFF (see afxres.h)

  - 16000 through 18000 (see afxribbonres.h)

  These ranges may change in future MFC implementations.

- Several Windows system commands use the range of 0xF000 through 0xFFFF.

- Control IDs of 1 through 7 are reserved for standard controls such as IDOK and IDCANCEL.

- The range of 0x8000 through 0xFFFF for strings is reserved for menu prompts for commands.

## See also

[Technical Notes by Number](../mfc/technical-notes-by-number.md)<br/>
[Technical Notes by Category](../mfc/technical-notes-by-category.md)
