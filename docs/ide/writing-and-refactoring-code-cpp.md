---
title: "Writing and refactoring code (C++)"
ms.date: "04/30/2018"
ms.assetid: 56ffb9e9-514f-41f4-a3cf-fd9ce2daf3b6
---
# Writing and refactoring code (C++)

The Visual C++ code editor and IDE provide many coding aids. Some are unique to C++, and some are essentially the same for all Visual Studio languages. For more information about the shared features, see [Writing Code in the Code and Text Editor](/visualstudio/ide/writing-code-in-the-code-and-text-editor). Options for enabling and configuring C++-specific features are located under **Tools &#124; Options &#124; Text Editor &#124; C/C++**. After choosing which option you want to set, you can get more help by pressing **F1** when the dialog is in focus. For general code formatting options, type `Editor C++` into **QuickLaunch**.

Experimental features, which may or may not be included in a future version of Visual Studio, are found in the [Text Editor C++ Experimental](/visualstudio/ide/reference/options-text-editor-c-cpp-experimental) dialog. In Visual Studio 2017 you can enable **Predictive IntelliSense** in this dialog.

## Adding new files

To add new files to a project, right-click on the project node in Solution Explorer and choose **Add &#124; New**.

## Formatting options

To set formatting options such as indents, brace completion, and colorization, type "C++ Formatting" into the **QuickLaunch** window. Visual Studio 2017 version 15.7 and later supports ClangFormat. You can configure it in the [C/C++ Formatting Property Page](/visualstudio/ide/reference/options-text-editor-c-cpp-formatting) under **Tools &#124; Options &#124; Text Editor &#124; C/C++ &#124; Formatting**.

![C++ formatting options](media/cpp-formatting-options.png)

## IntelliSense

IntelliSense is the name for a set of features that provide inline information about members, types, and function overloads. The following illustration shows the member list drop-down that appears as you type. You can press the tab key to enter the selected item text into your code file.

![C&#43;&#43; member list drop down](../ide/media/vs2015_cpp_statement_completion.png)

For complete information see [Visual C++ IntelliSense](/visualstudio/ide/visual-cpp-intellisense).

## Insert Snippets

A snippet is a predefined piece of source code. Right-click on a single point or on selected text to either insert a snippet or surround the selected text with the snippet. The following illustration shows the three steps to surround a selected statement with a for loop. The yellow highlights in the final image are editable fields that you access with the tab key. For more information, see [Code Snippets](/visualstudio/ide/code-snippets).

![Visual C&#43;&#43; Insert Snippet Drop&#45;down](../ide/media/vs2015_cpp_surround_with.png)

## Add Class

Add a new class from the **Project** menu by using the Class Wizard.

![Add New Class in Visual C&#43;&#43;](../ide/media/vs2015_cpp_add_class.png)

You can also use Class Wizard to modify or examine an existing class.

![Visual C&#43;&#43; Class Wizard](../ide/media/vs2015_cpp_class_wizard.png)

For more information, see [Adding Functionality with Code Wizards (C++)](../ide/adding-functionality-with-code-wizards-cpp.md).

## Refactoring

Refactorings are available under the Quick Action context menu, or by clicking on a [light bulb](/visualstudio/ide/perform-quick-actions-with-light-bulbs) in the editor.  Some are also found in the **Edit > Refactor** menu.  These features include:

* [Rename](refactoring/rename.md)
* [Extract Function](refactoring/extract-function.md)
* [Implement Pure Virtuals](refactoring/implement-pure-virtuals.md)
* [Create Declaration / Definition](refactoring/create-declaration-definition.md)
* [Move Function Definition](refactoring/move-definition-location.md)
* [Convert to Raw String Literal](refactoring/convert-to-raw-string-literal.md)
* [Change Signature](refactoring/change-signature.md)

## Navigate and understand

Visual C++ shares many code navigation features with other languages. For more information, see [Navigating Code](/visualstudio/ide/navigating-code) and [Viewing the Structure of Code](/visualstudio/ide/viewing-the-structure-of-code).

## QuickInfo

Hover over a variable to see its type information.

![Visual C&#43;&#43; QuickInfo](../ide/media/vs2015_cpp_quickinfo.png)

## Open document (Navigate to header)

Right click on the header name in an `#include` directive and open the header file.

![Visual C&#43;&#43; Open Document menu option](../ide/media/vs2015_cpp_open_document.png)

## Peek Definition

Hover over a variable or function declaration, right-click, then choose **Peek Definition** to see an inline view of its definition. For more information, see [Peek Definition (Alt+F12)](/visualstudio/ide/how-to-view-and-edit-code-by-using-peek-definition-alt-plus-f12).

![Visual C&#43;&#43; Peek Definition](../ide/media/vs2015_cpp_peek_definition.png)

## Go To Definition

Hover over a variable or function declaration, right-click, then choose **Go To Definition** to open the document where the object is defined.

## View Call Hierarchy

Right click on any function call and view a resursive list of all the functions that it calls, and all the functions that call it. Each function in the list can be expanded in the same way. For more information, see [Call Hierarchy](/visualstudio/ide/reference/call-hierarchy).

![Visual C&#43;&#43; Call Hierarchy](../ide/media/vs2015_cpp_call_hierarchy.png)

## Toggle Header / Code File

Right-click and choose **Toggle Header / Code File** to switch back and forth between a header file and its associated code file.

## Outlining

Right-click anywhere in a source code file and choose **Outlining** to collapse or expand definitions and/or custom regions to make it easier to browse only the parts you are interested in. For more information, see [Outlining](/visualstudio/ide/outlining).

![Visual C&#43;&#43; Outlining](../ide/media/vs2015_cpp_outlining.png)

## Scrollbar map mode

Scrollbar map mode enables you to quickly scroll and browse through a code file without actually leaving your current location. Or click anywhere on the code map to go directly to that location. For more information, see [How to: Track your code by customizing the scrollbar](/visualstudio/ide/how-to-track-your-code-by-customizing-the-scrollbar).

![Code Map in Visual C&#43;&#43;](../ide/media/vs2015_cpp_code_map.png)

## Generate graph of include files

Right click on a code file in your project and choose **Generate graph of include files** to see a graph of which files are included by other files.

![Visual C&#43;&#43; graph of include files](../ide/media/vs2015_cpp_include_graph.png)

## F1 Help

Place the cursor on or just after any type, keyword or function and press F1 to go directly to the relevant reference topic on docs.microsoft.com. F1 also works on items in the error list, and in many dialog boxes.

## Quick Launch

To easily navigate to any window or tool in Visual Studio, simply type its name in the Quick Launch window in the upper right corner of the UI. The auto-completion list will filter as you type.

![Visual Studio Quick Launch](../ide/media/vs2015_cpp_quick_launch.png)
