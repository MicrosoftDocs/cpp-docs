---
title: "CComboBox Class"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: reference
ms.assetid: 4e73b5df-0d2e-4658-9706-38133fb10513
caps.latest.revision: 19
manager: ghogen
translation.priority.ht: 
  - cs-cz
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - pl-pl
  - pt-br
  - ru-ru
  - tr-tr
  - zh-cn
  - zh-tw
---
# CComboBox Class
<?xml version="1.0" encoding="utf-8"?>
<developerReferenceWithSyntaxDocument xmlns="http://ddue.schemas.microsoft.com/authoring/2003/5" xmlns:xlink="http://www.w3.org/1999/xlink" xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:schemaLocation="http://ddue.schemas.microsoft.com/authoring/2003/5 http://clixdevr3.blob.core.windows.net/ddueschema/developer.xsd">
    <introduction>
        <para>Provides the functionality of a Windows combo box. </para>
    </introduction>
    <syntaxSection>
        <legacySyntax>class CComboBox : public CWnd</legacySyntax>
    </syntaxSection>
    <section>
        <title>Members</title>
        <content/>
        <sections>
            <section>
                <title>Public Constructors</title>
                <content>
                    <table xmlns:caps="http://schemas.microsoft.com/build/caps/2013/11">
                        <thead>
                            <tr>
                                <TD>
                                    <para>Name</para>
                                </TD>
                                <TD>
                                    <para>Description</para>
                                </TD>
                            </tr>
                        </thead>
                        <tbody>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#ccombobox__ccombobox">CComboBox::CComboBox</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Constructs a <unmanagedCodeEntityReference>CComboBox</unmanagedCodeEntityReference> object.</para>
                                </TD>
                            </tr>
                        </tbody>
                    </table>
                </content>
            </section>
            <section>
                <title>Public Methods</title>
                <content>
                    <table xmlns:caps="http://schemas.microsoft.com/build/caps/2013/11">
                        <thead>
                            <tr>
                                <TD>
                                    <para>Name</para>
                                </TD>
                                <TD>
                                    <para>Description</para>
                                </TD>
                            </tr>
                        </thead>
                        <tbody>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#ccombobox__addstring">CComboBox::AddString</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Adds a string to the end of the list in the list box of a combo box, or at the sorted position for list boxes with the <legacyBold>CBS_SORT</legacyBold> style.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#ccombobox__clear">CComboBox::Clear</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Deletes (clears) the current selection, if any, in the edit control.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#ccombobox__compareitem">CComboBox::CompareItem</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Called by the framework to determine the relative position of a new list item in a sorted owner-drawn combo box.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#ccombobox__copy">CComboBox::Copy</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Copies the current selection, if any, onto the Clipboard in <legacyBold>CF_TEXT</legacyBold> format.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#ccombobox__create">CComboBox::Create</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Creates the combo box and attaches it to the <unmanagedCodeEntityReference>CComboBox</unmanagedCodeEntityReference> object.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#ccombobox__cut">CComboBox::Cut</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Deletes (cuts) the current selection, if any, in the edit control and copies the deleted text onto the Clipboard in <legacyBold>CF_TEXT</legacyBold> format.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#ccombobox__deleteitem">CComboBox::DeleteItem</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Called by the framework when a list item is deleted from an owner-drawn combo box.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#ccombobox__deletestring">CComboBox::DeleteString</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Deletes a string from the list box of a combo box.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#ccombobox__dir">CComboBox::Dir</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Adds a list of file names to the list box of a combo box.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#ccombobox__drawitem">CComboBox::DrawItem</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Called by the framework when a visual aspect of an owner-drawn combo box changes.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#ccombobox__findstring">CComboBox::FindString</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Finds the first string that contains the specified prefix in the list box of a combo box.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#ccombobox__findstringexact">CComboBox::FindStringExact</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Finds the first list-box string (in a combo box) that matches the specified string.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#ccombobox__getcomboboxinfo">CComboBox::GetComboBoxInfo</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Retrieves information about the <unmanagedCodeEntityReference>CComboBox</unmanagedCodeEntityReference> object.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#ccombobox__getcount">CComboBox::GetCount</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Retrieves the number of items in the list box of a combo box.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#ccombobox__getcuebanner">CComboBox::GetCueBanner</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Gets the cue text that is displayed for a combo box control.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#ccombobox__getcursel">CComboBox::GetCurSel</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Retrieves the index of the currently selected item, if any, in the list box of a combo box.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#ccombobox__getdroppedcontrolrect">CComboBox::GetDroppedControlRect</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Retrieves the screen coordinates of the visible (dropped down) list box of a drop-down combo box.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#ccombobox__getdroppedstate">CComboBox::GetDroppedState</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Determines whether the list box of a drop-down combo box is visible (dropped down).</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#ccombobox__getdroppedwidth">CComboBox::GetDroppedWidth</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Retrieves the minimum allowed width for the drop-down list-box portion of a combo box.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#ccombobox__geteditsel">CComboBox::GetEditSel</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Gets the starting and ending character positions of the current selection in the edit control of a combo box.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#ccombobox__getextendedui">CComboBox::GetExtendedUI</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Determines whether a combo box has the default user interface or the extended user interface.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#ccombobox__gethorizontalextent">CComboBox::GetHorizontalExtent</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Returns the width in pixels that the list-box portion of the combo box can be scrolled horizontally.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#ccombobox__getitemdata">CComboBox::GetItemData</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Retrieves the application-supplied 32-bit value associated with the specified combo-box item.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#ccombobox__getitemdataptr">CComboBox::GetItemDataPtr</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Retrieves the application-supplied 32-bit pointer that is associated with the specified combo-box item.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#ccombobox__getitemheight">CComboBox::GetItemHeight</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Retrieves the height of list items in a combo box.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#ccombobox__getlbtext">CComboBox::GetLBText</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Gets a string from the list box of a combo box.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#ccombobox__getlbtextlen">CComboBox::GetLBTextLen</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Gets the length of a string in the list box of a combo box.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#ccombobox__getlocale">CComboBox::GetLocale</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Retrieves the locale identifier for a combo box.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#ccombobox__getminvisible">CComboBox::GetMinVisible</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Gets the minimum number of visible items in the drop-down list of the current combo box.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#ccombobox__gettopindex">CComboBox::GetTopIndex</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Returns the index of the first visible item in the list-box portion of the combo box.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#ccombobox__initstorage">CComboBox::InitStorage</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Preallocates blocks of memory for items and strings in the list-box portion of the combo box.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#ccombobox__insertstring">CComboBox::InsertString</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Inserts a string into the list box of a combo box.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#ccombobox__limittext">CComboBox::LimitText</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Limits the length of the text that the user can enter into the edit control of a combo box.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#ccombobox__measureitem">CComboBox::MeasureItem</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Called by the framework to determine combo box dimensions when an owner-drawn combo box is created.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#ccombobox__paste">CComboBox::Paste</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Inserts the data from the Clipboard into the edit control at the current cursor position. Data is inserted only if the Clipboard contains data in <legacyBold>CF_TEXT</legacyBold> format.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#ccombobox__resetcontent">CComboBox::ResetContent</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Removes all items from the list box and edit control of a combo box.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#ccombobox__selectstring">CComboBox::SelectString</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Searches for a string in the list box of a combo box and, if the string is found, selects the string in the list box and copies the string to the edit control.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#ccombobox__setcuebanner">CComboBox::SetCueBanner</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Sets the cue text that is displayed for a combo box control.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#ccombobox__setcursel">CComboBox::SetCurSel</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Selects a string in the list box of a combo box.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#ccombobox__setdroppedwidth">CComboBox::SetDroppedWidth</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Sets the minimum allowed width for the drop-down list-box portion of a combo box.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#ccombobox__seteditsel">CComboBox::SetEditSel</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Selects characters in the edit control of a combo box.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#ccombobox__setextendedui">CComboBox::SetExtendedUI</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Selects either the default user interface or the extended user interface for a combo box that has the <legacyBold>CBS_DROPDOWN</legacyBold> or <legacyBold>CBS_DROPDOWNLIST</legacyBold> style.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#ccombobox__sethorizontalextent">CComboBox::SetHorizontalExtent</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Sets the width in pixels that the list-box portion of the combo box can be scrolled horizontally.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#ccombobox__setitemdata">CComboBox::SetItemData</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Sets the 32-bit value associated with the specified item in a combo box.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#ccombobox__setitemdataptr">CComboBox::SetItemDataPtr</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Sets the 32-bit pointer associated with the specified item in a combo box.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#ccombobox__setitemheight">CComboBox::SetItemHeight</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Sets the height of list items in a combo box or the height of the edit-control (or static-text) portion of a combo box.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#ccombobox__setlocale">CComboBox::SetLocale</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Sets the locale identifier for a combo box.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#ccombobox__setminvisibleitems">CComboBox::SetMinVisibleItems</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Sets the minimum number of visible items in the drop-down list of the current combo box.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#ccombobox__settopindex">CComboBox::SetTopIndex</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Tells the list-box portion of the combo box to display the item with the specified index at the top.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#ccombobox__showdropdown">CComboBox::ShowDropDown</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Shows or hides the list box of a combo box that has the <legacyBold>CBS_DROPDOWN</legacyBold> or <legacyBold>CBS_DROPDOWNLIST</legacyBold> style.</para>
                                </TD>
                            </tr>
                        </tbody>
                    </table>
                </content>
            </section>
        </sections>
    </section>
    <languageReferenceRemarks>
        <content>
            <para>A combo box consists of a list box combined with either a static control or edit control. The list-box portion of the control may be displayed at all times or may only drop down when the user selects the drop-down arrow next to the control.</para>
            <para>The currently selected item (if any) in the list box is displayed in the static or edit control. In addition, if the combo box has the drop-down list style, the user can type the initial character of one of the items in the list, and the list box, if visible, will highlight the next item with that initial character.</para>
            <para>The following table compares the three combo-box <legacyLink xlink:href="d21a5023-e6a2-495b-a6bd-010a515cbc63">styles</legacyLink>. </para>
            <table xmlns:caps="http://schemas.microsoft.com/build/caps/2013/11">
                <thead>
                    <tr>
                        <TD>
                            <para>Style</para>
                        </TD>
                        <TD>
                            <para>When is list box visible?</para>
                        </TD>
                        <TD>
                            <para>Static or edit control?</para>
                        </TD>
                    </tr>
                </thead>
                <tbody>
                    <tr>
                        <TD>
                            <para>Simple</para>
                        </TD>
                        <TD>
                            <para>Always</para>
                        </TD>
                        <TD>
                            <para>Edit</para>
                        </TD>
                    </tr>
                    <tr>
                        <TD>
                            <para>Drop-down</para>
                        </TD>
                        <TD>
                            <para>When dropped down</para>
                        </TD>
                        <TD>
                            <para>Edit</para>
                        </TD>
                    </tr>
                    <tr>
                        <TD>
                            <para>Drop-down list</para>
                        </TD>
                        <TD>
                            <para>When dropped down</para>
                        </TD>
                        <TD>
                            <para>Static</para>
                        </TD>
                    </tr>
                </tbody>
            </table>
            <para>You can create a <unmanagedCodeEntityReference>CComboBox</unmanagedCodeEntityReference> object from either a dialog template or directly in your code. In both cases, first call the constructor <unmanagedCodeEntityReference>CComboBox</unmanagedCodeEntityReference> to construct the <unmanagedCodeEntityReference>CComboBox</unmanagedCodeEntityReference> object; then call the <legacyLink xlink:href="#ccombobox__create">Create</legacyLink> member function to create the control and attach it to the <unmanagedCodeEntityReference>CComboBox</unmanagedCodeEntityReference> object. </para>
            <para>If you want to handle Windows notification messages sent by a combo box to its parent (usually a class derived from <unmanagedCodeEntityReference>CDialog</unmanagedCodeEntityReference>), add a message-map entry and message-handler member function to the parent class for each message.</para>
            <para>Each message-map entry takes the following form:</para>
            <para> <legacyBold>ON_</legacyBold>Notification <legacyBold>(</legacyBold> <parameterReference>id</parameterReference> <legacyBold>,</legacyBold> <parameterReference>memberFxn</parameterReference> <legacyBold>)</legacyBold>
            </para>
            <para>where <parameterReference>id</parameterReference> specifies the child-window ID of the combo-box control sending the notification and <parameterReference>memberFxn</parameterReference> is the name of the parent member function you have written to handle the notification.</para>
            <para>The parent's function prototype is as follows:</para>
            <para> <legacyBold>afx_msg</legacyBold> <languageKeyword>void</languageKeyword> <parameterReference>memberFxn</parameterReference> <legacyBold>(</legacyBold> <legacyBold>);</legacyBold>
            </para>
            <para>The order in which certain notifications will be sent cannot be predicted. In particular, a <legacyBold>CBN_SELCHANGE</legacyBold> notification may occur either before or after a <legacyBold>CBN_CLOSEUP</legacyBold> notification.</para>
            <para>Potential message-map entries are the following:  </para>
            <list class="bullet">
                <listItem>
                    <para> <legacyBold>ON_CBN_CLOSEUP</legacyBold>   (Windows 3.1 and later.) The list box of a combo box has closed. This notification message is not sent for a combo box that has the <legacyLink xlink:href="d21a5023-e6a2-495b-a6bd-010a515cbc63">CBS_SIMPLE</legacyLink> style.</para>
                </listItem>
                <listItem>
                    <para> <legacyBold>ON_CBN_DBLCLK</legacyBold>   The user double-clicks a string in the list box of a combo box. This notification message is only sent for a combo box with the <legacyBold>CBS_SIMPLE</legacyBold> style. For a combo box with the <legacyLink xlink:href="d21a5023-e6a2-495b-a6bd-010a515cbc63">CBS_DROPDOWN</legacyLink> or <legacyLink xlink:href="d21a5023-e6a2-495b-a6bd-010a515cbc63">CBS_DROPDOWNLIST</legacyLink> style, a double-click cannot occur because a single click hides the list box.</para>
                </listItem>
                <listItem>
                    <para> <legacyBold>ON_CBN_DROPDOWN</legacyBold>   The list box of a combo box is about to drop down (be made visible). This notification message can occur only for a combo box with the <legacyBold>CBS_DROPDOWN</legacyBold> or <legacyBold>CBS_DROPDOWNLIST</legacyBold> style.</para>
                </listItem>
                <listItem>
                    <para> <legacyBold>ON_CBN_EDITCHANGE</legacyBold>   The user has taken an action that may have altered the text in the edit-control portion of a combo box. Unlike the <legacyBold>CBN_EDITUPDATE</legacyBold> message, this message is sent after Windows updates the screen. It is not sent if the combo box has the <legacyBold>CBS_DROPDOWNLIST</legacyBold> style.</para>
                </listItem>
                <listItem>
                    <para> <legacyBold>ON_CBN_EDITUPDATE</legacyBold>   The edit-control portion of a combo box is about to display altered text. This notification message is sent after the control has formatted the text but before it displays the text. It is not sent if the combo box has the <legacyBold>CBS_DROPDOWNLIST</legacyBold> style.</para>
                </listItem>
                <listItem>
                    <para> <legacyBold>ON_CBN_ERRSPACE</legacyBold>   The combo box cannot allocate enough memory to meet a specific request.</para>
                </listItem>
                <listItem>
                    <para> <legacyBold>ON_CBN_SELENDCANCEL</legacyBold>   (Windows 3.1 and later.) Indicates the user's selection should be canceled. The user clicks an item and then clicks another window or control to hide the list box of a combo box. This notification message is sent before the <legacyBold>CBN_CLOSEUP</legacyBold> notification message to indicate that the user's selection should be ignored. The <legacyBold>CBN_SELENDCANCEL</legacyBold> or <legacyBold>CBN_SELENDOK</legacyBold> notification message is sent even if the <legacyBold>CBN_CLOSEUP</legacyBold> notification message is not sent (as in the case of a combo box with the <legacyBold>CBS_SIMPLE</legacyBold> style).</para>
                </listItem>
                <listItem>
                    <para> <legacyBold>ON_CBN_SELENDOK</legacyBold>   The user selects an item and then either presses the ENTER key or clicks the DOWN ARROW key to hide the list box of a combo box. This notification message is sent before the <legacyBold>CBN_CLOSEUP</legacyBold> message to indicate that the user's selection should be considered valid. The <legacyBold>CBN_SELENDCANCEL</legacyBold> or <legacyBold>CBN_SELENDOK</legacyBold> notification message is sent even if the <legacyBold>CBN_CLOSEUP</legacyBold> notification message is not sent (as in the case of a combo box with the <legacyBold>CBS_SIMPLE</legacyBold> style).</para>
                </listItem>
                <listItem>
                    <para> <legacyBold>ON_CBN_KILLFOCUS</legacyBold>   The combo box is losing the input focus.</para>
                </listItem>
                <listItem>
                    <para> <legacyBold>ON_CBN_SELCHANGE</legacyBold>   The selection in the list box of a combo box is about to be changed as a result of the user either clicking in the list box or changing the selection by using the arrow keys. When processing this message, the text in the edit control of the combo box can only be retrieved via <unmanagedCodeEntityReference>GetLBText</unmanagedCodeEntityReference> or another similar function. <unmanagedCodeEntityReference>GetWindowText</unmanagedCodeEntityReference> cannot be used.</para>
                </listItem>
                <listItem>
                    <para> <legacyBold>ON_CBN_SETFOCUS</legacyBold>   The combo box receives the input focus.</para>
                </listItem>
            </list>
            <para>If you create a <unmanagedCodeEntityReference>CComboBox</unmanagedCodeEntityReference> object within a dialog box (through a dialog resource), the <unmanagedCodeEntityReference>CComboBox</unmanagedCodeEntityReference> object is automatically destroyed when the user closes the dialog box. </para>
            <para>If you embed a <unmanagedCodeEntityReference>CComboBox</unmanagedCodeEntityReference> object within another window object, you do not need to destroy it. If you create the <unmanagedCodeEntityReference>CComboBox</unmanagedCodeEntityReference> object on the stack, it is destroyed automatically. If you create the <unmanagedCodeEntityReference>CComboBox</unmanagedCodeEntityReference> object on the heap by using the <legacyBold>new</legacyBold> function, you must call <legacyBold>delete</legacyBold> on the object to destroy it when the Windows combo box is destroyed.</para>
            <para> <legacyBold>Note</legacyBold>   If you want to handle <unmanagedCodeEntityReference>WM_KEYDOWN</unmanagedCodeEntityReference> and <unmanagedCodeEntityReference>WM_CHAR</unmanagedCodeEntityReference> messages, you have to subclass the combo box's edit and list box controls, derive classes from <unmanagedCodeEntityReference>CEdit</unmanagedCodeEntityReference> and <unmanagedCodeEntityReference>CListBox</unmanagedCodeEntityReference>, and add handlers for those messages to the derived classes. For more information, see                 <externalLink> <linkText>http://support.microsoft.com/default.aspx?scid=kb;en-us;Q174667</linkText> <linkUri>http://support.microsoft.com/default.aspx?scid=kb;en-us;Q174667</linkUri>
                </externalLink> and <legacyLink xlink:href="49a832ee-bc34-4126-88b3-bc1d9974f6c4#cwnd__subclasswindow">CWnd::SubclassWindow</legacyLink>.</para>
        </content>
    </languageReferenceRemarks>
    <section>
        <title>Inheritance Hierarchy</title>
        <content>
            <para> <legacyLink xlink:href="95e9acd3-d9eb-4ac0-b52b-ca4a501a7a3a">CObject</legacyLink>
            </para>
            <para> <legacyLink xlink:href="8883b132-2057-4ce0-a5f2-88979f8f2b13">CCmdTarget</legacyLink>
            </para>
            <para> <legacyLink xlink:href="49a832ee-bc34-4126-88b3-bc1d9974f6c4">CWnd</legacyLink>
            </para>
            <para> <unmanagedCodeEntityReference>CComboBox</unmanagedCodeEntityReference>
            </para>
        </content>
    </section>
    <requirements>
        <content>
            <para> <legacyBold>Header: </legacyBold>afxwin.h</para>
        </content>
    </requirements>
    <section address="ccombobox__addstring">
        <!--15cc6381-36d1-44be-a383-d7ca84faed44-->
        <title>CComboBox::AddString</title>
        <content>
            <para>Adds a string to the list box of a combo box.</para>
            <legacySyntax>int AddString( LPCTSTR lpszString );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>lpszString</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Points to the null-terminated string that is to be added.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>If the return value is greater than or equal to 0, it is the zero-based index to the string in the list box. The return value is <legacyBold>CB_ERR</legacyBold> if an error occurs; the return value is <legacyBold>CB_ERRSPACE</legacyBold> if insufficient space is available to store the new string. </para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>If the list box was not created with the <legacyLink xlink:href="d21a5023-e6a2-495b-a6bd-010a515cbc63">CBS_SORT</legacyLink> style, the string is added to the end of the list. Otherwise, the string is inserted into the list, and the list is sorted.</para>
                    <alert class="note">
                        <para>This function is not supported by the Windows <legacyBold>ComboBoxEx</legacyBold> control. For more information on this control, see                             <externalLink> <linkText>ComboBoxEx Controls</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/bb775738</linkUri>
                            </externalLink> in the <token>winSDK</token>.</para>
                    </alert>
                    <para>To insert a string into a specific location within the list, use the <legacyLink xlink:href="#ccombobox__insertstring">InsertString</legacyLink> member function.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <codeReference>NVC_MFC_CComboBox#3</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="ccombobox__ccombobox">
        <!--dea2ff99-e615-4f5e-b025-7dea84bc7df0-->
        <title>CComboBox::CComboBox</title>
        <content>
            <para>Constructs a <unmanagedCodeEntityReference>CComboBox</unmanagedCodeEntityReference> object.</para>
            <legacySyntax>CComboBox();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Example</title>
                <content>
                    <codeReference>NVC_MFC_CComboBox#1</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="ccombobox__clear">
        <!--dcd6f6ec-3303-4a29-a470-3dc00f961777-->
        <title>CComboBox::Clear</title>
        <content>
            <para>Deletes (clears) the current selection, if any, in the edit control of the combo box.</para>
            <legacySyntax>void Clear();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Remarks</title>
                <content>
                    <para>To delete the current selection and place the deleted contents onto the Clipboard, use the <legacyLink xlink:href="#ccombobox__cut">Cut</legacyLink> member function.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <codeReference>NVC_MFC_CComboBox#4</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="ccombobox__compareitem">
        <!--ca323a36-1cf8-433e-ba76-8c54ec0050e6-->
        <title>CComboBox::CompareItem</title>
        <content>
            <para>Called by the framework to determine the relative position of a new item in the list-box portion of a sorted owner-draw combo box.</para>
            <legacySyntax>virtual int CompareItem( LPCOMPAREITEMSTRUCT lpCompareItemStruct );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>lpCompareItemStruct</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A long pointer to a <legacyLink xlink:href="4b7131a5-5c7d-4e98-aac7-e85650262b52">COMPAREITEMSTRUCT</legacyLink> structure.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Indicates the relative position of the two items described in the <unmanagedCodeEntityReference>COMPAREITEMSTRUCT</unmanagedCodeEntityReference> structure. It can be any of the following values:</para>
                    <table xmlns:caps="http://schemas.microsoft.com/build/caps/2013/11">
                        <thead>
                            <tr>
                                <TD>
                                    <para>Value</para>
                                </TD>
                                <TD>
                                    <para>Meaning</para>
                                </TD>
                            </tr>
                        </thead>
                        <tbody>
                            <tr>
                                <TD>
                                    <para> – 1</para>
                                </TD>
                                <TD>
                                    <para>Item 1 sorts before item 2.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para>0</para>
                                </TD>
                                <TD>
                                    <para>Item 1 and item 2 sort the same.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para>1</para>
                                </TD>
                                <TD>
                                    <para>Item 1 sorts after item 2.</para>
                                </TD>
                            </tr>
                        </tbody>
                    </table>
                    <para>See <legacyLink xlink:href="49a832ee-bc34-4126-88b3-bc1d9974f6c4#cwnd__oncompareitem">CWnd::OnCompareItem</legacyLink> for a description of <unmanagedCodeEntityReference>COMPAREITEMSTRUCT</unmanagedCodeEntityReference>.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>By default, this member function does nothing. If you create an owner-draw combo box with the <legacyBold>LBS_SORT</legacyBold> style, you must override this member function to assist the framework in sorting new items added to the list box.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <codeReference>NVC_MFC_CComboBox#5</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="ccombobox__copy">
        <!--451d88ca-8abd-4e40-921d-3fb1ba761200-->
        <title>CComboBox::Copy</title>
        <content>
            <para>Copies the current selection, if any, in the edit control of the combo box onto the Clipboard in <legacyBold>CF_TEXT</legacyBold> format.</para>
            <legacySyntax>void Copy();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Example</title>
                <content>
                    <codeReference>NVC_MFC_CComboBox#6</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="ccombobox__create">
        <!--4886d704-7054-4ea4-b8d1-fd55d0500cf2-->
        <title>CComboBox::Create</title>
        <content>
            <para>Creates the combo box and attaches it to the <unmanagedCodeEntityReference>CComboBox</unmanagedCodeEntityReference> object.</para>
            <legacySyntax>virtual BOOL Create(
    DWORD dwStyle,
    const RECT&amp; rect,
    CWnd* pParentWnd,
    UINT nID );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>dwStyle</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the style of the combo box. Apply any combination of <legacyLink xlink:href="d21a5023-e6a2-495b-a6bd-010a515cbc63">combo-box styles</legacyLink> to the box. </para>
                        </definition>
                        <definedTerm> <parameterReference>rect</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Points to the position and size of the combo box. Can be a <legacyLink xlink:href="1b3160de-64e9-40d1-89eb-af3e0fd6acf0">RECT</legacyLink> structure or a <unmanagedCodeEntityReference>CRect</unmanagedCodeEntityReference> object.</para>
                        </definition>
                        <definedTerm> <parameterReference>pParentWnd</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the combo box's parent window (usually a <unmanagedCodeEntityReference>CDialog</unmanagedCodeEntityReference>). It must not be <legacyBold>NULL</legacyBold>.</para>
                        </definition>
                        <definedTerm> <parameterReference>nID</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the combo box's control ID.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Nonzero if successful; otherwise 0.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>You construct a <unmanagedCodeEntityReference>CComboBox</unmanagedCodeEntityReference> object in two steps. First, call the constructor and then call <legacyBold>Create</legacyBold>, which creates the Windows combo box and attaches it to the <unmanagedCodeEntityReference>CComboBox</unmanagedCodeEntityReference> object. </para>
                    <para>When <legacyBold>Create</legacyBold> executes, Windows sends the <legacyLink xlink:href="49a832ee-bc34-4126-88b3-bc1d9974f6c4#cwnd__onnccreate">WM_NCCREATE</legacyLink>, <legacyLink xlink:href="49a832ee-bc34-4126-88b3-bc1d9974f6c4#cwnd__oncreate">WM_CREATE</legacyLink>, <legacyLink xlink:href="49a832ee-bc34-4126-88b3-bc1d9974f6c4#cwnd__onnccalcsize">WM_NCCALCSIZE</legacyLink>, and <legacyLink xlink:href="49a832ee-bc34-4126-88b3-bc1d9974f6c4#cwnd__ongetminmaxinfo">WM_GETMINMAXINFO</legacyLink> messages to the combo box. </para>
                    <para>These messages are handled by default by the <legacyLink xlink:href="49a832ee-bc34-4126-88b3-bc1d9974f6c4#cwnd__onnccreate">OnNcCreate</legacyLink>, <legacyLink xlink:href="49a832ee-bc34-4126-88b3-bc1d9974f6c4#cwnd__oncreate">OnCreate</legacyLink>, <legacyLink xlink:href="49a832ee-bc34-4126-88b3-bc1d9974f6c4#cwnd__onnccalcsize">OnNcCalcSize</legacyLink>, and <legacyLink xlink:href="49a832ee-bc34-4126-88b3-bc1d9974f6c4#cwnd__ongetminmaxinfo">OnGetMinMaxInfo</legacyLink> member functions in the <unmanagedCodeEntityReference>CWnd</unmanagedCodeEntityReference> base class. To extend the default message handling, derive a class from <unmanagedCodeEntityReference>CComboBox</unmanagedCodeEntityReference>, add a message map to the new class, and override the preceding message-handler member functions. Override <unmanagedCodeEntityReference>OnCreate</unmanagedCodeEntityReference>, for example, to perform needed initialization for a new class.</para>
                    <para>Apply the following <legacyLink xlink:href="c85ffbe4-f4ff-4227-917a-48ec4a411842">window styles</legacyLink> to a combo-box control. :  </para>
                    <list class="bullet">
                        <listItem>
                            <para> <legacyBold>WS_CHILD</legacyBold>   Always</para>
                        </listItem>
                        <listItem>
                            <para> <legacyBold>WS_VISIBLE</legacyBold>   Usually</para>
                        </listItem>
                        <listItem>
                            <para> <legacyBold>WS_DISABLED</legacyBold>   Rarely</para>
                        </listItem>
                        <listItem>
                            <para> <legacyBold>WS_VSCROLL</legacyBold>   To add vertical scrolling for the list box in the combo box</para>
                        </listItem>
                        <listItem>
                            <para> <legacyBold>WS_HSCROLL</legacyBold>   To add horizontal scrolling for the list box in the combo box</para>
                        </listItem>
                        <listItem>
                            <para> <legacyBold>WS_GROUP</legacyBold>   To group controls</para>
                        </listItem>
                        <listItem>
                            <para> <legacyBold>WS_TABSTOP</legacyBold>   To include the combo box in the tabbing order</para>
                        </listItem>
                    </list>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <codeReference>NVC_MFC_CComboBox#2</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="ccombobox__cut">
        <!--92895914-bf87-4731-9f6e-08b7c83e4109-->
        <title>CComboBox::Cut</title>
        <content>
            <para>Deletes (cuts) the current selection, if any, in the combo-box edit control and copies the deleted text onto the Clipboard in <legacyBold>CF_TEXT</legacyBold> format.</para>
            <legacySyntax>void Cut();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Remarks</title>
                <content>
                    <para>To delete the current selection without placing the deleted text onto the Clipboard, call the <legacyLink xlink:href="#ccombobox__clear">Clear</legacyLink> member function.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <codeReference>NVC_MFC_CComboBox#7</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="ccombobox__deleteitem">
        <!--3539fc14-1327-4ec7-b9c1-e0188bd8f81e-->
        <title>CComboBox::DeleteItem</title>
        <content>
            <para>Called by the framework when the user deletes an item from an owner-draw <unmanagedCodeEntityReference>CComboBox</unmanagedCodeEntityReference> object or destroys the combo box.</para>
            <legacySyntax>virtual void DeleteItem( LPDELETEITEMSTRUCT lpDeleteItemStruct );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>lpDeleteItemStruct</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A long pointer to a Windows <legacyLink xlink:href="48d3998c-f4a8-402a-bf90-df3770a78685">DELETEITEMSTRUCT</legacyLink> structure that contains information about the deleted item. See <legacyLink xlink:href="49a832ee-bc34-4126-88b3-bc1d9974f6c4#cwnd__ondeleteitem">CWnd::OnDeleteItem</legacyLink> for a description of this structure.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The default implementation of this function does nothing. Override this function to redraw the combo box as needed.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <codeReference>NVC_MFC_CComboBox#8</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="ccombobox__deletestring">
        <!--b49c4ef5-7d1a-4968-a841-47a3ac42db08-->
        <title>CComboBox::DeleteString</title>
        <content>
            <para>Deletes the item in position <parameterReference>nIndex</parameterReference> from the combo box.</para>
            <legacySyntax>int DeleteString( UINT nIndex );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>nIndex</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the index to the string that is to be deleted.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>If the return value is greater than or equal to 0, then it is a count of the strings remaining in the list. The return value is <legacyBold>CB_ERR</legacyBold> if <parameterReference>nIndex</parameterReference> specifies an index greater than the number of items in the list.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>All items following <parameterReference>nIndex</parameterReference> now move down one position. For example, if a combo box contains two items, deleting the first item will cause the remaining item to now be in the first position. <parameterReference>nIndex</parameterReference>=0 for the item in the first position.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <codeReference>NVC_MFC_CComboBox#9</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="ccombobox__dir">
        <!--dd9b13ff-c1b9-4411-977a-5bd4c4c76a16-->
        <title>CComboBox::Dir</title>
        <content>
            <para>Adds a list of filenames or drives to the list box of a combo box.</para>
            <legacySyntax>int Dir(
    UINT attr,
    LPCTSTR lpszWildCard );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>attr</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Can be any combination of the <languageKeyword>enum</languageKeyword> values described in <legacyLink xlink:href="b2eb5757-d499-4e67-b044-dd7d1abaa0f8#cfile__getstatus">CFile::GetStatus</legacyLink> or any combination of the following values:</para>
                            <list class="bullet">
                                <listItem>
                                    <para> <legacyBold>DDL_READWRITE</legacyBold>   File can be read from or written to.</para>
                                </listItem>
                                <listItem>
                                    <para> <legacyBold>DDL_READONLY</legacyBold>   File can be read from but not written to.</para>
                                </listItem>
                                <listItem>
                                    <para> <legacyBold>DDL_HIDDEN</legacyBold>   File is hidden and does not appear in a directory listing.</para>
                                </listItem>
                                <listItem>
                                    <para> <legacyBold>DDL_SYSTEM</legacyBold>   File is a system file.</para>
                                </listItem>
                                <listItem>
                                    <para> <legacyBold>DDL_DIRECTORY</legacyBold>   The name specified by <parameterReference>lpszWildCard</parameterReference> specifies a directory.</para>
                                </listItem>
                                <listItem>
                                    <para> <legacyBold>DDL_ARCHIVE</legacyBold>   File has been archived.</para>
                                </listItem>
                                <listItem>
                                    <para> <legacyBold>DDL_DRIVES</legacyBold>   Include all drives that match the name specified by <parameterReference>lpszWildCard</parameterReference>.</para>
                                </listItem>
                                <listItem>
                                    <para> <legacyBold>DDL_EXCLUSIVE</legacyBold>   Exclusive flag. If the exclusive flag is set, only files of the specified type are listed. Otherwise, files of the specified type are listed in addition to "normal" files.</para>
                                </listItem>
                            </list>
                        </definition>
                        <definedTerm> <parameterReference>lpszWildCard</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Points to a file-specification string. The string can contain wildcards (for example, *.*).</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>If the return value is greater than or equal to 0, it is the zero-based index of the last filename added to the list. The return value is <legacyBold>CB_ERR</legacyBold> if an error occurs; the return value is <legacyBold>CB_ERRSPACE</legacyBold> if insufficient space is available to store the new strings.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>This function is not supported by the Windows <legacyBold>ComboBoxEx</legacyBold> control. For more information on this control, see                         <externalLink> <linkText>ComboBoxEx Controls</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/bb775738</linkUri>
                        </externalLink> in the <token>winSDK</token>.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <codeReference>NVC_MFC_CComboBox#10</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="ccombobox__drawitem">
        <!--b1148873-a8db-4bbc-9b4b-70ccb778b765-->
        <title>CComboBox::DrawItem</title>
        <content>
            <para>Called by the framework when a visual aspect of an owner-draw combo box changes.</para>
            <legacySyntax>virtual void DrawItem( LPDRAWITEMSTRUCT lpDrawItemStruct );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>lpDrawItemStruct</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A pointer to a <legacyLink xlink:href="ba9ef1d4-aebb-45e9-b956-4b81a02e50f7">DRAWITEMSTRUCT</legacyLink> structure that contains information about the type of drawing required.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The <legacyBold>itemAction</legacyBold> member of the <unmanagedCodeEntityReference>DRAWITEMSTRUCT</unmanagedCodeEntityReference> structure defines the drawing action that is to be performed. See <legacyLink xlink:href="49a832ee-bc34-4126-88b3-bc1d9974f6c4#cwnd__ondrawitem">CWnd::OnDrawItem</legacyLink> for a description of this structure.</para>
                    <para>By default, this member function does nothing. Override this member function to implement drawing for an owner-draw <unmanagedCodeEntityReference>CComboBox</unmanagedCodeEntityReference> object. Before this member function terminates, the application should restore all graphics device interface (GDI) objects selected for the display context supplied in <parameterReference>lpDrawItemStruct</parameterReference>.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <codeReference>NVC_MFC_CComboBox#11</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="ccombobox__findstring">
        <!--1568ca40-c990-4922-9bba-9532a6bc6610-->
        <title>CComboBox::FindString</title>
        <content>
            <para>Finds, but doesn't select, the first string that contains the specified prefix in the list box of a combo box.</para>
            <legacySyntax>int FindString(
    int nStartAfter,
    LPCTSTR lpszString ) const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>nStartAfter</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Contains the zero-based index of the item before the first item to be searched. When the search reaches the bottom of the list box, it continues from the top of the list box back to the item specified by <parameterReference>nStartAfter</parameterReference>. If –1, the entire list box is searched from the beginning.</para>
                        </definition>
                        <definedTerm> <parameterReference>lpszString</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Points to the null-terminated string that contains the prefix to search for. The search is case independent, so this string can contain any combination of uppercase and lowercase letters.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>If the return value is greater than or equal to 0, it is the zero-based index of the matching item. It is <legacyBold>CB_ERR</legacyBold> if the search was unsuccessful.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>This function is not supported by the Windows <legacyBold>ComboBoxEx</legacyBold> control. For more information on this control, see                         <externalLink> <linkText>ComboBoxEx Controls</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/bb775738</linkUri>
                        </externalLink> in the <token>winSDK</token>.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <codeReference>NVC_MFC_CComboBox#12</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="ccombobox__findstringexact">
        <!--fc6b7a72-e80d-45c5-9feb-3c0df342dbc5-->
        <title>CComboBox::FindStringExact</title>
        <content>
            <para>Call the <unmanagedCodeEntityReference>FindStringExact</unmanagedCodeEntityReference> member function to find the first list-box string (in a combo box) that matches the string specified in <parameterReference>lpszFind</parameterReference>.</para>
            <legacySyntax>int FindStringExact(
    int nIndexStart,
    LPCTSTR lpszFind ) const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>nIndexStart</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the zero-based index of the item before the first item to be searched. When the search reaches the bottom of the list box, it continues from the top of the list box back to the item specified by <parameterReference>nIndexStart</parameterReference>. If <parameterReference>nIndexStart</parameterReference> is –1, the entire list box is searched from the beginning.</para>
                        </definition>
                        <definedTerm> <parameterReference>lpszFind</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Points to the null-terminated string to search for. This string can contain a complete filename, including the extension. The search is not case sensitive, so this string can contain any combination of uppercase and lowercase letters.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>The zero-based index of the matching item, or <legacyBold>CB_ERR</legacyBold> if the search was unsuccessful.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>If the combo box was created with an owner-draw style but without the <legacyLink xlink:href="d21a5023-e6a2-495b-a6bd-010a515cbc63">CBS_HASSTRINGS</legacyLink> style, <unmanagedCodeEntityReference>FindStringExact</unmanagedCodeEntityReference> attempts to match the doubleword value against the value of <parameterReference>lpszFind</parameterReference>.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <codeReference>NVC_MFC_CComboBox#13</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="ccombobox__getcomboboxinfo">
        <!--dad7cbe4-8417-419c-8fc8-0af33e502b4e-->
        <title>CComboBox::GetComboBoxInfo</title>
        <content>
            <para>Retrieves information for the <unmanagedCodeEntityReference>CComboBox</unmanagedCodeEntityReference> object.</para>
            <legacySyntax>BOOL GetComboBoxInfo( PCOMBOBOXINFO pcbi ) const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>
                            <legacyItalic>pcbi</legacyItalic>
                        </definedTerm>
                        <definition>
                            <para>A pointer to the                                 <externalLink> <linkText>COMBOBOXINFO</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/bb775798</linkUri>
                                </externalLink> structure.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Returns <legacyBold>TRUE</legacyBold> on success, <legacyBold>FALSE</legacyBold> on failure. </para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>This member function emulates the functionality of the                         <externalLink> <linkText>CB_GETCOMBOBOXINFO</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/bb775839</linkUri>
                        </externalLink> message, as described in the <token>winSDK</token>.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="ccombobox__getcount">
        <!--6a624746-d346-438b-b53a-e54d390b6f16-->
        <title>CComboBox::GetCount</title>
        <content>
            <para>Call this member function to retrieve the number of items in the list-box portion of a combo box.</para>
            <legacySyntax>int GetCount() const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>The number of items. The returned count is one greater than the index value of the last item (the index is zero-based). It is <legacyBold>CB_ERR</legacyBold> if an error occurs.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <codeReference>NVC_MFC_CComboBox#14</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="ccombobox__getcuebanner">
        <!--308b9c92-8e70-43cc-ae14-b1904362d270-->
        <title>CComboBox::GetCueBanner</title>
        <content>
            <para>Gets the cue text that is displayed for a combo box control.</para>
            <legacySyntax>CString GetCueBanner() const;
BOOL GetCueBanner(
     LPTSTR lpszText, 
     int cchText ) const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <table xmlns:caps="http://schemas.microsoft.com/build/caps/2013/11">
                        <thead>
                            <tr>
                                <TD>
                                    <para>Parameter</para>
                                </TD>
                                <TD>
                                    <para>Description</para>
                                </TD>
                            </tr>
                        </thead>
                        <tbody>
                            <tr>
                                <TD>
                                    <para>[out] <parameterReference>lpszText</parameterReference>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Pointer to a buffer that receives the cue banner text.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para>[in] <parameterReference>cchText</parameterReference>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Size of the buffer that the <parameterReference>lpszText</parameterReference> parameter points to.</para>
                                </TD>
                            </tr>
                        </tbody>
                    </table>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>In the first overload, a <legacyLink xlink:href="ed018aaf-8b10-46f9-828c-f9c092dc7609">CString</legacyLink> object that contains the cue banner text if it exists; otherwise, a <unmanagedCodeEntityReference>CString</unmanagedCodeEntityReference> object that has zero length.</para>
                    <para>-or-</para>
                    <para>In the second overload, <codeInline>true</codeInline> if this method is successful; otherwise, <codeInline>false</codeInline>.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>Cue text is a prompt that is displayed in the input area of the combo box control. The cue text is displayed until the user provides input.</para>
                    <para>This method sends the                         <externalLink> <linkText>CB_GETCUEBANNER</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/bb775843</linkUri>
                        </externalLink> message, which is described in the <token>winSDK</token>.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="ccombobox__getcursel">
        <!--9d17af2d-811c-42ce-931f-0f50ad5e9269-->
        <title>CComboBox::GetCurSel</title>
        <content>
            <para>Call this member function to determine which item in the combo box is selected.</para>
            <legacySyntax>int GetCurSel() const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>The zero-based index of the currently selected item in the list box of a combo box, or <legacyBold>CB_ERR</legacyBold> if no item is selected.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para> <unmanagedCodeEntityReference>GetCurSel</unmanagedCodeEntityReference> returns an index into the list.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <codeReference>NVC_MFC_CComboBox#15</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="ccombobox__getdroppedcontrolrect">
        <!--f332ed8c-bcbf-4670-9855-c9ffd3afe9ed-->
        <title>CComboBox::GetDroppedControlRect</title>
        <content>
            <para>Call the <unmanagedCodeEntityReference>GetDroppedControlRect</unmanagedCodeEntityReference> member function to retrieve the screen coordinates of the visible (dropped-down) list box of a drop-down combo box.</para>
            <legacySyntax>void GetDroppedControlRect( LPRECT lprect ) const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>
                            <legacyItalic>lprect</legacyItalic>
                        </definedTerm>
                        <definition>
                            <para>Points to the <legacyLink xlink:href="1b3160de-64e9-40d1-89eb-af3e0fd6acf0">RECT</legacyLink> structure that is to receive the coordinates.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <codeReference>NVC_MFC_CComboBox#16</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="ccombobox__getdroppedstate">
        <!--90b75de4-104a-46e1-aa26-3e75ec7a8095-->
        <title>CComboBox::GetDroppedState</title>
        <content>
            <para>Call the <unmanagedCodeEntityReference>GetDroppedState</unmanagedCodeEntityReference> member function to determine whether the list box of a drop-down combo box is visible (dropped down).</para>
            <legacySyntax>BOOL GetDroppedState() const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Nonzero if the list box is visible; otherwise 0.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <codeReference>NVC_MFC_CComboBox#17</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="ccombobox__getdroppedwidth">
        <!--d136d097-3c26-4db6-94f2-be8349a63ac3-->
        <title>CComboBox::GetDroppedWidth</title>
        <content>
            <para>Call this function to retrieve the minimum allowable width, in pixels, of the list box of a combo box.</para>
            <legacySyntax>int GetDroppedWidth() const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>If successful, the minimum allowable width, in pixels; otherwise, <legacyBold>CB_ERR</legacyBold>.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>This function only applies to combo boxes with the <legacyLink xlink:href="d21a5023-e6a2-495b-a6bd-010a515cbc63">CBS_DROPDOWN</legacyLink> or <legacyLink xlink:href="d21a5023-e6a2-495b-a6bd-010a515cbc63">CBS_DROPDOWNLIST</legacyLink> style.</para>
                    <para>By default, the minimum allowable width of the drop-down list box is 0. The minimum allowable width can be set by calling <legacyLink xlink:href="#ccombobox__setdroppedwidth">SetDroppedWidth</legacyLink>. When the list-box portion of the combo box is displayed, its width is the larger of the minimum allowable width or the combo box width.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <!--startsnip-->
                            <para>See the example for <legacyLink xlink:href="#ccombobox__setdroppedwidth">SetDroppedWidth</legacyLink>.</para>
                        <!--endsnip-->
                </content>
            </section>
        </sections>
    </section>
    <section address="ccombobox__geteditsel">
        <!--b28d9022-129a-4025-916d-3238ac5f0216-->
        <title>CComboBox::GetEditSel</title>
        <content>
            <para>Gets the starting and ending character positions of the current selection in the edit control of a combo box.</para>
            <legacySyntax>DWORD GetEditSel() const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>A 32-bit value that contains the starting position in the low-order word and the position of the first nonselected character after the end of the selection in the high-order word. If this function is used on a combo box without an edit control, <legacyBold>CB_ERR</legacyBold> is returned.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <codeReference>NVC_MFC_CComboBox#18</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="ccombobox__getextendedui">
        <!--fad4b45d-587e-445b-9e16-c536c1e22708-->
        <title>CComboBox::GetExtendedUI</title>
        <content>
            <para>Call the <unmanagedCodeEntityReference>GetExtendedUI</unmanagedCodeEntityReference> member function to determine whether a combo box has the default user interface or the extended user interface.</para>
            <legacySyntax>BOOL GetExtendedUI() const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Nonzero if the combo box has the extended user interface; otherwise 0.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The extended user interface can be identified in the following ways:  </para>
                    <list class="bullet">
                        <listItem>
                            <para>Clicking the static control displays the list box only for combo boxes with the <legacyLink xlink:href="d21a5023-e6a2-495b-a6bd-010a515cbc63">CBS_DROPDOWNLIST</legacyLink> style.</para>
                        </listItem>
                        <listItem>
                            <para>Pressing the DOWN ARROW key displays the list box (F4 is disabled).</para>
                        </listItem>
                    </list>
                    <para>Scrolling in the static control is disabled when the item list is not visible (arrow keys are disabled).</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <codeReference>NVC_MFC_CComboBox#19</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="ccombobox__gethorizontalextent">
        <!--50ab291d-3f24-46c8-93e4-04e2326e0077-->
        <title>CComboBox::GetHorizontalExtent</title>
        <content>
            <para>Retrieves from the combo box the width in pixels by which the list-box portion of the combo box can be scrolled horizontally.</para>
            <legacySyntax>UINT GetHorizontalExtent() const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>The scrollable width of the list-box portion of the combo box, in pixels.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>This is applicable only if the list-box portion of the combo box has a horizontal scroll bar.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <codeReference>NVC_MFC_CComboBox#20</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="ccombobox__getitemdata">
        <!--3c9ca5de-1905-4949-84d1-6b5616a3d4b6-->
        <title>CComboBox::GetItemData</title>
        <content>
            <para>Retrieves the application-supplied 32-bit value associated with the specified combo-box item.</para>
            <legacySyntax>DWORD_PTR GetItemData( int nIndex ) const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>nIndex</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Contains the zero-based index of an item in the combo box's list box.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>The 32-bit value associated with the item, or <legacyBold>CB_ERR</legacyBold> if an error occurs.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The 32-bit value can be set with the <parameterReference>dwItemData</parameterReference> parameter of a <legacyLink xlink:href="#ccombobox__setitemdata">SetItemData</legacyLink> member function call. Use the <unmanagedCodeEntityReference>GetItemDataPtr</unmanagedCodeEntityReference> member function if the 32-bit value to be retrieved is a pointer ( <legacyBold>void*</legacyBold>).</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <codeReference>NVC_MFC_CComboBox#21</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="ccombobox__getitemdataptr">
        <!--9ea5b5f5-435b-475f-8fbe-e7cb971ceb8a-->
        <title>CComboBox::GetItemDataPtr</title>
        <content>
            <para>Retrieves the application-supplied 32-bit value associated with the specified combo-box item as a pointer ( <legacyBold>void*</legacyBold>).</para>
            <legacySyntax>void* GetItemDataPtr( int nIndex ) const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>nIndex</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Contains the zero-based index of an item in the combo box's list box.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Retrieves a pointer, or –1 if an error occurs.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <codeReference>NVC_MFC_CComboBox#22</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="ccombobox__getitemheight">
        <!--669a9cfd-05cd-460f-b7d3-e80fa921fafa-->
        <title>CComboBox::GetItemHeight</title>
        <content>
            <para>Call the <unmanagedCodeEntityReference>GetItemHeight</unmanagedCodeEntityReference> member function to retrieve the height of list items in a combo box.</para>
            <legacySyntax>int GetItemHeight( int nIndex ) const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>nIndex</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the component of the combo box whose height is to be retrieved. If the <parameterReference>nIndex</parameterReference> parameter is –1, the height of the edit-control (or static-text) portion of the combo box is retrieved. If the combo box has the <legacyLink xlink:href="d21a5023-e6a2-495b-a6bd-010a515cbc63">CBS_OWNERDRAWVARIABLE</legacyLink> style, <parameterReference>nIndex</parameterReference> specifies the zero-based index of the list item whose height is to be retrieved. Otherwise, <parameterReference>nIndex</parameterReference> should be set to 0.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>The height, in pixels, of the specified item in a combo box. The return value is <legacyBold>CB_ERR</legacyBold> if an error occurs.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <codeReference>NVC_MFC_CComboBox#23</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="ccombobox__getlbtext">
        <!--63fe09d9-8df7-46eb-ae6a-f6c97bf6e750-->
        <title>CComboBox::GetLBText</title>
        <content>
            <para>Gets a string from the list box of a combo box.</para>
            <legacySyntax>int GetLBText(
    int nIndex,
    LPTSTR lpszText ) const;

void GetLBText(
    int nIndex,
    CString&amp; rString ) const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>nIndex</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Contains the zero-based index of the list-box string to be copied.</para>
                        </definition>
                        <definedTerm> <parameterReference>lpszText</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Points to a buffer that is to receive the string. The buffer must have sufficient space for the string and a terminating null character.</para>
                        </definition>
                        <definedTerm> <parameterReference>rString</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A reference to a <unmanagedCodeEntityReference>CString</unmanagedCodeEntityReference>.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>The length (in bytes) of the string, excluding the terminating null character. If <parameterReference>nIndex</parameterReference> does not specify a valid index, the return value is <legacyBold>CB_ERR</legacyBold>.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The second form of this member function fills a <unmanagedCodeEntityReference>CString</unmanagedCodeEntityReference> object with the item's text.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <codeReference>NVC_MFC_CComboBox#24</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="ccombobox__getlbtextlen">
        <!--c1a75548-907a-4e43-a179-85cd08e94c0c-->
        <title>CComboBox::GetLBTextLen</title>
        <content>
            <para>Gets the length of a string in the list box of a combo box.</para>
            <legacySyntax>int GetLBTextLen( int nIndex ) const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>nIndex</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Contains the zero-based index of the list-box string.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>The length of the string in bytes, excluding the terminating null character. If <parameterReference>nIndex</parameterReference> does not specify a valid index, the return value is <legacyBold>CB_ERR</legacyBold>.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <!--startsnip-->
                            <para>See the example for <legacyLink xlink:href="#ccombobox__getlbtext">CComboBox::GetLBText</legacyLink>.</para>
                        <!--endsnip-->
                </content>
            </section>
        </sections>
    </section>
    <section address="ccombobox__getlocale">
        <!--4398ead0-9921-4817-acf0-58405a29d918-->
        <title>CComboBox::GetLocale</title>
        <content>
            <para>Retrieves the locale used by the combo box.</para>
            <legacySyntax>LCID GetLocale() const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>The locale identifier (LCID) value for the strings in the combo box.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The locale is used, for example, to determine the sort order of the strings in a sorted combo box.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <!--startsnip-->
                            <para>See the example for <legacyLink xlink:href="#ccombobox__setlocale">CComboBox::SetLocale</legacyLink>.</para>
                        <!--endsnip-->
                </content>
            </section>
        </sections>
    </section>
    <section address="ccombobox__getminvisible">
        <!--d24382fe-947e-4468-b8db-4139230049c0-->
        <title>CComboBox::GetMinVisible</title>
        <content>
            <para>Gets the minimum number of visible items in the drop-down list of the current combo box control.</para>
            <legacySyntax>int GetMinVisible() const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>The minimum number of visible items in the current drop-down list.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>This method sends the                         <externalLink> <linkText>CB_GETMINVISIBLE</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/bb775915</linkUri>
                        </externalLink> message, which is described in the <token>winSDK</token>.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="ccombobox__gettopindex">
        <!--6776c539-b8a0-48ba-a956-2a423c3fbe5f-->
        <title>CComboBox::GetTopIndex</title>
        <content>
            <para>Retrieves the zero-based index of the first visible item in the list-box portion of the combo box.</para>
            <legacySyntax>int GetTopIndex() const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>The zero-based index of the first visible item in the list-box portion of the combo box if successful, <legacyBold>CB_ERR</legacyBold> otherwise.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>Initially, item 0 is at the top of the list box, but if the list box is scrolled, another item may be at the top.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <codeReference>NVC_MFC_CComboBox#25</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="ccombobox__initstorage">
        <!--3f1300af-14c5-415a-9c82-bfa6a7f452ad-->
        <title>CComboBox::InitStorage</title>
        <content>
            <para>Allocates memory for storing list box items in the list-box portion of the combo box.</para>
            <legacySyntax>int InitStorage(
    int nItems,
    UINT nBytes );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>nItems</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the number of items to add.</para>
                        </definition>
                        <definedTerm> <parameterReference>nBytes</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the amount of memory, in bytes, to allocate for item strings.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>If successful, the maximum number of items that the list-box portion of the combo box can store before a memory reallocation is needed, otherwise <legacyBold>CB_ERRSPACE</legacyBold>, meaning not enough memory is available.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>Call this function before adding a large number of items to the list-box portion of the <unmanagedCodeEntityReference>CComboBox</unmanagedCodeEntityReference>.</para>
                    <para>Windows 95/98 only: The <parameterReference>wParam</parameterReference> parameter is limited to 16-bit values. This means list boxes cannot contain more than 32,767 items. Although the number of items is restricted, the total size of the items in a list box is limited only by available memory.</para>
                    <para>This function helps speed up the initialization of list boxes that have a large number of items (more than 100). It preallocates the specified amount of memory so that subsequent <legacyLink xlink:href="#ccombobox__addstring">AddString</legacyLink>, <legacyLink xlink:href="#ccombobox__insertstring">InsertString</legacyLink>, and <legacyLink xlink:href="#ccombobox__dir">Dir</legacyLink> functions take the shortest possible time. You can use estimates for the parameters. If you overestimate, some extra memory is allocated; if you underestimate, the normal allocation is used for items that exceed the preallocated amount.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <codeReference>NVC_MFC_CComboBox#26</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="ccombobox__insertstring">
        <!--a0a5f935-2b4f-4363-a7e4-e1b66716b495-->
        <title>CComboBox::InsertString</title>
        <content>
            <para>Inserts a string into the list box of a combo box.</para>
            <legacySyntax>int InsertString(
    int nIndex,
    LPCTSTR lpszString );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>nIndex</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Contains the zero-based index to the position in the list box that will receive the string. If this parameter is –1, the string is added to the end of the list.</para>
                        </definition>
                        <definedTerm> <parameterReference>lpszString</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Points to the null-terminated string that is to be inserted.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>The zero-based index of the position at which the string was inserted. The return value is <legacyBold>CB_ERR</legacyBold> if an error occurs. The return value is <legacyBold>CB_ERRSPACE</legacyBold> if insufficient space is available to store the new string.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>Unlike the <legacyLink xlink:href="#ccombobox__addstring">AddString</legacyLink> member function, the <unmanagedCodeEntityReference>InsertString</unmanagedCodeEntityReference> member function does not cause a list with the <legacyLink xlink:href="d21a5023-e6a2-495b-a6bd-010a515cbc63">CBS_SORT</legacyLink> style to be sorted.</para>
                    <alert class="note">
                        <para>This function is not supported by the Windows <legacyBold>ComboBoxEx</legacyBold> control. For more information on this control, see                             <externalLink> <linkText>ComboBoxEx Controls</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/bb775738</linkUri>
                            </externalLink> in the <token>winSDK</token>.</para>
                    </alert>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <codeReference>NVC_MFC_CComboBox#27</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="ccombobox__limittext">
        <!--52397da7-7c13-4643-b6df-83ba49697032-->
        <title>CComboBox::LimitText</title>
        <content>
            <para>Limits the length in bytes of the text that the user can enter into the edit control of a combo box.</para>
            <legacySyntax>BOOL LimitText( int nMaxChars );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>nMaxChars</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the length (in bytes) of the text that the user can enter. If this parameter is 0, the text length is set to 65,535 bytes.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Nonzero if successful. If called for a combo box with the style <legacyLink xlink:href="d21a5023-e6a2-495b-a6bd-010a515cbc63">CBS_DROPDOWNLIST</legacyLink> or for a combo box without an edit control, the return value is <legacyBold>CB_ERR</legacyBold>.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>If the combo box does not have the style <legacyLink xlink:href="d21a5023-e6a2-495b-a6bd-010a515cbc63">CBS_AUTOHSCROLL</legacyLink>, setting the text limit to be larger than the size of the edit control will have no effect. </para>
                    <para> <unmanagedCodeEntityReference>LimitText</unmanagedCodeEntityReference> only limits the text the user can enter. It has no effect on any text already in the edit control when the message is sent, nor does it affect the length of the text copied to the edit control when a string in the list box is selected.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <codeReference>NVC_MFC_CComboBox#28</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="ccombobox__measureitem">
        <!--389f0d45-b443-4de2-ab13-a58aaad90d87-->
        <title>CComboBox::MeasureItem</title>
        <content>
            <para>Called by the framework when a combo box with an owner-draw style is created.</para>
            <legacySyntax>virtual void MeasureItem( LPMEASUREITEMSTRUCT lpMeasureItemStruct );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>lpMeasureItemStruct</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A long pointer to a <legacyLink xlink:href="d141ace4-47cb-46b5-a81c-ad2c5e5a8501">MEASUREITEMSTRUCT</legacyLink> structure.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>By default, this member function does nothing. Override this member function and fill in the <unmanagedCodeEntityReference>MEASUREITEMSTRUCT</unmanagedCodeEntityReference> structure to inform Windows of the dimensions of the list box in the combo box. If the combo box is created with the <legacyLink xlink:href="d21a5023-e6a2-495b-a6bd-010a515cbc63">CBS_OWNERDRAWVARIABLE</legacyLink> style, the framework calls this member function for each item in the list box. Otherwise, this member is called only once.</para>
                    <para>Using the <legacyBold>CBS_OWNERDRAWFIXED</legacyBold> style in an owner-draw combo box created with the <legacyLink xlink:href="49a832ee-bc34-4126-88b3-bc1d9974f6c4#cwnd__subclassdlgitem">SubclassDlgItem</legacyLink> member function of <unmanagedCodeEntityReference>CWnd</unmanagedCodeEntityReference> involves further programming considerations. See the discussion in <legacyLink xlink:href="1917a498-f643-457c-b570-9a0af7dbf7bb">Technical Note 14</legacyLink>. </para>
                    <para>See <legacyLink xlink:href="49a832ee-bc34-4126-88b3-bc1d9974f6c4#cwnd__onmeasureitem">CWnd::OnMeasureItem</legacyLink> for a description of the <unmanagedCodeEntityReference>MEASUREITEMSTRUCT</unmanagedCodeEntityReference> structure.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <codeReference>NVC_MFC_CComboBox#29</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="ccombobox__paste">
        <!--cfe35b59-d8e2-47bb-8cc7-9b0e21d951c2-->
        <title>CComboBox::Paste</title>
        <content>
            <para>Inserts the data from the Clipboard into the edit control of the combo box at the current cursor position.</para>
            <legacySyntax>void Paste();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Remarks</title>
                <content>
                    <para>Data is inserted only if the Clipboard contains data in <legacyBold>CF_TEXT</legacyBold> format.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <codeReference>NVC_MFC_CComboBox#30</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="ccombobox__resetcontent">
        <!--a0e68404-d745-4cd5-b326-2bf1bc44d7c1-->
        <title>CComboBox::ResetContent</title>
        <content>
            <para>Removes all items from the list box and edit control of a combo box.</para>
            <legacySyntax>void ResetContent();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Example</title>
                <content>
                    <codeReference>NVC_MFC_CComboBox#31</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="ccombobox__selectstring">
        <!--6170c6f5-0317-4e5a-ae2a-2a3b4907a857-->
        <title>CComboBox::SelectString</title>
        <content>
            <para>Searches for a string in the list box of a combo box, and if the string is found, selects the string in the list box and copies it to the edit control.</para>
            <legacySyntax>int SelectString(
    int nStartAfter,
    LPCTSTR lpszString );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>nStartAfter</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Contains the zero-based index of the item before the first item to be searched. When the search reaches the bottom of the list box, it continues from the top of the list box back to the item specified by <parameterReference>nStartAfter</parameterReference>. If –1, the entire list box is searched from the beginning.</para>
                        </definition>
                        <definedTerm> <parameterReference>lpszString</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Points to the null-terminated string that contains the prefix to search for. The search is case independent, so this string can contain any combination of uppercase and lowercase letters.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>The zero-based index of the selected item if the string was found. If the search was unsuccessful, the return value is <legacyBold>CB_ERR</legacyBold> and the current selection is not changed.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>A string is selected only if its initial characters (from the starting point) match the characters in the prefix string. </para>
                    <para>Note that the <unmanagedCodeEntityReference>SelectString</unmanagedCodeEntityReference> and <unmanagedCodeEntityReference>FindString</unmanagedCodeEntityReference> member functions both find a string, but the <unmanagedCodeEntityReference>SelectString</unmanagedCodeEntityReference> member function also selects the string.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <codeReference>NVC_MFC_CComboBox#32</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="ccombobox__setcuebanner">
        <!--25af360c-e4f0-46a6-aedd-d791c521aa0b-->
        <title>CComboBox::SetCueBanner</title>
        <content>
            <para>Sets the cue text that is displayed for a combo box control.</para>
            <legacySyntax>BOOL SetCueBanner( LPCTSTR lpszText );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <table xmlns:caps="http://schemas.microsoft.com/build/caps/2013/11">
                        <thead>
                            <tr>
                                <TD>
                                    <para>Parameter</para>
                                </TD>
                                <TD>
                                    <para>Description</para>
                                </TD>
                            </tr>
                        </thead>
                        <tbody>
                            <tr>
                                <TD>
                                    <para>[in]                                         <placeholder>lpszText</placeholder>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Pointer to a null-terminated buffer that contains the cue text.</para>
                                </TD>
                            </tr>
                        </tbody>
                    </table>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para> <codeInline>true</codeInline> if the method is successful; otherwise, <codeInline>false</codeInline>.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>Cue text is a prompt that is displayed in the input area of the combo box control. The cue text is displayed until the user provides input.</para>
                    <para>This method sends the                         <externalLink> <linkText>CB_SETCUEBANNER</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/bb775897</linkUri>
                        </externalLink> message, which is described in the <token>winSDK</token>.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <para>The following code example defines the variable, <codeInline>m_combobox</codeInline>, that is used to programmatically access the combo box control. This variable is used in the next example.</para>
                    <codeReference>NVC_MFC_CComboBox_s1#1</codeReference>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <para>The following code example sets the cue banner for the combo box control.</para>
                    <codeReference>NVC_MFC_CComboBox_s1#2</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="ccombobox__setcursel">
        <!--caa9677b-aefe-4c97-8ef1-97a468737870-->
        <title>CComboBox::SetCurSel</title>
        <content>
            <para>Selects a string in the list box of a combo box.</para>
            <legacySyntax>int SetCurSel( int nSelect );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>nSelect</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the zero-based index of the string to select. If –1, any current selection in the list box is removed and the edit control is cleared.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>The zero-based index of the item selected if the message is successful. The return value is <legacyBold>CB_ERR</legacyBold> if <parameterReference>nSelect</parameterReference> is greater than the number of items in the list or if <parameterReference>nSelect</parameterReference> is set to –1, which clears the selection.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>If necessary, the list box scrolls the string into view (if the list box is visible). The text in the edit control of the combo box is changed to reflect the new selection. Any previous selection in the list box is removed.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <codeReference>NVC_MFC_CComboBox#33</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="ccombobox__setdroppedwidth">
        <!--759462e0-4b4f-4cfe-a068-e876e4996852-->
        <title>CComboBox::SetDroppedWidth</title>
        <content>
            <para>Call this function to set the minimum allowable width, in pixels, of the list box of a combo box.</para>
            <legacySyntax>int SetDroppedWidth( UINT nWidth );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>nWidth</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The minimum allowable width of the list-box portion of the combo box, in pixels.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>If successful, the new width of the list box, otherwise <legacyBold>CB_ERR</legacyBold>. </para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>This function only applies to combo boxes with the <legacyLink xlink:href="d21a5023-e6a2-495b-a6bd-010a515cbc63">CBS_DROPDOWN</legacyLink> or <legacyLink xlink:href="d21a5023-e6a2-495b-a6bd-010a515cbc63">CBS_DROPDOWNLIST</legacyLink> style.</para>
                    <para>By default, the minimum allowable width of the drop-down list box is 0. When the list-box portion of the combo box is displayed, its width is the larger of the minimum allowable width or the combo box width.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <codeReference>NVC_MFC_CComboBox#34</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="ccombobox__seteditsel">
        <!--808d298f-82ad-40ad-8133-d55bf0638c1b-->
        <title>CComboBox::SetEditSel</title>
        <content>
            <para>Selects characters in the edit control of a combo box.</para>
            <legacySyntax>BOOL SetEditSel(
    int nStartChar,
    int nEndChar );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>nStartChar</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the starting position. If the starting position is set to –1, then any existing selection is removed.</para>
                        </definition>
                        <definedTerm> <parameterReference>nEndChar</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the ending position. If the ending position is set to –1, then all text from the starting position to the last character in the edit control is selected.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Nonzero if the member function is successful; otherwise 0. It is <legacyBold>CB_ERR</legacyBold> if <unmanagedCodeEntityReference>CComboBox</unmanagedCodeEntityReference> has the <legacyLink xlink:href="d21a5023-e6a2-495b-a6bd-010a515cbc63">CBS_DROPDOWNLIST</legacyLink> style or does not have a list box.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The positions are zero-based. To select the first character of the edit control, you specify a starting position of 0. The ending position is for the character just after the last character to select. For example, to select the first four characters of the edit control, you would use a starting position of 0 and an ending position of 4.</para>
                    <alert class="note">
                        <para>This function is not supported by the Windows <legacyBold>ComboBoxEx</legacyBold> control. For more information on this control, see                             <externalLink> <linkText>ComboBoxEx Controls</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/bb775738</linkUri>
                            </externalLink> in the <token>winSDK</token>.</para>
                    </alert>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <!--startsnip-->
                            <para>See the example for <legacyLink xlink:href="#ccombobox__geteditsel">CComboBox::GetEditSel</legacyLink>.</para>
                        <!--endsnip-->
                </content>
            </section>
        </sections>
    </section>
    <section address="ccombobox__setextendedui">
        <!--179c6f84-dc99-4949-8b13-24388d51924a-->
        <title>CComboBox::SetExtendedUI</title>
        <content>
            <para>Call the <unmanagedCodeEntityReference>SetExtendedUI</unmanagedCodeEntityReference> member function to select either the default user interface or the extended user interface for a combo box that has the <legacyLink xlink:href="d21a5023-e6a2-495b-a6bd-010a515cbc63">CBS_DROPDOWN</legacyLink> or <legacyLink xlink:href="d21a5023-e6a2-495b-a6bd-010a515cbc63">CBS_DROPDOWNLIST</legacyLink> style.</para>
            <legacySyntax>int SetExtendedUI( BOOL bExtended = TRUE );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>
                            <legacyItalic>bExtended</legacyItalic>
                        </definedTerm>
                        <definition>
                            <para>Specifies whether the combo box should use the extended user interface or the default user interface. A value of <legacyBold>TRUE</legacyBold> selects the extended user interface; a value of <legacyBold>FALSE</legacyBold> selects the standard user interface.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para> <legacyBold>CB_OKAY</legacyBold> if the operation is successful, or <legacyBold>CB_ERR</legacyBold> if an error occurs.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The extended user interface can be identified in the following ways:  </para>
                    <list class="bullet">
                        <listItem>
                            <para>Clicking the static control displays the list box only for combo boxes with the <legacyBold>CBS_DROPDOWNLIST</legacyBold> style.</para>
                        </listItem>
                        <listItem>
                            <para>Pressing the DOWN ARROW key displays the list box (F4 is disabled).</para>
                        </listItem>
                    </list>
                    <para>Scrolling in the static control is disabled when the item list is not visible (the arrow keys are disabled).</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <!--startsnip-->
                            <para>See the example for <legacyLink xlink:href="#ccombobox__getextendedui">CComboBox::GetExtendedUI</legacyLink>.</para>
                        <!--endsnip-->
                </content>
            </section>
        </sections>
    </section>
    <section address="ccombobox__sethorizontalextent">
        <!--5248ea78-1472-4f98-9a10-81bef0a12c12-->
        <title>CComboBox::SetHorizontalExtent</title>
        <content>
            <para>Sets the width, in pixels, by which the list-box portion of the combo box can be scrolled horizontally.</para>
            <legacySyntax>void SetHorizontalExtent( UINT nExtent );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>
                            <legacyItalic>nExtent</legacyItalic>
                        </definedTerm>
                        <definition>
                            <para>Specifies the number of pixels by which the list-box portion of the combo box can be scrolled horizontally.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>If the width of the list box is smaller than this value, the horizontal scroll bar will horizontally scroll items in the list box. If the width of the list box is equal to or greater than this value, the horizontal scroll bar is hidden or, if the combo box has the <legacyLink xlink:href="d21a5023-e6a2-495b-a6bd-010a515cbc63">CBS_DISABLENOSCROLL</legacyLink> style, disabled.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <codeReference>NVC_MFC_CComboBox#35</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="ccombobox__setitemdata">
        <!--61735c4e-b75f-46c9-a7a5-333460145d6a-->
        <title>CComboBox::SetItemData</title>
        <content>
            <para>Sets the 32-bit value associated with the specified item in a combo box.</para>
            <legacySyntax>int SetItemData(
    int nIndex,
    DWORD_PTR dwItemData );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>nIndex</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Contains a zero-based index to the item to set.</para>
                        </definition>
                        <definedTerm> <parameterReference>dwItemData</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Contains the new value to associate with the item.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para> <legacyBold>CB_ERR</legacyBold> if an error occurs.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>Use the <unmanagedCodeEntityReference>SetItemDataPtr</unmanagedCodeEntityReference> member function if the 32-bit item is to be a pointer.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <codeReference>NVC_MFC_CComboBox#36</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="ccombobox__setitemdataptr">
        <!--cd1924b1-29ce-4704-9c3b-e8a6d9360e42-->
        <title>CComboBox::SetItemDataPtr</title>
        <content>
            <para>Sets the 32-bit value associated with the specified item in a combo box to be the specified pointer ( <legacyBold>void*</legacyBold>).</para>
            <legacySyntax>int SetItemDataPtr(
    int nIndex,
     void* pData );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>nIndex</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Contains a zero-based index to the item.</para>
                        </definition>
                        <definedTerm> <parameterReference>pData</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Contains the pointer to associate with the item.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para> <legacyBold>CB_ERR</legacyBold> if an error occurs.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>This pointer remains valid for the life of the combo box, even though the item's relative position within the combo box might change as items are added or removed. Hence, the item's index within the box can change, but the pointer remains reliable.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <codeReference>NVC_MFC_CComboBox#37</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="ccombobox__setitemheight">
        <!--97f33f2f-e876-47b9-be12-77835bb1a1e5-->
        <title>CComboBox::SetItemHeight</title>
        <content>
            <para>Call the <unmanagedCodeEntityReference>SetItemHeight</unmanagedCodeEntityReference> member function to set the height of list items in a combo box or the height of the edit-control (or static-text) portion of a combo box.</para>
            <legacySyntax>int SetItemHeight(
    int nIndex,
    UINT cyItemHeight );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>nIndex</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies whether the height of list items or the height of the edit-control (or static-text) portion of the combo box is set.</para>
                            <para>If the combo box has the <legacyLink xlink:href="d21a5023-e6a2-495b-a6bd-010a515cbc63">CBS_OWNERDRAWVARIABLE</legacyLink> style, <parameterReference>nIndex</parameterReference> specifies the zero-based index of the list item whose height is to be set; otherwise, <parameterReference>nIndex</parameterReference> must be 0 and the height of all list items will be set.   </para>
                            <para>If <parameterReference>nIndex</parameterReference> is –1, the height of the edit-control or static-text portion of the combo box is to be set. </para>
                        </definition>
                        <definedTerm> <parameterReference>cyItemHeight</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the height, in pixels, of the combo-box component identified by <parameterReference>nIndex</parameterReference>.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para> <legacyBold>CB_ERR</legacyBold> if the index or height is invalid; otherwise 0.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The height of the edit-control (or static-text) portion of the combo box is set independently of the height of the list items. An application must ensure that the height of the edit-control (or static-text) portion is not smaller than the height of a particular list-box item.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <codeReference>NVC_MFC_CComboBox#38</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="ccombobox__setlocale">
        <!--11145c07-afcb-4c31-bb2b-e03bb5d0d53a-->
        <title>CComboBox::SetLocale</title>
        <content>
            <para>Sets the locale identifier for this combo box.</para>
            <legacySyntax>LCID SetLocale( LCID nNewLocale );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>nNewLocale</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The new locale identifier (LCID) value to set for the combo box.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>The previous locale identifier (LCID) value for this combo box.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>If <legacyBold>SetLocale</legacyBold> is not called, the default locale is obtained from the system. This system default locale can be modified by using Control Panel's Regional (or International) application.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <codeReference>NVC_MFC_CComboBox#39</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="ccombobox__setminvisibleitems">
        <!--e7addf4f-a6cb-4df3-bb93-df496154a83a-->
        <title>CComboBox::SetMinVisibleItems</title>
        <content>
            <para>Sets the minimum number of visible items in the drop-down list of the current combo box control.</para>
            <legacySyntax>BOOL SetMinVisibleItems( int iMinVisible );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <table xmlns:caps="http://schemas.microsoft.com/build/caps/2013/11">
                        <thead>
                            <tr>
                                <TD>
                                    <para>Parameter</para>
                                </TD>
                                <TD>
                                    <para>Description</para>
                                </TD>
                            </tr>
                        </thead>
                        <tbody>
                            <tr>
                                <TD>
                                    <para>[in] <parameterReference>iMinVisible</parameterReference>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Specifies the minimum number of visible items.</para>
                                </TD>
                            </tr>
                        </tbody>
                    </table>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para> <codeInline>true</codeInline> if this method is successful; otherwise, <codeInline>false</codeInline>.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>This method sends the                         <externalLink> <linkText>CB_SETMINVISIBLE</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/bb775915</linkUri>
                        </externalLink> message, which is described in the <token>winSDK</token>.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <para>The following code example defines the variable, <codeInline>m_combobox</codeInline>, that is used to programmatically access the combo box control. This variable is used in the next example.</para>
                    <codeReference>NVC_MFC_CComboBox_s1#1</codeReference>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <para>The following code example inserts 20 items into the drop-down list of a combo box control. Then it specifies that a minimum of 10 items be displayed when a user presses the drop-down arrow.</para>
                    <codeReference>NVC_MFC_CComboBox_s1#2</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="ccombobox__settopindex">
        <!--38f789a1-466d-4d08-839c-0d44a2f77935-->
        <title>CComboBox::SetTopIndex</title>
        <content>
            <para>Ensures that a particular item is visible in the list-box portion of the combo box.</para>
            <legacySyntax>int SetTopIndex( int nIndex );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>nIndex</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the zero-based index of the list-box item.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Zero if successful, or <legacyBold>CB_ERR</legacyBold> if an error occurs.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The system scrolls the list box until either the item specified by <parameterReference>nIndex</parameterReference> appears at the top of the list box or the maximum scroll range has been reached.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <codeReference>NVC_MFC_CComboBox#40</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="ccombobox__showdropdown">
        <!--a8dec9b8-d827-4ad7-a4f3-889420fd1a8f-->
        <title>CComboBox::ShowDropDown</title>
        <content>
            <para>Shows or hides the list box of a combo box that has the <legacyLink xlink:href="d21a5023-e6a2-495b-a6bd-010a515cbc63">CBS_DROPDOWN</legacyLink> or <legacyLink xlink:href="d21a5023-e6a2-495b-a6bd-010a515cbc63">CBS_DROPDOWNLIST</legacyLink> style.</para>
            <legacySyntax>void ShowDropDown( BOOL bShowIt = TRUE );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>
                            <legacyItalic>bShowIt</legacyItalic>
                        </definedTerm>
                        <definition>
                            <para>Specifies whether the drop-down list box is to be shown or hidden. A value of <legacyBold>TRUE</legacyBold> shows the list box. A value of <legacyBold>FALSE</legacyBold> hides the list box.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>By default, a combo box of this style will show the list box.</para>
                    <para>This member function has no effect on a combo box created with the <legacyLink xlink:href="d21a5023-e6a2-495b-a6bd-010a515cbc63">CBS_SIMPLE</legacyLink> style.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <!--startsnip-->
                            <para>See the example for <legacyLink xlink:href="#ccombobox__getdroppedstate">CComboBox::GetDroppedState</legacyLink>.</para>
                        <!--endsnip-->
                </content>
            </section>
        </sections>
    </section>
    <relatedTopics> <legacyLink xlink:href="76798022-5886-48e7-a7f2-f99352b15cbf">MFC Sample CTRLBARS</legacyLink> <link xlink:href="49a832ee-bc34-4126-88b3-bc1d9974f6c4">Base Class</link> <link xlink:href="19d70341-e391-4a72-94c6-35755ce975d4">Hierarchy Chart</link> <link xlink:href="49a832ee-bc34-4126-88b3-bc1d9974f6c4">CWnd</link> <link xlink:href="cdc76d5b-31da-43c5-bc43-fde4cb39de5b">CButton</link> <link xlink:href="b1533c30-7f10-4663-88d3-8b7f2c9f7024">CEdit</link> <link xlink:href="7ba3c699-c286-4cd9-9066-532c41ec05d1">CListBox</link> <link xlink:href="f3735ca5-73ea-46dc-918b-4d824c9fe47f">CScrollBar</link> <link xlink:href="e7c94cd9-5ebd-428a-aa30-b3e51f8efb95">CStatic</link> <link xlink:href="ca64b77e-2cd2-47e3-8eff-c2645ad578f9">CDialog</link>
    </relatedTopics>
</developerReferenceWithSyntaxDocument>



