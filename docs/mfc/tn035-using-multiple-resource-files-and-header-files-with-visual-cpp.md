---
description: "Learn more about: TN035: Using Multiple Resource Files and Header Files with Visual C++"
title: "TN035: Using Multiple Resource Files and Header Files with Visual C++"
ms.date: "11/04/2016"
f1_keywords: ["vc.resources"]
helpviewer_keywords: ["resource files, multiple", "TN035"]
ms.assetid: 1f08ce5e-a912-44cc-ac56-7dd93ad73fb6
---
# TN035: Using Multiple Resource Files and Header Files with Visual C++

> [!NOTE]
> The following technical note has not been updated since it was first included in the online documentation. As a result, some procedures and topics might be out of date or incorrect. For the latest information, it is recommended that you search for the topic of interest in the online documentation index.

This note describes how the Visual C++ resource editor supports multiple resource files and header files shared in a single project or shared across multiple projects and how you can take advantage of that support. This note answers these questions:

- When might you want to split a project into multiple resource files and/or header files, and how you do it

- How do you share a common header .H file between two .RC files

- How do you divide project resources into multiple .RC files

- How do you (and the tools) manage build dependencies between .RC, .CPP, and .H files

You should be aware that if you add an additional resource file to your project, ClassWizard will not recognize the resources in the added file.

This note is structured to answer the above questions as follows:

- **Overview of How Visual C++ Manages Resource Files and Header Files** provides an overview of how the Resource Set Includes command in Visual C++ lets you use multiple resource files and header files in the same project.

- **Analysis of AppWizard-created .RC and .H Files** looks at the multiple resource and header files that are used by an AppWizard-created application. These files serve as a good model for additional resource files and header files you might want to add to your project.

- **Including Additional Header Files** describes where you might want to include multiple header files, and provides details how to do so.

- **Sharing a Header File Between Two .RC Files** shows how you can share one header file between multiple .RC files in different projects, or perhaps in the same project.

- **Using Multiple Resource Files in the Same Project** describes where you might want to break up your project into multiple .RC files, and provides details how to do so.

- **Enforcement of Non-Editable Visual C++ Files** describes how you can make sure Visual C++ does not edit and unintentionally reformat a custom resource.

- **Managing Symbols Shared by Multiple Visual C++-Edited .RC Files** describes how to share the same symbols across multiple .RC files and how to avoid assigning duplicate ID numeric values.

- **Managing Dependencies Between .RC, .CPP, and .H Files** describes how Visual C++ avoids unnecessary recompiling .CPP files that are dependent on resource symbol files.

- **How Visual C++ Manages Set Includes Information** provides technical details about how Visual C++ keeps track of multiple (nested) .RC files and multiple header files that are #include'd by an .RC file.

## Overview of How Visual C++ Manages Resource Files and Header Files

Visual C++ manages a single .RC resource file and a corresponding .H header file as a tightly coupled pair of files. When you edit and save resources in an .RC file, you indirectly edit and save symbols in the corresponding .H file. Although you can open and edit multiple .RC files at a time (using Visual C++'s MDI user interface) for any given .RC file you indirectly edit exactly one corresponding header file.

### Symbol Header File

By default, Visual C++ always names the corresponding header file RESOURCE.H, regardless of the name of the resource file (e.g., MYAPP.RC). Using the **Resource Includes** command from the **View** menu in Visual C++, you can change the name of this header file by updating the Symbol Header File file in the **Set Includes** dialog box.

### Read-Only Symbol Directives

Although Visual C++ only edits one header file for any given .RC file, Visual C++ supports references to symbols defined in additional read-only header files. Using the **Resource Includes** command from the **View** menu in Visual C++, you can specify any number of additional read-only header files as Read-Only Symbol Directives. The "read-only" restriction means that when you add a new resource in the .RC file, you can use a symbol defined in the read-only header file; but if you delete the resource, the symbol still remains defined in the read-only header file. You cannot change the numeric value assigned to a read-only symbol.

### Compile-Time Directives

Visual C++ also supports nesting of resource files, where one .RC file is #include'd within another. When you edit a given .RC file using Visual C++, any resources in the #include'd files are not visible. But when you compile the .RC file, the #include'd files are also compiled. Using the **Resource Includes** command from the **View** menu in Visual C++, you can specify any number of #include'd .RC files as Compile-Time Directives.

Note what happens if you read into Visual C++ an .RC file that #include's another .RC file that is *not* specified as a Compile-Time Directive. This situation might arise when you bring to Visual C++ an .RC file that you had been previously maintaining manually with a text editor. When Visual C++ reads the #include'd .RC file, it merges the #include'd resources into the parent .RC file. When you save the parent .RC file, the #include statement, in effect, will be replaced by the #include'd resources. If you do not want this merge to happen, you should remove the #include statement from the parent .RC file *prior* to reading it into Visual C++; then using Visual C++, add back the same #include statement as a Compile-Time Directive.

Visual C++ saves in an .RC file the three kinds of above Set Includes information (Symbol Header File, Read-Only Symbol Directives, and Compile-Time Directives) in #include directives *and* in TEXTINCLUDE resources. The TEXTINCLUDE resources, an implementation detail that you do not normally need to deal with, are explained in [How Visual C++ Manages Set Includes Information](#_mfcnotes_tn035_set_includes).

## Analysis of AppWizard-Created .RC and .H Files

Examining the application code produced by AppWizard provides insight into how Visual C++ manages multiple resource files and header files. The code excerpts examined below are from a MYAPP application produced by AppWizard using the default options.

An AppWizard-created application uses multiple resource files and multiple header files, as summarized in the diagram below:

```Diagram
   RESOURCE.H     AFXRES.H
          \       /
           \     /
          MYAPP.RC
              |
              |
        RES\MYAPP.RC2
        AFXRES.RC
        AFXPRINT.RC
```

You can view these multiple file relationships using the Visual C++ File/Set Includes command.

MYAPP.RC\
The application resource file that you edit using Visual C++.

RESOURCE.H is the application-specific header file. It is always named RESOURCE.H by AppWizard, consistent with Visual C++'s default naming of the header file. The #include for this header file is the first statement in the resource file (MYAPP.RC):

```rc
//Microsoft Visual C++ generated resource script
//
#include "resource.h"
```

RES\MYAPP.RC2\
Contains resources that will not be edited by Visual C++ but will be included in the final compiled .EXE file. AppWizard creates no such resources by default, since Visual C++ can edit all of the standard resources, including the version resource (a new feature in this release). An empty file is generated by AppWizard in case you wish to add your own custom formatted resources to this file.

If you use custom formatted resources, you can add them to RES\MYAPP.RC2 and edit them using the Visual C++ text editor.

AFXRES.RC and AFXPRINT.RC contain standard resources required by certain features of the framework. Like RES\MYAPP.RC2, these two framework-provided resource files are #include'd at the end of MYAPP.RC, and they are specified in the Compile-Time Directives of the Set Includes dialog box. Thus, you do not directly view or edit these framework resources while you edit MYAPP.RC in Visual C++, but they are compiled into the application's binary .RES file and final .EXE file. For more information on the standard framework resources, including procedures for modifying them, see [Technical Note 23](../mfc/tn023-standard-mfc-resources.md).

AFXRES.H defines standard symbols, such as `ID_FILE_NEW`, used by the framework and specifically used in AFXRES.RC. AFXRES.H also #include's WINRES.H, which contains a subset of WINDOWS.H that are needed by Visual C++ generated .RC files as well as AFXRES.RC. The symbols defined in AFXRES.H are available as you edit the application resource file (MYAPP.RC). For example, `ID_FILE_NEW` is used for the File New menu item in MYAPP.RC's menu resource. You cannot change or delete these framework-defined symbols.

## <a name="_mfcnotes_tn035_including"></a> Including Additional Header Files

The AppWizard-created application includes only two header files: RESOURCE.H and AFXRES.H. Only RESOURCE.H is application-specific. You may need to include additional read-only header files in the following cases:

The header file is provided by an external source, or you want to share the header file among multiple projects or multiple parts of the same project.

The header file has formatting and comments that you do not want Visual C++ to change or filter out when it saves the file. For example, maybe you want to preserve #define's that use symbolic arithmetic such as:

```h
#define RED 0
#define BLUE 1
#define GREEN 2
#define ID_COLOR_BUTTON 1001
#define ID_RED_BUTTON (ID_COLOR_BUTTON + RED)
#define ID_BLUE_BUTTON (ID_COLOR_BUTTON + BLUE)
#define ID_GREEN_BUTTON (ID_COLOR_BUTTON + GREEN)
```

You can include additional read-only header files by using the **Resource Includes** command to specify the #include statement as a second Read-Only Symbol Directive, as in:

```rc
#include "afxres.h"
#include "second.h"
```

The new file relationship diagram now looks like this:

```Diagram
                   AFXRES.H
    RESOURCE.H     SECOND.H
          \       /
           \     /
          MYAPP.RC
              |
              |
        RES\MYAPP.RC2  
        AFXRES.RC
        AFXPRINT.RC
```

## Sharing a Header File Between Two .RC Files

You may want to share a header file between two .RC files that are in different projects, or possibly the same project. To do so, simply apply the Read-Only Directives technique described above to both .RC files. In the case where the two .RC files are for different applications (different projects), the result is illustrated in the following diagram:

```Diagram
     RESOURCE.H   AFXRES.H   RESOURCE.H  
    (for MYAPP1)  SECOND.H   (for MYAPP2)
          \       /     \       /
           \     /       \     /
          MYAPP1.RC      MYAPP2.RC
           /    \        /     \
          /      \      /       \
RES\MYAPP1.RC2  AFXRES.RC     RES\MYAPP2.RC2
                AFXPRINT.RC
```

The case where the second header file is shared by two .RC files in the same application (project) is discussed below.

## Using Multiple Resource Files in the Same Project

Visual C++ and the Resource Compiler support multiple .RC files in the same project through #include's of one .RC file within another. Multiple nesting is allowed. There are various reasons to split your project's resources into multiple .RC files:

- It is easier to manage a large number of resources among multiple project team members if you split the resources into multiple .RC files. If you use a source control management package for checking out files and checking in changes, splitting the resources into multiple .RC files will give you finer control over managing changes to resources.

- If you want to use preprocessor directives, such as #ifdef, #endif, and #define, for portions of your resources, you must isolate them in read-only resources that will be compiled by the Resource Compiler.

- Component .RC files will load and save faster in Visual C++ than one composite .RC file.

- If you want to maintain a resource with a text editor in a human-readable form, you should keep it in a .RC file separate from the one Visual C++ edits.

- If you need to keep a user-defined resource in a binary or text form that is interpretable by another specialized data editor, then you should keep it in a separate .RC file so Visual C++ does not change the format to hexadecimal data. The .WAV (sound) file resources in the MFC Advanced Concepts sample [SPEAKN](../overview/visual-cpp-samples.md) are a good example.

You can #include a SECOND.RC in the Compile-Time Directives in the Set Includes dialog box:

```h
#include "res\myapp.rc2"  // non-Visual C++ edited resources
#include "second.rc"  // THE SECOND .RC FILE

#include "afxres.rc"  // Standard components
#include "afxprint.rc"  // printing/print preview resources
```

The result is illustrated in the following diagram:

```Diagram
   RESOURCE.H     AFXRES.H
          \       /
           \     /
          MYAPP.RC
              |
              |
        RES\MYAPP.RC2
        SECOND.RC  
        AFXRES.RC
        AFXPRINT.RC
```

Using Compile-Time Directives, you can organize your Visual C++-editable and non-editable resources into multiple .RC files, where the "master" MYAPP.RC does nothing but #include the other .RC files. If you are using a Visual Studio C++ project .MAK file, then you should include the "master" .RC file in the project so that all the #include'd resources are compiled with your application.

## Enforcement of Noneditable Visual C++ Files

The AppWizard-created RES\MYAPP.RC2 file is an example of a file that contains resources that you do *not* want to accidentally read into Visual C++ and then write it back out with loss of formatting information. To protect against this, place the following lines in the beginning of the RES\MYAPP.RC2 file:

```rc2
#ifdef APSTUDIO_INVOKED
    #error this file is not editable by Visual C++
#endif //APSTUDIO_INVOKED
```

When Visual C++ compiles the .RC file, it defines `APSTUDIO_INVOKED` as well as `RC_INVOKED`. If the AppWizard-created file structure is corrupted and Visual C++ reads the #error line above, it reports a fatal error and abort the reading of the .RC file.

## Managing Symbols Shared by Multiple Visual C++-Edited .RC Files

Two issues arise when you split up your resources into multiple .RC files that you want to edit separately in Visual C++:

- You might want to share the same symbols across multiple .RC files.

- You need to help Visual C++ avoid assigning the same ID numeric values to distinct resources (symbols).

The following diagram illustrates an organization of .RC and .H files that deals with the first issue:

```Diagram
              MYAPP.RC
             /         \
            /           \
MYSTRS.H   / MYSHARED.H  \  MYMENUS.H
     \    /    /      \   \    \
      \  /    /        \   \    \
      MYSTRS.RC         MYMENUS.RC
```

In this example, string resources are kept in one resource file, MYSTRS.RC, and menus are kept in another, MYMENUS.RC. Some symbols, such as for commands, may need to be shared between the two files. For example, a ID_TOOLS_SPELL may be the menu command ID for the Spell item in a Tools menu; and it may also be the string ID of the command prompt displayed by the framework in the application's main window status bar.

The ID_TOOLS_SPELL symbol is kept in the shared header file, MYSHARED.H. You maintain this shared header file manually with a text editor; Visual C++ does not directly edit it. In the two resource files MYSTRS.RC and MYMENUS.RC, you specify #include MYSHARED.H in the Read-Only Directives for MYAPP.RC, using the **Resource Includes** command, as described earlier.

It is most convenient to anticipate a symbol you will share before you attempt to use it to identify any resource. Add the symbol to the shared header file and, if you have not already #include'd the shared header file in the Read-Only Directives for the .RC file, do so before using the symbol. If you did not anticipate sharing the symbol in this way, then you will have to manually (using a text editor) move the #define statement for the symbol from, say, MYMENUS.H to MYSHARED.H before using it in MYSTRS.RC.

When you manage symbols in multiple .RC files, you also must help Visual C++ avoid assigning the same ID numeric values to distinct resources (symbols). For any given .RC file, Visual C++ incrementally assigns IDs in each of four ID domains. Between editing sessions, Visual C++ keeps track of the last ID it assigned in each of the domains in the symbol header file for the .RC file. Here is what the APS_NEXT values are for an empty (new) .RC file:

```rc
#define _APS_NEXT_RESOURCE_VALUE  101
#define _APS_NEXT_COMMAND_VALUE   40001
#define _APS_NEXT_CONTROL_VALUE   1000
#define _APS_NEXT_SYMED_VALUE     101
```

`_APS_NEXT_RESOURCE_VALUE` is the next symbol value that will be used for a dialog resource, menu resource, and so on. The valid range for resource symbol values is 1 to 0x6FFF.

`_APS_NEXT_COMMAND_VALUE` is the next symbol value that will be used for a command identification. The valid range for command symbol values is 0x8000 to 0xDFFF.

`_APS_NEXT_CONTROL_VALUE` is the next symbol value that will be used for a dialog control. The valid range for dialog control symbol values is 8 to 0xDFFF.

`_APS_NEXT_SYMED_VALUE` is the next symbol value that will be issued when you manually assign a symbol value using the New command in the Symbol Browser.

Visual C++ starts with slightly higher values that the lowest legal value when creating a new .RC file. AppWizard will also initialize these values to something more appropriate for MFC applications. For more information about ID value ranges, see [Technical Note 20](../mfc/tn020-id-naming-and-numbering-conventions.md).

Now every time you create a new resource file, even in the same project, Visual C++ defines the same `_APS_NEXT_` values. This means that if you add, say, multiple dialogs in two different .RC files, it is highly likely that the same #define value will be assigned to different dialogs. For example, IDD_MY_DLG1 in the first .RC file might be assigned the same number, 101, as IDD_MY_DLG2 in a second .RC file.

To avoid this, you should reserve a separate numeric range for each of the four domains of IDs in the respective .RC files. Do this by manually updating the `_APS_NEXT` values in each of the .RC files **before** you start adding resources. For example, if the first .RC file uses the default `_APS_NEXT` values, then you might want to assign the following `_APS_NEXT` values to the second .RC file:

```rc
#define _APS_NEXT_RESOURCE_VALUE  2000
#define _APS_NEXT_COMMAND_VALUE   42000
#define _APS_NEXT_CONTROL_VALUE   2000
#define _APS_NEXT_SYMED_VALUE     2000
```

Of course, it is still possible that Visual C++ will assign so many IDs in the first .RC file that the numeric values start to overlap those reserved for the second .RC file. You should reserve sufficiently large ranges so that this does not happen.

## Managing Dependencies Between .RC, .CPP, and .H Files

When Visual C++ saves an .RC file, it also saves symbol changes to the corresponding RESOURCE.H file. Any of your .CPP files that refer to resources in the .RC file must #include the RESOURCE.H file, usually from within your project's master header file. This leads to an undesirable side-effect because of the development environment's internal project management which scans source files for header dependencies. Every time you add a new symbol in Visual C++, all the .CPP files that #include RESOURCE.H would need to be recompiled.

Visual C++, circumvents the dependency on RESOURCE.H by including the following comment as the first line of the RESOURCE.H file:

```h
//{{NO_DEPENDENCIES}}
```

The development environment interprets this comment by ignoring the changes to RESOURCE.H so that dependent .CPP files will not need to be recompiled.

Visual C++ always adds the //{{NO_DEPENDENCIES}} comment line to a .RC file when it saves the file. In some cases, circumventing of the build dependency on RESOURCE.H may lead to run-time errors undetected at link time. For example, if you use the Symbol Browser to change the numeric value assigned to a symbol for a resource, the resource will not be correctly found and loaded at application run-time if the .CPP file referring to the resource is not recompiled. In such cases, you should explicitly recompile any .CPP files that you know are affected by the symbol changes in RESOURCE.H or select **Rebuild All**. If you have the need to frequently change symbol values for a certain group of resources, you will probably find it more convenient and safer to break out these symbols into a separate read-only header file, as described in the above section [Including Additional Header Files](#_mfcnotes_tn035_including).

## <a name="_mfcnotes_tn035_set_includes"></a> How Visual C++ Manages Set Includes Information

As discussed above, the File menu Set Includes command lets you specify three types of information:

- Symbol Header File

- Read-Only Symbol Directives

- Compile-Time Directives

The following describes how Visual C++ maintains this information in a .RC file. You do not need this information to use Visual C++, but it may enhance your understanding so that you can more confidently use the Set Includes feature.

Each of the above three types of Set Includes information is stored in the .RC file in two forms: (1) as #include or other directives interpretable by the Resource Compiler, and (2) as special TEXTINCLUDE resources interpretable only by Visual C++.

The purpose of the TEXTINCLUDE resource is to safely store Set Include information in a form that is readily presentable in Visual C++'s **Set Includes** dialog box. TEXTINCLUDE is a *resource type* defined by Visual C++. Visual C++ recognizes three specific TEXTINCLUDE resources that have the resource identification numbers 1, 2 and 3:

|TEXTINCLUDE resource ID|Type of Set Includes information|
|-----------------------------|--------------------------------------|
|1|Symbol Header File|
|2|Read-Only Symbol Directives|
|3|Compile-Time Directives|

Each of the three types of Set Includes information is illustrated by the default MYAPP.RC and RESOURCE.H files created by AppWizard, as described below. The extra \0 and "" tokens between BEGIN and END blocks are required by the RC syntax to specify zero terminated strings and the double quote character respectively.

### Symbol Header File

The form of the Symbol Header File information interpreted by the Resource Compiler is simply a #include statement:

```rc
#include "resource.h"
```

The corresponding TEXTINCLUDE resource is:

```rc
1 TEXTINCLUDE DISCARDABLE
BEGIN
    "resource.h\0"
END
```

### Read-Only Symbol Directives

Read-Only Symbol Directives are included at the top of MYAPP.RC in the following form interpretable by the Resource Compiler:

```rc
#include "afxres.h"
```

The corresponding TEXTINCLUDE resource is:

```rc
2 TEXTINCLUDE DISCARDABLE
BEGIN
   "#include ""afxres.h""\r\n"
   "\0"
END
```

### Compile-Time Directives

Compile-Time Directives are included at the end of MYAPP.RC in the following form interpretable by the Resource Compiler:

```rc
#ifndef APSTUDIO_INVOKED
///////////////////////
//
// From TEXTINCLUDE 3
//
#include "res\myapp.rc2"  // non-Visual C++ edited resources

#include "afxres.rc"  // Standard components
#include "afxprint.rc"  // printing/print preview resources
#endif  // not APSTUDIO_INVOKED
```

The #ifndef APSTUDIO_INVOKED directive instructs Visual C++ to skip over Compile-Time Directives.

The corresponding TEXTINCLUDE resource is:

```rc
3 TEXTINCLUDE DISCARDABLE
BEGIN
"#include ""res\myapp.rc2""  // non-Visual C++ edited resources\r\n"
"\r\n"
"#include ""afxres.rc""  // Standard components\r\n"
"#include ""afxprint.rc""  // printing/print preview resources\r\n"
"\0"
END
```

## See also

[Technical Notes by Number](../mfc/technical-notes-by-number.md)\
[Technical Notes by Category](../mfc/technical-notes-by-category.md)
