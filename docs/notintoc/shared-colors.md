---
title: "Shared colors"
ms.custom: na
ms.date: "10/13/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: na
ms.topic: "article"
ms.assetid: 9d3186f3-07d2-441f-b33e-435e95d8a0b8
caps.latest.revision: 11
ms.author: "v-brickg"
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
# Shared colors
Insert introduction here.  
  
## Shared colors  
 When you are designing UI that uses common Visual Studio shell elements, or you would like your interface element to be consistent with similar features, use existing token names in package definition files to choose and assign colors. This ensures that your UI stays consistent with the overall Visual Studio environment and that it updates automatically when themes are added or updated.  
  
 This article describes common UI elements and the token names that they use, which you can reference when building similar UI. For specific information about how to access these color tokens, see [The VSColor Service](../Topic/Colors%20and%20Styling%20for%20Visual%20Studio.md#BKMK_TheVSColorService).  
  
 Make sure to use token names correctly:  
  
-   **Use token names based on function, not on the color itself.** The common shared colors are associated with specific interface elements and are only intended to be used for the same or similar features. For example, don't reuse the color of a pressed combo box for a spinning progress animation just because you like the color. The functions of the combo box and the animation are different, and if the color associated with the combo box changes, it may no longer be an appropriate color for your animation element. Consistent use of color helps orient your users and prevent confusion.  
  
-   **Use background and text colors in the correct combination.** Background colors that are intended to be used with text will have an associated text color. Don't use text colors other than what is specified for that background. If there is not an associated text color, don't use that background color for any surface on which you expect to display text. Other combinations of text and background colors may result in an unreadable interface.  
  
-   **Use control colors that are appropriate for their location.** In certain states, some Visual Studio controls do not have separate border and background colors. Instead, they pick up those colors from the surfaces behind them. Make sure that you always use the token names that are appropriate for the location where you are placing the control.  
  
> [!IMPORTANT]
>  Do not use tokens found in the categories "Start Page" or "Cider"!  
  
### Command structures  
  
####  <a name="BKMK_CommandMenus"></a> Menus  
 Menus can occur at several places within Visual Studio 2013: the main menu bar, embedded in document or tool windows, or on right-click in various locations throughout the IDE. Implementations of menus associated with other UI elements are discussed in the section for the respective element. You should always use the standard menu implementation provided by the Visual Studio environment. However, in some rare instances you might not have access to the standard Visual Studio menus. In these situations, use the following token names to ensure that your UI is consistent with other menus in Visual Studio.  
  
 ![Menus redline](../notintoc/media/0303-000_menuredline.png "0303-000_MenuRedline")  
  
 Use …  
 -   whenever you need to create a custom menu.  
  
-   when you have a new UI component that you want to match the Visual Studio menus.  
  
 Do not use …  
 the background color alone. Always use the background/foreground combination as specified.  
  
##### Menu title  
 Menu titles consist of a background, a border, and the title text, as well as an optional glyph, usually when the menu is found in a command bar.  
  
 ![Menu title redline](../notintoc/media/0303-001_menutitleredline.png "0303-001_MenuTitleRedline")  
  
 Use…  
 whenever you are creating a custom menu title.  
  
 Do not use…  
 -   for anything that you don't want to always match the menu title.  
  
-   in any background/foreground combination other than specified.  
  
 **Default**  
  
|Component|Element|Token name: Category.color|  
|---------------|-------------|--------------------------------|  
|![Menu title default](../notintoc/media/0303-002_menutitledefault.png "0303-002_MenuTitleDefault")<br /><br /> **Menu title**|Background|None|  
|![Menu title default](../notintoc/media/0303-002_menutitledefault.png "0303-002_MenuTitleDefault")<br /><br /> **Menu title**|Foreground (Text)|`Environment.CommandBarTextActive`|  
|![Menu title with glyph default](../notintoc/media/0303-003_menutitlewithglyphdefault.png "0303-003_MenuTitleWithGlyphDefault")<br /><br /> **Menu title with glyph**|Foreground (Glyph)|`Environment.CommandBarMenuGlyph`|  
|![Menu title with glyph default](../notintoc/media/0303-003_menutitlewithglyphdefault.png "0303-003_MenuTitleWithGlyphDefault")<br /><br /> **Menu title with glyph**|Border|None|  
  
 **Hover**  
  
|Component|Element|Token name: Category.color|  
|---------------|-------------|--------------------------------|  
|![Menu title on hover](../notintoc/media/0303-004_menutitlehover.png "0303-004_MenuTitleHover")<br /><br /> **Menu title**|Background|`Environment.CommandBarMouseOverBackgroundBegin`<br /><br /> While not used in modern themed UI, there are gradient stops and values for this background.|  
|![Menu title on hover](../notintoc/media/0303-004_menutitlehover.png "0303-004_MenuTitleHover")<br /><br /> **Menu title**|Foreground (Text)|`Environment.CommandBarTextHover`|  
|![Menu title with glyph on hover](../notintoc/media/0303-005_menutitlewithglyphhover.png "0303-005_MenuTitleWithGlyphHover")<br /><br /> **Menu title with glyph**|Foreground (Glyph)|`Environment.CommandBarMenuMouseOverGlyph`|  
|![Menu title with glyph on hover](../notintoc/media/0303-005_menutitlewithglyphhover.png "0303-005_MenuTitleWithGlyphHover")<br /><br /> **Menu title with glyph**|Border|`Environment.CommandBarBorder`|  
  
 **Pressed**  
  
|Component|Element|Token name: Category.color|  
|---------------|-------------|--------------------------------|  
|![Menu title pressed](../notintoc/media/0303-006_menutitlepressed.png "0303-006_MenuTitlePressed")<br /><br /> **Menu title**|Background|`Environment.CommandBarMenuBackgroundGradientBegin`<br /><br /> While not used in modern themed UI, there are gradient stops and values for this background.|  
|![Menu title pressed](../notintoc/media/0303-006_menutitlepressed.png "0303-006_MenuTitlePressed")<br /><br /> **Menu title**|Foreground (Text)|`Environment.CommandBarTextActive`|  
|![Menu title with glyph pressed](../notintoc/media/0303-007_menutitlewithglyphpressed.png "0303-007_MenuTitleWithGlyphPressed")<br /><br /> **Menu title with glyph**|Foreground (Glyph)|`Environment.CommandBarMenuMouseDownGlyph`|  
|![Menu title with glyph pressed](../notintoc/media/0303-007_menutitlewithglyphpressed.png "0303-007_MenuTitleWithGlyphPressed")<br /><br /> **Menu title with glyph**|Border|`Environment.CommandBarMenuBorder`<br /><br /> Only left, top, and right sides.|  
  
 **Disabled**  
  
|Component|Element|Token name: Category.color|  
|---------------|-------------|--------------------------------|  
|![Menu title with glyph disabled](../notintoc/media/0303-008_menutitlewithglyphdisabled.png "0303-008_MenuTitleWithGlyphDisabled")<br /><br /> **Menu title with glyph**|Background|None|  
|![Menu title with glyph disabled](../notintoc/media/0303-008_menutitlewithglyphdisabled.png "0303-008_MenuTitleWithGlyphDisabled")<br /><br /> **Menu title with glyph**|Foreground (Text)|`Environment.CommandBarTextInactive`|  
|![Menu title with glyph disabled](../notintoc/media/0303-008_menutitlewithglyphdisabled.png "0303-008_MenuTitleWithGlyphDisabled")<br /><br /> **Menu title with glyph**|Foreground (Glyph)|`Environment.CommandBarTextInactive`|  
|![Menu title with glyph disabled](../notintoc/media/0303-008_menutitlewithglyphdisabled.png "0303-008_MenuTitleWithGlyphDisabled")<br /><br /> **Menu title with glyph**|Border|None|  
  
##### Menu  
 An individual menu item consists of the menu text and an optional icon, check box, or submenu glyph. Its background and text color change on hover. This color token is a background/foreground pair.  
  
 ![Menu items redline](../notintoc/media/0303-009_menuitemredline.png "0303-009_MenuItemRedline")  
  
 Use…  
 for any drop-down list that is launched from a menu bar or command bar.  
  
 Do not use…  
 -   for any drop-down list that occurs in another context.  
  
-   in any background/foreground combination other than specified.  
  
 **Default**  
  
|Component|Element|Token name: Category.color|  
|---------------|-------------|--------------------------------|  
|![Menu default](../notintoc/media/0303-010_menudefault.png "0303-010_MenuDefault")<br /><br /> **Menu**|Background|`Environment.CommandBarMenuBackgroundGradientBegin`<br /><br /> While not used in modern themed UI, there are gradient stops and values for this background.|  
|![Menu default](../notintoc/media/0303-010_menudefault.png "0303-010_MenuDefault")<br /><br /> **Menu**|Foreground (Text)|`Environment.CommandBarTextActive`|  
|![Menu default](../notintoc/media/0303-010_menudefault.png "0303-010_MenuDefault")<br /><br /> **Menu**|Foreground (Submenu glyph)|`Environment.CommandBarMenuSubmenuGlyph`|  
|![Menu default](../notintoc/media/0303-010_menudefault.png "0303-010_MenuDefault")<br /><br /> **Menu**|Border|`Environment.CommandBarMenuBorder`|  
|![Menu default](../notintoc/media/0303-010_menudefault.png "0303-010_MenuDefault")<br /><br /> **Menu**|Icon channel background|`Environment.CommandBarMenuIconBackground`|  
|![Menu default](../notintoc/media/0303-010_menudefault.png "0303-010_MenuDefault")<br /><br /> **Menu**|Separator|`Environment.CommandBarMenuSeparator`|  
|![Menu default](../notintoc/media/0303-010_menudefault.png "0303-010_MenuDefault")<br /><br /> **Menu**|Shadow|`Environment.DropShadowBackground`|  
|![Menu checked](../notintoc/media/0303-011_menuchecked.png "0303-011_MenuChecked")<br /><br /> **Checked**|Check mark|`Environment.CommandBarCheckBox`|  
|![Menu checked](../notintoc/media/0303-011_menuchecked.png "0303-011_MenuChecked")<br /><br /> **Checked**|Check mark background|`Environment.CommandBarSelectedIcon`|  
|![Menu selected](../notintoc/media/0303-012_menuselected.png "0303-012_MenuSelected")<br /><br /> **Selected**|Icon background|`Environment.CommandBarSelected`|  
|![Menu selected](../notintoc/media/0303-012_menuselected.png "0303-012_MenuSelected")<br /><br /> **Selected**|Icon border|`Environment.CommandBarSelectedBorder`|  
  
 **Hover**  
  
|Component|Element|Token name: Category.color|  
|---------------|-------------|--------------------------------|  
|![Menu hover](../notintoc/media/0303-013_menuhover.png "0303-013_MenuHover")<br /><br /> **Menu item**|Background|`Environment.CommandBarMenuItemMouseOver`|  
|![Menu hover](../notintoc/media/0303-013_menuhover.png "0303-013_MenuHover")<br /><br /> **Menu item**|Foreground (Text)|`Environment.CommandBarMenuItemMouseOver`|  
|![Menu hover](../notintoc/media/0303-013_menuhover.png "0303-013_MenuHover")<br /><br /> **Menu item**|Foreground (Submenu glyph)|`Environment.CommandBarMenuMouseOverSubmenuGlyph`|  
|![Menu hover checked](../notintoc/media/0303-014_menuhoverchecked.png "0303-014_MenuHoverChecked")<br /><br /> **Checked**|Check mark|`Environment.CommandBarCheckBoxMouseOver`|  
|![Menu hover checked](../notintoc/media/0303-014_menuhoverchecked.png "0303-014_MenuHoverChecked")<br /><br /> **Checked**|Check mark background|`Environment.CommandBarHoverOverSelectedIcon`|  
|![Menu hover selected](../notintoc/media/0303-015_menuhoverselected.png "0303-015_MenuHoverSelected")<br /><br /> **Selected**|Icon background|`Environment.CommandBarHoverOverSelected`|  
|![Menu hover selected](../notintoc/media/0303-015_menuhoverselected.png "0303-015_MenuHoverSelected")<br /><br /> **Selected**|Icon border|`Environment.CommandBarHoverOverSelectedIconBorder`|  
  
 **Disabled**  
  
|Component|Element|Token name: Category.color|  
|---------------|-------------|--------------------------------|  
|![Menu disabled](../notintoc/media/0303-016_menudisabled.png "0303-016_MenuDisabled")<br /><br /> Menu item|Foreground (Text)|`Environment.CommandBarTextInactive`|  
|![Menu disabled](../notintoc/media/0303-016_menudisabled.png "0303-016_MenuDisabled")<br /><br /> Menu item|Foreground (Submenu glyph)|`Environment.CommandBarMenuSubmenuGlyph`|  
|![Menu disabled checked](../notintoc/media/0303-017_menudisabledchecked.png "0303-017_MenuDisabledChecked")<br /><br /> Checked|Check mark|`Environment.CommandBarCheckBoxDisabled`|  
|![Menu disabled checked](../notintoc/media/0303-017_menudisabledchecked.png "0303-017_MenuDisabledChecked")<br /><br /> Checked|Check mark background|`Environment.CommandBarSelectedIconDisabled`|  
  
#### Command bar  
 The command bar can appear in multiple places within the Visual Studio IDE, most notably the command shelf and embedded in tool or document windows.  
  
 In general, always use the standard command bar implementation provided by the Visual Studio environment. Using the standard mechanism ensures that all visual details will appear correctly and that interactive elements, will behave consistently with other Visual Studio command bar controls. However, if it is necessary for you to build your own command bar, make sure you style it correctly using the following token names.  
  
 ![Command bar redline](../notintoc/media/0303-018_commandbarredline.png "0303-018_CommandBarRedline")  
  
 ![Overflow button redline](../notintoc/media/0303-019_overflowbuttonredline.png "0303-019_OverflowButtonRedline")  
  
 Use…  
 in places where you need an embedded command bar but are unable to use the standard Visual Studio command bar implementation.  
  
 Do not use…  
 -   for UI elements that are not similar to a command bar.  
  
-   for command bar components other than the ones for which token names are specified.  
  
##### Command bar group  
 A command bar group consists of a related set of command bar controls and might contain any number of buttons, split buttons, drop-down menus, combo boxes, or menus. Colors for those controls are regulated by separate token names and are discussed individually elsewhere in this guide. A separator line is used to divide a command bar group into related subgroups.  
  
 ![Command bar group redline](../notintoc/media/0303-020_commandbargroupredline.png "0303-020_CommandBarGroupRedline")  
  
 Use…  
 in places where you need an embedded command bar but are unable to use the standard Visual Studio command bar implementation.  
  
 Do not use…  
 -   for UI elements that are not similar to a command bar.  
  
-   for command bar components other than the ones for which token names are specified.  
  
 **Default** (no other states)  
  
|Element|Token name: Category.color|  
|-------------|--------------------------------|  
|Background|`Environment.CommandBarGradientBegin`<br /><br /> While not used in modern themed UI, there are gradient stops and values for this background.|  
|Border|`Environment.CommandBarToolBarBorder`|  
|Drag handle|`Environment.CommandBarDragHandle`|  
|Separator|`Environment.CommandBarToolBarSeparator`<br /><br /> `Environment.CommandBarToolBarSeparatorHighlight`|  
  
##### Command icons  
 ![Command icon redline](../notintoc/media/0303-021_commandiconredline1.png "0303-021_CommandIconRedline1")  
  
 ![Command icon redline](../notintoc/media/0303-022_commandiconredline2.png "0303-022_CommandIconRedline2")  
  
 Use…  
 for any buttons that will be placed on a command bar.  
  
 Do not use…  
 -   for controls that have their own token names.  
  
-   in any background/foreground combination other than specified.  
  
 **Default**  
  
|Component|Element|Token name: Category.color|  
|---------------|-------------|--------------------------------|  
|![Command icon default](../notintoc/media/0303-023_commandicondefault.png "0303-023_CommandIconDefault")<br /><br /> **Default**|Background|N/A (inherits from command bar background)|  
|![Command icon default](../notintoc/media/0303-023_commandicondefault.png "0303-023_CommandIconDefault")<br /><br /> **Default**|Foreground (Text)|`Environment.CommandBarTextActive`|  
|![Command icon default](../notintoc/media/0303-023_commandicondefault.png "0303-023_CommandIconDefault")<br /><br /> **Default**|Border|N/A|  
|![Command icon default selected](../notintoc/media/0303-024_commandicondefaultselected.png "0303-024_CommandIconDefaultSelected")<br /><br /> **Selected**|Background|`Environment.CommandBarSelected`|  
|![Command icon default selected](../notintoc/media/0303-024_commandicondefaultselected.png "0303-024_CommandIconDefaultSelected")<br /><br /> **Selected**|Foreground (Text)|`Environment.CommandBarTextSelected`|  
|![Command icon default selected](../notintoc/media/0303-024_commandicondefaultselected.png "0303-024_CommandIconDefaultSelected")<br /><br /> **Selected**|Border|`Environment.CommandBarSelectedBorder`|  
  
 **Hover and keyboard focused**  
  
|Component|Element|Token name: Category.color|  
|---------------|-------------|--------------------------------|  
|![Command icon hover](../notintoc/media/0303-025_commandiconhover.png "0303-025_CommandIconHover")<br /><br /> **Standard on hover**|Background|`Environment.CommandBarMouseOverBackgroundBegin`<br /><br /> While not used in modern themed UI, there are gradient stops and values for this background.|  
|![Command icon hover](../notintoc/media/0303-025_commandiconhover.png "0303-025_CommandIconHover")<br /><br /> **Standard on hover**|Foreground (Text)|`Environment.CommandBarTextHover`|  
|![Command icon hover](../notintoc/media/0303-025_commandiconhover.png "0303-025_CommandIconHover")<br /><br /> **Standard on hover**|Border|`Environment.CommandBarBorder`|  
|![Command icon hover selected](../notintoc/media/0303-026_commandiconhoverselected.png "0303-026_CommandIconHoverSelected")<br /><br /> **Selected on hover**|Background|`Environment.CommandBarHoverOverSelected`|  
|![Command icon hover selected](../notintoc/media/0303-026_commandiconhoverselected.png "0303-026_CommandIconHoverSelected")<br /><br /> **Selected on hover**|Foreground (Text)|`Environment.CommandBarTextHoverOverSelected`|  
|![Command icon hover selected](../notintoc/media/0303-026_commandiconhoverselected.png "0303-026_CommandIconHoverSelected")<br /><br /> **Selected on hover**|Border|`Environment.CommandBarHoverOverSelectedIconBorder`|  
  
 **Pressed**  
  
|Component|Element|Token name: Category.color|  
|---------------|-------------|--------------------------------|  
|![Command icon pressed](../notintoc/media/0303-027_commandiconpressed.png "0303-027_CommandIconPressed")<br /><br /> **Pressed command icon**|Background|`Environment.CommandBarMouseDownBackgroundBegin`<br /><br /> While not used in modern themed UI, there are gradient stops and values for this background.|  
|![Command icon pressed](../notintoc/media/0303-027_commandiconpressed.png "0303-027_CommandIconPressed")<br /><br /> **Pressed command icon**|Foreground (Text)|`Environment.CommandBarTextMouseDown`|  
|![Command icon pressed](../notintoc/media/0303-027_commandiconpressed.png "0303-027_CommandIconPressed")<br /><br /> **Pressed command icon**|Border|`Environment.CommandBarBorder`|  
  
 **Disabled**  
  
|Component|Element|Token name: Category.color|  
|---------------|-------------|--------------------------------|  
|![Command icon disabled](../notintoc/media/0303-028_commandicondisabled.png "0303-028_CommandIconDisabled")<br /><br /> **Disabled command icon**|Background|N/A (inherits from command bar background)|  
|![Command icon disabled](../notintoc/media/0303-028_commandicondisabled.png "0303-028_CommandIconDisabled")<br /><br /> **Disabled command icon**|Foreground (Text)|`Environment.CommandBarTextInactive`|  
|![Command icon disabled](../notintoc/media/0303-028_commandicondisabled.png "0303-028_CommandIconDisabled")<br /><br /> **Disabled command icon**|Border|N/A|  
  
#####  <a name="BKMK_CommandComboBox"></a> Combo box  
  
> [!IMPORTANT]
>  Combo boxes are similar to drop-downs, but include an editable text region. If your drop-down does not include an editable text region, use the color tokens found under [Drop-down](../notintoc/shared-colors.md#BKMK_CommandDropDown).  
  
 ![Combo box redline](../notintoc/media/0303-029_comboboxredline.png "0303-029_ComboBoxRedline")  
  
 Use …  
 -   when building custom combo boxes.  
  
-   when creating a command bar control that is similar to a combo box.  
  
 Do not use …  
 -   for anything you don’t want always to match the command bar UI.  
  
-   when you have access to a styled combo box.  
  
 **Default**  
  
|Component|Element|Token name: Category.color|  
|---------------|-------------|--------------------------------|  
|![Combo box input field](../notintoc/media/0303-030_comboboxinputfield.png "0303-030_ComboBoxInputField")<br /><br /> **Input field**|Background|`Environment.ComboBoxBackground`|  
|![Combo box input field](../notintoc/media/0303-030_comboboxinputfield.png "0303-030_ComboBoxInputField")<br /><br /> **Input field**|Foreground (Text)|`Environment.ComboBoxText`|  
|![Combo box input field](../notintoc/media/0303-030_comboboxinputfield.png "0303-030_ComboBoxInputField")<br /><br /> **Input field**|Border|`Environment.ComboBoxBorder`|  
|![Combo box input field](../notintoc/media/0303-030_comboboxinputfield.png "0303-030_ComboBoxInputField")<br /><br /> **Input field**|Separator|No separator|  
|![Combo box drop&#45;down button](../notintoc/media/0303-031_comboboxdropdownbutton.png "0303-031_ComboBoxDropdownButton")<br /><br /> **Drop-down button**|Background|N/A (inherits)|  
|![Combo box drop&#45;down button](../notintoc/media/0303-031_comboboxdropdownbutton.png "0303-031_ComboBoxDropdownButton")<br /><br /> **Drop-down button**|Foreground (Glyph)|`Environment.ComboBoxGlyph`|  
|![Combo box&#47;drop&#45;down list](../notintoc/media/0303-032_comboboxdropdownlist.png "0303-032_ComboBoxDropdownList")<br /><br /> **Drop-down list**|Background|`Environment.ComboBoxPopupBackgroundBegin`<br /><br /> While not used in modern themed UI, there are gradient stops and values for this background.|  
|![Combo box&#47;drop&#45;down list](../notintoc/media/0303-032_comboboxdropdownlist.png "0303-032_ComboBoxDropdownList")<br /><br /> **Drop-down list**|Foreground (Text)|`Environment.ComboBoxItemText`|  
|![Combo box&#47;drop&#45;down list](../notintoc/media/0303-032_comboboxdropdownlist.png "0303-032_ComboBoxDropdownList")<br /><br /> **Drop-down list**|Border|`Environment.ComboBoxPopupBorder`|  
  
 **Hover**  
  
|Component|Element|Token name: Category.color|  
|---------------|-------------|--------------------------------|  
|![Combo box input field on hover](../notintoc/media/0303-033_comboboxinputfieldhover.png "0303-033_ComboBoxInputFieldHover")<br /><br /> **Input field**|Background|`Environment.ComboBoxMouseOverBackgroundBegin`<br /><br /> While not used in modern themed UI, there are gradient stops and values for this background.|  
|![Combo box input field on hover](../notintoc/media/0303-033_comboboxinputfieldhover.png "0303-033_ComboBoxInputFieldHover")<br /><br /> **Input field**|Foreground (Text)|`Environment.ComboBoxMouseOverText`|  
|![Combo box input field on hover](../notintoc/media/0303-033_comboboxinputfieldhover.png "0303-033_ComboBoxInputFieldHover")<br /><br /> **Input field**|Border|`Environment.ComboBoxMouseOverBorder`|  
|![Combo box input field on hover](../notintoc/media/0303-033_comboboxinputfieldhover.png "0303-033_ComboBoxInputFieldHover")<br /><br /> **Input field**|Separator|`Environment.ComboBoxMouseOverSeparator`|  
|![Combo box&#47;drop&#45;down button on hover](../notintoc/media/0303-034_comboboxdropdownbuttonhover.png "0303-034_ComboBoxDropdownButtonHover")<br /><br /> **Drop-down button**|Background|`Environment.ComboBoxButtonMouseOverBackground`|  
|![Combo box&#47;drop&#45;down button on hover](../notintoc/media/0303-034_comboboxdropdownbuttonhover.png "0303-034_ComboBoxDropdownButtonHover")<br /><br /> **Drop-down button**|Foreground (Glyph)|`Environment.ComboBoxMouseOverGlyph`|  
|![Combo box&#47;drop&#45;down list on hover](../notintoc/media/0303-035_comboboxdropdownlisthover.png "0303-035_ComboBoxDropdownListHover")<br /><br /> **Drop-down list**|Background (Menu item)|`Environment.ComboBoxItemMouseOverBackground`|  
|![Combo box&#47;drop&#45;down list on hover](../notintoc/media/0303-035_comboboxdropdownlisthover.png "0303-035_ComboBoxDropdownListHover")<br /><br /> **Drop-down list**|Foreground (Text)|`Environment.ComboBoxItemMouseOverText`|  
|![Combo box&#47;drop&#45;down list on hover](../notintoc/media/0303-035_comboboxdropdownlisthover.png "0303-035_ComboBoxDropdownListHover")<br /><br /> **Drop-down list**|Border (Menu item)|`Environment.ComboBoxItemMouseOverBorder`|  
  
 **Focused**  
  
|Component|Element|Token name: Color.category|  
|---------------|-------------|--------------------------------|  
|![Combo box input field focused](../notintoc/media/0303-036_comboboxinputfieldfocused.png "0303-036_ComboBoxInputFieldFocused")<br /><br /> **Input field**|Background|`Environment.ComboBoxFocusedBackground`|  
|![Combo box input field focused](../notintoc/media/0303-036_comboboxinputfieldfocused.png "0303-036_ComboBoxInputFieldFocused")<br /><br /> **Input field**|Foreground (Text)|`Environment.ComboBoxFocusedText`|  
|![Combo box input field focused](../notintoc/media/0303-036_comboboxinputfieldfocused.png "0303-036_ComboBoxInputFieldFocused")<br /><br /> **Input field**|Border|`Environment.ComboBoxFocusedBorder`|  
|![Combo box input field focused](../notintoc/media/0303-036_comboboxinputfieldfocused.png "0303-036_ComboBoxInputFieldFocused")<br /><br /> **Input field**|Separator|`Environment.ComboBoxFocusedButtonSeparator`|  
|![Combo box&#47;drop&#45;down button focused](../notintoc/media/0303-037_comboboxdropdownbuttonfocused.png "0303-037_ComboBoxDropdownButtonFocused")<br /><br /> **Drop-down button**|Background|`Environment.ComboBoxFocusedButtonBackground`|  
|![Combo box&#47;drop&#45;down button focused](../notintoc/media/0303-037_comboboxdropdownbuttonfocused.png "0303-037_ComboBoxDropdownButtonFocused")<br /><br /> **Drop-down button**|Foreground (Glyph)|`Environment.ComboBoxFocusedGlyph`|  
  
 **Pressed**  
  
|Component|Element|Token name: Color.category|  
|---------------|-------------|--------------------------------|  
|![Combo box input field pressed](../notintoc/media/0303-038_comboboxinputfieldpressed.png "0303-038_ComboBoxInputFieldPressed")<br /><br /> **Input field**|Background|`Environment.ComboBoxMouseDownBackground`|  
|![Combo box input field pressed](../notintoc/media/0303-038_comboboxinputfieldpressed.png "0303-038_ComboBoxInputFieldPressed")<br /><br /> **Input field**|Foreground (Text)|`Environment.ComboBoxMouseDownText`|  
|![Combo box input field pressed](../notintoc/media/0303-038_comboboxinputfieldpressed.png "0303-038_ComboBoxInputFieldPressed")<br /><br /> **Input field**|Border|`Environment.ComboBoxMouseDownBorder`|  
|![Combo box input field pressed](../notintoc/media/0303-038_comboboxinputfieldpressed.png "0303-038_ComboBoxInputFieldPressed")<br /><br /> **Input field**|Separator|`Environment.ComboBoxMouseDownSeparator`|  
|![Combo box&#47;drop&#45;down button pressed](../notintoc/media/0303-039_comboboxdropdownbuttonpressed.png "0303-039_ComboBoxDropdownButtonPressed")<br /><br /> **Drop-down button**|Background|`Environment.ComboBoxButtonMouseDownBackground`|  
|![Combo box&#47;drop&#45;down button pressed](../notintoc/media/0303-039_comboboxdropdownbuttonpressed.png "0303-039_ComboBoxDropdownButtonPressed")<br /><br /> **Drop-down button**|Foreground (Glyph)|`Environment.ComboBoxMouseDownGlyph`|  
  
 **Disabled**  
  
|Component|Element|Token name: Color.category|  
|---------------|-------------|--------------------------------|  
|![Combo box input field disabled](../notintoc/media/0303-041_comboboxinputfielddisabled.png "0303-041_ComboBoxInputFieldDisabled")<br /><br /> **Input field**|Background|`Environment.ComboBoxDisabledBackground`|  
|![Combo box input field disabled](../notintoc/media/0303-041_comboboxinputfielddisabled.png "0303-041_ComboBoxInputFieldDisabled")<br /><br /> **Input field**|Foreground (Text)|`Environment.ComboBoxDisabledText`|  
|![Combo box input field disabled](../notintoc/media/0303-041_comboboxinputfielddisabled.png "0303-041_ComboBoxInputFieldDisabled")<br /><br /> **Input field**|Border|`Environment.ComboBoxDisabledBorder`|  
|![Combo box input field disabled](../notintoc/media/0303-041_comboboxinputfielddisabled.png "0303-041_ComboBoxInputFieldDisabled")<br /><br /> **Input field**|Separator|No separator|  
|![Combo box&#47;drop&#45;down button disabled](../notintoc/media/0303-040_comboboxdropdownbuttondisabled.png "0303-040_ComboBoxDropdownButtonDisabled")<br /><br /> **Drop-down button**|Background|None|  
|![Combo box&#47;drop&#45;down button disabled](../notintoc/media/0303-040_comboboxdropdownbuttondisabled.png "0303-040_ComboBoxDropdownButtonDisabled")<br /><br /> **Drop-down button**|Foreground (Glyph)|`Environment.ComboBoxDisabledGlyph`|  
  
#####  <a name="BKMK_CommandDropDown"></a> Drop-down  
  
> [!IMPORTANT]
>  Drop-downs are similar to combo boxes, but lack editable text regions. If your drop-down includes an editable text region, use the color tokens found under [Combo box](../notintoc/shared-colors.md#BKMK_CommandComboBox).  
  
 ![Drop&#45;down redline](../notintoc/media/0303-042_dropdownredline.png "0303-042_DropdownRedline")  
  
 Use …  
 when you are creating custom drop-down list controls.  
  
 Do not use …  
 -   for anything that is not similar to a drop-down list.  
  
-   for combo boxes or split buttons.  
  
 **Default**  
  
|Component|Element|Token name: Category.color|  
|---------------|-------------|--------------------------------|  
|![Drop&#45;down selection field](../notintoc/media/0303-043_dropdownselectionfield.png "0303-043_DropdownSelectionField")<br /><br /> **Selection field**|Background|`Environment.DropDownBackground`|  
|![Drop&#45;down selection field](../notintoc/media/0303-043_dropdownselectionfield.png "0303-043_DropdownSelectionField")<br /><br /> **Selection field**|Foreground (Text)|`DropDownText`|  
|![Drop&#45;down selection field](../notintoc/media/0303-043_dropdownselectionfield.png "0303-043_DropdownSelectionField")<br /><br /> **Selection field**|Border|`DropDownBorder`|  
|![Drop&#45;down selection field](../notintoc/media/0303-043_dropdownselectionfield.png "0303-043_DropdownSelectionField")<br /><br /> **Selection field**|Separator|No separator|  
|![Drop&#45;down button](../notintoc/media/0303-044_dropdownbutton.png "0303-044_DropdownButton")<br /><br /> **Drop-down button**|Background|None|  
|![Drop&#45;down button](../notintoc/media/0303-044_dropdownbutton.png "0303-044_DropdownButton")<br /><br /> **Drop-down button**|Foreground (Glyph)|`Environment.DropDownGlyph`|  
|![Drop&#45;down list](../notintoc/media/0303-045_dropdownlist.png "0303-045_DropdownList")<br /><br /> **Drop-down list**|Background|`Environment.DropDownPopupBackgroundBegin`<br /><br /> While not used in modern themed UI, there are gradient stops and values for this background.|  
|![Drop&#45;down list](../notintoc/media/0303-045_dropdownlist.png "0303-045_DropdownList")<br /><br /> **Drop-down list**|Foreground (Text)|`Environment.ComboBoxItemText`|  
|![Drop&#45;down list](../notintoc/media/0303-045_dropdownlist.png "0303-045_DropdownList")<br /><br /> **Drop-down list**|Border|`Environment.DropDownPopupBorder`|  
|![Drop&#45;down list](../notintoc/media/0303-045_dropdownlist.png "0303-045_DropdownList")<br /><br /> **Drop-down list**|Shadow|`Environment.DropShadowBackground`|  
  
 **Hover**  
  
|Component|Element|Token name: Category.color|  
|---------------|-------------|--------------------------------|  
|![Drop&#45;down selection field on hover](../notintoc/media/0303-046_dropdownselectionfieldhover.png "0303-046_DropdownSelectionFieldHover")<br /><br /> **Selection field**|Background|`Environment.DropDownMouseOverBackgroundBegin`<br /><br /> While not used in modern themed UI, there are gradient stops and values for this background.|  
|![Drop&#45;down selection field on hover](../notintoc/media/0303-046_dropdownselectionfieldhover.png "0303-046_DropdownSelectionFieldHover")<br /><br /> **Selection field**|Foreground (Text)|`Environment.DropDownMouseOverText`|  
|![Drop&#45;down selection field on hover](../notintoc/media/0303-046_dropdownselectionfieldhover.png "0303-046_DropdownSelectionFieldHover")<br /><br /> **Selection field**|Border|`Environment.DropDownMouseOverBorder`|  
|![Drop&#45;down selection field on hover](../notintoc/media/0303-046_dropdownselectionfieldhover.png "0303-046_DropdownSelectionFieldHover")<br /><br /> **Selection field**|Separator|`Environment.DropDownButtonMouseOverSeparator`|  
|![Drop&#45;down button on hover](../notintoc/media/0303-047_dropdownbuttonhover.png "0303-047_DropdownButtonHover")<br /><br /> **Drop-down button**|Background|`Environment.DropDownButtonMouseOverBackground`|  
|![Drop&#45;down button on hover](../notintoc/media/0303-047_dropdownbuttonhover.png "0303-047_DropdownButtonHover")<br /><br /> **Drop-down button**|Foreground (Glyph)|`Environment.DropDownMouseOverGlyph`|  
|![Drop&#45;down list on hover](../notintoc/media/0303-048_dropdownlisthover.png "0303-048_DropdownListHover")<br /><br /> **Drop-down list**|Background (Menu item)|`Environment.ComboBoxItemMouseOverBackground`|  
|![Drop&#45;down list on hover](../notintoc/media/0303-048_dropdownlisthover.png "0303-048_DropdownListHover")<br /><br /> **Drop-down list**|Foreground (Text)|`Environment.ComboBoxItemMouseOverText`|  
|![Drop&#45;down list on hover](../notintoc/media/0303-048_dropdownlisthover.png "0303-048_DropdownListHover")<br /><br /> **Drop-down list**|Border (Menu item)|`Environment.ComboBoxItemMouseOverBorder`|  
  
 **Pressed**  
  
|Component|Element|Token name: Category.color|  
|---------------|-------------|--------------------------------|  
|![Drop&#45;down selection field pressed](../notintoc/media/0303-049_dropdownselectionfieldpressed.png "0303-049_DropdownSelectionFieldPressed")<br /><br /> **Selection field**|Background|`Environment.DropDownMouseDownBackground`|  
|![Drop&#45;down selection field pressed](../notintoc/media/0303-049_dropdownselectionfieldpressed.png "0303-049_DropdownSelectionFieldPressed")<br /><br /> **Selection field**|Foreground (Text)|`Environment.DropDownMouseDownText`|  
|![Drop&#45;down selection field pressed](../notintoc/media/0303-049_dropdownselectionfieldpressed.png "0303-049_DropdownSelectionFieldPressed")<br /><br /> **Selection field**|Border|`Environment.DropDownMouseDownBorder`|  
|![Drop&#45;down selection field pressed](../notintoc/media/0303-049_dropdownselectionfieldpressed.png "0303-049_DropdownSelectionFieldPressed")<br /><br /> **Selection field**|Separator|`Environment.DropDownButtonMouseDownSeparator`|  
|![Drop&#45;down button pressed](../notintoc/media/0303-050_dropdownbuttonpressed.png "0303-050_DropdownButtonPressed")<br /><br /> **Drop-down button**|Background|`Environment.DropDownButtonMouseDownBackground`|  
|![Drop&#45;down button pressed](../notintoc/media/0303-050_dropdownbuttonpressed.png "0303-050_DropdownButtonPressed")<br /><br /> **Drop-down button**|Foreground (Glyph)|`Environment.DropDownMouseDownGlyph`|  
  
 **Disabled**  
  
|Component|Element|Token name: Category.color|  
|---------------|-------------|--------------------------------|  
|![Drop&#45;down selection field disabled](../notintoc/media/0303-051_dropdownselectionfielddisabled.png "0303-051_DropdownSelectionFieldDisabled")|Background|`Environment.DropDownDisabledBackground`|  
|![Drop&#45;down selection field disabled](../notintoc/media/0303-051_dropdownselectionfielddisabled.png "0303-051_DropdownSelectionFieldDisabled")|Foreground (Text)|`Environment.DropDownDisabledText`|  
|![Drop&#45;down selection field disabled](../notintoc/media/0303-051_dropdownselectionfielddisabled.png "0303-051_DropdownSelectionFieldDisabled")|Border|`Environment.DropDownDisabledBorder`|  
|![Drop&#45;down selection field disabled](../notintoc/media/0303-051_dropdownselectionfielddisabled.png "0303-051_DropdownSelectionFieldDisabled")|Separator|No separator|  
|![Drop&#45;down button disabled](../notintoc/media/0303-052_dropdownbuttondisabled.png "0303-052_DropdownButtonDisabled")|Background|N/A|  
|![Drop&#45;down button disabled](../notintoc/media/0303-052_dropdownbuttondisabled.png "0303-052_DropdownButtonDisabled")|Foreground (Glyph)|`Environment.DropDownDisabledGlyph`|  
  
##### Split button  
 Split buttons share many token names with other command bar controls, such as buttons, menus, and command bar text. All necessary action and drop-down button token names are repeated here for convenience. Split button drop-down lists are implementations of command bar [Menus](../notintoc/shared-colors.md#BKMK_CommandMenus).  
  
 ![Split button redline](../notintoc/media/0303-053_splitbuttonredline.png "0303-053_SplitButtonRedline")  
  
 Use …  
 when you are building a custom split button.  
  
 Do not use …  
 -   for other kinds of buttons.  
  
-   in any background/foreground combination other than specified.  
  
 **Default**  
  
|Component|Element|Token name: Category.color|  
|---------------|-------------|--------------------------------|  
|![Split button](../notintoc/media/0303-054_splitbutton.png "0303-054_SplitButton")<br /><br /> **Split button (default)**|Background|None|  
|![Split button](../notintoc/media/0303-054_splitbutton.png "0303-054_SplitButton")<br /><br /> **Split button (default)**|Foreground (Text)|`Environment.CommandBarTextActive`|  
|![Split button](../notintoc/media/0303-054_splitbutton.png "0303-054_SplitButton")<br /><br /> **Split button (default)**|Foreground (Glyph)|`Environment.CommandBarSplitButtonGlyph`|  
|![Split button](../notintoc/media/0303-054_splitbutton.png "0303-054_SplitButton")<br /><br /> **Split button (default)**|Border|N/A|  
|![Split button](../notintoc/media/0303-054_splitbutton.png "0303-054_SplitButton")<br /><br /> **Split button (default)**|Separator|N/A|  
  
 **Hover**  
  
|Component|Element|Token name: Category.color|  
|---------------|-------------|--------------------------------|  
|![Split button on hover](../notintoc/media/0303-055_splitbuttonhover.png "0303-055_SplitButtonHover")<br /><br /> **Split button (on hover)**|Background|`Environment.CommandBarMouseOverBackgroundBegin`<br /><br /> While not used in modern themed UI, there are gradient stops and values for this background.|  
|![Split button on hover](../notintoc/media/0303-055_splitbuttonhover.png "0303-055_SplitButtonHover")<br /><br /> **Split button (on hover)**|Foreground (Text)|`Environment.CommandBarTextHover`|  
|![Split button on hover](../notintoc/media/0303-055_splitbuttonhover.png "0303-055_SplitButtonHover")<br /><br /> **Split button (on hover)**|Foreground (Glyph)|`Environment.CommandBarSplitButtonMouseOverGlyph`|  
|![Split button on hover](../notintoc/media/0303-055_splitbuttonhover.png "0303-055_SplitButtonHover")<br /><br /> **Split button (on hover)**|Border|`Environment.CommandBarBorder`|  
|![Split button on hover](../notintoc/media/0303-055_splitbuttonhover.png "0303-055_SplitButtonHover")<br /><br /> **Split button (on hover)**|Separator|`Environment.CommandBarSplitButtonSeparator`|  
  
 **Pressed**  
  
|Component|Element|Token name: Category.color|  
|---------------|-------------|--------------------------------|  
|![Split button pressed](../notintoc/media/0303-056_splitbuttonpressed.png "0303-056_SplitButtonPressed")<br /><br /> **Split button (pressed)**|Background|`Environment.CommandBarMouseDownBackgroundBegin`<br /><br /> While not used in modern themed UI, there are gradient stops and values for this background.|  
|![Split button pressed](../notintoc/media/0303-056_splitbuttonpressed.png "0303-056_SplitButtonPressed")<br /><br /> **Split button (pressed)**|Foreground (Text)|`Environment.CommandBarTextMouseDown`|  
|![Split button pressed](../notintoc/media/0303-056_splitbuttonpressed.png "0303-056_SplitButtonPressed")<br /><br /> **Split button (pressed)**|Foreground (Glyph)|`Environment.CommandBarSplitButtonMouseDownGlyph`|  
|![Split button pressed](../notintoc/media/0303-056_splitbuttonpressed.png "0303-056_SplitButtonPressed")<br /><br /> **Split button (pressed)**|Border|`Environment.CommandBarBorder`|  
|![Split button pressed](../notintoc/media/0303-056_splitbuttonpressed.png "0303-056_SplitButtonPressed")<br /><br /> **Split button (pressed)**|Separator|N/A|  
  
 **Disabled**  
  
|Component|Element|Token name: Category.color|  
|---------------|-------------|--------------------------------|  
|![Split button disabled](../notintoc/media/0303-057_splitbuttondisabled.png "0303-057_SplitButtonDisabled")<br /><br /> **Split button (disabled)**|Background|N/A|  
|![Split button disabled](../notintoc/media/0303-057_splitbuttondisabled.png "0303-057_SplitButtonDisabled")<br /><br /> **Split button (disabled)**|Foreground (Text)|`Environment.ComboBoxItemTextInactive`|  
|![Split button disabled](../notintoc/media/0303-057_splitbuttondisabled.png "0303-057_SplitButtonDisabled")<br /><br /> **Split button (disabled)**|Foreground (Glyph)|`Environment.CommandBarTextInactive`|  
|![Split button disabled](../notintoc/media/0303-057_splitbuttondisabled.png "0303-057_SplitButtonDisabled")<br /><br /> **Split button (disabled)**|Border|N/A|  
|![Split button disabled](../notintoc/media/0303-057_splitbuttondisabled.png "0303-057_SplitButtonDisabled")<br /><br /> **Split button (disabled)**|Separator|N/A|  
  
##### ‘More options’ and ‘Overflow’ buttons  
 The "More options" button is used when a command bar group is customizable by either adding or removing related command bar buttons. The "Overflow" button appears when a command bar is truncated due to lack of horizontal space, and on click shows a menu containing the command bar buttons that cannot be displayed. Colors for these two buttons are controlled by the same set of token names.  
  
 ![More options redline](../notintoc/media/0303-058_moreoptionsredline.png "0303-058_MoreOptionsRedline")  
  
 Use …  
 for custom 'More options' or 'Overflow' buttons.  
  
 Do not use …  
 for buttons that don't have similar functionality to a 'More options' or 'Overflow' button.  
  
 **Default**  
  
|Component|Element|Token name: Category.color|  
|---------------|-------------|--------------------------------|  
|![More options](../notintoc/media/0303-059_moreoptions.png "0303-059_MoreOptions")<br /><br /> **More options**|Background|`Environment.CommandBarOptionsBackground`|  
|![More options](../notintoc/media/0303-059_moreoptions.png "0303-059_MoreOptions")<br /><br /> **More options**|Foreground (Glyph)|`Environment.CommandBarOptionsGlyph`|  
|![Overflow button](../notintoc/media/0303-060_overflow.png "0303-060_Overflow")<br /><br /> **Overflow**|Background|`Environment.CommandBarOptionsBackground`|  
|![Overflow button](../notintoc/media/0303-060_overflow.png "0303-060_Overflow")<br /><br /> **Overflow**|Foreground (Glyph)|`Environment.CommandBarOptionsGlyph`|  
  
 **Hover**  
  
|Component|Element|Token name: Category.color|  
|---------------|-------------|--------------------------------|  
|![More options on hover](../notintoc/media/0303-061_moreoptionshover.png "0303-061_MoreOptionsHover")<br /><br /> **More options**|Background|`Environment.CommandBarOptionsMouseOverBackgroundBegin`<br /><br /> While not used in modern themed UI, there are gradient stops and values for this background.|  
|![More options on hover](../notintoc/media/0303-061_moreoptionshover.png "0303-061_MoreOptionsHover")<br /><br /> **More options**|Foreground (Glyph)|`Environment.CommandBarOptionsMouseDownGlyph`|  
|![Overflow on hover](../notintoc/media/0303-062_overflowoptions.png "0303-062_OverflowOptions")<br /><br /> **Overflow**|Background|`Environment.CommandBarOptionsMouseOverBackgroundBegin`<br /><br /> While not used in modern themed UI, there are gradient stops and values for this background.|  
|![Overflow on hover](../notintoc/media/0303-062_overflowoptions.png "0303-062_OverflowOptions")<br /><br /> **Overflow**|Foreground (Glyph)|`Environment.CommandBarOptionsMouseDownGlyph`|  
  
 **Pressed**  
  
|Component|Element|Token name: Category.color|  
|---------------|-------------|--------------------------------|  
|![More options pressed](../notintoc/media/0303-063_moreoptionspressed.png "0303-063_MoreOptionsPressed")<br /><br /> **More options**|Background|`Environment.CommandBarOptionsMouseDownBackgroundBegin`<br /><br /> While not used in modern themed UI, there are gradient stops and values for this background.|  
|![More options pressed](../notintoc/media/0303-063_moreoptionspressed.png "0303-063_MoreOptionsPressed")<br /><br /> **More options**|Foreground (Glyph)|`Environment.CommandBarOptionsMouseDownGlyph`|  
|![Overflow pressed](../notintoc/media/0303-064_overflowpressed.png "0303-064_OverflowPressed")<br /><br /> **Overflow**|Background|`Environment.CommandBarOptionsMouseDownBackgroundBegin`<br /><br /> While not used in modern themed UI, there are gradient stops and values for this background.|  
|![Overflow pressed](../notintoc/media/0303-064_overflowpressed.png "0303-064_OverflowPressed")<br /><br /> **Overflow**|Foreground (Glyph)|`Environment.CommandBarOptionsMouseDownGlyph`|  
  
### Document windows  
 There is no need to replicate document windows, because they are provided by the Visual Studio environment. However, you might decide that you want to leverage the colors used in document windows so that your UI always appears consistent with this part of the Visual Studio environment.  
  
 When using document window color tokens, you must be careful to use them only for similar elements, and always in pairs. If you do not do so, you will have unexpected results in your UI.  
  
#### Document window frame  
 Document windows can be either docked in the IDE or floating as a separate window. When a document window is floating outside the IDE, it still sits in a document well, and has background, border, text, and tab colors that are the same as when it is part of the IDE. However, the document sits inside a frame that has its own background, border, and text colors. When tool windows are docked in the document well, they inherit the behavior and color for their tabs from document window token names.  
  
 ![Docked document window redline](../notintoc/media/0303-065_dockeddocumentwindowredline.png "0303-065_DockedDocumentWindowRedline")  
  
 **Docked document window**  
  
 ![Floating document window redline](../notintoc/media/0303-066_floatingdocumentwindowredline.png "0303-066_FloatingDocumentWindowRedline")  
  
 **Floating document window**  
  
 Use …  
 anywhere you are creating UI that you want to match the document window.  
  
 Do not use …  
 for any UI that you don't want automatically to change if the shell has a theme update.  
  
 **Default**  
  
|Component|Element|Token name: Category.color|  
|---------------|-------------|--------------------------------|  
|Document: docked or floating|Background|Depends on document type|  
|Document: docked or floating|Foreground (Text)|Depends on document type|  
|Document: docked or floating|Border|`Environment.ToolWindowBorder`|  
|![Frame focused](../notintoc/media/0303-067_framefocused.png "0303-067_FrameFocused")<br /><br /> **Frame: floating, focused**|Background|`Environment.ToolWindowFloatingFrame`|  
|![Frame focused](../notintoc/media/0303-067_framefocused.png "0303-067_FrameFocused")<br /><br /> **Frame: floating, focused**|Foreground (Text)|`Environment.ToolWindowFloatingFrame`|  
|![Frame focused](../notintoc/media/0303-067_framefocused.png "0303-067_FrameFocused")<br /><br /> **Frame: floating, focused**|Foreground (Glyph)|`Environment.RaftedWindowButtonActiveGlyph`|  
|![Frame focused](../notintoc/media/0303-067_framefocused.png "0303-067_FrameFocused")<br /><br /> **Frame: floating, focused**|Border|`Environment.MainWindowActiveDefaultBorder`|  
|![Frame focused](../notintoc/media/0303-067_framefocused.png "0303-067_FrameFocused")<br /><br /> **Frame: floating, focused**|Border (Glyph)|`Environment.RaftedWindowButtonActiveBorder`<br /><br /> Set to transparent|  
|![Frame unfocused](../notintoc/media/0303-068_frameunfocused.png "0303-068_FrameUnfocused")<br /><br /> **Frame: floating, unfocused**|Background|`Environment.ToolWindowFloatingFrameInactive`|  
|![Frame unfocused](../notintoc/media/0303-068_frameunfocused.png "0303-068_FrameUnfocused")<br /><br /> **Frame: floating, unfocused**|Foreground (Text)|`Environment.ToolWindowFloatingFrameInactive`|  
|![Frame unfocused](../notintoc/media/0303-068_frameunfocused.png "0303-068_FrameUnfocused")<br /><br /> **Frame: floating, unfocused**|Foreground (Glyph)|`Environment.RaftedWindowButtonInactiveGlyph`|  
|![Frame unfocused](../notintoc/media/0303-068_frameunfocused.png "0303-068_FrameUnfocused")<br /><br /> **Frame: floating, unfocused**|Border|`Environment.MainWindowInactiveBorder`|  
|![Frame unfocused](../notintoc/media/0303-068_frameunfocused.png "0303-068_FrameUnfocused")<br /><br /> **Frame: floating, unfocused**|Border (Glyph)|`Environment.RaftedWindowButtonInactiveBorder`<br /><br /> Set to transparent|  
  
 **Hover**  
  
|Component|Element|Token name: Category.color|  
|---------------|-------------|--------------------------------|  
|![Frame focused on hover](../notintoc/media/0303-069_framefocusedhover.png "0303-069_FrameFocusedHover")<br /><br /> **Frame: floating, focused**|Background (Glyph)|`Environment.RaftedWindowButtonHoverActive`|  
|![Frame focused on hover](../notintoc/media/0303-069_framefocusedhover.png "0303-069_FrameFocusedHover")<br /><br /> **Frame: floating, focused**|Foreground (Glyph)|`Environment.RaftedWindowButtonHoverActiveGlyph`|  
|![Frame focused on hover](../notintoc/media/0303-069_framefocusedhover.png "0303-069_FrameFocusedHover")<br /><br /> **Frame: floating, focused**|Border (Glyph)|`Environment.RaftedWindowButtonHoverActiveBorder`|  
|![Frame unfocused on hover](../notintoc/media/0303-070_frameunfocusedhover.png "0303-070_FrameUnfocusedHover")<br /><br /> **Frame: floating, unfocused**|Background (Glyph)|`EnvironmentRaftedWindowButtonHoverInactive`|  
|![Frame unfocused on hover](../notintoc/media/0303-070_frameunfocusedhover.png "0303-070_FrameUnfocusedHover")<br /><br /> **Frame: floating, unfocused**|Foreground (Glyph)|`Environment.RaftedWindowButtonHoverInactiveGlyph`|  
|![Frame unfocused on hover](../notintoc/media/0303-070_frameunfocusedhover.png "0303-070_FrameUnfocusedHover")<br /><br /> **Frame: floating, unfocused**|Border (Glyph)|`Environment.RaftedWindowButtonHoverInactiveBorder`|  
  
 **Pressed**  
  
|Component|Element|Token name: Category.color|  
|---------------|-------------|--------------------------------|  
|![Frame focused pressed](../notintoc/media/0303-071_framefocusedpressed.png "0303-071_FrameFocusedPressed")<br /><br /> **Frame: floating, focused**|Background (Glyph)|`Environment.RaftedWindowButtonDown`|  
|![Frame focused pressed](../notintoc/media/0303-071_framefocusedpressed.png "0303-071_FrameFocusedPressed")<br /><br /> **Frame: floating, focused**|Foreground (Glyph)|`Environment.RaftedWindowButtonDownGlyph`|  
|![Frame focused pressed](../notintoc/media/0303-071_framefocusedpressed.png "0303-071_FrameFocusedPressed")<br /><br /> **Frame: floating, focused**|Border (Glyph)|`Environment.RaftedWindowButtonDownBorder`|  
  
#### Document tabs  
 Document tabs sit in the tab channel to indicate which documents are currently open, along with which one is the current selected or active document. Tool windows can also be docked in the document tab channel if the user places them there. In this situation, they use the same tab colors as document windows. If you are creating UI that you want to always match the document window colors (including theme updates or if new themes are installed), then reference these color tokens.  
  
 ![Document tab redline](../notintoc/media/0303-072_documenttabredline.png "0303-072_DocumentTabRedline")  
  
 Use …  
 anywhere you are creating UI that you want to match document tabs and automatically pick up theme updates or new theme colors.  
  
 Do not use …  
 for any UI that you don’t want to change automatically when the shell has a theme update.  
  
##### Open document tabs  
 Each open document has a tab in the document tab channel that displays its name. Documents can be either selected or open in the background, and their tabs reflect these states:  
  
-   The selected tab represents the document that is currently displayed in the document well. A selected tab has a document border that extends across the top edge of the document well.  
  
-   Background tabs are any document tabs that are not the currently selected tab. Once clicked, they become the selected tab and acquire all background, border, and text colors from those token names.  
  
 ![Open document tab redline](../notintoc/media/0303-073_opendocumenttabredline.png "0303-073_OpenDocumentTabRedline")  
  
 Use …  
 when you are creating custom document tabs.  
  
 Do not use …  
 -   for provisional (preview) tabs.  
  
-   for any UI that you don't want to change automatically if the shell has a theme update.  
  
##### Selected tab  
 **Focused**  
  
|Component|Element|Token name: Category.color|  
|---------------|-------------|--------------------------------|  
|![Selected tab focused](../notintoc/media/0303-074_selectedtabfocused.png "0303-074_SelectedTabFocused")<br /><br /> **Selected document tab, focused**|Background|`Environment.FileTabSelectedGradientTop`<br /><br /> While not used in modern themed UI, there are gradient stops and values for this background.|  
|![Selected tab focused](../notintoc/media/0303-074_selectedtabfocused.png "0303-074_SelectedTabFocused")<br /><br /> **Selected document tab, focused**|Foreground (Text)|`Environment.FileTabSelectedText`|  
|![Selected tab focused](../notintoc/media/0303-074_selectedtabfocused.png "0303-074_SelectedTabFocused")<br /><br /> **Selected document tab, focused**|Border|`Environment.FileTabSelectedBorder`<br /><br /> Set to same color as background.|  
|![Selected tab focused](../notintoc/media/0303-074_selectedtabfocused.png "0303-074_SelectedTabFocused")<br /><br /> **Selected document tab, focused**|Document border|`Environment.FileTabDocumentBorderBackground`|  
  
 **Unfocused**  
  
|Component|Element|Token name: Category.color|  
|---------------|-------------|--------------------------------|  
|![Selected tab unfocused](../notintoc/media/0303-075_selectedtabunfocused.png "0303-075_SelectedTabUnfocused")<br /><br /> **Selected document tab, unfocused**|Background|`Environment.FileTabInactiveGradientTop`<br /><br /> While not used in modern themed UI, there are gradient stops and values for this background.|  
|![Selected tab unfocused](../notintoc/media/0303-075_selectedtabunfocused.png "0303-075_SelectedTabUnfocused")<br /><br /> **Selected document tab, unfocused**|Foreground (Text)|`Environment.FileTabInactiveText`|  
|![Selected tab unfocused](../notintoc/media/0303-075_selectedtabunfocused.png "0303-075_SelectedTabUnfocused")<br /><br /> **Selected document tab, unfocused**|Border|`Environment.FileTabInactiveBorder`<br /><br /> Set to same color as background.|  
|![Selected tab unfocused](../notintoc/media/0303-075_selectedtabunfocused.png "0303-075_SelectedTabUnfocused")<br /><br /> **Selected document tab, unfocused**|Document border|`Environment.FileTabInactiveDocumentBorderBackground`|  
  
##### Background tab  
 **Default**  
  
|Component|Element|Token name: Color.category|  
|---------------|-------------|--------------------------------|  
|![Background tab](../notintoc/media/0303-076_backgroundtab.png "0303-076_BackgroundTab")<br /><br /> **Background tab default**|Background|`Environment.FileTabBackground`|  
|![Background tab](../notintoc/media/0303-076_backgroundtab.png "0303-076_BackgroundTab")<br /><br /> **Background tab default**|Foreground (Text)|`Environment.FileTabText`|  
|![Background tab](../notintoc/media/0303-076_backgroundtab.png "0303-076_BackgroundTab")<br /><br /> **Background tab default**|Border|`Environment.FileTabBorder`<br /><br /> Set to same color as background.|  
  
 **Hover**  
  
|Component|Element|Token name: Color.category|  
|---------------|-------------|--------------------------------|  
|![Background tab on hover](../notintoc/media/0303-077_backgroundtabhover.png "0303-077_BackgroundTabHover")<br /><br /> **Background tab on hover**|Background|`Environment.FileTabHotGradientTop`<br /><br /> While not used in modern themed UI, there are gradient stops and values for this background.|  
|![Background tab on hover](../notintoc/media/0303-077_backgroundtabhover.png "0303-077_BackgroundTabHover")<br /><br /> **Background tab on hover**|Foreground (Text)|`Environment.FileTabHotText`|  
|![Background tab on hover](../notintoc/media/0303-077_backgroundtabhover.png "0303-077_BackgroundTabHover")<br /><br /> **Background tab on hover**|Border|`Environment.FileTabHotBorder`<br /><br /> Set to same color as background.|  
  
##### Preview tab  
 The preview tab appears on the right side of the document tab channel when the user clicks an item in the Solution Explorer tool window. It acts as a preview of the document and also gives the user the option to keep the document open on the left side of the document tab channel. Only one preview tab open can be open at a time. Preview tabs have both background and selected states, like open tabs, and can be focused or unfocused in their active state.  
  
 ![Preview tab redline](../notintoc/media/0303-078_previewtabredline.png "0303-078_PreviewTabRedline")  
  
 Use …  
 anywhere you are creating provisional preview and want some element to match the current preview tab color.  
  
 Do not use …  
 -   for any kind of document or tab that is not provisional (preview).  
  
-   for any UI that you don't want to change automatically if the shell has a theme update.  
  
 **Selected preview tab: Focused**  
  
|Component|Element|Token name: Category.color|  
|---------------|-------------|--------------------------------|  
|![Preview tab focused](../notintoc/media/0303-079_previewtabfocused.png "0303-079_PreviewTabFocused")<br /><br /> **Focused preview tab**|Background|`Environment.FileTabProvisionalSelectedActive`|  
|![Preview tab focused](../notintoc/media/0303-079_previewtabfocused.png "0303-079_PreviewTabFocused")<br /><br /> **Focused preview tab**|Foreground (Text)|`Environment.FileTabProvisionalSelectedActiveForeground`|  
|![Preview tab focused](../notintoc/media/0303-079_previewtabfocused.png "0303-079_PreviewTabFocused")<br /><br /> **Focused preview tab**|Border|`Environment.FileTabProvisionalSelectedActiveBorder`<br /><br /> Set to same color as background.|  
|![Preview tab focused](../notintoc/media/0303-079_previewtabfocused.png "0303-079_PreviewTabFocused")<br /><br /> **Focused preview tab**|Document border|`Environment.FileTabProvisionalSelectedActiveBorder`|  
  
 **Selected preview tab: Unfocused**  
  
|Component|Element|Token name: Category.color|  
|---------------|-------------|--------------------------------|  
|![Preview tab unfocused](../notintoc/media/0303-080_previewtabunfocused.png "0303-080_PreviewTabUnfocused")<br /><br /> **Unfocused preview tab**|Background|`Environment.FileTabProvisionalSelectedInactive`|  
|![Preview tab unfocused](../notintoc/media/0303-080_previewtabunfocused.png "0303-080_PreviewTabUnfocused")<br /><br /> **Unfocused preview tab**|Foreground (Text)|`Environment.FileTabProvisionalSelectedInactiveForeground`|  
|![Preview tab unfocused](../notintoc/media/0303-080_previewtabunfocused.png "0303-080_PreviewTabUnfocused")<br /><br /> **Unfocused preview tab**|Border|`Environment.FileTabProvisionalSelectedInactiveBorder`|  
|![Preview tab unfocused](../notintoc/media/0303-080_previewtabunfocused.png "0303-080_PreviewTabUnfocused")<br /><br /> **Unfocused preview tab**|Document border|`Environment.FileTabProvisionalSelectedInactiveBorder`|  
  
 **Background preview tab: Default**  
  
|Component|Element|Token name: Category.color|  
|---------------|-------------|--------------------------------|  
|![Preview background tab](../notintoc/media/0303-081_previewbackgroundtab.png "0303-081_PreviewBackgroundTab")<br /><br /> **Preview tab background tab**|Background|`Environment.FileTabProvisionalInactive`|  
|![Preview background tab](../notintoc/media/0303-081_previewbackgroundtab.png "0303-081_PreviewBackgroundTab")<br /><br /> **Preview tab background tab**|Foreground (Text)|`Environment.FileTabProvisionalInactiveForeground`|  
|![Preview background tab](../notintoc/media/0303-081_previewbackgroundtab.png "0303-081_PreviewBackgroundTab")<br /><br /> **Preview tab background tab**|Border|`Environment.FileTabProvisionalInactiveBorder`<br /><br /> Set to same color as background.|  
  
 **Background preview tab: Hover**  
  
|Component|Element|Token name: Category.color|  
|---------------|-------------|--------------------------------|  
|![Preview background tab on hover](../notintoc/media/0303-082_previewbackgroundtabhover.png "0303-082_PreviewBackgroundTabHover")<br /><br /> **Preview tab background tab on hover**|Background|`Environment.FileTabProvisionalHover`|  
|![Preview background tab on hover](../notintoc/media/0303-082_previewbackgroundtabhover.png "0303-082_PreviewBackgroundTabHover")<br /><br /> **Preview tab background tab on hover**|Foreground (Text)|`Environment.FileTabProvisionalHoverForeground`|  
|![Preview background tab on hover](../notintoc/media/0303-082_previewbackgroundtabhover.png "0303-082_PreviewBackgroundTabHover")<br /><br /> **Preview tab background tab on hover**|Border|`Environment.FileTabProvisionalHoverBorder`<br /><br /> Set to same color as background.|  
  
##### Document overflow button  
 The document overflow button is present if there are one or more documents open, regardless of whether there is vertical space in the current configuration to fit all document tabs. The document overflow drop-down menu, which is controlled by the **CommandBarMenu** colors (see [Menus](../notintoc/shared-colors.md#BKMK_CommandMenus)), displays a list of all open documents, both visible and hidden, and the overflow glyph changes depending on whether all the open documents are displayed in the tab channel.  
  
 ![Overflow redline](../notintoc/media/0303-083_overflowredline.png "0303-083_OverflowRedline")  
  
 Use …  
 when you are creating a custom document overflow button.  
  
 Do not use …  
 -   for UI that is not similar to an overflow button.  
  
-   for command bar overflow buttons.  
  
 **Default**  
  
|Component|Element|Token name: Category.color|  
|---------------|-------------|--------------------------------|  
|![Overflow](../notintoc/media/0303-084_overflow.png "0303-084_Overflow")<br /><br /> **Document overflow button**|Background|`Environment.DocWellOverflowButtonBackground`|  
|![Overflow](../notintoc/media/0303-084_overflow.png "0303-084_Overflow")<br /><br /> **Document overflow button**|Foreground (Glyph)|`Environment.DocWellOverflowButtonGlyph`|  
|![Overflow](../notintoc/media/0303-084_overflow.png "0303-084_Overflow")<br /><br /> **Document overflow button**|Border|N/A|  
  
 **Hover**  
  
|Component|Element|Token name: Category.color|  
|---------------|-------------|--------------------------------|  
|![Overflow on hover](../notintoc/media/0303-085_overflowhover.png "0303-085_OverflowHover")<br /><br /> **Document overflow button on hover**|Background|`Environment.DocWellOverflowButtonMouseOverBackground`|  
|![Overflow on hover](../notintoc/media/0303-085_overflowhover.png "0303-085_OverflowHover")<br /><br /> **Document overflow button on hover**|Foreground (Glyph)|`Environment.DocWellOverflowButtonMouseOverGlyph`|  
|![Overflow on hover](../notintoc/media/0303-085_overflowhover.png "0303-085_OverflowHover")<br /><br /> **Document overflow button on hover**|Border|`Environment.DocWellOverflowButtonMouseOverBorder`|  
  
 **Pressed**  
  
|Component|Element|Token name: Category.color|  
|---------------|-------------|--------------------------------|  
|![Overflow pressed](../notintoc/media/0303-086_overflowpressed.png "0303-086_OverflowPressed")<br /><br /> **Pressed document overflow button**|Background|`Environment.DocWellOverflowButtonMouseDownBackground`|  
|![Overflow pressed](../notintoc/media/0303-086_overflowpressed.png "0303-086_OverflowPressed")<br /><br /> **Pressed document overflow button**|Foreground (Glyph)|`Environment.DocWellOverflowButtonMouseDownGlyph`|  
|![Overflow pressed](../notintoc/media/0303-086_overflowpressed.png "0303-086_OverflowPressed")<br /><br /> **Pressed document overflow button**|Border|`Environment.DocWellOverflowButtonMouseDownBorder`|  
  
### Tool windows  
 There is no need to replicate tool windows, because they are provided by the Visual Studio environment. However, you might decide that you want to leverage the colors used in tool windows so that your UI always appears consistent with this part of the Visual Studio environment.  
  
 ![Tool window redline](../notintoc/media/0303-087_toolwindowredline.png "0303-087_ToolWindowRedline")  
  
 Use …  
 anywhere you are creating UI that you want to match tool windows.  
  
 Do not use …  
 for any UI that you don't want to change automatically if the shell has a theme update.  
  
#### Tool window frame  
 Tool windows in Visual Studio are used for many different tasks, and can exist in one of several different states. If a tool window is open, it can be assigned to any of the four sides of the document area. Tool windows can also float outside of the IDE, which allows them to be repositioned anywhere within the user's screen. Floating windows always sit on top of the IDE. Finally, tool windows can be docked as document windows and appear as a tab in the document well. Tool windows that have been docked as document windows are colored in part using document window token names.  
  
 ![Tool window frame redline](../notintoc/media/0303-088_toolwindowframeredline.png "0303-088_ToolWindowFrameRedline")  
  
 Use …  
 anywhere you are creating UI that you want to match tool windows.  
  
 Do not use …  
 for any UI that you don't want to change automatically if the shell has a theme update.  
  
 **Docked**  
  
|Component|Element|Token name: Category.color|  
|---------------|-------------|--------------------------------|  
|![Tool window docked](../notintoc/media/0303-089_toolwindowdocked.png "0303-089_ToolWindowDocked")|Background|`Environment.ToolWindowBackground`|  
|![Tool window docked](../notintoc/media/0303-089_toolwindowdocked.png "0303-089_ToolWindowDocked")|Border|`Environment.ToolWindowBorder`|  
  
 **Floating: focused**  
  
|Component|Element|Token name: Category.color|  
|---------------|-------------|--------------------------------|  
|![Tool window focused](../notintoc/media/0303-090_toolwindowfocused.png "0303-090_ToolWindowFocused")|Background|`Environment.ToolWindowBackground`|  
|![Tool window focused](../notintoc/media/0303-090_toolwindowfocused.png "0303-090_ToolWindowFocused")|Border|`Environment.MainWindowActiveDefaultBorder`|  
  
 **Floating: unfocused**  
  
|Component|Element|Token name: Category.color|  
|---------------|-------------|--------------------------------|  
|![Tool window unfocused](../notintoc/media/0303-091_toolwindowunfocused.png "0303-091_ToolWindowUnfocused")|Background|`Environment.ToolWindowBackground`|  
|![Tool window unfocused](../notintoc/media/0303-091_toolwindowunfocused.png "0303-091_ToolWindowUnfocused")|Border|`Environment.MainWindowInactiveBorder`|  
  
#### Tool window title bar  
 The title bar border is not a true border, but a thick line across the top of the title bar. It does not have a token name for its unfocused state.  
  
 ![Tool window title bar redline](../notintoc/media/0303-092_toolwindowtitlebarredline.png "0303-092_ToolWindowTitleBarRedline")  
  
 Use …  
 anywhere you are creating UI that you want to match tool windows.  
  
 Do not use …  
 for any UI that you don't want to change automatically if the shell has a theme update.  
  
 **Focused**  
  
|Component|Element|Token name: Category.color|  
|---------------|-------------|--------------------------------|  
|![Title bar focused](../notintoc/media/0303-093_titlebarfocused.png "0303-093_TitleBarFocused")<br /><br /> **Focused title bar**|Background|`Environment.TitleBarActiveGradientBegin`<br /><br /> While not used in modern themed UI, there are gradient stops and values for this background.|  
|![Title bar focused](../notintoc/media/0303-093_titlebarfocused.png "0303-093_TitleBarFocused")<br /><br /> **Focused title bar**|Foreground (Text)|`Environment.TitleBarActiveText`|  
|![Title bar focused](../notintoc/media/0303-093_titlebarfocused.png "0303-093_TitleBarFocused")<br /><br /> **Focused title bar**|Border|`Environment.TitleBarActiveBorder`<br /><br /> Set to same color as background.|  
|![Title bar focused](../notintoc/media/0303-093_titlebarfocused.png "0303-093_TitleBarFocused")<br /><br /> **Focused title bar**|Drag handle|`Environment.TitleBarDragHandleActive`|  
  
 **Unfocused**  
  
|Component|Element|Token name: Category.color|  
|---------------|-------------|--------------------------------|  
|![Title bar unfocused](../notintoc/media/0303-094_titlebarunfocused.png "0303-094_TitleBarUnfocused")<br /><br /> **Unfocused title bar**|Background|`Environment.TitleBarInactiveGradientBegin`<br /><br /> While not used in modern themed UI, there are gradient stops and values for this background.|  
|![Title bar unfocused](../notintoc/media/0303-094_titlebarunfocused.png "0303-094_TitleBarUnfocused")<br /><br /> **Unfocused title bar**|Foreground (Text)|`Environment.TitleBarInactiveText`|  
|![Title bar unfocused](../notintoc/media/0303-094_titlebarunfocused.png "0303-094_TitleBarUnfocused")<br /><br /> **Unfocused title bar**|Border|N/A|  
|![Title bar unfocused](../notintoc/media/0303-094_titlebarunfocused.png "0303-094_TitleBarUnfocused")<br /><br /> **Unfocused title bar**|Drag handle|`Environment.TitleBarDragHandle`|  
  
##### Title bar buttons  
 ![Title bar button redline](../notintoc/media/0303-095_titlebarbuttonredline.png "0303-095_TitleBarButtonRedline")  
  
 Use …  
 for buttons that appear in UI that uses color tokens from the tool window title bars.  
  
 Do not use …  
 -   for buttons that appear in other locations.  
  
-   in any background/foreground combination other than specified.  
  
 **Default**  
  
|Component|Element|Token name: Category.color|  
|---------------|-------------|--------------------------------|  
|![Title bar button focused](../notintoc/media/0303-096_titlebarbuttonfocused.png "0303-096_TitleBarButtonFocused")<br /><br /> **Focused**|Background|N/A|  
|![Title bar button focused](../notintoc/media/0303-096_titlebarbuttonfocused.png "0303-096_TitleBarButtonFocused")<br /><br /> **Focused**|Foreground (Glyph)|`Environment.ToolWindowButtonActiveGlyph`|  
|![Title bar button focused](../notintoc/media/0303-096_titlebarbuttonfocused.png "0303-096_TitleBarButtonFocused")<br /><br /> **Focused**|Border|N/A|  
|![Title bar button unfocused](../notintoc/media/0303-097_titlebarbuttonunfocused.png "0303-097_TitleBarButtonUnfocused")<br /><br /> **Unfocused**|Background|N/A|  
|![Title bar button unfocused](../notintoc/media/0303-097_titlebarbuttonunfocused.png "0303-097_TitleBarButtonUnfocused")<br /><br /> **Unfocused**|Foreground (Glyph)|`Environment.ToolWindowButtonInactiveGlyph`|  
|![Title bar button unfocused](../notintoc/media/0303-097_titlebarbuttonunfocused.png "0303-097_TitleBarButtonUnfocused")<br /><br /> **Unfocused**|Border|N/A|  
  
 **Hover**  
  
|Component|Element|Token name: Category.color|  
|---------------|-------------|--------------------------------|  
|![Title bar button focused on hover](../notintoc/media/0303-098_titlebarbuttonfocusedhover.png "0303-098_TitleBarButtonFocusedHover")<br /><br /> **Focused**|Background|`Environment.ToolWindowButtonHoverActive`|  
|![Title bar button focused on hover](../notintoc/media/0303-098_titlebarbuttonfocusedhover.png "0303-098_TitleBarButtonFocusedHover")<br /><br /> **Focused**|Foreground (Glyph)|`Environment.ToolWindowButtonHoverActiveGlyph`|  
|![Title bar button focused on hover](../notintoc/media/0303-098_titlebarbuttonfocusedhover.png "0303-098_TitleBarButtonFocusedHover")<br /><br /> **Focused**|Border|`Environment.ToolWindowButtonHoverActiveBorder`|  
|![Title bar button unfocused on hover](../notintoc/media/0303-099_titlebarbuttonunfocusedhover.png "0303-099_TitleBarButtonUnfocusedHover")<br /><br /> **Unfocused**|Background|`Environment.ToolWindowButtonHoverInactive`|  
|![Title bar button unfocused on hover](../notintoc/media/0303-099_titlebarbuttonunfocusedhover.png "0303-099_TitleBarButtonUnfocusedHover")<br /><br /> **Unfocused**|Foreground (Glyph)|`Environment.ToolWindowButtonHoverInactiveGlyph`|  
|![Title bar button unfocused on hover](../notintoc/media/0303-099_titlebarbuttonunfocusedhover.png "0303-099_TitleBarButtonUnfocusedHover")<br /><br /> **Unfocused**|Border|`Environment.ToolWindowButtonHoverInactiveBorder`|  
  
 **Pressed**  
  
|Component|Element|Token name: Category.color|  
|---------------|-------------|--------------------------------|  
|![Title bar button focused and pressed](../notintoc/media/0303-100_titlebarbuttonfocusedpressed.png "0303-100_TitleBarButtonFocusedPressed")<br /><br /> **Focused**|Background|`Environment.ToolWindowButtonDown`|  
|![Title bar button focused and pressed](../notintoc/media/0303-100_titlebarbuttonfocusedpressed.png "0303-100_TitleBarButtonFocusedPressed")<br /><br /> **Focused**|Foreground (Glyph)|`Environment.ToolWindowButtonDownActiveGlyph`|  
|![Title bar button focused and pressed](../notintoc/media/0303-100_titlebarbuttonfocusedpressed.png "0303-100_TitleBarButtonFocusedPressed")<br /><br /> **Focused**|Border|`Environment.ToolWindowButtonDownBorder`|  
|![Title bar button unfocused and pressed](../notintoc/media/0303-101_titlebarbuttonunfocusedpressed.png "0303-101_TitleBarButtonUnfocusedPressed")<br /><br /> **Unfocused**|Background|`Environment.ToolWindowButtonDown`|  
|![Title bar button unfocused and pressed](../notintoc/media/0303-101_titlebarbuttonunfocusedpressed.png "0303-101_TitleBarButtonUnfocusedPressed")<br /><br /> **Unfocused**|Foreground (Glyph)|`Environment.ToolWindowButtonDownInactiveGlyph`|  
|![Title bar button unfocused and pressed](../notintoc/media/0303-101_titlebarbuttonunfocusedpressed.png "0303-101_TitleBarButtonUnfocusedPressed")<br /><br /> **Unfocused**|Border|`Environment.ToolWindowButtonDownBorder`|  
  
#### Tool window tabs  
 ![Tool window tab redline](../notintoc/media/0303-102_toolwindowtabredline.png "0303-102_ToolWindowTabRedline")  
  
 Use …  
 anywhere you are creating UI that you want to match tool windows.  
  
 Do not use …  
 for any UI that you don't want to change automatically if the shell has a theme update.  
  
 **Selected tab**  
  
|Component|Element|Token name: Category.color|  
|---------------|-------------|--------------------------------|  
|![Tool window tab focused](../notintoc/media/0303-103_toolwindowtabfocused.png "0303-103_ToolWindowTabFocused")<br /><br /> **Selected, focused tool window tab**|Background|`Environment.ToolWindowTabSelectedTab`|  
|![Tool window tab focused](../notintoc/media/0303-103_toolwindowtabfocused.png "0303-103_ToolWindowTabFocused")<br /><br /> **Selected, focused tool window tab**|Foreground (Text)|`Environment.ToolWindowTabSelectedActiveText`|  
|![Tool window tab focused](../notintoc/media/0303-103_toolwindowtabfocused.png "0303-103_ToolWindowTabFocused")<br /><br /> **Selected, focused tool window tab**|Border|`Environment.ToolWindowTabSelectedBorder`<br /><br /> Set to same color as background.|  
  
|Component|Element|Token name: Category.color|  
|---------------|-------------|--------------------------------|  
|![Tool window tab unfocused](../notintoc/media/0303-104_toolwindowtabunfocused.png "0303-104_ToolWindowTabUnfocused")<br /><br /> **Selected, unfocused tool window tab**|Background|`Environment.ToolWindowTabSelectedTab`|  
|![Tool window tab unfocused](../notintoc/media/0303-104_toolwindowtabunfocused.png "0303-104_ToolWindowTabUnfocused")<br /><br /> **Selected, unfocused tool window tab**|Foreground (Text)|`Environment.ToolWindowTabSelectedText`|  
|![Tool window tab unfocused](../notintoc/media/0303-104_toolwindowtabunfocused.png "0303-104_ToolWindowTabUnfocused")<br /><br /> **Selected, unfocused tool window tab**|Border|`Environment.ToolWindowTabSelectedBorder`<br /><br /> Set to same color as background.|  
  
 **Background tab**  
  
|Component|Element|Token name: Category.color|  
|---------------|-------------|--------------------------------|  
|![Tool window background tab](../notintoc/media/0303-105_toolwindowbackgroundtab.png "0303-105_ToolWindowBackgroundTab")<br /><br /> **Background tool window tab**|Background|`Environment.ToolWindowTabGradientBegin`<br /><br /> Gradient stops set to the same color value in Visual Studio 2013.<br /><br /> `Environment.ToolWindowTabGradientEnd`<br /><br /> Gradient stops set to the same color value in Visual Studio 2013.|  
|![Tool window background tab](../notintoc/media/0303-105_toolwindowbackgroundtab.png "0303-105_ToolWindowBackgroundTab")<br /><br /> **Background tool window tab**|Foreground (Text)|`Environment.ToolWindowTabText`|  
|![Tool window background tab](../notintoc/media/0303-105_toolwindowbackgroundtab.png "0303-105_ToolWindowBackgroundTab")<br /><br /> **Background tool window tab**|Border|`Environment.ToolWindowTabBorder`|  
  
|Component|Element|Token name: Category.color|  
|---------------|-------------|--------------------------------|  
|![Tool window background tab on hover](../notintoc/media/0303-106_toolwindowbackgroundtabhover.png "0303-106_ToolWindowBackgroundTabHover")<br /><br /> **Background tool window tab on hover**|Background|`Environment.ToolWindowTabMouseOverBackgroundBegin`<br /><br /> Gradient stops set to the same color value in Visual Studio 2013.<br /><br /> `Environment.ToolWindowTabMouseOverBackgroundEnd`<br /><br /> Gradient stops set to the same color value in Visual Studio 2013.|  
|![Tool window background tab on hover](../notintoc/media/0303-106_toolwindowbackgroundtabhover.png "0303-106_ToolWindowBackgroundTabHover")<br /><br /> **Background tool window tab on hover**|Foreground (Text)|`Environment.ToolWindowTabMouseOverText`|  
|![Tool window background tab on hover](../notintoc/media/0303-106_toolwindowbackgroundtabhover.png "0303-106_ToolWindowBackgroundTabHover")<br /><br /> **Background tool window tab on hover**|Border|`Environment.ToolWindowTabMouseOverBorder`<br /><br /> Set to same color as background.|  
  
#### Auto-hide tabs  
 ![Auto&#45;hide redline](../notintoc/media/0303-107_autohideredline.png "0303-107_AutoHideRedline")  
  
 Use …  
 anywhere you are creating UI that you want to match auto-hidden tool window tabs.  
  
 Do not use …  
 for any UI that you don’t want to change automatically if the shell has a theme update.  
  
 **Default**  
  
|Component|Element|Token name: Category.color|  
|---------------|-------------|--------------------------------|  
|![Auto&#45;hide tab](../notintoc/media/0303-108_autohidetab.png "0303-108_AutoHideTab")<br /><br /> **Default auto-hide tab**|Background|`Environment.AutoHideTabBackgroundBegin`<br /><br /> While not used in modern themed UI, there are gradient stops and values for this background.|  
|![Auto&#45;hide tab](../notintoc/media/0303-108_autohidetab.png "0303-108_AutoHideTab")<br /><br /> **Default auto-hide tab**|Foreground (Text)|`Environment.AutoHideTabText`|  
|![Auto&#45;hide tab](../notintoc/media/0303-108_autohidetab.png "0303-108_AutoHideTab")<br /><br /> **Default auto-hide tab**|Border|`Environment.AutoHideTabBorder`|  
  
 **Hover**  
  
|Component|Element|Token name: Category.color|  
|---------------|-------------|--------------------------------|  
|![Auto&#45;hide tab on hover](../notintoc/media/0303-109_autohidetabhover.png "0303-109_AutoHideTabHover")<br /><br /> **Auto-hide tab on hover**|Background|`Environment.AutoHideTabMouseOverBackgroundBegin`<br /><br /> While not used in modern themed UI, there are gradient stops and values for this background.|  
|![Auto&#45;hide tab on hover](../notintoc/media/0303-109_autohidetabhover.png "0303-109_AutoHideTabHover")<br /><br /> **Auto-hide tab on hover**|Foreground (Text)|`Environment.AutoHideTabMouseOverText`|  
|![Auto&#45;hide tab on hover](../notintoc/media/0303-109_autohidetabhover.png "0303-109_AutoHideTabHover")<br /><br /> **Auto-hide tab on hover**|Border|`Environment.AutoHideTabMouseOverBorder`|  
  
### Common shared controls  
 When you use a standard Visual Studio command bar in your feature, you will have access to styled shell controls, and you should not re-template these common controls. However, if you need to build a custom command bar, you might need to build custom controls as well. In that case, make sure to use the correct token names for each of the following controls so that your UI is consistent with the rest of Visual Studio.  
  
#### Search box  
 Whenever possible, use the common search control provided by the Visual Studio environment. Search box colors are found in the "SearchControl" category in the **ShellColors.pkgdef** file, which contains token names for the input field, action button, drop-down button, and drop-down menu.  
  
 A search box can be one of several states, some of which are mutually exclusive:  
  
-   "Focused" or "unfocused" refers to whether or not the cursor is in the text box.  
  
-   "Active" or "inactive" refers to whether the user has input a search query in the text box.  
  
-   "Hover" means that the user has moused over the search box with the mouse (this state overrides all other states).  
  
-   "Disabled" means that search functionality is turned off for the current context.  
  
 ![Search box redline](../notintoc/media/0303-110_searchboxredline.png "0303-110_SearchBoxRedline")  
  
 Use …  
 when you are designing a custom search box.  
  
 Do not use …  
 -   for anything that is not a search box.  
  
-   for anything that you do not want always to match the search box UI.  
  
 **Focused**  
  
|Component|Element|Token name: Category.color|  
|---------------|-------------|--------------------------------|  
|![Search input field focused](../notintoc/media/0303-111_searchinputfieldfocused.png "0303-111_SearchInputFieldFocused")<br /><br /> **Input field**|Background|`SearchControl.FocusedBackground`|  
|![Search input field focused](../notintoc/media/0303-111_searchinputfieldfocused.png "0303-111_SearchInputFieldFocused")<br /><br /> **Input field**|Foreground (Text)|`SearchControl.FocusedBackground`|  
|![Search input field focused](../notintoc/media/0303-111_searchinputfieldfocused.png "0303-111_SearchInputFieldFocused")<br /><br /> **Input field**|Border|`SearchControl.FocusedBorder`|  
|![Search input field focused](../notintoc/media/0303-111_searchinputfieldfocused.png "0303-111_SearchInputFieldFocused")<br /><br /> **Input field**|Separator|`SearchControl.FocusedDropDownSeparator`|  
|![Search action button focused](../notintoc/media/0303-112_searchactionbuttonfocused.png "0303-112_SearchActionButtonFocused")<br /><br /> **Action button**|Background|None|  
|![Search action button focused](../notintoc/media/0303-112_searchactionbuttonfocused.png "0303-112_SearchActionButtonFocused")<br /><br /> **Action button**|Foreground (Search glyph)|`SearchControl.SearchGlyph`|  
|![Search action button focused](../notintoc/media/0303-112_searchactionbuttonfocused.png "0303-112_SearchActionButtonFocused")<br /><br /> **Action button**|Foreground (Stop glyph)|`SearchControl.StopGlyph`|  
|![Search action button focused](../notintoc/media/0303-112_searchactionbuttonfocused.png "0303-112_SearchActionButtonFocused")<br /><br /> **Action button**|Foreground (Clear glyph)|`SearchControl.ClearGlyph`|  
|![Search action button focused](../notintoc/media/0303-112_searchactionbuttonfocused.png "0303-112_SearchActionButtonFocused")<br /><br /> **Action button**|Border|N/A|  
|![Search drop&#45;down button focused](../notintoc/media/0303-113_searchdropdownbuttonfocused.png "0303-113_SearchDropdownButtonFocused")<br /><br /> **Drop-down button**|Background|`SearchControl.FocusedDropDownButton`|  
|![Search drop&#45;down button focused](../notintoc/media/0303-113_searchdropdownbuttonfocused.png "0303-113_SearchDropdownButtonFocused")<br /><br /> **Drop-down button**|Foreground (Glyph)|`SearchControl.FocusedDropDownButtonGlyph`|  
|![Search drop&#45;down button focused](../notintoc/media/0303-113_searchdropdownbuttonfocused.png "0303-113_SearchDropdownButtonFocused")<br /><br /> **Drop-down button**|Border|`SearchControl.FocusedDropDownButtonBorder`|  
  
 **Unfocused**  
  
|Component|Element|Token name: Category.color|  
|---------------|-------------|--------------------------------|  
|![Search input field unfocused](../notintoc/media/0303-114_searchinputfieldunfocused.png "0303-114_SearchInputFieldUnfocused")<br /><br /> **Active input field**|Background|`SearchControl.SearchActiveBackground`|  
|![Search input field unfocused](../notintoc/media/0303-114_searchinputfieldunfocused.png "0303-114_SearchInputFieldUnfocused")<br /><br /> **Active input field**|Foreground (Text)|`SearchControl.SearchActiveBackground`|  
|![Search input field unfocused](../notintoc/media/0303-114_searchinputfieldunfocused.png "0303-114_SearchInputFieldUnfocused")<br /><br /> **Active input field**|Border|`SearchControl.UnfocusedBorder`|  
|![Search input field unfocused](../notintoc/media/0303-114_searchinputfieldunfocused.png "0303-114_SearchInputFieldUnfocused")<br /><br /> **Active input field**|Separator|`SearchControl.DropDownSeparator`|  
|![Search input field unfocused and inactive](../notintoc/media/0303-114-1_searchinputfieldunfocusedinactive.png "0303-114-1_SearchInputFieldUnfocusedInactive")<br /><br /> **Inactive input field**|Background|`SearchControl.Unfocused`|  
|![Search input field unfocused and inactive](../notintoc/media/0303-114-1_searchinputfieldunfocusedinactive.png "0303-114-1_SearchInputFieldUnfocusedInactive")<br /><br /> **Inactive input field**|Foreground (Text)|`SearchControl.Unfocused`|  
|![Search input field unfocused and inactive](../notintoc/media/0303-114-1_searchinputfieldunfocusedinactive.png "0303-114-1_SearchInputFieldUnfocusedInactive")<br /><br /> **Inactive input field**|Border|`SearchControl.UnfocusedBorder`|  
|![Search input field unfocused and inactive](../notintoc/media/0303-114-1_searchinputfieldunfocusedinactive.png "0303-114-1_SearchInputFieldUnfocusedInactive")<br /><br /> **Inactive input field**|Separator|`SearchControl.DropDownSeparator`|  
|![Search action button unfocused](../notintoc/media/0303-115_searchactionbuttonunfocused.png "0303-115_SearchActionButtonUnfocused")<br /><br /> **Action button**|Background|N/A|  
|![Search action button unfocused](../notintoc/media/0303-115_searchactionbuttonunfocused.png "0303-115_SearchActionButtonUnfocused")<br /><br /> **Action button**|Foreground (Search glyph)|`SearchControl.SearchGlyph`|  
|![Search action button unfocused](../notintoc/media/0303-115_searchactionbuttonunfocused.png "0303-115_SearchActionButtonUnfocused")<br /><br /> **Action button**|Foreground (Stop glyph)|`SearchControl.StopGlyph`|  
|![Search action button unfocused](../notintoc/media/0303-115_searchactionbuttonunfocused.png "0303-115_SearchActionButtonUnfocused")<br /><br /> **Action button**|Foreground (Clear glyph)|`SearchControl.ClearGlyph`|  
|![Search action button unfocused](../notintoc/media/0303-115_searchactionbuttonunfocused.png "0303-115_SearchActionButtonUnfocused")<br /><br /> **Action button**|Border|N/A|  
|![Search drop&#45;down button unfocused](../notintoc/media/0303-116_searchdropdownbuttonunfocused.png "0303-116_SearchDropdownButtonUnfocused")<br /><br /> **Drop-down button**|Background|`SearchControl.UnfocusedDropDownButton`|  
|![Search drop&#45;down button unfocused](../notintoc/media/0303-116_searchdropdownbuttonunfocused.png "0303-116_SearchDropdownButtonUnfocused")<br /><br /> **Drop-down button**|Foreground (Glyph)|`SearchControl.UnfocusedDropDownButtonGlyph`|  
|![Search drop&#45;down button unfocused](../notintoc/media/0303-116_searchdropdownbuttonunfocused.png "0303-116_SearchDropdownButtonUnfocused")<br /><br /> **Drop-down button**|Border|`SearchControl.UnfocusedDropDownButtonBorder`|  
  
 **Pressed**  
  
|Component|Element|Token name: Category.color|  
|---------------|-------------|--------------------------------|  
|![Search action button pressed](../notintoc/media/0303-116-1_searchactionbuttonpressed.png "0303-116-1_SearchActionButtonPressed")<br /><br /> **Action button**|Background|`SearchControl.ActionButtonMouseDown`|  
|![Search action button pressed](../notintoc/media/0303-116-1_searchactionbuttonpressed.png "0303-116-1_SearchActionButtonPressed")<br /><br /> **Action button**|Foreground (Glyph)|`SearchControl.ActionButtonMouseDownGlyph`|  
|![Search action button pressed](../notintoc/media/0303-116-1_searchactionbuttonpressed.png "0303-116-1_SearchActionButtonPressed")<br /><br /> **Action button**|Border|`SearchControl.ActionButtonMouseDownBorder`|  
|![Search drop&#45;down button pressed](../notintoc/media/0303-116-2_searchdropdownbuttonpressed.png "0303-116-2_SearchDropdownButtonPressed")<br /><br /> **Drop-down button**|Background|`SearchControl.MouseDownDropDownButton`|  
|![Search drop&#45;down button pressed](../notintoc/media/0303-116-2_searchdropdownbuttonpressed.png "0303-116-2_SearchDropdownButtonPressed")<br /><br /> **Drop-down button**|Foreground (Glyph)|`SearchControl.MouseDownDropDownButtonGlyph`|  
|![Search drop&#45;down button pressed](../notintoc/media/0303-116-2_searchdropdownbuttonpressed.png "0303-116-2_SearchDropdownButtonPressed")<br /><br /> **Drop-down button**|Border|`SearchControl.MouseDownDropDownButtonBorder`|  
  
 **Highlighted (Text only)**  
  
|Component|Element|Token name: Category.color|  
|---------------|-------------|--------------------------------|  
|![Search input field highlight](../notintoc/media/0303-120_searchinputfieldhighlight.png "0303-120_SearchInputFieldHighlight")<br /><br /> **Input field with text highlighted**|Background|`SearchControl.Selection`|  
|![Search input field highlight](../notintoc/media/0303-120_searchinputfieldhighlight.png "0303-120_SearchInputFieldHighlight")<br /><br /> **Input field with text highlighted**|Foreground (Text)|`SearchControl.FocusedBackground`|  
|![Search input field highlight](../notintoc/media/0303-120_searchinputfieldhighlight.png "0303-120_SearchInputFieldHighlight")<br /><br /> **Input field with text highlighted**|Border|None|  
|![Search input field highlight](../notintoc/media/0303-120_searchinputfieldhighlight.png "0303-120_SearchInputFieldHighlight")<br /><br /> **Input field with text highlighted**|Separator|`SearchControl.FocusedDropDownSeparator`|  
  
 **Disabled**  
  
|Component|Element|Token name: Category.color|  
|---------------|-------------|--------------------------------|  
|![Search input field disabled](../notintoc/media/0303-121_searchinputfielddisabled.png "0303-121_SearchInputFieldDisabled")<br /><br /> **Input field**|Background|`SearchControl.Disabled`|  
|![Search input field disabled](../notintoc/media/0303-121_searchinputfielddisabled.png "0303-121_SearchInputFieldDisabled")<br /><br /> **Input field**|Foreground (Text)|`SearchControl.Disabled`|  
|![Search input field disabled](../notintoc/media/0303-121_searchinputfielddisabled.png "0303-121_SearchInputFieldDisabled")<br /><br /> **Input field**|Border|`SearchControl.DisabledBorder`|  
|![Search input field disabled](../notintoc/media/0303-121_searchinputfielddisabled.png "0303-121_SearchInputFieldDisabled")<br /><br /> **Input field**|Separator|`SearchControl.DropDownSeparator`|  
|![Search action button disabled](../notintoc/media/0303-122_searchactionbuttondisabled.png "0303-122_SearchActionButtonDisabled")<br /><br /> **Action button**|Background|None|  
|![Search action button disabled](../notintoc/media/0303-122_searchactionbuttondisabled.png "0303-122_SearchActionButtonDisabled")<br /><br /> **Action button**|Foreground (Glyph)|`SearchControl.ActionButtonDisabledGlyph`|  
|![Search action button disabled](../notintoc/media/0303-122_searchactionbuttondisabled.png "0303-122_SearchActionButtonDisabled")<br /><br /> **Action button**|Border|None|  
|![Search drop&#45;down button disabled](../notintoc/media/0303-123_searchdropdownbuttondisabled.png "0303-123_SearchDropdownButtonDisabled")<br /><br /> **Drop-down button**|Background|None|  
|![Search drop&#45;down button disabled](../notintoc/media/0303-123_searchdropdownbuttondisabled.png "0303-123_SearchDropdownButtonDisabled")<br /><br /> **Drop-down button**|Foreground (Glyph)|`SearchControl.DisabledDownButtonGlyph`|  
|![Search drop&#45;down button disabled](../notintoc/media/0303-123_searchdropdownbuttondisabled.png "0303-123_SearchDropdownButtonDisabled")<br /><br /> **Drop-down button**|Border|None|  
  
##### Search drop-down lists  
 The search box dropdown menu has the potential to be slightly more complex than other dropdown menus in Visual Studio. The "suggested searches" and "search options" sections can appear alone or together in the menu and each one is colored separately. A line also separates these two sections when they appear together and a border surrounds the entire dropdown menu.  
  
 ![Search drop&#45;down redline](../notintoc/media/0303-124_searchdropdownredline.png "0303-124_SearchDropdownRedline")  
  
 Use …  
 -   when you are creating a custom search dropdown list.  
  
-   the correct token names for the correct list components.  
  
 Do not use …  
 -   for dropdown lists that appear in other contexts.  
  
-   in any background/foreground combination other than specified.  
  
 **Default (no other states)**  
  
|Element|Token name: Category.color|  
|-------------|--------------------------------|  
|Border|`SearchControl.PopupBorder`|  
|Separator|`SearchControl.PopupSectionHeaderSeparator`|  
|Shadow|`Environment.DropShadowBackground`|  
  
 **Default**  
  
|Component|Element|Token name: Category.color|  
|---------------|-------------|--------------------------------|  
|![Search suggested](../notintoc/media/0303-125_searchsuggested.png "0303-125_SearchSuggested")<br /><br /> **Suggested searches**|Background|`SearchControl.PopupItemsListBackgroundGradientBegin`<br /><br /> While not used in modern themed UI, there are gradient stops and values for this background.|  
|![Search suggested](../notintoc/media/0303-125_searchsuggested.png "0303-125_SearchSuggested")<br /><br /> **Suggested searches**|Foreground (Text)|`SearchControl.PopupItemText`|  
|![Search check box](../notintoc/media/0303-126_searchcheckbox.png "0303-126_SearchCheckbox")<br /><br /> **Search options (check box)**|Background|`SearchControl.PopupSectionBackgroundGradientBegin`<br /><br /> While not used in modern themed UI, there are gradient stops and values for this background.|  
|![Search options](../notintoc/media/0303-127_searchoptions.png "0303-127_SearchOptions")<br /><br /> **Search options (link)**|Background|`SearchControl.PopupSectionBackgroundGradientBegin`<br /><br /> While not used in modern themed UI, there are gradient stops and values for this background.|  
|![Search check box](../notintoc/media/0303-126_searchcheckbox.png "0303-126_SearchCheckbox")<br /><br /> **Search options (check box)**|Foreground (Check box text)|`SearchControl.PopupCheckboxText`|  
|![Search options](../notintoc/media/0303-127_searchoptions.png "0303-127_SearchOptions")<br /><br /> **Search options (link)**|Foreground (Check box text)|`SearchControl.PopupCheckboxText`|  
|![Search check box](../notintoc/media/0303-126_searchcheckbox.png "0303-126_SearchCheckbox")<br /><br /> **Search options (check box)**|Foreground (Link text)|`SearchControl.PopupButtonText`|  
|![Search options](../notintoc/media/0303-127_searchoptions.png "0303-127_SearchOptions")<br /><br /> **Search options (link)**|Foreground (Link text)|`SearchControl.PopupButtonText`|  
|![Search check box](../notintoc/media/0303-126_searchcheckbox.png "0303-126_SearchCheckbox")<br /><br /> **Search options (check box)**|Header background|`SearchControl.PopupSectionHeaderGradientBegin`<br /><br /> While not used in modern themed UI, there are gradient stops and values for this background.|  
|![Search options](../notintoc/media/0303-127_searchoptions.png "0303-127_SearchOptions")<br /><br /> **Search options (link)**|Header background|`SearchControl.PopupSectionHeaderGradientBegin`<br /><br /> While not used in modern themed UI, there are gradient stops and values for this background.|  
|![Search check box](../notintoc/media/0303-126_searchcheckbox.png "0303-126_SearchCheckbox")<br /><br /> **Search options (check box)**|Foreground (Header text)|`SearchControl.PopupSectionHeaderText`|  
|![Search options](../notintoc/media/0303-127_searchoptions.png "0303-127_SearchOptions")<br /><br /> **Search options (link)**|Foreground (Header text)|`SearchControl.PopupSectionHeaderText`|  
  
 **Hover**  
  
|Component|Element|Token name: Category.color|  
|---------------|-------------|--------------------------------|  
|![Search suggested on hover](../notintoc/media/0303-128_searchsuggestedhover.png "0303-128_SearchSuggestedHover")<br /><br /> **Suggested searches**|Background|`SearchControl.PopupControlMouseOverBackgroundGradientBegin`<br /><br /> While not used in modern themed UI, there are gradient stops and values for this background.|  
|![Search suggested on hover](../notintoc/media/0303-128_searchsuggestedhover.png "0303-128_SearchSuggestedHover")<br /><br /> **Suggested searches**|Foreground (Text)|`SearchControl.PopupMouseOverItemText`|  
|![Search suggested on hover](../notintoc/media/0303-128_searchsuggestedhover.png "0303-128_SearchSuggestedHover")<br /><br /> **Suggested searches**|Border|`SearchControl.PopupControlMouseOverBorder`|  
|![Search check box on hover](../notintoc/media/0303-129_searchcheckboxhover.png "0303-129_SearchCheckboxHover")<br /><br /> **Suggested searches (check box)**|Background|`SearchControl.PopupControlMouseOverBackgroundGradientBegin`<br /><br /> While not used in modern themed UI, there are gradient stops and values for this background.|  
|![Search options on hover](../notintoc/media/0303-130_searchoptionshover.png "0303-130_SearchOptionsHover")<br /><br /> **Search options**|Background|`SearchControl.PopupControlMouseOverBackgroundGradientBegin`<br /><br /> While not used in modern themed UI, there are gradient stops and values for this background.|  
|![Search check box on hover](../notintoc/media/0303-129_searchcheckboxhover.png "0303-129_SearchCheckboxHover")<br /><br /> **Suggested searches (check box)**|Foreground (Check box text)|`SearchControl.PopupCheckboxMouseDownText`|  
|![Search options on hover](../notintoc/media/0303-130_searchoptionshover.png "0303-130_SearchOptionsHover")<br /><br /> **Search options**|Foreground (Check box text)|`SearchControl.PopupCheckboxMouseDownText`|  
|![Search check box on hover](../notintoc/media/0303-129_searchcheckboxhover.png "0303-129_SearchCheckboxHover")<br /><br /> **Suggested searches (check box)**|Foreground (Link text)|`SearchControl.PopupButtonMouseDownText`|  
|![Search options on hover](../notintoc/media/0303-130_searchoptionshover.png "0303-130_SearchOptionsHover")<br /><br /> **Search options**|Foreground (Link text)|`SearchControl.PopupButtonMouseDownText`|  
|![Search check box on hover](../notintoc/media/0303-129_searchcheckboxhover.png "0303-129_SearchCheckboxHover")<br /><br /> **Suggested searches (check box)**|Border|`SearchControl.PopupControlMouseOverBorder`|  
|![Search options on hover](../notintoc/media/0303-130_searchoptionshover.png "0303-130_SearchOptionsHover")<br /><br /> **Search options**|Border|`SearchControl.PopupControlMouseOverBorder`|  
  
 **Pressed**  
  
|Component|Element|Token name: Category.color|  
|---------------|-------------|--------------------------------|  
|![Search suggested pressed](../notintoc/media/0303-131_searchsuggestedpressed.png "0303-131_SearchSuggestedPressed")<br /><br /> **Suggested searches (check box)**|Check box background|`SearchControl.PopupControlMouseDownBackgroundGradientBegin`<br /><br /> While not used in modern themed UI, there are gradient stops and values for this background.|  
|![Search options pressed](../notintoc/media/0303-132_searchoptionspressed.png "0303-132_SearchOptionsPressed")<br /><br /> **Search options**|Check box background|`SearchControl.PopupControlMouseDownBackgroundGradientBegin`<br /><br /> While not used in modern themed UI, there are gradient stops and values for this background.|  
|![Search suggested pressed](../notintoc/media/0303-131_searchsuggestedpressed.png "0303-131_SearchSuggestedPressed")<br /><br /> **Suggested searches (check box)**|Check box background|`SearchControl.PopupControlMouseDownBackgroundGradientEnd`<br /><br /> While not used in modern themed UI, there are gradient stops and values for this background.|  
|![Search options pressed](../notintoc/media/0303-132_searchoptionspressed.png "0303-132_SearchOptionsPressed")<br /><br /> **Search options**|Check box background|`SearchControl.PopupControlMouseDownBackgroundGradientEnd`<br /><br /> While not used in modern themed UI, there are gradient stops and values for this background.|  
|![Search suggested pressed](../notintoc/media/0303-131_searchsuggestedpressed.png "0303-131_SearchSuggestedPressed")<br /><br /> **Suggested searches (check box)**|Foreground (Check box text)|`SearchControl.PopupCheckboxMouseDownText`|  
|![Search options pressed](../notintoc/media/0303-132_searchoptionspressed.png "0303-132_SearchOptionsPressed")<br /><br /> **Search options**|Foreground (Check box text)|`SearchControl.PopupCheckboxMouseDownText`|  
|![Search suggested pressed](../notintoc/media/0303-131_searchsuggestedpressed.png "0303-131_SearchSuggestedPressed")<br /><br /> **Suggested searches (check box)**|Link background|`SearchControl.PopupButtonMouseDownBackgroundGradientBegin`<br /><br /> While not used in modern themed UI, there are gradient stops and values for this background.|  
|![Search options pressed](../notintoc/media/0303-132_searchoptionspressed.png "0303-132_SearchOptionsPressed")<br /><br /> **Search options**|Link background|`SearchControl.PopupButtonMouseDownBackgroundGradientBegin`<br /><br /> While not used in modern themed UI, there are gradient stops and values for this background.|  
|![Search suggested pressed](../notintoc/media/0303-131_searchsuggestedpressed.png "0303-131_SearchSuggestedPressed")<br /><br /> **Suggested searches (check box)**|Foreground (Link text)|`SearchControl.PopupButtonMouseDownText`|  
|![Search options pressed](../notintoc/media/0303-132_searchoptionspressed.png "0303-132_SearchOptionsPressed")<br /><br /> **Search options**|Foreground (Link text)|`SearchControl.PopupButtonMouseDownText`|  
  
#### Hyperlink  
 The hyperlink is one control that does not have a foreground/background pair. In all cases, use the foreground hyperlink color, which will appear correctly on dark, gray and white backgrounds. If you do not use the color token for the hyperlink control, you will see the default system color for "pressed,"" which will flash red. That is the signal that the control is not using the correct environment color token.  
  
 ![Hyperlink redline](../notintoc/media/0303-133_hyperlinkredline.png "0303-133_HyperlinkRedline")  
  
 Use …  
 when you need to create a custom hyperlink.  
  
 Do not use …  
 for anything that is not a hyperlink.  
  
 **Default**  
  
|Component|Element|Token name: Category.color|  
|---------------|-------------|--------------------------------|  
|![Hyperlink default](../notintoc/media/0303-134_hyperlink.png "0303-134_Hyperlink")|Foreground (Text)|`Environment.PanelHyperlink`|  
  
 **Hover**  
  
|Component|Element|Token name: Category.color|  
|---------------|-------------|--------------------------------|  
|![Hyperlink on hover](../notintoc/media/0303-135_hyperlinkhover.png "0303-135_HyperlinkHover")|Foreground (Text)|`Environment.PanelHyperlinkHover`|  
  
 **Pressed**  
  
|Component|Element|Token name: Category.color|  
|---------------|-------------|--------------------------------|  
|![Hyperlink pressed](../notintoc/media/0303-136_hyperlinkpressed.png "0303-136_HyperlinkPressed")|Foreground (Text)|`Environment.PanelHyperlinkPressed`|  
  
 **Disabled**  
  
|Component|Element|Token name: Category.color|  
|---------------|-------------|--------------------------------|  
|![Hyperlink disabled](../notintoc/media/0303-137_hyperlinkdisabled.png "0303-137_HyperlinkDisabled")|Foreground (Text)|`Environment.PanelHyperlinkDisabled`|  
  
#### Infobar  
 Infobars are used to provide more information about a given context and always appear at the top of a document window or tool window.  
  
 ![Infobar redline](../notintoc/media/0303-138_infobarredline.png "0303-138_InfobarRedline")  
  
 Use …  
 when creating custom infobars.  
  
 Do not use …  
 for UI elements that are not similar to an infobar.  
  
|Component|Element|Token name: Category.color|  
|---------------|-------------|--------------------------------|  
|![Infobar](../notintoc/media/0303-139_infobar.png "0303-139_Infobar")<br /><br /> **Infobar**|Background|`Environment.InfoBackground`|  
|![Infobar](../notintoc/media/0303-139_infobar.png "0303-139_Infobar")<br /><br /> **Infobar**|Foreground (Text)|`Environment.InfoText`|  
|![Infobar](../notintoc/media/0303-139_infobar.png "0303-139_Infobar")<br /><br /> **Infobar**|Border|`Environment.ToolWindowBorder`|  
  
#### Scroll bar  
 Scroll bars are styled by the Visual Studio environment, and will not need to be themed. However, you might decide that you want to leverage the colors used in scroll bars so that your UI always appears consistent with this this part of the Visual Studio environment.  
  
 ![Scroll bar redline](../notintoc/media/0303-140_scrollbarredline.png "0303-140_ScrollbarRedline")  
  
 Use …  
 when you are creating UI that you want to match Visual Studio scrollbars.  
  
 Do not use ...  
 for anything you don't want to always match scrollbar UI.  
  
 **Default**  
  
|Component|Element|Token name: Category.color|  
|---------------|-------------|--------------------------------|  
|![Scroll bar](../notintoc/media/0303-141_scrollbar.png "0303-141_Scrollbar")<br /><br /> **Scrollbar**|Scrollbar|`Environment.ScrollBarBackground`|  
|![Scroll bar](../notintoc/media/0303-141_scrollbar.png "0303-141_Scrollbar")<br /><br /> **Scrollbar**|Foreground (Thumb)|`Environment.ScrollBarThumbBackground`|  
|![Scroll bar arrow](../notintoc/media/0303-142_scrollbararrow.png "0303-142_ScrollbarArrow")<br /><br /> **Scroll arrow**|Background|`Environment.ScrollBarArrowBackground`<br /><br /> Set to same color as scroll bar.|  
|![Scroll bar arrow](../notintoc/media/0303-142_scrollbararrow.png "0303-142_ScrollbarArrow")<br /><br /> **Scroll arrow**|Foreground (Glyph)|`Environment.ScrollBarArrowGlyph`|  
  
 **Hover**  
  
|Component|Element|Token name: Category.color|  
|---------------|-------------|--------------------------------|  
|![Scroll bar on hover](../notintoc/media/0303-143_scrollbarhover.png "0303-143_ScrollbarHover")<br /><br /> **Scrollbar**|Scrollbar|`Environment.ScrollBarBackground`|  
|![Scroll bar on hover](../notintoc/media/0303-143_scrollbarhover.png "0303-143_ScrollbarHover")<br /><br /> **Scrollbar**|Foreground (Thumb)|`Environment.ScrollBarThumbMouseOverBackground`|  
|![Scroll bar arrow on hover](../notintoc/media/0303-144_scrollbararrowhover.png "0303-144_ScrollbarArrowHover")<br /><br /> **Scroll arrow**|Background|`Environment.ScrollBarArrowMouseOverBackground`<br /><br /> Set to same color as scroll bar.|  
|![Scroll bar arrow on hover](../notintoc/media/0303-144_scrollbararrowhover.png "0303-144_ScrollbarArrowHover")<br /><br /> **Scroll arrow**|Foreground (Glyph)|`Environment.ScrollBarArrowGlyphMouseOver`|  
  
 **Pressed**  
  
|Component|Element|Token name: Category.color|  
|---------------|-------------|--------------------------------|  
|![Scroll bar pressed](../notintoc/media/0303-145_scrollbarpressed.png "0303-145_ScrollbarPressed")<br /><br /> **Scrollbar**|Scrollbar|`Environment.ScrollBarBackground`|  
|![Scroll bar pressed](../notintoc/media/0303-145_scrollbarpressed.png "0303-145_ScrollbarPressed")<br /><br /> **Scrollbar**|Foreground (Thumb)|`Environment.ScrollBarThumbPressedBackground`|  
|![Scroll bar arrow pressed](../notintoc/media/0303-146_scrollbararrowpressed.png "0303-146_ScrollbarArrowPressed")<br /><br /> **Scroll arrow**|Background|`Environment.ScrollBarArrowPressedBackground`<br /><br /> Set to same color as scrollbar.|  
|![Scroll bar arrow pressed](../notintoc/media/0303-146_scrollbararrowpressed.png "0303-146_ScrollbarArrowPressed")<br /><br /> **Scroll arrow**|Foreground (Glyph)|`Environment.ScrollBarArrowGlyphPressed`|  
  
####  <a name="BKMK_TreeView"></a> Tree view  
 Several tool windows, including the Solution Explorer, Server Explorer, and Class View, implement a hierarchical organizational scheme whose colors are controlled by color names in the TreeView category. All items in a tree view have background and text colors. Items that have nested child elements also have glyphs that indicate whether the item is expanded or collapsed.  
  
 ![Tree view redline](../notintoc/media/0303-147_treeviewredline.png "0303-147_TreeViewRedline")  
  
 Use …  
 anywhere you need to implement a hierarchical organizational view.  
  
 Do not use …  
 -   for anything that is not similar to a tree view.  
  
-   in any background/foreground combination other than specified.  
  
 **Default**  
  
|Component|Element|Token name: Category.color|  
|---------------|-------------|--------------------------------|  
|![Tree view](../notintoc/media/0303-148_treeview.png "0303-148_TreeView")|Background|`TreeView.Background`|  
|![Tree view](../notintoc/media/0303-148_treeview.png "0303-148_TreeView")|Foreground (Text)|`TreeView.Background`|  
|![Tree view](../notintoc/media/0303-148_treeview.png "0303-148_TreeView")|Foreground (Glyph)|`TreeView.Glyph`|  
|![Tree view](../notintoc/media/0303-148_treeview.png "0303-148_TreeView")|Border|None|  
  
 **Hover**  
  
|Component|Element|Token name: Category.color|  
|---------------|-------------|--------------------------------|  
|![Tree view on hover](../notintoc/media/0303-149_treeviewhover.png "0303-149_TreeViewHover")|Background|`TreeView.Background`|  
|![Tree view on hover](../notintoc/media/0303-149_treeviewhover.png "0303-149_TreeViewHover")|Foreground (Text)|`TreeView.Background`|  
|![Tree view on hover](../notintoc/media/0303-149_treeviewhover.png "0303-149_TreeViewHover")|Foreground (Glyph)|`TreeView.GlyphMouseOver`|  
|![Tree view on hover](../notintoc/media/0303-149_treeviewhover.png "0303-149_TreeViewHover")|Border|None|  
  
 **Drag over**  
  
|Component|Element|Token name: Category.color|  
|---------------|-------------|--------------------------------|  
|![Tree view dragover](../notintoc/media/0303-150_treeviewdragover.png "0303-150_TreeViewDragOver")|Background|`TreeView.DragOverItem`|  
|![Tree view dragover](../notintoc/media/0303-150_treeviewdragover.png "0303-150_TreeViewDragOver")|Foreground (Text)|`TreeView.DragOverItem`|  
|![Tree view dragover](../notintoc/media/0303-150_treeviewdragover.png "0303-150_TreeViewDragOver")|Foreground (Glyph)|`TreeView.DragOverItemGlyph`|  
|![Tree view dragover](../notintoc/media/0303-150_treeviewdragover.png "0303-150_TreeViewDragOver")|Border|None|  
  
 **Selected**  
  
|Component|Element|Token name: Category.color|  
|---------------|-------------|--------------------------------|  
|![Tree view focused](../notintoc/media/0303-151_treeviewfocused.png "0303-151_TreeViewFocused")<br /><br /> **Focused**|Background|`TreeView.SelectedItemActive`|  
|![Tree view focused](../notintoc/media/0303-151_treeviewfocused.png "0303-151_TreeViewFocused")<br /><br /> **Focused**|Foreground (Text)|`TreeView.SelectedItemActive`|  
|![Tree view focused](../notintoc/media/0303-151_treeviewfocused.png "0303-151_TreeViewFocused")<br /><br /> **Focused**|Foreground (Glyph)|`TreeView.SelectedItemActiveGlyph`|  
|![Tree view focused](../notintoc/media/0303-151_treeviewfocused.png "0303-151_TreeViewFocused")<br /><br /> **Focused**|Border|`TreeView.FocusVisualBorder`|  
|![Tree view unfocused](../notintoc/media/0303-152_treeviewunfocused.png "0303-152_TreeViewUnfocused")<br /><br /> **Unfocused**|Background|`TreeView.SelectedItemInactive`|  
|![Tree view unfocused](../notintoc/media/0303-152_treeviewunfocused.png "0303-152_TreeViewUnfocused")<br /><br /> **Unfocused**|Foreground (Text)|`TreeView.SelectedItemInactive`|  
|![Tree view unfocused](../notintoc/media/0303-152_treeviewunfocused.png "0303-152_TreeViewUnfocused")<br /><br /> **Unfocused**|Foreground (Glyph)|`TreeView.SelectedItemInactiveGlyph`|  
|![Tree view unfocused](../notintoc/media/0303-152_treeviewunfocused.png "0303-152_TreeViewUnfocused")<br /><br /> **Unfocused**|Border|None|  
  
 **Hover over selected**  
  
|Component|Element|Token name: Category.color|  
|---------------|-------------|--------------------------------|  
|![Tree view focused on hover](../notintoc/media/0303-153_treeviewfocusedhover.png "0303-153_TreeViewFocusedHover")<br /><br /> **Focused**|Background|`TreeView.SelectedItemActive`|  
|![Tree view focused on hover](../notintoc/media/0303-153_treeviewfocusedhover.png "0303-153_TreeViewFocusedHover")<br /><br /> **Focused**|Foreground (Text)|`TreeView.SelectedItemActive`|  
|![Tree view focused on hover](../notintoc/media/0303-153_treeviewfocusedhover.png "0303-153_TreeViewFocusedHover")<br /><br /> **Focused**|Foreground (Glyph)|`TreeView.SelectedItemActiveGlyphMouseOver`|  
|![Tree view focused on hover](../notintoc/media/0303-153_treeviewfocusedhover.png "0303-153_TreeViewFocusedHover")<br /><br /> **Focused**|Border|None`TreeView.FocusVisualBorder`|  
|![Tree view unfocused on hover](../notintoc/media/0303-154_treeviewunfocusedhover.png "0303-154_TreeViewUnfocusedHover")<br /><br /> **Unfocused**|Background|`TreeView.SelectedItemInactive`|  
|![Tree view unfocused on hover](../notintoc/media/0303-154_treeviewunfocusedhover.png "0303-154_TreeViewUnfocusedHover")<br /><br /> **Unfocused**|Foreground (Text)|`TreeView.SelectedItemInactive`|  
|![Tree view unfocused on hover](../notintoc/media/0303-154_treeviewunfocusedhover.png "0303-154_TreeViewUnfocusedHover")<br /><br /> **Unfocused**|Foreground (Glyph)|`TreeView.SelectedItemActiveGlyphMouseOver`|  
|![Tree view unfocused on hover](../notintoc/media/0303-154_treeviewunfocusedhover.png "0303-154_TreeViewUnfocusedHover")<br /><br /> **Unfocused**|Border|None|  
  
#### Button controls  
 ![Button control redline](../notintoc/media/0303-155_buttoncontrolredline.png "0303-155_ButtonControlRedline")  
  
 Use …  
 for buttons in the document well that you want to integrate with Visual Studio themes (Light, Dark, Blue, or a system High Contrast theme).  
  
 Do not use …  
 for buttons that will display against a custom background that is not part of a Visual Studio theme.  
  
 **Default**  
  
|Component|Element|Token name: Category.color|  
|---------------|-------------|--------------------------------|  
|![Button](../notintoc/media/0303-156_button.png "0303-156_Button")|Button|`CommonControls.Button`|  
|![Button](../notintoc/media/0303-156_button.png "0303-156_Button")|Button border|`CommonControls.ButtonBorder`|  
  
 **Disabled**  
  
|Component|Element|Token name: Category.color|  
|---------------|-------------|--------------------------------|  
|![Button disabled](../notintoc/media/0303-157_buttondisabled.png "0303-157_ButtonDisabled")|Button|`CommonControls.ButtonDisabled`|  
|![Button disabled](../notintoc/media/0303-157_buttondisabled.png "0303-157_ButtonDisabled")|Button border|`CommonControls.ButtonBorderDisabled`|  
  
 **Hover**  
  
|Component|Element|Token name: Category.color|  
|---------------|-------------|--------------------------------|  
|![Button on hover](../notintoc/media/0303-158_buttonhover.png "0303-158_ButtonHover")|Button|`CommonControls.ButtonHover`|  
|![Button on hover](../notintoc/media/0303-158_buttonhover.png "0303-158_ButtonHover")|Button border|`CommonControls.ButtonBorderHover`|  
  
 **Pressed**  
  
|Component|Element|Token name: Category.color|  
|---------------|-------------|--------------------------------|  
|![Button pressed](../notintoc/media/0303-159_buttonpressed.png "0303-159_ButtonPressed")|Button|`CommonControls.ButtonPressed`|  
|![Button pressed](../notintoc/media/0303-159_buttonpressed.png "0303-159_ButtonPressed")|Button border|`CommonControls.ButtonBorderPressed`|  
  
 **Focused**  
  
|Component|Element|Token name: Category.color|  
|---------------|-------------|--------------------------------|  
|![Button focused](../notintoc/media/0303-160_buttonfocused.png "0303-160_ButtonFocused")|Button|`CommonControls.ButtonFocused`|  
|![Button focused](../notintoc/media/0303-160_buttonfocused.png "0303-160_ButtonFocused")|Button border|`CommonControls.ButtonBorderFocused`|  
  
#### Check box controls  
 ![Check box redline](../notintoc/media/0303-161_checkboxredline.png "0303-161_CheckboxRedline")  
  
 Use …  
 for check box controls contained within the document well.  
  
 Do not use …  
 for any UI that is not a check box control.  
  
 **Default**  
  
|Component|Element|Token name: Category.color|  
|---------------|-------------|--------------------------------|  
|![Check box](../notintoc/media/0303-162_checkbox.png "0303-162_Checkbox")|Background|`CommonControls.CheckBoxBackground`|  
|![Check box](../notintoc/media/0303-162_checkbox.png "0303-162_Checkbox")|Border|`CommonControls.CheckBoxBorder`|  
|![Check box](../notintoc/media/0303-162_checkbox.png "0303-162_Checkbox")|Text|`CommonControls.CheckBoxText`|  
|![Check box](../notintoc/media/0303-162_checkbox.png "0303-162_Checkbox")|Glyph|`CommonControls.CheckBoxGlyph`|  
  
 **Disabled**  
  
|Component|Element|Token name: Category.color|  
|---------------|-------------|--------------------------------|  
|![Check box disabled](../notintoc/media/0303-163_checkboxdisabled.png "0303-163_CheckboxDisabled")|Background|`CommonControls.CheckBoxBackgroundDisabled`|  
|![Check box disabled](../notintoc/media/0303-163_checkboxdisabled.png "0303-163_CheckboxDisabled")|Border|`CommonControls.CheckBoxBorderDisabled`|  
|![Check box disabled](../notintoc/media/0303-163_checkboxdisabled.png "0303-163_CheckboxDisabled")|Text|`CommonControls.CheckBoxTextDisabled`|  
|![Check box disabled](../notintoc/media/0303-163_checkboxdisabled.png "0303-163_CheckboxDisabled")|Glyph|`CommonControls.CheckBoxGlyphDisabled`|  
  
 **Hover**  
  
|Component|Element|Token name: Category.color|  
|---------------|-------------|--------------------------------|  
|![Check box on hover](../notintoc/media/0303-164_checkboxhover.png "0303-164_CheckboxHover")|Background|`CommonControls.CheckBoxBackgroundHover`|  
|![Check box on hover](../notintoc/media/0303-164_checkboxhover.png "0303-164_CheckboxHover")|Border|`CommonControls.CheckBoxBorderHover`|  
|![Check box on hover](../notintoc/media/0303-164_checkboxhover.png "0303-164_CheckboxHover")|Text|`CommonControls.CheckBoxTextHover`|  
|![Check box on hover](../notintoc/media/0303-164_checkboxhover.png "0303-164_CheckboxHover")|Glyph|`CommonControls.CheckBoxGlyphHover`|  
  
 **Pressed**  
  
|Component|Element|Token name: Category.color|  
|---------------|-------------|--------------------------------|  
|![Check box pressed](../notintoc/media/0303-165_checkboxpressed.png "0303-165_CheckboxPressed")|Background|`CommonControls.CheckBoxBackgroundPressed`|  
|![Check box pressed](../notintoc/media/0303-165_checkboxpressed.png "0303-165_CheckboxPressed")|Border|`CommonControls.CheckBoxBorderPressed`|  
|![Check box pressed](../notintoc/media/0303-165_checkboxpressed.png "0303-165_CheckboxPressed")|Text|`CommonControls.CheckBoxTextPressed`|  
|![Check box pressed](../notintoc/media/0303-165_checkboxpressed.png "0303-165_CheckboxPressed")|Glyph|`CommonControls.CheckBoxGlyphPressed`|  
  
 **Focused**  
  
|Component|Element|Token name: Category.color|  
|---------------|-------------|--------------------------------|  
|![Check box focused](../notintoc/media/0303-166_checkboxfocused.png "0303-166_CheckboxFocused")|Background|`CommonControls.CheckBoxBackgroundFocused`|  
|![Check box focused](../notintoc/media/0303-166_checkboxfocused.png "0303-166_CheckboxFocused")|Border|`CommonControls.CheckBoxBorderFocused`|  
|![Check box focused](../notintoc/media/0303-166_checkboxfocused.png "0303-166_CheckboxFocused")|Text|`CommonControls.CheckBoxTextFocused`|  
|![Check box focused](../notintoc/media/0303-166_checkboxfocused.png "0303-166_CheckboxFocused")|Glyph|`CommonControls.CheckBoxGlyphFocused`|  
  
#### Drop box/combo box controls  
 ![Drop&#45;down&#47;combo box redline](../notintoc/media/0303-167_dropdowncomboboxredline.png "0303-167_DropDownComboBoxRedline")  
  
 Use …  
 for drop-downs and combo boxes that are part of the document well.  
  
 Do not use …  
 -   for any UI that is not a drop-down or combo box.  
  
-   for a [Drop-down](../notintoc/shared-colors.md#BKMK_CommandDropDown) or [Combo box](../notintoc/shared-colors.md#BKMK_CommandComboBox) in the command bar.  
  
 **Default**  
  
|Component|Element|Token name: Category.color|  
|---------------|-------------|--------------------------------|  
|![Drop&#45;down&#47;combo box](../notintoc/media/0303-168_dropdowncombobox.png "0303-168_DropDownComboBox")|Background|`CommonControls.ComboBoxBackground`|  
|![Drop&#45;down&#47;combo box](../notintoc/media/0303-168_dropdowncombobox.png "0303-168_DropDownComboBox")|Border|`CommonControls.ComboBoxBorder`|  
|![Drop&#45;down&#47;combo box](../notintoc/media/0303-168_dropdowncombobox.png "0303-168_DropDownComboBox")|Text|`CommonControls.ComboBoxText`|  
|![Drop&#45;down&#47;combo box](../notintoc/media/0303-168_dropdowncombobox.png "0303-168_DropDownComboBox")|Separator|`CommonControls.ComboBoxSeparator`|  
|![Drop&#45;down&#47;combo box](../notintoc/media/0303-168_dropdowncombobox.png "0303-168_DropDownComboBox")|Glyph|`CommonControls.ComboBoxGlyph`|  
|![Drop&#45;down&#47;combo box](../notintoc/media/0303-168_dropdowncombobox.png "0303-168_DropDownComboBox")|Glyph background|`CommonControls.ComboBoxGlyphBackground`|  
  
 **Disabled**  
  
|Component|Element|Token name: Category.color|  
|---------------|-------------|--------------------------------|  
|![Drop&#45;down&#47;combo box disabled](../notintoc/media/0303-169_dropdowncomboboxdisabled.png "0303-169_DropDownComboBoxDisabled")|Background|`CommonControls.ComboBoxBackgroundDisabled`|  
|![Drop&#45;down&#47;combo box disabled](../notintoc/media/0303-169_dropdowncomboboxdisabled.png "0303-169_DropDownComboBoxDisabled")|Border|`CommonControls.ComboBoxBorderDisabled`|  
|![Drop&#45;down&#47;combo box disabled](../notintoc/media/0303-169_dropdowncomboboxdisabled.png "0303-169_DropDownComboBoxDisabled")|Text|`CommonControls.ComboBoxTextDisabled`|  
|![Drop&#45;down&#47;combo box disabled](../notintoc/media/0303-169_dropdowncomboboxdisabled.png "0303-169_DropDownComboBoxDisabled")|Separator|`CommonControls.ComboBoxSeparatorDisabled`|  
|![Drop&#45;down&#47;combo box disabled](../notintoc/media/0303-169_dropdowncomboboxdisabled.png "0303-169_DropDownComboBoxDisabled")|Glyph|`CommonControls.ComboBoxGlyphDisabled`|  
|![Drop&#45;down&#47;combo box disabled](../notintoc/media/0303-169_dropdowncomboboxdisabled.png "0303-169_DropDownComboBoxDisabled")|Glyph background|`CommonControls.ComboBoxGlyphBackgroundDisabled`|  
  
 **Hover**  
  
|Component|Element|Token name: Category.color|  
|---------------|-------------|--------------------------------|  
|![Drop&#45;down&#47;combo box on hover](../notintoc/media/0303-170_dropdowncomboboxhover.png "0303-170_DropDownComboBoxHover")|Background|`CommonControls.ComboBoxBackgroundHover`|  
|![Drop&#45;down&#47;combo box on hover](../notintoc/media/0303-170_dropdowncomboboxhover.png "0303-170_DropDownComboBoxHover")|Border|`CommonControls.ComboBoxBorderHover`|  
|![Drop&#45;down&#47;combo box on hover](../notintoc/media/0303-170_dropdowncomboboxhover.png "0303-170_DropDownComboBoxHover")|Text|`CommonControls.ComboBoxTextHover`|  
|![Drop&#45;down&#47;combo box on hover](../notintoc/media/0303-170_dropdowncomboboxhover.png "0303-170_DropDownComboBoxHover")|Separator|`CommonControls.ComboBoxSeparatorHover`|  
|![Drop&#45;down&#47;combo box on hover](../notintoc/media/0303-170_dropdowncomboboxhover.png "0303-170_DropDownComboBoxHover")|Glyph|`CommonControls.ComboBoxGlyphHover`|  
|![Drop&#45;down&#47;combo box on hover](../notintoc/media/0303-170_dropdowncomboboxhover.png "0303-170_DropDownComboBoxHover")|Glyph background|`CommonControls.ComboBoxGlyphBackgroundHover`|  
  
 **Pressed**  
  
|Component|Element|Token name: Category.color|  
|---------------|-------------|--------------------------------|  
|![Drop&#45;down&#47;combo box pressed](../notintoc/media/0303-171_dropdowncomboboxpressed.png "0303-171_DropDownComboBoxPressed")|Background|`CommonControls.ComboBoxBackgroundPressed`|  
|![Drop&#45;down&#47;combo box pressed](../notintoc/media/0303-171_dropdowncomboboxpressed.png "0303-171_DropDownComboBoxPressed")|Border|`CommonControls.ComboBoxBorderPressed`|  
|![Drop&#45;down&#47;combo box pressed](../notintoc/media/0303-171_dropdowncomboboxpressed.png "0303-171_DropDownComboBoxPressed")|Text|`CommonControls.ComboBoxTextPressed`|  
|![Drop&#45;down&#47;combo box pressed](../notintoc/media/0303-171_dropdowncomboboxpressed.png "0303-171_DropDownComboBoxPressed")|Separator|`CommonControls.ComboBoxSeparatorPressed`|  
|![Drop&#45;down&#47;combo box pressed](../notintoc/media/0303-171_dropdowncomboboxpressed.png "0303-171_DropDownComboBoxPressed")|Glyph|`CommonControls.ComboBoxGlyphPressed`|  
|![Drop&#45;down&#47;combo box pressed](../notintoc/media/0303-171_dropdowncomboboxpressed.png "0303-171_DropDownComboBoxPressed")|Glyph background|`CommonControls.ComboBoxGlyphBackgroundPressed`|  
  
 **Focused**  
  
|Component|Element|Token name: Category.color|  
|---------------|-------------|--------------------------------|  
|![Drop&#45;down&#47;combo box focused](../notintoc/media/0303-172_dropdowncomboboxfocused.png "0303-172_DropDownComboBoxFocused")|Background|`CommonControls.ComboBoxBackgroundFocused`|  
|![Drop&#45;down&#47;combo box focused](../notintoc/media/0303-172_dropdowncomboboxfocused.png "0303-172_DropDownComboBoxFocused")|Border|`CommonControls.ComboBoxBorderFocused`|  
|![Drop&#45;down&#47;combo box focused](../notintoc/media/0303-172_dropdowncomboboxfocused.png "0303-172_DropDownComboBoxFocused")|Text|`CommonControls.ComboBoxTextFocused`|  
|![Drop&#45;down&#47;combo box focused](../notintoc/media/0303-172_dropdowncomboboxfocused.png "0303-172_DropDownComboBoxFocused")|Separator|`CommonControls.ComboBoxSeparatorFocused`|  
|![Drop&#45;down&#47;combo box focused](../notintoc/media/0303-172_dropdowncomboboxfocused.png "0303-172_DropDownComboBoxFocused")|Glyph|`CommonControls.ComboBoxGlyphFocused`|  
|![Drop&#45;down&#47;combo box focused](../notintoc/media/0303-172_dropdowncomboboxfocused.png "0303-172_DropDownComboBoxFocused")|Glyph background|`CommonControls.ComboBoxGlyphBackgroundFocused`|  
  
 **Text input selection**  
  
|Component|Element|Token name: Category.color|  
|---------------|-------------|--------------------------------|  
|![Drop&#45;down&#47;combo box text input](../notintoc/media/0303-173_dropdowncomboboxtextinput.png "0303-173_DropDownComboBoxTextInput")|Highlight|`CommonControls.ComboBoxTextInputSelection`|  
  
 **Pressed – List item view**  
  
|Component|Element|Token name: Color.category|  
|---------------|-------------|--------------------------------|  
|![Drop&#45;down&#47;combo box list view](../notintoc/media/0303-174_dropdowncomboboxlistview.png "0303-174_DropDownComboBoxListView")|Background|`CommonControls.ComboBoxListBackground`|  
|![Drop&#45;down&#47;combo box list view](../notintoc/media/0303-174_dropdowncomboboxlistview.png "0303-174_DropDownComboBoxListView")|Background|`CommonControls.ComboBoxListBackgroundHover`|  
|![Drop&#45;down&#47;combo box list view](../notintoc/media/0303-174_dropdowncomboboxlistview.png "0303-174_DropDownComboBoxListView")|Background|`CommonControls.ComboBoxListItemBackgroundPressed`|  
|![Drop&#45;down&#47;combo box list view](../notintoc/media/0303-174_dropdowncomboboxlistview.png "0303-174_DropDownComboBoxListView")|Background|`CommonControls.ComboBoxListItemBackgroundFocused`|  
|![Drop&#45;down&#47;combo box list view](../notintoc/media/0303-174_dropdowncomboboxlistview.png "0303-174_DropDownComboBoxListView")|Border|`CommonControls.ComboBoxListBorder`|  
|![Drop&#45;down&#47;combo box list view](../notintoc/media/0303-174_dropdowncomboboxlistview.png "0303-174_DropDownComboBoxListView")|Border|`CommonControls.ComboBoxListBorderHover`|  
|![Drop&#45;down&#47;combo box list view](../notintoc/media/0303-174_dropdowncomboboxlistview.png "0303-174_DropDownComboBoxListView")|Border|`CommonControls.ComboBoxListBorderPressed`|  
|![Drop&#45;down&#47;combo box list view](../notintoc/media/0303-174_dropdowncomboboxlistview.png "0303-174_DropDownComboBoxListView")|Border|`CommonControls.ComboBoxListBorderFocused`|  
|![Drop&#45;down&#47;combo box list view](../notintoc/media/0303-174_dropdowncomboboxlistview.png "0303-174_DropDownComboBoxListView")|Item text|`CommonControls.ComboBoxListItemText`|  
|![Drop&#45;down&#47;combo box list view](../notintoc/media/0303-174_dropdowncomboboxlistview.png "0303-174_DropDownComboBoxListView")|Item text|`CommonControls.ComboBoxListItemTextHover`|  
|![Drop&#45;down&#47;combo box list view](../notintoc/media/0303-174_dropdowncomboboxlistview.png "0303-174_DropDownComboBoxListView")|Item text|`CommonControls.ComboBoxListItemTextPressed`|  
|![Drop&#45;down&#47;combo box list view](../notintoc/media/0303-174_dropdowncomboboxlistview.png "0303-174_DropDownComboBoxListView")|Item text|`CommonControls.ComboBoxListItemTextFocused`|  
|![Drop&#45;down&#47;combo box list view](../notintoc/media/0303-174_dropdowncomboboxlistview.png "0303-174_DropDownComboBoxListView")|Background shadow|`CommonControls.ComboBoxListBackgroundShadow`|  
  
#### Tabular data (grid) controls  
 Tabular data controls, also known as grid controls, are common controls for Visual Studio that can be used to present large amounts of data in multiple columns. Standard tabular data controls can be found in multiple places within Visual Studio: the Error List tool window, IntelliTrace reports, and memory heap view, among others. Always use the standard tabular data controls provided. In some rare instances, you might not have access to the standard tabular data controls. In these situations, use the following token names to ensure that your UI is consistent with other tabular data controls in Visual Studio.  
  
 ![Tabular data &#40;grid control&#41; redline](../notintoc/media/0303-197_tabulardatagridcontrolredline.png "0303-197_TabularDataGridControlRedline")  
  
 Use …  
 for tabular or grid controls.  
  
 Do not use …  
 for any UI that is not a tabular or grid control.  
  
##### Column headers  
 Column headers consist of a background, a border, the title text, and an optional glyph usually used when a grid is sorted by that column.  
  
|State|Element|Token name: Category.color|  
|-----------|-------------|--------------------------------|  
|Default|Background|`Header.Default`|  
|Default|Foreground (Text)|`Environment.CommandBarTextActive`|  
|Default|Foreground (Glyph)|`Header.Glyph`|  
|Default|Border|`Header.SeparatorLine`|  
|Hover|Background|`Header.MouseOver`|  
|Hover|Foreground (Text)|`Environment.CommandBarTextHover`|  
|Hover|Foreground (Glyph)|`Header.MouseOverGlyph`|  
|Hover|Border|`Header.SeparatorLine`|  
|Pressed|Background|`CommonControls.CheckBoxBackgroundPressed`|  
|Pressed|Foreground (Text)|`CommonControls.CheckBoxBorderPressed`|  
|Pressed|Foreground (Glyph)|`CommonControls.CheckBoxTextPressed`|  
|Pressed|Border|`CommonControls.CheckBoxGlyphPressed`|  
  
##### List view items  
 List view items consist of a background and the content. The content can be text, an icon, or both.  
  
|State|Element|Token name: Category.color|  
|-----------|-------------|--------------------------------|  
|Default|Background|Transparent|  
|Default|Foreground (Text)|`Environment.CommandBarTextActive`|  
|Default|Border|None|  
|Selected (active)|Background|`TreeView.SelectedItemActive`|  
|Selected (active)|Foreground (Text)|`TreeView.SelectedItemActiveText`|  
|Selected (active)|Border|None|  
|Selected (inactive)|Background|`TreeView.SelectedItemInactive`|  
|Selected (inactive)|Foreground (Text)|`TreeView.SelectedItemInactiveText`|  
|Selected (inactive)|Border|None|  
  
### Manifest Designer  
 The Manifest Designer was designed as a way to make it easier to edit the manifest file in Windows 8 and Windows Phone 8 projects. While there is no shared framework available for consumption, it might be appropriate for you to match the design layout and colors of the orientation/navigation tabs and overall structure. For more information about layout details, see [Layout for Visual Studio](../Topic/Layout%20for%20Visual%20Studio.md).  
  
 ![Manifest Designer redline](../notintoc/media/0303-175_manifestdesignerredline.png "0303-175_ManifestDesignerRedline")  
  
 Use …  
 -   for designers that are similar to the Manifest Designer.  
  
-   in place of using common tab controls at the top of an editor within the document well.  
  
 Do not use …  
 -   if you have more than six tabs.  
  
-   for any UI that is not structured like the Manifest Designer.  
  
|State|Component|Element|Token name: Category.color|  
|-----------|---------------|-------------|--------------------------------|  
|Default (selected)|Tab|Background|`ManifestDesigner.TabActive`|  
|Default (selected)|Tab|Border|None|  
|Default (selected)|Description pane|Background|`ManifestDesigner.DescriptionPane`|  
|Default (selected)|Content page|Background|`ManifestDesigner.Background`|  
|Default (selected)|Content page|Dialog helper text|`ManifestDesigner.WatermarkText`<br /><br /> This token name does not match its function.|  
|Non-selected|Tab|Background|`ManifestDesigner.Tab.Inactive`|  
|Hover|Tab|Background|`ManifestDesigner.Tab.Mouseover`|  
  
### Tagging  
 Visual Studio supports tagging, which allows a user to declare searchable keywords for tracking purposes. For example, project managers and developers can use Team Foundation Server (TFS) to tag work items. The tables below give color names for both the tag itself and the "close icon" glyph that appears in hover and selected states.  
  
 ![Tagging redline](../notintoc/media/0303-176_taggingredline.png "0303-176_TaggingRedline")  
  
 Use …  
 for UI that supports tagging.  
  
 Do not use …  
 for any other type of UI.  
  
#### Tag  
  
|Component|Element|Token name: Category.color|  
|---------------|-------------|--------------------------------|  
|![Tag](../notintoc/media/0303-177_tag.png "0303-177_Tag")<br /><br /> **Default**|Background|`Tag.Background`|  
|![Tag](../notintoc/media/0303-177_tag.png "0303-177_Tag")<br /><br /> **Default**|Foreground (Text)|`Tag.Background`|  
|![Tag on hover](../notintoc/media/0303-178_taghover.png "0303-178_TagHover")<br /><br /> **Hover**|Background|`Tag.HoverBackground`|  
|![Tag on hover](../notintoc/media/0303-178_taghover.png "0303-178_TagHover")<br /><br /> **Hover**|Foreground (Text)|`Tag.HoverBackgroundText`|  
|![Tag pressed](../notintoc/media/0303-179_tagpressed.png "0303-179_TagPressed")<br /><br /> **Pressed**|Background|`Tag.PressedBackground`|  
|![Tag pressed](../notintoc/media/0303-179_tagpressed.png "0303-179_TagPressed")<br /><br /> **Pressed**|Foreground (Text)|`Tag.PressedBackgroundText`|  
|![Tag selected](../notintoc/media/0303-180_tagselected.png "0303-180_TagSelected")<br /><br /> **Selected**|Background|`Tag.SelectedBackground`|  
|![Tag selected](../notintoc/media/0303-180_tagselected.png "0303-180_TagSelected")<br /><br /> **Selected**|Foreground (Text)|`Tag.SelectedBackgroundText`|  
  
#### Glyph (close icon)  
 **Default**  
  
|Component|Element|Token name: Category.color|  
|---------------|-------------|--------------------------------|  
|![Tag &#40;glyph&#41;](../notintoc/media/0303-181_tagglyph.png "0303-181_TagGlyph")<br /><br /> **Default (tag default)**|Background|N/A|  
|![Tag &#40;glyph&#41;](../notintoc/media/0303-181_tagglyph.png "0303-181_TagGlyph")<br /><br /> **Default (tag default)**|Foreground (Glyph)|`Tag.TagHoverGlyph`|  
  
 **Hover**  
  
|Component|Element|Token name: Category.color|  
|---------------|-------------|--------------------------------|  
|![Tag &#40;glyph&#41; on hover](../notintoc/media/0303-182_tagglyphhover.png "0303-182_TagGlyphHover")<br /><br /> **Hover (tag default)**|Background|`Tag.TagHoverGlyphHoverBackground`|  
|![Tag &#40;glyph&#41; on hover](../notintoc/media/0303-182_tagglyphhover.png "0303-182_TagGlyphHover")<br /><br /> **Hover (tag default)**|Foreground (Glyph)|`Tag.TagHoverGlyphHover`|  
|![Tag &#40;glyph&#41; on hover](../notintoc/media/0303-182_tagglyphhover.png "0303-182_TagGlyphHover")<br /><br /> **Hover (tag default)**|Border|`Tag.TagHoverGlyphHoverBorder`|  
  
 **Pressed**  
  
|Component|Element|Token name: Category.color|  
|---------------|-------------|--------------------------------|  
|![Tag &#40;glyph&#41; pressed](../notintoc/media/0303-183_tagglyphpressed.png "0303-183_TagGlyphPressed")<br /><br /> **Pressed (tag default)**|Background|`Tag.TagHoverGlyphPressedBackground`|  
|![Tag &#40;glyph&#41; pressed](../notintoc/media/0303-183_tagglyphpressed.png "0303-183_TagGlyphPressed")<br /><br /> **Pressed (tag default)**|Foreground (Glyph)|`Tag.TagHoverGlyphPressed`|  
|![Tag &#40;glyph&#41; pressed](../notintoc/media/0303-183_tagglyphpressed.png "0303-183_TagGlyphPressed")<br /><br /> **Pressed (tag default)**|Border|`Tag.TagHoverGlyphPressedBorder`|  
  
 **Tag selected/glyph default**  
  
|Component|Element|Token name: Category.color|  
|---------------|-------------|--------------------------------|  
|![Tag selected](../notintoc/media/0303-184_tagselected.png "0303-184_TagSelected")<br /><br /> **Default (tag selected)**|Background|N/A|  
|![Tag selected](../notintoc/media/0303-184_tagselected.png "0303-184_TagSelected")<br /><br /> **Default (tag selected)**|Foreground (Glyph)|`Tag.TagSelectedGlyph`|  
  
 **Tag selected/glyph hover**  
  
|Component|Element|Token name: Category.color|  
|---------------|-------------|--------------------------------|  
|![Tag selected on hover](../notintoc/media/0303-185_tagselectedhover.png "0303-185_TagSelectedHover")<br /><br /> **Hover (tag selected)**|Background|`Tag.TagSelectedGlyphHoverBackground`|  
|![Tag selected on hover](../notintoc/media/0303-185_tagselectedhover.png "0303-185_TagSelectedHover")<br /><br /> **Hover (tag selected)**|Foreground (Glyph)|`Tag.TagSelectedGlyphHover`|  
|![Tag selected on hover](../notintoc/media/0303-185_tagselectedhover.png "0303-185_TagSelectedHover")<br /><br /> **Hover (tag selected)**|Border|`Tag.TagSelectedGlyphHoverBorder`|  
  
 **Tag selected/glyph pressed**  
  
|Component|Element|Token name: Category.color|  
|---------------|-------------|--------------------------------|  
|![Tag selected pressed](../notintoc/media/0303-186_tagselectedpressed.png "0303-186_TagSelectedPressed")<br /><br /> **Pressed (tag selected)**|Background|`Tag.TagSelectedGlyphPressedBackground`|  
|![Tag selected pressed](../notintoc/media/0303-186_tagselectedpressed.png "0303-186_TagSelectedPressed")<br /><br /> **Pressed (tag selected)**|Foreground(Glyph)|`Tag.TagSelectedGlyphPressed`|  
|![Tag selected pressed](../notintoc/media/0303-186_tagselectedpressed.png "0303-186_TagSelectedPressed")<br /><br /> **Pressed (tag selected)**|Border|`Tag.TagSelectedGlyphPressedBorder`|  
  
### Shell  
  
#### Background  
 The environment background consists of two layers. The bottom layer is a solid color that covers the entire IDE. The top layer fits under the command shelf and between the tool window auto-hide channels on the left and right edges of the IDE. As of Visual Studio 2013, the top and bottom background layers are set to the same color in the Light and Dark themes.  
  
 ![Shell background redline](../notintoc/media/0303-187_shellbackgroundredline.png "0303-187_ShellBackgroundRedline")  
  
 Use …  
 for places that you want to match the background of the Visual Studio environment.  
  
 Do not use …  
 -   as a fill for places that are not background surfaces.  
  
-   as a background on which you wish to place foreground elements.  
  
|Component|Element|Token name: Category.color|  
|---------------|-------------|--------------------------------|  
|Bottom layer|Background|`Environment.EnvironmentBackground`|  
  
|Component|Element|Token name: Category.color|  
|---------------|-------------|--------------------------------|  
|Top layer|Background<br /><br /> *Gradient stops set to the same color value in Visual Studio 2013 Light and Dark themes.*|`Environment.EnvironmentBackgroundGradientBegin`|  
|Top layer|Background<br /><br /> *Gradient stops set to the same color value in Visual Studio 2013 Light and Dark themes.*|`Environment.EnvironmentBackgroundGradientEnd`|  
|Top layer|Background<br /><br /> *Gradient stops set to the same color value in Visual Studio 2013 Light and Dark themes.*|`Environment.EnvironmentBackgroundGradientMiddle1`|  
|Top layer|Background<br /><br /> *Gradient stops set to the same color value in Visual Studio 2013 Light and Dark themes.*|`Environment.EnvironmentBackgroundGradientMiddle2`|  
  
#### Command shelf  
 Two sets of token names are used for the command shelf backgrounds: one set for where the menu bar sits and one for where the command bars sit. An individual command bar group has its own background color values, which are discussed in more detail in the "command bar" section. Menu bar and command bar text is discussed in the menu and command bar sections, respectively.  
  
 ![Command shelf redline](../notintoc/media/0303-188_commandshelfredline.png "0303-188_CommandShelfRedline")  
  
 Use …  
 -   for areas where you place menus or toolbars.  
  
-   with the correct background/​foreground token name combination.  
  
 Do not use …  
 for areas that are not similar to a command shelf.  
  
|Component|Element|Token name: Category.color|  
|---------------|-------------|--------------------------------|  
|Menu bar|Background<br /><br /> *Gradient stops set to the same color value in Visual Studio 2013 Light and Dark themes.*|`Environment.CommandShelfHighlightGradientBegin`|  
|Menu bar|Background<br /><br /> *Gradient stops set to the same color value in Visual Studio 2013 Light and Dark themes.*|`Environment.CommandShelfHighlightGradientMiddle`|  
|Menu bar|Background<br /><br /> *Gradient stops set to the same color value in Visual Studio 2013 Light and Dark themes.*|`Environment.CommandShelfHighlightGradientEnd`|  
|Command bar|Background<br /><br /> *Gradient stops set to the same color value in Visual Studio 2013 Light and Dark themes.*|`Environment.CommandShelfBackgroundGradientBegin`|  
|Command bar|Background<br /><br /> *Gradient stops set to the same color value in Visual Studio 2013 Light and Dark themes.*|`Environment.CommandShelfBackgroundGradientMiddle`|  
|Command bar|Background<br /><br /> *Gradient stops set to the same color value in Visual Studio 2013 Light and Dark themes.*|`Environment.CommandShelfBackgroundGradientEnd`|  
  
### Toolbox  
 The toolbox is one of the common tool windows that is most frequently used in Visual Studio. It is essentially a tree control with a special theme and styling applied.  
  
 ![Toolbox redline](../notintoc/media/0303-189_toolboxredline.png "0303-189_ToolboxRedline")  
  
 Use …  
 when you are designing a tool window that you want to always be consistent with the shell toolbox.  
  
 Do not use …  
 for anything that is not similar to the toolbox UI, or if you are unsure whether your UI will have problems if the shell toolbox colors change.  
  
 **Default**  
  
|Component|Element|Token name: Category.color|  
|---------------|-------------|--------------------------------|  
|![Toolbox parent node](../notintoc/media/0303-190_toolboxparentnode.png "0303-190_ToolboxParentNode")<br /><br /> **Parent node**|Background|`Environment.ToolboxContent`<br /><br /> Headings<br /><br /> `Environment.ToolWindowBackground`<br /><br /> Individual items, or entire window if no available controls|  
|![Toolbox child node](../notintoc/media/0303-191_toolboxchildnode.png "0303-191_ToolboxChildNode")<br /><br /> **Child node**|Background|`Environment.ToolboxContent`<br /><br /> Headings<br /><br /> `Environment.ToolWindowBackground`<br /><br /> Individual items, or entire window if no available controls|  
|![Toolbox parent node](../notintoc/media/0303-190_toolboxparentnode.png "0303-190_ToolboxParentNode")<br /><br /> **Parent node**|Border|None|  
|![Toolbox child node](../notintoc/media/0303-191_toolboxchildnode.png "0303-191_ToolboxChildNode")<br /><br /> **Child node**|Border|None|  
|![Toolbox parent node](../notintoc/media/0303-190_toolboxparentnode.png "0303-190_ToolboxParentNode")<br /><br /> **Parent node**|Foreground (Glyph)|`Environment.ToolboxContent`|  
|![Toolbox child node](../notintoc/media/0303-191_toolboxchildnode.png "0303-191_ToolboxChildNode")<br /><br /> **Child node**|Foreground (Glyph)|`Environment.ToolboxContent`|  
|![Toolbox parent node](../notintoc/media/0303-190_toolboxparentnode.png "0303-190_ToolboxParentNode")<br /><br /> **Parent node**|Foreground (Text)|`Environment.ToolboxContent`|  
|![Toolbox child node](../notintoc/media/0303-191_toolboxchildnode.png "0303-191_ToolboxChildNode")<br /><br /> **Child node**|Foreground (Text)|`Environment.ToolboxContent`|  
  
 **Hover**  
  
|Component|Element|Token name: Category.color|  
|---------------|-------------|--------------------------------|  
|![Toolbox child node on hover](../notintoc/media/0303-192_toolboxchildnodehover.png "0303-192_ToolboxChildNodeHover")<br /><br /> **Toolbox hover on child node**|Background|`Environment.ToolboxContentMouseOver`<br /><br /> Individual items only|  
|![Toolbox child node on hover](../notintoc/media/0303-192_toolboxchildnodehover.png "0303-192_ToolboxChildNodeHover")<br /><br /> **Toolbox hover on child node**|Border|None|  
|![Toolbox child node on hover](../notintoc/media/0303-192_toolboxchildnodehover.png "0303-192_ToolboxChildNodeHover")<br /><br /> **Toolbox hover on child node**|Foreground (Text)|`Environment.ToolboxContentMouseOver`<br /><br /> Individual items only|  
  
 **Selected**  
  
|Component|Element|Token name: Category.color|  
|---------------|-------------|--------------------------------|  
|![Toolbox parent node focused](../notintoc/media/0303-193_toolboxparentnodefocused.png "0303-193_ToolboxParentNodeFocused")<br /><br /> **Focused parent node**|Background|`TreeView.SelectedItemActive`<br /><br /> From [Tree view](../notintoc/shared-colors.md#BKMK_TreeView) category|  
|![Toolbox child node focused](../notintoc/media/0303-194_toolboxchildnodefocused.png "0303-194_ToolboxChildNodeFocused")<br /><br /> **Focused child node**|Background|`TreeView.SelectedItemActive`<br /><br /> From [Tree view](../notintoc/shared-colors.md#BKMK_TreeView) category|  
|![Toolbox parent node focused](../notintoc/media/0303-193_toolboxparentnodefocused.png "0303-193_ToolboxParentNodeFocused")<br /><br /> **Focused parent node**|Border|`TreeView.FocusVisualBorder`<br /><br /> From [Tree view](../notintoc/shared-colors.md#BKMK_TreeView) category|  
|![Toolbox child node focused](../notintoc/media/0303-194_toolboxchildnodefocused.png "0303-194_ToolboxChildNodeFocused")<br /><br /> **Focused child node**|Border|`TreeView.FocusVisualBorder`<br /><br /> From [Tree view](../notintoc/shared-colors.md#BKMK_TreeView) category|  
|![Toolbox parent node focused](../notintoc/media/0303-193_toolboxparentnodefocused.png "0303-193_ToolboxParentNodeFocused")<br /><br /> **Focused parent node**|Foreground (Glyph)|`TreeView.SelectedItemActive`<br /><br /> From [Tree view](../notintoc/shared-colors.md#BKMK_TreeView) category|  
|![Toolbox child node focused](../notintoc/media/0303-194_toolboxchildnodefocused.png "0303-194_ToolboxChildNodeFocused")<br /><br /> **Focused child node**|Foreground (Glyph)|`TreeView.SelectedItemActive`<br /><br /> From [Tree view](../notintoc/shared-colors.md#BKMK_TreeView) category|  
|![Toolbox parent node focused](../notintoc/media/0303-193_toolboxparentnodefocused.png "0303-193_ToolboxParentNodeFocused")<br /><br /> **Focused parent node**|Foreground (Text)|`TreeView.SelectedItemActive`<br /><br /> From [Tree view](../notintoc/shared-colors.md#BKMK_TreeView) category|  
|![Toolbox child node focused](../notintoc/media/0303-194_toolboxchildnodefocused.png "0303-194_ToolboxChildNodeFocused")<br /><br /> **Focused child node**|Foreground (Text)|`TreeView.SelectedItemActive`<br /><br /> From [Tree view](../notintoc/shared-colors.md#BKMK_TreeView) category|  
|![Toolbox parent node unfocused](../notintoc/media/0303-195_toolboxparentnodeunfocused.png "0303-195_ToolboxParentNodeUnfocused")<br /><br /> **Unfocused parent node**|Background|`TreeView.SelectedItemInactive`<br /><br /> From [Tree view](../notintoc/shared-colors.md#BKMK_TreeView) category|  
|![Toolbox child node unfocused](../notintoc/media/0303-196_toolboxchildnodeunfocused.png "0303-196_ToolboxChildNodeUnfocused")<br /><br /> **Unfocused child node**|Background|`TreeView.SelectedItemInactive`<br /><br /> From [Tree view](../notintoc/shared-colors.md#BKMK_TreeView) category|  
|![Toolbox parent node unfocused](../notintoc/media/0303-195_toolboxparentnodeunfocused.png "0303-195_ToolboxParentNodeUnfocused")<br /><br /> **Unfocused parent node**|Border|None|  
|![Toolbox child node unfocused](../notintoc/media/0303-196_toolboxchildnodeunfocused.png "0303-196_ToolboxChildNodeUnfocused")<br /><br /> **Unfocused child node**|Border|None|  
|![Toolbox parent node unfocused](../notintoc/media/0303-195_toolboxparentnodeunfocused.png "0303-195_ToolboxParentNodeUnfocused")<br /><br /> **Unfocused parent node**|Foreground (Glyph)|`TreeView.SelectedItemInactive`<br /><br /> From [Tree view](../notintoc/shared-colors.md#BKMK_TreeView) category|  
|![Toolbox child node unfocused](../notintoc/media/0303-196_toolboxchildnodeunfocused.png "0303-196_ToolboxChildNodeUnfocused")<br /><br /> **Unfocused child node**|Foreground (Glyph)|`TreeView.SelectedItemInactive`<br /><br /> From [Tree view](../notintoc/shared-colors.md#BKMK_TreeView) category|  
|![Toolbox parent node unfocused](../notintoc/media/0303-195_toolboxparentnodeunfocused.png "0303-195_ToolboxParentNodeUnfocused")<br /><br /> **Unfocused parent node**|Foreground (Text)|`TreeView.SelectedItemInactive`<br /><br /> From [Tree view](../notintoc/shared-colors.md#BKMK_TreeView) category|  
|![Toolbox child node unfocused](../notintoc/media/0303-196_toolboxchildnodeunfocused.png "0303-196_ToolboxChildNodeUnfocused")<br /><br /> **Unfocused child node**|Foreground (Text)|`TreeView.SelectedItemInactive`<br /><br /> From [Tree view](../notintoc/shared-colors.md#BKMK_TreeView) category|  
  
## Color value reference  
  
|||||||||  
|-|-|-|-|-|-|-|-|  
|Component|Part|Element|State|Light|Dark|Blue|High Contrast|  
|Divider lines|||Default|FFEEEEF2|FF2D2D30|FFEEEEF2|ControlDark|  
|Expander glyph||Foreground|Default|||||  
|Expander glyph||Foreground|Hover|||||  
|Expander glyph||Background|Default|||||  
|Expander glyph||Background|Hover|||||  
|Expander glyph||Border|Default|||||  
|Expander glyph||Border|Hover|||||