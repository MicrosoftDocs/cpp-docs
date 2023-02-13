---
title: "Navigate C++ code in Visual Studio"
description: "Use various tools in Visual Studio to navigate around your C++ codebase."
ms.date: "05/28/2019"
---
# Navigate C++ code in Visual Studio

Visual Studio provides a suite of tools that you can use to navigate around your codebase quickly and efficiently.

## Open an included file

Right-click an `#include` directive, and select **Go To Document**. Or, select **F12** with the cursor over that line to open the file.

![Screenshot of the C plus plus Go To Document menu option in the context of some include statements.](../ide/media/go-to-document.png)

## Toggle Header/Code File

You can switch between a header file and its corresponding source file. Right-click anywhere in your file and select **Toggle Header/Code File**. Or, you can select **Ctrl+K**, **Ctrl+O**.

## Go To Definition/Declaration

You can navigate to the definition of a code element with a right-click in the editor and selecting **Go To Definition**, or by selecting **F12**. You can navigate to a declaration similarly by right-clicking to open the context menu, or by selecting **Ctrl+F12**.

![Screenshot of options that appear when you right-click a code element. Includes Go To Definition, Peek Definition, and Go To Declaration.](../ide/media/go-to-def.png)

## Go To

**Go To** refers to a set of navigation features that each provide a specific result based on filters you specify.

You can open **Go To** with **Ctrl+,**. This action creates a search box over the document you're editing.

![Screenshot of the search box that appears when you open Go To. There's a text box for your search terms, and filters for types, recent files, etc.](../ide/media/go-to-cpp.png)

**Go To** includes these search filters:

- **Go To Line** (**Ctrl+G**): Quickly jump to a different line in your current document.
- **Go To All** (**Ctrl+,**) or (**Ctrl+T**): Search results include everything that follows.
- **Go To File** (**Ctrl 1, F**): Search for files in your solution.
- **Go To Type** (**Ctrl 1, T**): Search results include:
  - Classes, structs, and enums.
  - Interfaces and delegates (managed code only).
- **Go To Member** (**Ctrl 1, M**): Search results include:
  - Global variables and global functions.
  - Class member variables and member functions.
  - Constants.
  - Enum items.
  - Properties and events.
- **Go To Symbol** (**Ctrl 1, S**): Search results include:
  - Results from Go To Types and Go To Members.
  - All remaining C++ language constructs, which include macros.

When you first invoke **Go To** with **Ctrl +**, **Go To All** is activated (no filters on search results). You then can select the filter you want by using the buttons near the search box. You can invoke a specific filter using its corresponding keyboard shortcut. Doing so opens the **Go To** search box with that filter preselected. All keyboard shortcuts are configurable.

To apply a text filter, start your search query with the filter's corresponding character followed by a space. (**Go To Line** can optionally omit the space.) These text filters are available:

- Go To All: (no text filter)
- Go To Line Number: :
- Go To File: f
- Go To Type: t
- Go To Member: m
- Go To Symbol: #

The following example shows results from a *Go To Files* operation by using the "f" filter:

![Screenshot of Go to Files results. The user typed 'f str' and string_utils.cpp and string_utils.h appear because they contain `str` in the name.](../ide/media/vs2017-go-to-results.png "Go To Menu")

To see the list of text filters, type a ? followed by a space. You also can access the **Go To** commands with the **Edit** menu. This is another way to remind yourself of the main **Go To** keyboard shortcuts.

![Screenshot of the Go To menu which has options like Go To Line (Ctrl + G), Go to File (Ctrl + 1, Ctrl + F), and more.](../ide/media/go-to-menu-cpp.png "Go To Menu")

## Find or Find in Files

You can run a text search for anything in your solution with **Find** (**Ctrl+F**) or **Find in Files** (**Ctrl+Shift+F**).

**Find** can be scoped to a selection, the current document, all open documents, the current project, or the entire solution. You can use regular expressions and plain text. It also highlights all matches automatically in the IDE.

![Screenshot of the Find dialog. The user has searched `channel`. Yellow highlights in the file show all the places `Channel` is found.](../ide/media/find-cpp.png)

**Find in Files** is a more powerful version of **Find** that displays results in the **Find Results** window. You can search external code dependencies, filter by file types, and more.

![Screenshot of the Find and Replace dialog. The Find in Files page is selected. Options are shown for matching case, the whole word, and so on.](../ide/media/find-in-files-cpp.png "Find in Files")

You can organize **Find in Files** results in two windows. You can append results from multiple searches together. Select a result to go to that location in the file.

![Screenshot showing a Find in Files search result listing files containing text that matches the search string and an excerpt of each match.](../ide/media/vs2017-find-in-files-results.png "Find in Files")

For more information, see [Find in Files](/visualstudio/ide/find-in-files) in the Visual Studio documentation.

## Find All References

To find all usages of a symbol in your codebase, place the caret in or just after the symbol, right-click, and then select **Find All References**. You can filter, sort, or group results in many different ways. Results populate incrementally. They're classified as Reads or Writes to help you see what's in your solution as opposed to system headers or other libraries.

![Screenshot of Find all references results which shows the line where the symbol was found, which file and project it is located in, and so on.](../ide/media/find-all-references-results-cpp.png)

You can group results by the following categories:

- Project then Definition
- Definition Only
- Definition then Project
- Definition then Path
- Definition, Project then Path

#### Filter results

To filter results, hover over a column and select the filtering icon that pops up. You can filter results from the first column to hide things like string and comment references that you might not want to see.

![Screenshot of filtering options. Includes Confirmed, Disconfirmed, In comment, and unprocessed. Each shows how many results apply to that category.](../ide/media/find-all-references-filters-cpp.png)

- **Confirmed results**: Actual code references to the symbol being searched for. For example, searching for a member function called `Size` returns all references to `Size` that match the scope of the class that defines `Size`.

- **Disconfirmed results**: This filter is off by default because it shows symbols whose name matches but aren't actual references to the symbol you're searching for. For example, if you have two classes that each define a member function called `Size`, and you run a search for `Size` on a reference from an object of `Class1`, any references to `Size` from `Class2` appear as disconfirmed.

- **Unprocessed results**: **Find All References** operations can take time to complete on larger codebases, so the Results list shows "unprocessed" results here. Unprocessed results match the name of the symbol being searched for but haven't yet been confirmed as actual code references. You can turn on this filter to get faster results. Some results might not be actual references.

#### Sort results

You can sort results by any column by selecting that column. You can swap between ascending or descending order by selecting the column again.

## Navigation Bar

You can navigate to the definition of a type in a file, or to type members, by using the **Navigation Bar** that's above the editor window.

![Screenshot of the Navigation Bar above the editor window. It shows cryptlib > ChannelSwitch > ChannelMessageSeriesEnd().](../ide/media/navbar-cpp.png)

## See also

- [Read and understand C++ code](read-and-understand-code-cpp.md)\
- [Edit and refactor C++ code](read-and-understand-code-cpp.md)\
- [Collaborate with Live Share for C++](live-share-cpp.md)
