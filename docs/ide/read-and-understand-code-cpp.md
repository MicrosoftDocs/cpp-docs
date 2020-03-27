---
title: "Read and understand C++ code in Visual Studio"
description: "Use the C++ code editor in Visual Studio to format, and understand your code."
ms.date: "05/28/2019"
---
# Read and understand C++ code in Visual Studio

The C++ code editor and Visual Studio IDE provide many coding aids. Some are unique to C++, and some are essentially the same for all Visual Studio languages. For more information about the shared features, see [Writing Code in the Code and Text Editor](/visualstudio/ide/writing-code-in-the-code-and-text-editor).  

## Colorization

Visual Studio colorizes syntax elements to differentiate between types of symbols such as language keywords, type names, variable names, function parameters, string literals, and so on.

![Code colorization](../ide/media/code-outline-colorization.png "C++ colorization")

Unused code (such as code under an #if 0) is more faded in color.

![Inactive code](../ide/media/inactive-code-cpp.png "C++ inactive code")

You can customize the colors by typing "Fonts" in **Quick Launch**, and then choosing **Fonts and Colors**. In the **Fonts and Colors** dialog scroll down to the C/C++ options and then choose a custom font and/or color.

## Outlining

Right-click anywhere in a source code file and choose **Outlining** to collapse or expand code blocks and/or custom regions to make it easier to browse only the code you are interested in. For more information, see [Outlining](/visualstudio/ide/outlining).

![C&#43;&#43; Outlining](../ide/media/vs2015_cpp_outlining.png "Outlining")

When you place your cursor in front of a curly brace, '{' or '}', the editor highlights its matching counterpart.

Other outlining options are located under **Edit** > **Outlining** in the main menu.

## Line numbers

You can add line numbers to your project by going to **Tools** > **Options** > **Text Editor** > **All Languages** > **General** or by searching for "line num" with **Quick Launch (Ctrl + Q)**. Line numbers can be set for all languages or for specific languages only, including C++.

## Scroll and zoom

You can zoom in or out in the editor by pressing the **Ctrl** key and scrolling with your mouse wheel. You can also zoom by using the zoom setting in the bottom left corner.

![C&#43;&#43; Zoom Control](../ide/media/zoom-control.png "Zoom control")

Scrollbar **Map Mode** enables you to quickly scroll and browse through a code file without leaving your current location. You can click anywhere on the code map to go directly to that location.

![Code Map in C&#43;&#43;](../ide/media/vs2015-cpp-code-map.png "Code Map")

To turn on **Map Mode**, type "map" in the **Quick Launch** search box in the main toolbar and choose **Use scroll map mode**. For more information, see [How to: Track your code by customizing the scrollbar](/visualstudio/ide/how-to-track-your-code-by-customizing-the-scrollbar).

When **Map Mode** is off, the scroll bar still highlights the changes you have made in the file. Green indicates saved changes and yellow indicates unsaved changes.

## Quick Info and Parameter Info

Hover over any variable, function, or other symbol to get information about it, including the declaration, and any comments that are located just preceding it.

::: moniker range="vs-2019"

![Quick Info in C&#43;&#43;](../ide/media/quick-info-vs2019.png "Quick Info")

The **Quick Info** tooltip has a **Search Online** link. Go to **Tools** > **Options** > **Text Editor** > **C++** > **View** to specify the search provider.

If there is an error in your code, you can hover over it and **Quick Info** will display the error message. You can also find the error message in the Error List window.

![Quick Info on error](../ide/media/quickinfo-on-error.png "Quick Info on error")

::: moniker-end

::: moniker range="<=vs-2017"

![Quick Info in C&#43;&#43;](../ide/media/quick-info.png "Quick Info")

If there is an error in your code, you can hover over it and **Quick Info** will display the error message. You can also find the error message in the **Error List** window.

![Quick Info on error](../ide/media/quickinfo-on-error.png "Quick Info on error")

::: moniker-end

When you call a function, **Parameter Info** shows the types of parameters and the order in which they are expected.

![Parameter Info in C&#43;&#43;](../ide/media/parameter-info.png "Parameter Info")

## Peek Definition

Hover over a variable or function declaration, right-click, then choose **Peek Definition** to see an inline view of its definition without navigating away from your current location. For more information, see [Peek Definition (Alt+F12)](/visualstudio/ide/how-to-view-and-edit-code-by-using-peek-definition-alt-plus-f12).

![C&#43;&#43; Peek Definition](../ide/media/vs2015_cpp_peek_definition.png "vs2015_cpp_peek_definition")

## F1 Help

Place the cursor on or just after any type, keyword or function and press **F1** to go directly to the relevant reference topic on docs.microsoft.com. **F1** also works on items in the error list, and in many dialog boxes.

## Class View

**Class View** displays a searchable set of trees of all code symbols and their scope and parent/child hierarchies, organized on a per-project basis. You can configure what **Class View** displays from **Class View Settings** (click the gear box icon at the top of the window).

![Class View in C&#43;&#43;](../ide/media/class-view.png "Class View")

## Generate graph of include files

Right click on a code file in your project and choose **Generate graph of include files** to see a graph of which files are included by other files.

![C&#43;&#43; graph of include files](../ide/media/vs2015_cpp_include_graph.png "vs2015_cpp_include_graph")

## View Call Hierarchy

Right click on any function call and view a recursive list of all the functions that it calls, and all the functions that call it. Each function in the list can be expanded in the same way. For more information, see [Call Hierarchy](/visualstudio/ide/reference/call-hierarchy).

![C&#43;&#43; Call Hierarchy](../ide/media/vs2015_cpp_call_hierarchy.png "vs2015_cpp_call_hierarchy")

## See Also

[Edit and refactor code (C++)](writing-and-refactoring-code-cpp.md)</br>
[Navigate your C++ code base in Visual Studio](navigate-code-cpp.md)</br>
[Collaborate with Live Share for C++](live-share-cpp.md)
