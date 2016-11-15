---
title: "Start Page Architecture | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
helpviewer_keywords: 
  - "start page architecture"
  - "start page xaml"
ms.assetid: f94afe27-0be3-47d9-8e17-b0fd429017bd
caps.latest.revision: 9
manager: "douge"
translation.priority.ht: 
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "ru-ru"
  - "zh-cn"
  - "zh-tw"
translation.priority.mt: 
  - "cs-cz"
  - "pl-pl"
  - "pt-br"
  - "tr-tr"
---
# Start Page Architecture
This document describes the architecture of the Start Page tool window that is included in Visual Studio. You can use this information to add or change items on the Start Page without changing its underlying structure.  
  
 The Visual Studio Start Page is written in Windows Presentation Foundation (WPF) Extensible Application Markup Language (XAML). For more information about XAML markup, see [XAML Overview (WPF)](../Topic/XAML%20Overview%20\(WPF\).md).  
  
## Page Structure  
 The Start Page consists of an <xref:System.Windows.Controls.Image> element and two <xref:System.Windows.Controls.Grid> elements in a top level `Grid` element. The `Image` element spans the top of the tool window and contains the Visual Studio logo. Below the logo, the left `Grid` element contains the command buttons for new projects, the **Recent Projects** list, and an area for Start Page options. The right `Grid` element contains a <xref:System.Windows.Controls.TabControl> element that has a **Get Started** tab, a **Guidance and Resources** tab, and a **Latest News** tab. A central column is defined between the left and right `Grid` elements, but it has no content and is used only as a spacer.  
  
### Window Body  
 The background of the tool window is represented by the top-level `Grid` element. The widths of the main columns are defined here, in the `ColumnDefinitions` element. The height of the logo image is set in the `RowDefinitions` element.  
  
 Row definitions and column definitions are stored in zero-based arrays. To position an element in a grid, set the `Grid.Column` and `Grid.Row` attributes to match the indexes of the corresponding <xref:System.Windows.Controls.ColumnDefinition> and <xref:System.Windows.Controls.RowDefinition> elements.  
  
### Logo Image  
 The Visual Studio logo occupies the top row of the top-level grid (`Grid.Row="0"`) as an `Image` element. To display a different image, point the `Source` attribute of the `Image` element to a different image file. To remove the image, delete the `Image` element and set the `height` attribute of the corresponding top-level `RowDefinition` element to `0` (zero) to hide the top row of the grid.  
  
### Left Column  
 The left column of the Start Page is represented by a `Grid` element at `Grid.Column="0"` and `Grid.Row="1"`. This element contains definitions for three rows, which host the Command Buttons grid, the Recent Projects grid, and a `StackPanel` element to display Visual Studio options.  
  
 You can add an element to this grid by adding it to one of the existing rows or by adding a new row definition. When you define a new row, remember to increment the `Grid.Row` values of any elements that appear under the new row.  
  
### Middle Column  
 The middle column is a spacer and contains no elements. To add an element to the middle column, position it at `Grid.Column="1"` and `Grid.Row="1"`. Make sure to adjust the `Width` attribute of the column definition to accommodate the change.  
  
### Right Column  
 The right column contains a `Grid` element at `Grid.Column="1"` and `Grid.Row="1"`. The grid contains a `TabControl` element that has three tabs.  
  
 You can add a tab by adding a <xref:System.Windows.Controls.TabItem> element to the tab control, as shown in [Walkthrough: Adding Custom XAML to the Start Page](../Topic/Walkthrough:%20Adding%20Custom%20XAML%20to%20the%20Start%20Page.md), or you can edit or remove existing tabs. Tabs appear left to right in the user interface (UI) in the same order as they appear top to bottom in the markup.  
  
 If you add an element to the right column grid outside of the tab control, we recommend that you define a new row or column in the grid to ensure that it appears as expected.  
  
## See Also  
 [Customizing the Start Page](/visualstudio/ide/customizing-the-start-page-for-visual-studio)   
 [Start Page Best Practices](../misc/start-page-best-practices.md)   
 [Deploying Custom Start Pages](/visualstudio/extensibility/deploying-custom-start-pages)