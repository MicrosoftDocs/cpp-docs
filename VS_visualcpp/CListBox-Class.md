---
title: "CListBox Class"
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
ms.assetid: 7ba3c699-c286-4cd9-9066-532c41ec05d1
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
# CListBox Class
<?xml version="1.0" encoding="utf-8"?>
<developerReferenceWithSyntaxDocument xmlns="http://ddue.schemas.microsoft.com/authoring/2003/5" xmlns:xlink="http://www.w3.org/1999/xlink" xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:schemaLocation="http://ddue.schemas.microsoft.com/authoring/2003/5 http://clixdevr3.blob.core.windows.net/ddueschema/developer.xsd">
    <introduction>
        <para>Provides the functionality of a Windows list box. </para>
    </introduction>
    <syntaxSection>
        <legacySyntax>class CListBox : public CWnd</legacySyntax>
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
                                    <para> <link xlink:href="#clistbox__clistbox">CListBox::CListBox</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Constructs a <unmanagedCodeEntityReference>CListBox</unmanagedCodeEntityReference> object.</para>
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
                                    <para> <link xlink:href="#clistbox__addstring">CListBox::AddString</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Adds a string to a list box.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#clistbox__chartoitem">CListBox::CharToItem</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Override to provide custom <unmanagedCodeEntityReference>WM_CHAR</unmanagedCodeEntityReference> handling for owner-draw list boxes which don't have strings.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#clistbox__compareitem">CListBox::CompareItem</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Called by the framework to determine the position of a new item in a sorted owner-draw list box.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#clistbox__create">CListBox::Create</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Creates the Windows list box and attaches it to the <unmanagedCodeEntityReference>CListBox</unmanagedCodeEntityReference> object.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#clistbox__deleteitem">CListBox::DeleteItem</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Called by the framework when the user deletes an item from an owner-draw list box.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#clistbox__deletestring">CListBox::DeleteString</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Deletes a string from a list box.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#clistbox__dir">CListBox::Dir</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Adds filenames, drives, or both from the current directory to a list box.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#clistbox__drawitem">CListBox::DrawItem</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Called by the framework when a visual aspect of an owner-draw list box changes.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#clistbox__findstring">CListBox::FindString</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Searches for a string in a list box.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#clistbox__findstringexact">CListBox::FindStringExact</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Finds the first list-box string that matches a specified string.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#clistbox__getanchorindex">CListBox::GetAnchorIndex</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Retrieves the zero-based index of the current anchor item in a list box.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#clistbox__getcaretindex">CListBox::GetCaretIndex</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Determines the index of the item that has the focus rectangle in a multiple-selection list box.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#clistbox__getcount">CListBox::GetCount</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Returns the number of strings in a list box.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#clistbox__getcursel">CListBox::GetCurSel</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Returns the zero-based index of the currently selected string in a list box.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#clistbox__gethorizontalextent">CListBox::GetHorizontalExtent</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Returns the width in pixels that a list box can be scrolled horizontally.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#clistbox__getitemdata">CListBox::GetItemData</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Returns the 32-bit value associated with the list-box item.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#clistbox__getitemdataptr">CListBox::GetItemDataPtr</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Returns a pointer to a list-box item.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#clistbox__getitemheight">CListBox::GetItemHeight</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Determines the height of items in a list box.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#clistbox__getitemrect">CListBox::GetItemRect</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Returns the bounding rectangle of the list-box item as it is currently displayed.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#clistbox__getlistboxinfo">CListBox::GetListBoxInfo</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Retrieves the number of items per column.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#clistbox__getlocale">CListBox::GetLocale</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Retrieves the locale identifier for a list box.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#clistbox__getsel">CListBox::GetSel</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Returns the selection state of a list-box item.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#clistbox__getselcount">CListBox::GetSelCount</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Returns the number of strings currently selected in a multiple-selection list box.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#clistbox__getselitems">CListBox::GetSelItems</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Returns the indices of the strings currently selected in a list box.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#clistbox__gettext">CListBox::GetText</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Copies a list-box item into a buffer.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#clistbox__gettextlen">CListBox::GetTextLen</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Returns the length in bytes of a list-box item.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#clistbox__gettopindex">CListBox::GetTopIndex</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Returns the index of the first visible string in a list box.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#clistbox__initstorage">CListBox::InitStorage</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Preallocates blocks of memory for list box items and strings.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#clistbox__insertstring">CListBox::InsertString</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Inserts a string at a specific location in a list box.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#clistbox__itemfrompoint">CListBox::ItemFromPoint</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Returns the index of the list-box item nearest a point.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#clistbox__measureitem">CListBox::MeasureItem</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Called by the framework when an owner-draw list box is created to determine list-box dimensions.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#clistbox__resetcontent">CListBox::ResetContent</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Clears all the entries from a list box.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#clistbox__selectstring">CListBox::SelectString</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Searches for and selects a string in a single-selection list box.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#clistbox__selitemrange">CListBox::SelItemRange</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Selects or deselects a range of strings in a multiple-selection list box.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#clistbox__setanchorindex">CListBox::SetAnchorIndex</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Sets the anchor in a multiple-selection list box to begin an extended selection.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#clistbox__setcaretindex">CListBox::SetCaretIndex</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Sets the focus rectangle to the item at the specified index in a multiple-selection list box.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#clistbox__setcolumnwidth">CListBox::SetColumnWidth</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Sets the column width of a multicolumn list box.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#clistbox__setcursel">CListBox::SetCurSel</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Selects a list-box string.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#clistbox__sethorizontalextent">CListBox::SetHorizontalExtent</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Sets the width in pixels that a list box can be scrolled horizontally.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#clistbox__setitemdata">CListBox::SetItemData</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Sets the 32-bit value associated with the list-box item.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#clistbox__setitemdataptr">CListBox::SetItemDataPtr</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Sets a pointer to the list-box item.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#clistbox__setitemheight">CListBox::SetItemHeight</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Sets the height of items in a list box.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#clistbox__setlocale">CListBox::SetLocale</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Sets the locale identifier for a list box.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#clistbox__setsel">CListBox::SetSel</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Selects or deselects a list-box item in a multiple-selection list box.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#clistbox__settabstops">CListBox::SetTabStops</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Sets the tab-stop positions in a list box.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#clistbox__settopindex">CListBox::SetTopIndex</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Sets the zero-based index of the first visible string in a list box.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#clistbox__vkeytoitem">CListBox::VKeyToItem</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Override to provide custom <unmanagedCodeEntityReference>WM_KEYDOWN</unmanagedCodeEntityReference> handling for list boxes with the <legacyBold>LBS_WANTKEYBOARDINPUT</legacyBold> style set.</para>
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
            <para>A list box displays a list of items, such as filenames, that the user can view and select. </para>
            <para>In a single-selection list box, the user can select only one item. In a multiple-selection list box, a range of items can be selected. When the user selects an item, it is highlighted and the list box sends a notification message to the parent window. </para>
            <para>You can create a list box either from a dialog template or directly in your code. To create it directly, construct the <unmanagedCodeEntityReference>CListBox</unmanagedCodeEntityReference> object, then call the <legacyLink xlink:href="#clistbox__create">Create</legacyLink> member function to create the Windows list-box control and attach it to the <unmanagedCodeEntityReference>CListBox</unmanagedCodeEntityReference> object. To use a list box in a dialog template, declare a list-box variable in your dialog box class, then use <unmanagedCodeEntityReference>DDX_Control</unmanagedCodeEntityReference> in your dialog box class's <unmanagedCodeEntityReference>DoDataExchange</unmanagedCodeEntityReference> function to connect the member variable to the control. (this is done for you automatically when you add a control variable to your dialog box class.)</para>
            <para>Construction can be a one-step process in a class derived from <unmanagedCodeEntityReference>CListBox</unmanagedCodeEntityReference>. Write a constructor for the derived class and call <legacyBold>Create</legacyBold> from within the constructor. </para>
            <para>If you want to handle Windows notification messages sent by a list box to its parent (usually a class derived from <legacyLink xlink:href="ca64b77e-2cd2-47e3-8eff-c2645ad578f9">CDialog</legacyLink>), add a message-map entry and message-handler member function to the parent class for each message.</para>
            <para>Each message-map entry takes the following form:</para>
            <para> <codeInline>ON_Notification( id, memberFxn )</codeInline>
            </para>
            <para>where <parameterReference>id</parameterReference> specifies the child window ID of the list-box control sending the notification and <parameterReference>memberFxn</parameterReference> is the name of the parent member function you have written to handle the notification.</para>
            <para>The parent's function prototype is as follows:</para>
            <para> <codeInline>afx_msg void memberFxn( );</codeInline>
            </para>
            <para>Following is a list of potential message-map entries and a description of the cases in which they would be sent to the parent:  </para>
            <list class="bullet">
                <listItem>
                    <para> <legacyBold>ON_LBN_DBLCLK</legacyBold>   The user double-clicks a string in a list box. Only a list box that has the <legacyLink xlink:href="3f357b8d-9118-4f41-9e28-02ed92d1e88f">LBS_NOTIFY</legacyLink> style will send this notification message. </para>
                </listItem>
                <listItem>
                    <para> <legacyBold>ON_LBN_ERRSPACE</legacyBold>   The list box cannot allocate enough memory to meet the request.</para>
                </listItem>
                <listItem>
                    <para> <legacyBold>ON_LBN_KILLFOCUS</legacyBold>   The list box is losing the input focus.</para>
                </listItem>
                <listItem>
                    <para> <legacyBold>ON_LBN_SELCANCEL</legacyBold>   The current list-box selection is canceled. This message is only sent when a list box has the <legacyBold>LBS_NOTIFY</legacyBold> style.</para>
                </listItem>
                <listItem>
                    <para> <legacyBold>ON_LBN_SELCHANGE</legacyBold>   The selection in the list box has changed. This notification is not sent if the selection is changed by the <legacyLink xlink:href="#clistbox__setcursel">CListBox::SetCurSel</legacyLink> member function. This notification applies only to a list box that has the <legacyBold>LBS_NOTIFY</legacyBold> style. The <legacyBold>LBN_SELCHANGE</legacyBold> notification message is sent for a multiple-selection list box whenever the user presses an arrow key, even if the selection does not change.</para>
                </listItem>
                <listItem>
                    <para> <legacyBold>ON_LBN_SETFOCUS</legacyBold>   The list box is receiving the input focus.</para>
                </listItem>
                <listItem>
                    <para> <legacyBold>ON_WM_CHARTOITEM</legacyBold>   An owner-draw list box that has no strings receives a <unmanagedCodeEntityReference>WM_CHAR</unmanagedCodeEntityReference> message.</para>
                </listItem>
                <listItem>
                    <para> <legacyBold>ON_WM_VKEYTOITEM</legacyBold>   A list box with the <legacyBold>LBS_WANTKEYBOARDINPUT</legacyBold> style receives a <unmanagedCodeEntityReference>WM_KEYDOWN</unmanagedCodeEntityReference> message.</para>
                </listItem>
            </list>
            <para>If you create a <unmanagedCodeEntityReference>CListBox</unmanagedCodeEntityReference> object within a dialog box (through a dialog resource), the <unmanagedCodeEntityReference>CListBox</unmanagedCodeEntityReference> object is automatically destroyed when the user closes the dialog box. </para>
            <para>If you create a <unmanagedCodeEntityReference>CListBox</unmanagedCodeEntityReference> object within a window, you may need to destroy the <unmanagedCodeEntityReference>CListBox</unmanagedCodeEntityReference> object. If you create the <unmanagedCodeEntityReference>CListBox</unmanagedCodeEntityReference> object on the stack, it is destroyed automatically. If you create the <unmanagedCodeEntityReference>CListBox</unmanagedCodeEntityReference> object on the heap by using the <legacyBold>new</legacyBold> function, you must call <legacyBold>delete</legacyBold> on the object to destroy it when the user closes the parent window. </para>
            <para>If you allocate any memory in the <unmanagedCodeEntityReference>CListBox</unmanagedCodeEntityReference> object, override the <unmanagedCodeEntityReference>CListBox</unmanagedCodeEntityReference> destructor to dispose of the allocation.</para>
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
            <para> <unmanagedCodeEntityReference>CListBox</unmanagedCodeEntityReference>
            </para>
        </content>
    </section>
    <requirements>
        <content>
            <para> <legacyBold>Header: </legacyBold>afxwin.h</para>
        </content>
    </requirements>
    <section address="clistbox__addstring">
        <!--263e95d9-40cd-41ba-94ef-045b76019df2-->
        <title>CListBox::AddString</title>
        <content>
            <para>Adds a string to a list box.</para>
            <legacySyntax>int AddString( LPCTSTR lpszItem );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>lpszItem</parameterReference>
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
                    <para>The zero-based index to the string in the list box. The return value is <legacyBold>LB_ERR</legacyBold> if an error occurs; the return value is <legacyBold>LB_ERRSPACE</legacyBold> if insufficient space is available to store the new string.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>If the list box was not created with the <legacyLink xlink:href="3f357b8d-9118-4f41-9e28-02ed92d1e88f">LBS_SORT</legacyLink> style, the string is added to the end of the list. Otherwise, the string is inserted into the list, and the list is sorted. If the list box was created with the <legacyBold>LBS_SORT</legacyBold> style but not the <legacyLink xlink:href="3f357b8d-9118-4f41-9e28-02ed92d1e88f">LBS_HASSTRINGS</legacyLink> style, the framework sorts the list by one or more calls to the <unmanagedCodeEntityReference>CompareItem</unmanagedCodeEntityReference> member function. </para>
                    <para>Use <legacyLink xlink:href="#clistbox__insertstring">InsertString</legacyLink> to insert a string into a specific location within the list box.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <codeReference>NVC_MFC_CListBox#3</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="clistbox__chartoitem">
        <!--f4f454ff-0828-4cce-9cf0-38487c1b6cfe-->
        <title>CListBox::CharToItem</title>
        <content>
            <para>Called by the framework when the list box's parent window receives a <unmanagedCodeEntityReference>WM_CHARTOITEM</unmanagedCodeEntityReference> message from the list box.</para>
            <legacySyntax>virtual int CharToItem(
    UINT nKey,
    UINT nIndex );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>nKey</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The ANSI code of the character the user typed.</para>
                        </definition>
                        <definedTerm> <parameterReference>nIndex</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The current position of the list-box caret.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Returns – 1 or – 2 for no further action or a nonnegative number to specify an index of a list-box item on which to perform the default action for the keystroke. The default implementation returns – 1.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The <unmanagedCodeEntityReference>WM_CHARTOITEM</unmanagedCodeEntityReference> message is sent by the list box when it receives a <unmanagedCodeEntityReference>WM_CHAR</unmanagedCodeEntityReference> message, but only if the list box meets all of these criteria:  </para>
                    <list class="bullet">
                        <listItem>
                            <para>Is an owner-draw list box.</para>
                        </listItem>
                        <listItem>
                            <para>Does not have the <legacyLink xlink:href="3f357b8d-9118-4f41-9e28-02ed92d1e88f">LBS_HASSTRINGS</legacyLink> style set.</para>
                        </listItem>
                        <listItem>
                            <para>Has at least one item.</para>
                        </listItem>
                    </list>
                    <para>You should never call this function yourself. Override this function to provide your own custom handling of keyboard messages.</para>
                    <para>In your override, you must return a value to tell the framework what action you performed. A return value of – 1 or – 2 indicates that you handled all aspects of selecting the item and requires no further action by the list box. Before returning – 1 or – 2, you could set the selection or move the caret or both. To set the selection, use <legacyLink xlink:href="#clistbox__setcursel">SetCurSel</legacyLink> or <legacyLink xlink:href="#clistbox__setsel">SetSel</legacyLink>. To move the caret, use <legacyLink xlink:href="#clistbox__setcaretindex">SetCaretIndex</legacyLink>.</para>
                    <para>A return value of 0 or greater specifies the index of an item in the list box and indicates that the list box should perform the default action for the keystroke on the given item.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <codeReference>NVC_MFC_CListBox#4</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="clistbox__clistbox">
        <!--41d786e1-fbe1-4a5a-a013-e6cb337172b7-->
        <title>CListBox::CListBox</title>
        <content>
            <para>Constructs a <unmanagedCodeEntityReference>CListBox</unmanagedCodeEntityReference> object.</para>
            <legacySyntax>CListBox();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Remarks</title>
                <content>
                    <para>You construct a <unmanagedCodeEntityReference>CListBox</unmanagedCodeEntityReference> object in two steps. First, call the constructor <legacyBold>ClistBox</legacyBold> and then call <legacyBold>Create</legacyBold>, which initializes the Windows list box and attaches it to the <unmanagedCodeEntityReference>CListBox</unmanagedCodeEntityReference>.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <codeReference>NVC_MFC_CListBox#1</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="clistbox__compareitem">
        <!--d704e53f-6a0c-4380-9cd2-3f647f05e0f2-->
        <title>CListBox::CompareItem</title>
        <content>
            <para>Called by the framework to determine the relative position of a new item in a sorted owner-draw list box.</para>
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
                            <para>A long pointer to a <unmanagedCodeEntityReference>COMPAREITEMSTRUCT</unmanagedCodeEntityReference> structure.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Indicates the relative position of the two items described in the <legacyLink xlink:href="4b7131a5-5c7d-4e98-aac7-e85650262b52">COMPAREITEMSTRUCT</legacyLink> structure. It may be any of the following values:</para>
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
                                    <para>–1</para>
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
                    <para>See <legacyLink xlink:href="49a832ee-bc34-4126-88b3-bc1d9974f6c4#cwnd__oncompareitem">CWnd::OnCompareItem</legacyLink> for a description of the <unmanagedCodeEntityReference>COMPAREITEMSTRUCT</unmanagedCodeEntityReference> structure.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>By default, this member function does nothing. If you create an owner-draw list box with the <legacyBold>LBS_SORT</legacyBold> style, you must override this member function to assist the framework in sorting new items added to the list box.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <codeReference>NVC_MFC_CListBox#5</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="clistbox__create">
        <!--e434b93c-7633-436b-b26c-bfec5c262116-->
        <title>CListBox::Create</title>
        <content>
            <para>Creates the Windows list box and attaches it to the <unmanagedCodeEntityReference>CListBox</unmanagedCodeEntityReference> object.</para>
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
                            <para>Specifies the style of the list box. Apply any combination of <legacyLink xlink:href="3f357b8d-9118-4f41-9e28-02ed92d1e88f">list-box styles</legacyLink> to the box. </para>
                        </definition>
                        <definedTerm> <parameterReference>rect</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the list-box size and position. Can be either a <unmanagedCodeEntityReference>CRect</unmanagedCodeEntityReference> object or a <unmanagedCodeEntityReference>RECT</unmanagedCodeEntityReference> structure.</para>
                        </definition>
                        <definedTerm> <parameterReference>pParentWnd</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the list box's parent window (usually a <unmanagedCodeEntityReference>CDialog</unmanagedCodeEntityReference> object). It must not be <legacyBold>NULL</legacyBold>.</para>
                        </definition>
                        <definedTerm> <parameterReference>nID</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the list box's control ID.</para>
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
                    <para>You construct a <unmanagedCodeEntityReference>CListBox</unmanagedCodeEntityReference> object in two steps. First, call the constructor and then call <legacyBold>Create</legacyBold>, which initializes the Windows list box and attaches it to the <unmanagedCodeEntityReference>CListBox</unmanagedCodeEntityReference> object. </para>
                    <para>When <legacyBold>Create</legacyBold> executes, Windows sends the <legacyLink xlink:href="49a832ee-bc34-4126-88b3-bc1d9974f6c4#cwnd__onnccreate">WM_NCCREATE</legacyLink>, <legacyLink xlink:href="49a832ee-bc34-4126-88b3-bc1d9974f6c4#cwnd__oncreate">WM_CREATE</legacyLink>, <legacyLink xlink:href="49a832ee-bc34-4126-88b3-bc1d9974f6c4#cwnd__onnccalcsize">WM_NCCALCSIZE</legacyLink>, and <legacyLink xlink:href="49a832ee-bc34-4126-88b3-bc1d9974f6c4#cwnd__ongetminmaxinfo">WM_GETMINMAXINFO</legacyLink> messages to the list-box control. </para>
                    <para>These messages are handled by default by the <legacyLink xlink:href="49a832ee-bc34-4126-88b3-bc1d9974f6c4#cwnd__onnccreate">OnNcCreate</legacyLink>, <legacyLink xlink:href="49a832ee-bc34-4126-88b3-bc1d9974f6c4#cwnd__oncreate">OnCreate</legacyLink>, <legacyLink xlink:href="49a832ee-bc34-4126-88b3-bc1d9974f6c4#cwnd__onnccalcsize">OnNcCalcSize</legacyLink>, and <legacyLink xlink:href="49a832ee-bc34-4126-88b3-bc1d9974f6c4#cwnd__ongetminmaxinfo">OnGetMinMaxInfo</legacyLink> member functions in the <unmanagedCodeEntityReference>CWnd</unmanagedCodeEntityReference> base class. To extend the default message handling, derive a class from <unmanagedCodeEntityReference>CListBox</unmanagedCodeEntityReference>, add a message map to the new class, and override the preceding message-handler member functions. Override <unmanagedCodeEntityReference>OnCreate</unmanagedCodeEntityReference>, for example, to perform needed initialization for a new class.</para>
                    <para>Apply the following <legacyLink xlink:href="c85ffbe4-f4ff-4227-917a-48ec4a411842">window styles</legacyLink> to a list-box control.   </para>
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
                            <para> <legacyBold>WS_VSCROLL</legacyBold>   To add a vertical scroll bar</para>
                        </listItem>
                        <listItem>
                            <para> <legacyBold>WS_HSCROLL</legacyBold>   To add a horizontal scroll bar</para>
                        </listItem>
                        <listItem>
                            <para> <legacyBold>WS_GROUP</legacyBold>   To group controls</para>
                        </listItem>
                        <listItem>
                            <para> <legacyBold>WS_TABSTOP</legacyBold>   To allow tabbing to this control</para>
                        </listItem>
                    </list>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <codeReference>NVC_MFC_CListBox#2</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="clistbox__deleteitem">
        <!--a98483f6-b689-475b-9bc9-d87da9cc6fcd-->
        <title>CListBox::DeleteItem</title>
        <content>
            <para>Called by the framework when the user deletes an item from an owner-draw <unmanagedCodeEntityReference>CListBox</unmanagedCodeEntityReference> object or destroys the list box.</para>
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
                            <para>A long pointer to a Windows <legacyLink xlink:href="48d3998c-f4a8-402a-bf90-df3770a78685">DELETEITEMSTRUCT</legacyLink> structure that contains information about the deleted item. </para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The default implementation of this function does nothing. Override this function to redraw an owner-draw list box as needed.</para>
                    <para>See <legacyLink xlink:href="49a832ee-bc34-4126-88b3-bc1d9974f6c4#cwnd__ondeleteitem">CWnd::OnDeleteItem</legacyLink> for a description of the <unmanagedCodeEntityReference>DELETEITEMSTRUCT</unmanagedCodeEntityReference> structure.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <codeReference>NVC_MFC_CListBox#6</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="clistbox__deletestring">
        <!--905c25c0-3e44-4d98-b77f-cfbc5fa067a4-->
        <title>CListBox::DeleteString</title>
        <content>
            <para>Deletes the item in position <parameterReference>nIndex</parameterReference> from the list box.</para>
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
                            <para>Specifies the zero-based index of the string to be deleted.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>A count of the strings remaining in the list. The return value is <legacyBold>LB_ERR</legacyBold> if <parameterReference>nIndex</parameterReference> specifies an index greater than the number of items in the list.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>All items following <parameterReference>nIndex</parameterReference> now move down one position. For example, if a list box contains two items, deleting the first item will cause the remaining item to now be in the first position. <parameterReference>nIndex</parameterReference>=0 for the item in the first position.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <codeReference>NVC_MFC_CListBox#7</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="clistbox__dir">
        <!--b345bc4d-6b2a-45f2-a795-5b6380d6e860-->
        <title>CListBox::Dir</title>
        <content>
            <para>Adds a list of filenames, drives, or both to a list box.</para>
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
                            <para>Can be any combination of the <languageKeyword>enum</languageKeyword> values described in <legacyBold>CFile::GetStatu</legacyBold> <legacyLink xlink:href="b2eb5757-d499-4e67-b044-dd7d1abaa0f8#cfile__getstatus">s</legacyLink>, or any combination of the following values:</para>
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
                                            <para>0x0000</para>
                                        </TD>
                                        <TD>
                                            <para>File can be read from or written to.</para>
                                        </TD>
                                    </tr>
                                    <tr>
                                        <TD>
                                            <para>0x0001</para>
                                        </TD>
                                        <TD>
                                            <para>File can be read from but not written to.</para>
                                        </TD>
                                    </tr>
                                    <tr>
                                        <TD>
                                            <para>0x0002</para>
                                        </TD>
                                        <TD>
                                            <para>File is hidden and does not appear in a directory listing.</para>
                                        </TD>
                                    </tr>
                                    <tr>
                                        <TD>
                                            <para>0x0004</para>
                                        </TD>
                                        <TD>
                                            <para>File is a system file.</para>
                                        </TD>
                                    </tr>
                                    <tr>
                                        <TD>
                                            <para>0x0010</para>
                                        </TD>
                                        <TD>
                                            <para>The name specified by <parameterReference>lpszWildCard</parameterReference> specifies a directory.</para>
                                        </TD>
                                    </tr>
                                    <tr>
                                        <TD>
                                            <para>0x0020</para>
                                        </TD>
                                        <TD>
                                            <para>File has been archived.</para>
                                        </TD>
                                    </tr>
                                    <tr>
                                        <TD>
                                            <para>0x4000</para>
                                        </TD>
                                        <TD>
                                            <para>Include all drives that match the name specified by <parameterReference>lpszWildCard</parameterReference>.</para>
                                        </TD>
                                    </tr>
                                    <tr>
                                        <TD>
                                            <para>0x8000</para>
                                        </TD>
                                        <TD>
                                            <para>Exclusive flag. If the exclusive flag is set, only files of the specified type are listed. Otherwise, files of the specified type are listed in addition to "normal" files.</para>
                                        </TD>
                                    </tr>
                                </tbody>
                            </table>
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
                    <para>The zero-based index of the last filename added to the list. The return value is <legacyBold>LB_ERR</legacyBold> if an error occurs; the return value is <legacyBold>LB_ERRSPACE</legacyBold> if insufficient space is available to store the new strings.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <codeReference>NVC_MFC_CListBox#8</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="clistbox__drawitem">
        <!--c52c84dc-4cae-4a5e-991f-5a9a5a584f7e-->
        <title>CListBox::DrawItem</title>
        <content>
            <para>Called by the framework when a visual aspect of an owner-draw list box changes.</para>
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
                            <para>A long pointer to a <legacyLink xlink:href="ba9ef1d4-aebb-45e9-b956-4b81a02e50f7">DRAWITEMSTRUCT</legacyLink> structure that contains information about the type of drawing required.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The <legacyBold>itemAction</legacyBold> and <legacyBold>itemState</legacyBold> members of the <unmanagedCodeEntityReference>DRAWITEMSTRUCT</unmanagedCodeEntityReference> structure define the drawing action that is to be performed. </para>
                    <para>By default, this member function does nothing. Override this member function to implement drawing for an owner-draw <unmanagedCodeEntityReference>CListBox</unmanagedCodeEntityReference> object. The application should restore all graphics device interface (GDI) objects selected for the display context supplied in <parameterReference>lpDrawItemStruct</parameterReference> before this member function terminates.</para>
                    <para>See <legacyLink xlink:href="49a832ee-bc34-4126-88b3-bc1d9974f6c4#cwnd__ondrawitem">CWnd::OnDrawItem</legacyLink> for a description of the <unmanagedCodeEntityReference>DRAWITEMSTRUCT</unmanagedCodeEntityReference> structure.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <codeReference>NVC_MFC_CListBox#9</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="clistbox__findstring">
        <!--8d9d2a00-e102-4097-8eed-dbe84dfe84ff-->
        <title>CListBox::FindString</title>
        <content>
            <para>Finds the first string in a list box that contains the specified prefix without changing the list-box selection.</para>
            <legacySyntax>int FindString(
    int nStartAfter,
    LPCTSTR lpszItem ) const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>nStartAfter</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Contains the zero-based index of the item before the first item to be searched. When the search reaches the bottom of the list box, it continues from the top of the list box back to the item specified by <parameterReference>nStartAfter</parameterReference>. If <parameterReference>nStartAfter</parameterReference> is –1, the entire list box is searched from the beginning.</para>
                        </definition>
                        <definedTerm> <parameterReference>lpszItem</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Points to the null-terminated string that contains the prefix to search for. The search is case independent, so this string may contain any combination of uppercase and lowercase letters.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>The zero-based index of the matching item, or <legacyBold>LB_ERR</legacyBold> if the search was unsuccessful.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>Use the <legacyLink xlink:href="#clistbox__selectstring">SelectString</legacyLink> member function to both find and select a string.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <codeReference>NVC_MFC_CListBox#10</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="clistbox__findstringexact">
        <!--a86d6f4b-67c4-41d5-81f9-4099e455ab5b-->
        <title>CListBox::FindStringExact</title>
        <content>
            <para>Finds the first list-box string that matches the string specified in <parameterReference>lpszFind</parameterReference>.</para>
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
                            <para>Points to the null-terminated string to search for. This string can contain a complete filename, including the extension. The search is not case sensitive, so the string can contain any combination of uppercase and lowercase letters.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>The index of the matching item, or <legacyBold>LB_ERR</legacyBold> if the search was unsuccessful.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>If the list box was created with an owner-draw style but without the <legacyLink xlink:href="3f357b8d-9118-4f41-9e28-02ed92d1e88f">LBS_HASSTRINGS</legacyLink> style, the <unmanagedCodeEntityReference>FindStringExact</unmanagedCodeEntityReference> member function attempts to match the doubleword value against the value of <parameterReference>lpszFind</parameterReference>.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <codeReference>NVC_MFC_CListBox#11</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="clistbox__getanchorindex">
        <!--ba2331d0-403f-4061-b905-b4b0f4314475-->
        <title>CListBox::GetAnchorIndex</title>
        <content>
            <para>Retrieves the zero-based index of the current anchor item in the list box.</para>
            <legacySyntax>int GetAnchorIndex() const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>The index of the current anchor item, if successful; otherwise <legacyBold>LB_ERR</legacyBold>.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>In a multiple-selection list box, the anchor item is the first or last item in a block of contiguous selected items.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <!--startsnip-->
                            <para>See the example for <legacyLink xlink:href="#clistbox__setanchorindex">CListBox::SetAnchorIndex</legacyLink>.</para>
                        <!--endsnip-->
                </content>
            </section>
        </sections>
    </section>
    <section address="clistbox__getcaretindex">
        <!--cc5596c2-bbd8-4b16-ac2c-1da68d503b23-->
        <title>CListBox::GetCaretIndex</title>
        <content>
            <para>Determines the index of the item that has the focus rectangle in a multiple-selection list box.</para>
            <legacySyntax>int GetCaretIndex() const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>The zero-based index of the item that has the focus rectangle in a list box. If the list box is a single-selection list box, the return value is the index of the item that is selected, if any.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The item may or may not be selected.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <!--startsnip-->
                            <para>See the example for <legacyLink xlink:href="#clistbox__setcaretindex">CListBox::SetCaretIndex</legacyLink>.</para>
                        <!--endsnip-->
                </content>
            </section>
        </sections>
    </section>
    <section address="clistbox__getcount">
        <!--a18bb8da-e8f1-4c28-84b5-ff5d68f401a9-->
        <title>CListBox::GetCount</title>
        <content>
            <para>Retrieves the number of items in a list box.</para>
            <legacySyntax>int GetCount() const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>The number of items in the list box, or <legacyBold>LB_ERR</legacyBold> if an error occurs.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The returned count is one greater than the index value of the last item (the index is zero-based).</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <codeReference>NVC_MFC_CListBox#12</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="clistbox__getcursel">
        <!--e931f4a7-bdcb-4bbf-b23c-e51f69912634-->
        <title>CListBox::GetCurSel</title>
        <content>
            <para>Retrieves the zero-based index of the currently selected item, if any, in a single-selection list box.</para>
            <legacySyntax>int GetCurSel() const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>The zero-based index of the currently selected item if it is a single-selection list box. It is <languageKeyword>LB_ERR</languageKeyword> if no item is currently selected.</para>
                    <para>In a multiple-selection list box, the index of the item that has the focus.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>Do not call <unmanagedCodeEntityReference>GetCurSel</unmanagedCodeEntityReference> for a multiple-selection list box. Use <link xlink:href="#clistbox__getselitems">CListBox::GetSelItems</link> instead.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <codeReference>NVC_MFC_CListBox#13</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="clistbox__gethorizontalextent">
        <!--47d50ef1-9e16-453b-9e8c-87e6a4df1000-->
        <title>CListBox::GetHorizontalExtent</title>
        <content>
            <para>Retrieves from the list box the width in pixels by which it can be scrolled horizontally.</para>
            <legacySyntax>int GetHorizontalExtent() const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>The scrollable width of the list box, in pixels.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>This is applicable only if the list box has a horizontal scroll bar.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <codeReference>NVC_MFC_CListBox#14</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="clistbox__getitemdata">
        <!--eeb2b4f3-f5f0-466b-8312-200592f17c9f-->
        <title>CListBox::GetItemData</title>
        <content>
            <para>Retrieves the application-supplied doubleword value associated with the specified list-box item.</para>
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
                            <para>Specifies the zero-based index of the item in the list box.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>The 32-bit value associated with the item, or <legacyBold>LB_ERR</legacyBold> if an error occurs.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The doubleword value was the <parameterReference>dwItemData</parameterReference> parameter of a <legacyLink xlink:href="#clistbox__setitemdata">SetItemData</legacyLink> call.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <codeReference>NVC_MFC_CListBox#15</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="clistbox__getitemdataptr">
        <!--5bfe3c55-e3c9-4dd4-81dd-647c8cc074e1-->
        <title>CListBox::GetItemDataPtr</title>
        <content>
            <para>Retrieves the application-supplied 32-bit value associated with the specified list-box item as a pointer ( <legacyBold>void*</legacyBold>).</para>
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
                            <para>Specifies the zero-based index of the item in the list box.</para>
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
                    <codeReference>NVC_MFC_CListBox#16</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="clistbox__getitemheight">
        <!--5bc2c9f6-8119-42de-a0a2-7e519d5bc112-->
        <title>CListBox::GetItemHeight</title>
        <content>
            <para>Determines the height of items in a list box.</para>
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
                            <para>Specifies the zero-based index of the item in the list box. This parameter is used only if the list box has the <legacyBold>LBS_OWNERDRAWVARIABLE</legacyBold> style; otherwise, it should be set to 0.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>The height, in pixels, of the items in the list box. If the list box has the <legacyLink xlink:href="3f357b8d-9118-4f41-9e28-02ed92d1e88f">LBS_OWNERDRAWVARIABLE</legacyLink> style, the return value is the height of the item specified by <parameterReference>nIndex</parameterReference>. If an error occurs, the return value is <legacyBold>LB_ERR</legacyBold>.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <codeReference>NVC_MFC_CListBox#17</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="clistbox__getitemrect">
        <!--d5b13975-84f7-492d-8009-31b07aeb148b-->
        <title>CListBox::GetItemRect</title>
        <content>
            <para>Retrieves the dimensions of the rectangle that bounds a list-box item as it is currently displayed in the list-box window.</para>
            <legacySyntax>int GetItemRect(
    int nIndex,
    LPRECT lpRect ) const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>nIndex</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the zero-based index of the item.</para>
                        </definition>
                        <definedTerm> <parameterReference>lpRect</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies a long pointer to a <legacyLink xlink:href="1b3160de-64e9-40d1-89eb-af3e0fd6acf0">RECT</legacyLink> structure that receives the list-box client coordinates of the item.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para> <legacyBold>LB_ERR</legacyBold> if an error occurs.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <codeReference>NVC_MFC_CListBox#18</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="clistbox__getlistboxinfo">
        <!--ba1e630f-d375-44ce-b5ca-b8cd42a2dc5a-->
        <title>CListBox::GetListBoxInfo</title>
        <content>
            <para>Retrieves the number of items per column.</para>
            <legacySyntax>DWORD GetListBoxInfo() const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Number of items per column of the <unmanagedCodeEntityReference>CListBox</unmanagedCodeEntityReference> object.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>This member function emulates the functionality of the                         <externalLink> <linkText>LB_GETLISTBOXINFO</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/bb775208</linkUri>
                        </externalLink> message, as described in the <token>winSDK</token>.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="clistbox__getlocale">
        <!--c24b8f50-2aaf-45ce-9847-1c30d1148597-->
        <title>CListBox::GetLocale</title>
        <content>
            <para>Retrieves the locale used by the list box.</para>
            <legacySyntax>LCID GetLocale() const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>The locale identifier (LCID) value for the strings in the list box.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The locale is used, for example, to determine the sort order of the strings in a sorted list box. </para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <!--startsnip-->
                            <para>See the example for <legacyLink xlink:href="#clistbox__setlocale">CListBox::SetLocale</legacyLink>.</para>
                        <!--endsnip-->
                </content>
            </section>
        </sections>
    </section>
    <section address="clistbox__getsel">
        <!--26551d2a-ed03-4541-8ba2-bf3d28b4e8de-->
        <title>CListBox::GetSel</title>
        <content>
            <para>Retrieves the selection state of an item.</para>
            <legacySyntax>int GetSel( int nIndex ) const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>nIndex</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the zero-based index of the item.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>A positive number if the specified item is selected; otherwise, it is 0. The return value is <languageKeyword>LB_ERR</languageKeyword> if an error occurs.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>This member function works with both single- and multiple-selection list boxes.</para>
                    <para>To retrieve the index of the currently-selected list box item, use <link xlink:href="#clistbox__getcursel">CListBox::GetCurSel</link>.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <codeReference>NVC_MFC_CListBox#19</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="clistbox__getselcount">
        <!--da9f057c-cb0e-4efa-85c6-99637dd8d40f-->
        <title>CListBox::GetSelCount</title>
        <content>
            <para>Retrieves the total number of selected items in a multiple-selection list box.</para>
            <legacySyntax>int GetSelCount() const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>The count of selected items in a list box. If the list box is a single-selection list box, the return value is <legacyBold>LB_ERR</legacyBold>.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <!--startsnip-->
                            <para>See the example for <legacyLink xlink:href="#clistbox__getselitems">CListBox::GetSelItems</legacyLink>.</para>
                        <!--endsnip-->
                </content>
            </section>
        </sections>
    </section>
    <section address="clistbox__getselitems">
        <!--4d7230fb-00c1-408c-9bc8-8dbb063c31c9-->
        <title>CListBox::GetSelItems</title>
        <content>
            <para>Fills a buffer with an array of integers that specifies the item numbers of selected items in a multiple-selection list box.</para>
            <legacySyntax>int GetSelItems(
    int nMaxItems,
    LPINT rgIndex ) const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>nMaxItems</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the maximum number of selected items whose item numbers are to be placed in the buffer.</para>
                        </definition>
                        <definedTerm> <parameterReference>rgIndex</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies a pointer to a buffer large enough for the number of integers specified by <parameterReference>nMaxItems</parameterReference>.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>The actual number of items placed in the buffer. If the list box is a single-selection list box, the return value is <languageKeyword>LB_ERR</languageKeyword>.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <codeReference>NVC_MFC_CListBox#20</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="clistbox__gettext">
        <!--6b81780d-2e93-4dd4-835d-44a2e442bc93-->
        <title>CListBox::GetText</title>
        <content>
            <para>Gets a string from a list box.</para>
            <legacySyntax>int GetText(
    int nIndex,
    LPTSTR lpszBuffer ) const;

void GetText(
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
                            <para>Specifies the zero-based index of the string to be retrieved.</para>
                        </definition>
                        <definedTerm> <parameterReference>lpszBuffer</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Points to the buffer that receives the string. The buffer must have sufficient space for the string and a terminating null character. The size of the string can be determined ahead of time by calling the <unmanagedCodeEntityReference>GetTextLen</unmanagedCodeEntityReference> member function.</para>
                        </definition>
                        <definedTerm> <parameterReference>rString</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A reference to a <unmanagedCodeEntityReference>CString</unmanagedCodeEntityReference> object.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>The length (in bytes) of the string, excluding the terminating null character. If <parameterReference>nIndex</parameterReference> does not specify a valid index, the return value is <legacyBold>LB_ERR</legacyBold>.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The second form of this member function fills a <unmanagedCodeEntityReference>CString</unmanagedCodeEntityReference> object with the string text.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <codeReference>NVC_MFC_CListBox#21</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="clistbox__gettextlen">
        <!--6b4451bc-4acb-4523-9bee-c46e8979a304-->
        <title>CListBox::GetTextLen</title>
        <content>
            <para>Gets the length of a string in a list-box item.</para>
            <legacySyntax>int GetTextLen( int nIndex ) const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>nIndex</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the zero-based index of the string.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>The length of the string in characters, excluding the terminating null character. If <parameterReference>nIndex</parameterReference> does not specify a valid index, the return value is <legacyBold>LB_ERR</legacyBold>.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <!--startsnip-->
                            <para>See the example for <legacyLink xlink:href="#clistbox__gettext">CListBox::GetText</legacyLink>.</para>
                        <!--endsnip-->
                </content>
            </section>
        </sections>
    </section>
    <section address="clistbox__gettopindex">
        <!--25c150a4-a559-4a0d-9729-f4b0373c46a9-->
        <title>CListBox::GetTopIndex</title>
        <content>
            <para>Retrieves the zero-based index of the first visible item in a list box.</para>
            <legacySyntax>int GetTopIndex() const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>The zero-based index of the first visible item in a list box if successful, <legacyBold>LB_ERR</legacyBold> otherwise.</para>
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
                    <codeReference>NVC_MFC_CListBox#22</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="clistbox__initstorage">
        <!--be3a3faa-bf8e-45af-b609-92b9f0bbedec-->
        <title>CListBox::InitStorage</title>
        <content>
            <para>Allocates memory for storing list-box items.</para>
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
                    <para>If successful, the maximum number of items that the list box can store before a memory reallocation is needed, otherwise <legacyBold>LB_ERRSPACE</legacyBold>, meaning not enough memory is available.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>Call this function before adding a large number of items to a <unmanagedCodeEntityReference>CListBox</unmanagedCodeEntityReference>.</para>
                    <para>This function helps speed up the initialization of list boxes that have a large number of items (more than 100). It preallocates the specified amount of memory so that subsequent <legacyLink xlink:href="#clistbox__addstring">AddString</legacyLink>, <legacyLink xlink:href="#clistbox__insertstring">InsertString</legacyLink>, and <legacyLink xlink:href="#clistbox__dir">Dir</legacyLink> functions take the shortest possible time. You can use estimates for the parameters. If you overestimate, some extra memory is allocated; if you underestimate, the normal allocation is used for items that exceed the preallocated amount.</para>
                    <para>Windows 95/98 only: The <parameterReference>nItems</parameterReference> parameter is limited to 16-bit values. This means list boxes cannot contain more than 32,767 items. Although the number of items is restricted, the total size of the items in a list box is limited only by available memory.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <codeReference>NVC_MFC_CListBox#23</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="clistbox__insertstring">
        <!--e46c0f23-6fe3-40bc-8a1e-a422a03839fa-->
        <title>CListBox::InsertString</title>
        <content>
            <para>Inserts a string into the list box.</para>
            <legacySyntax>int InsertString(
    int nIndex,
    LPCTSTR lpszItem );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>nIndex</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the zero-based index of the position to insert the string. If this parameter is –1, the string is added to the end of the list.</para>
                        </definition>
                        <definedTerm> <parameterReference>lpszItem</parameterReference>
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
                    <para>The zero-based index of the position at which the string was inserted. The return value is <legacyBold>LB_ERR</legacyBold> if an error occurs; the return value is <legacyBold>LB_ERRSPACE</legacyBold> if insufficient space is available to store the new string.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>Unlike the <legacyLink xlink:href="#clistbox__addstring">AddString</legacyLink> member function, <unmanagedCodeEntityReference>InsertString</unmanagedCodeEntityReference> does not cause a list with the <legacyLink xlink:href="3f357b8d-9118-4f41-9e28-02ed92d1e88f">LBS_SORT</legacyLink> style to be sorted.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <codeReference>NVC_MFC_CListBox#24</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="clistbox__itemfrompoint">
        <!--2f4be783-9e0e-4601-b491-b6bab78db188-->
        <title>CListBox::ItemFromPoint</title>
        <content>
            <para>Determines the list-box item nearest the point specified in <parameterReference>pt</parameterReference>.</para>
            <legacySyntax>UINT ItemFromPoint(
    CPoint pt,
    BOOL&amp; bOutside ) const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>pt</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Point for which to find the nearest item, specified relative to the upper-left corner of the client area of the list box.</para>
                        </definition>
                        <definedTerm> <parameterReference>bOutside</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Reference to a <languageKeyword>BOOL</languageKeyword> variable which will be set to <languageKeyword>TRUE</languageKeyword> if <parameterReference>pt</parameterReference> is outside the client area of the nearest list box item, <languageKeyword>FALSE</languageKeyword> if <parameterReference>pt</parameterReference> is inside the client area of the nearest list box item.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>The index of the nearest item to the point specified in <parameterReference>pt</parameterReference>.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>You could use this function to determine which list-box item the mouse cursor moves over.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <!--startsnip-->
                            <para>See the example for <legacyLink xlink:href="#clistbox__setanchorindex">CListBox::SetAnchorIndex</legacyLink>.</para>
                        <!--endsnip-->
                </content>
            </section>
        </sections>
    </section>
    <section address="clistbox__measureitem">
        <!--f7e8043a-a528-46f1-a0dd-11efce26c4ca-->
        <title>CListBox::MeasureItem</title>
        <content>
            <para>Called by the framework when a list box with an owner-draw style is created.</para>
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
                    <para>By default, this member function does nothing. Override this member function and fill in the <unmanagedCodeEntityReference>MEASUREITEMSTRUCT</unmanagedCodeEntityReference> structure to inform Windows of the list-box dimensions. If the list box is created with the <legacyLink xlink:href="3f357b8d-9118-4f41-9e28-02ed92d1e88f">LBS_OWNERDRAWVARIABLE</legacyLink> style, the framework calls this member function for each item in the list box. Otherwise, this member is called only once.</para>
                    <para>For further information about using the <legacyLink xlink:href="3f357b8d-9118-4f41-9e28-02ed92d1e88f">LBS_OWNERDRAWFIXED</legacyLink> style in an owner-draw list box created with the <unmanagedCodeEntityReference>SubclassDlgItem</unmanagedCodeEntityReference> member function of <unmanagedCodeEntityReference>CWnd</unmanagedCodeEntityReference>, see the discussion in <legacyLink xlink:href="1917a498-f643-457c-b570-9a0af7dbf7bb">Technical Note 14</legacyLink>.</para>
                    <para>See <legacyLink xlink:href="49a832ee-bc34-4126-88b3-bc1d9974f6c4#cwnd__onmeasureitem">CWnd::OnMeasureItem</legacyLink> for a description of the <unmanagedCodeEntityReference>MEASUREITEMSTRUCT</unmanagedCodeEntityReference> structure <legacyBold>.</legacyBold>
                    </para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <codeReference>NVC_MFC_CListBox#25</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="clistbox__resetcontent">
        <!--2e49d45d-74ef-429e-b09f-b6774ab8b9ac-->
        <title>CListBox::ResetContent</title>
        <content>
            <para>Removes all items from a list box.</para>
            <legacySyntax>void ResetContent();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Example</title>
                <content>
                    <codeReference>NVC_MFC_CListBox#26</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="clistbox__selectstring">
        <!--ae03e135-fcc7-439f-b108-aacab6d82481-->
        <title>CListBox::SelectString</title>
        <content>
            <para>Searches for a list-box item that matches the specified string, and if a matching item is found, it selects the item.</para>
            <legacySyntax>int SelectString(
    int nStartAfter,
    LPCTSTR lpszItem );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>nStartAfter</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Contains the zero-based index of the item before the first item to be searched. When the search reaches the bottom of the list box, it continues from the top of the list box back to the item specified by <parameterReference>nStartAfter</parameterReference>. If <parameterReference>nStartAfter</parameterReference> is –1, the entire list box is searched from the beginning.</para>
                        </definition>
                        <definedTerm> <parameterReference>lpszItem</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Points to the null-terminated string that contains the prefix to search for. The search is case independent, so this string may contain any combination of uppercase and lowercase letters.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>The index of the selected item if the search was successful. If the search was unsuccessful, the return value is <legacyBold>LB_ERR</legacyBold> and the current selection is not changed.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The list box is scrolled, if necessary, to bring the selected item into view. </para>
                    <para>This member function cannot be used with a list box that has the <legacyLink xlink:href="3f357b8d-9118-4f41-9e28-02ed92d1e88f">LBS_MULTIPLESEL</legacyLink> style. </para>
                    <para>An item is selected only if its initial characters (from the starting point) match the characters in the string specified by <parameterReference>lpszItem</parameterReference>. </para>
                    <para>Use the <unmanagedCodeEntityReference>FindString</unmanagedCodeEntityReference> member function to find a string without selecting the item.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <codeReference>NVC_MFC_CListBox#27</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="clistbox__selitemrange">
        <!--50656902-20e3-45b9-87c8-e3631d732fbd-->
        <title>CListBox::SelItemRange</title>
        <content>
            <para>Selects multiple consecutive items in a multiple-selection list box.</para>
            <legacySyntax>int SelItemRange(
    BOOL bSelect,
    int nFirstItem,
    int nLastItem );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>bSelect</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies how to set the selection. If <parameterReference>bSelect</parameterReference> is <legacyBold>TRUE</legacyBold>, the string is selected and highlighted; if <legacyBold>FALSE</legacyBold>, the highlight is removed and the string is no longer selected.</para>
                        </definition>
                        <definedTerm> <parameterReference>nFirstItem</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the zero-based index of the first item to set.</para>
                        </definition>
                        <definedTerm> <parameterReference>nLastItem</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the zero-based index of the last item to set.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para> <legacyBold>LB_ERR</legacyBold> if an error occurs.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>Use this member function only with multiple-selection list boxes. If you need to select only one item in a multiple-selection list box — that is, if <parameterReference>nFirstItem</parameterReference> is equal to <parameterReference>nLastItem</parameterReference> — call the <legacyLink xlink:href="#clistbox__setsel">SetSel</legacyLink> member function instead.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <codeReference>NVC_MFC_CListBox#28</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="clistbox__setanchorindex">
        <!--76ef39d7-b5a6-4d9e-8951-54df4ab33200-->
        <title>CListBox::SetAnchorIndex</title>
        <content>
            <para>Sets the anchor in a multiple-selection list box to begin an extended selection.</para>
            <legacySyntax>void SetAnchorIndex( int nIndex );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>nIndex</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the zero-based index of the list-box item that will be the anchor.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>In a multiple-selection list box, the anchor item is the first or last item in a block of contiguous selected items.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <codeReference>NVC_MFC_CListBox#29</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="clistbox__setcaretindex">
        <!--1fa7d29c-80d3-4709-b6f3-509513a1a00c-->
        <title>CListBox::SetCaretIndex</title>
        <content>
            <para>Sets the focus rectangle to the item at the specified index in a multiple-selection list box.</para>
            <legacySyntax>int SetCaretIndex(
    int nIndex,
    BOOL bScroll = TRUE );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>nIndex</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the zero-based index of the item to receive the focus rectangle in the list box.</para>
                        </definition>
                        <definedTerm>
                            <legacyItalic>bScroll</legacyItalic>
                        </definedTerm>
                        <definition>
                            <para>If this value is 0, the item is scrolled until it is fully visible. If this value is not 0, the item is scrolled until it is at least partially visible.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para> <legacyBold>LB_ERR</legacyBold> if an error occurs.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>If the item is not visible, it is scrolled into view.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <codeReference>NVC_MFC_CListBox#30</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="clistbox__setcolumnwidth">
        <!--1a2e352e-79d8-4b0a-b6c4-407a2dc23058-->
        <title>CListBox::SetColumnWidth</title>
        <content>
            <para>Sets the width in pixels of all columns in a multicolumn list box (created with the <legacyLink xlink:href="3f357b8d-9118-4f41-9e28-02ed92d1e88f">LBS_MULTICOLUMN</legacyLink> style). </para>
            <legacySyntax>void SetColumnWidth( int cxWidth );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>cxWidth</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the width in pixels of all columns.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <codeReference>NVC_MFC_CListBox#31</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="clistbox__setcursel">
        <!--1f354770-3acb-47e2-acf6-5ea5ddfb8822-->
        <title>CListBox::SetCurSel</title>
        <content>
            <para>Selects a string and scrolls it into view, if necessary.</para>
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
                            <para>Specifies the zero-based index of the string to be selected. If <parameterReference>nSelect</parameterReference> is –1, the list box is set to have no selection.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para> <languageKeyword>LB_ERR</languageKeyword> if an error occurs.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>When the new string is selected, the list box removes the highlight from the previously selected string. </para>
                    <para>Use this member function only with single-selection list boxes.</para>
                    <para>To set or remove a selection in a multiple-selection list box, use <link xlink:href="#clistbox__setsel">CListBox::SetSel</link>.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <codeReference>NVC_MFC_CListBox#32</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="clistbox__sethorizontalextent">
        <!--6c7741c8-3006-4326-9d0f-3beba62e22fc-->
        <title>CListBox::SetHorizontalExtent</title>
        <content>
            <para>Sets the width, in pixels, by which a list box can be scrolled horizontally.</para>
            <legacySyntax>void SetHorizontalExtent( int cxExtent );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>
                            <legacyItalic>cxExtent</legacyItalic>
                        </definedTerm>
                        <definition>
                            <para>Specifies the number of pixels by which the list box can be scrolled horizontally.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>If the size of the list box is smaller than this value, the horizontal scroll bar will horizontally scroll items in the list box. If the list box is as large or larger than this value, the horizontal scroll bar is hidden. </para>
                    <para>To respond to a call to <unmanagedCodeEntityReference>SetHorizontalExtent</unmanagedCodeEntityReference>, the list box must have been defined with the <legacyLink xlink:href="c85ffbe4-f4ff-4227-917a-48ec4a411842">WS_HSCROLL</legacyLink> style. </para>
                    <para>This member function is not useful for multicolumn list boxes. For multicolumn list boxes, call the <unmanagedCodeEntityReference>SetColumnWidth</unmanagedCodeEntityReference> member function.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <codeReference>NVC_MFC_CListBox#33</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="clistbox__setitemdata">
        <!--10ca5434-ebb6-4c1c-9371-6f4ef07671ff-->
        <title>CListBox::SetItemData</title>
        <content>
            <para>Sets a 32-bit value associated with the specified item in a list box.</para>
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
                            <para>Specifies the zero-based index of the item.</para>
                        </definition>
                        <definedTerm> <parameterReference>dwItemData</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the value to be associated with the item.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para> <legacyBold>LB_ERR</legacyBold> if an error occurs.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <codeReference>NVC_MFC_CListBox#34</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="clistbox__setitemdataptr">
        <!--88ede889-cf18-4058-9ba8-0011a8a7a6f0-->
        <title>CListBox::SetItemDataPtr</title>
        <content>
            <para>Sets the 32-bit value associated with the specified item in a list box to be the specified pointer ( <legacyBold>void*</legacyBold>).</para>
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
                            <para>Specifies the zero-based index of the item.</para>
                        </definition>
                        <definedTerm> <parameterReference>pData</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the pointer to be associated with the item.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para> <legacyBold>LB_ERR</legacyBold> if an error occurs.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>This pointer remains valid for the life of the list box, even though the item's relative position within the list box might change as items are added or removed. Hence, the item's index within the box can change, but the pointer remains reliable.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <codeReference>NVC_MFC_CListBox#35</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="clistbox__setitemheight">
        <!--1d255403-79ea-4130-a799-3b8fdab408d8-->
        <title>CListBox::SetItemHeight</title>
        <content>
            <para>Sets the height of items in a list box.</para>
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
                            <para>Specifies the zero-based index of the item in the list box. This parameter is used only if the list box has the <legacyBold>LBS_OWNERDRAWVARIABLE</legacyBold> style; otherwise, it should be set to 0.</para>
                        </definition>
                        <definedTerm> <parameterReference>cyItemHeight</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the height, in pixels, of the item.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para> <legacyBold>LB_ERR</legacyBold> if the index or height is invalid.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>If the list box has the <legacyLink xlink:href="3f357b8d-9118-4f41-9e28-02ed92d1e88f">LBS_OWNERDRAWVARIABLE</legacyLink> style, this function sets the height of the item specified by <parameterReference>nIndex</parameterReference>. Otherwise, this function sets the height of all items in the list box.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <codeReference>NVC_MFC_CListBox#36</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="clistbox__setlocale">
        <!--d36020fd-64ea-4a31-a20c-c7ba0f3d1d04-->
        <title>CListBox::SetLocale</title>
        <content>
            <para>Sets the locale identifier for this list box.</para>
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
                            <para>The new locale identifier (LCID) value to set for the list box.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>The previous locale identifier (LCID) value for this list box.</para>
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
                    <codeReference>NVC_MFC_CListBox#37</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="clistbox__setsel">
        <!--34ff890c-f960-4173-8147-fea0da225fb4-->
        <title>CListBox::SetSel</title>
        <content>
            <para>Selects a string in a multiple-selection list box.</para>
            <legacySyntax>int SetSel(
    int nIndex,
    BOOL bSelect = TRUE );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>nIndex</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Contains the zero-based index of the string to be set. If –1, the selection is added to or removed from all strings, depending on the value of <parameterReference>bSelect</parameterReference>.</para>
                        </definition>
                        <definedTerm> <parameterReference>bSelect</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies how to set the selection. If <parameterReference>bSelect</parameterReference> is <languageKeyword>TRUE</languageKeyword>, the string is selected and highlighted; if <languageKeyword>FALSE</languageKeyword>, the highlight is removed and the string is no longer selected. The specified string is selected and highlighted by default.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para> <languageKeyword>LB_ERR</languageKeyword> if an error occurs.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>Use this member function only with multiple-selection list boxes.</para>
                    <para>To select an item from a single-selection list box, use <link xlink:href="#clistbox__setcursel">CListBox::SetCurSel</link>.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <codeReference>NVC_MFC_CListBox#38</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="clistbox__settabstops">
        <!--68d0e66c-ca54-460f-a8d3-521a2d7fb6a5-->
        <title>CListBox::SetTabStops</title>
        <content>
            <para>Sets the tab-stop positions in a list box.</para>
            <legacySyntax>void SetTabStops();

BOOL SetTabStops(
    const int&amp; cxEachStop );

BOOL SetTabStops(
    int nTabStops,
    LPINT rgTabStops );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>cxEachStop</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Tab stops are set at every <parameterReference>cxEachStop</parameterReference> dialog units. See                                 <legacyItalic>rgTabStops </legacyItalic>for a description of a dialog unit.</para>
                        </definition>
                        <definedTerm> <parameterReference>nTabStops</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the number of tab stops to have in the list box.</para>
                        </definition>
                        <definedTerm> <parameterReference>rgTabStops</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Points to the first member of an array of integers containing the tab-stop positions in dialog units. A dialog unit is a horizontal or vertical distance. One horizontal dialog unit is equal to one-fourth of the current dialog base width unit, and one vertical dialog unit is equal to one-eighth of the current dialog base height unit. The dialog base units are computed based on the height and width of the current system font. The <legacyBold>GetDialogBaseUnits</legacyBold> Windows function returns the current dialog base units in pixels. The tab stops must be sorted in increasing order; back tabs are not allowed.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Nonzero if all the tabs were set; otherwise 0.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>To set tab stops to the default size of 2 dialog units, call the parameterless version of this member function. To set tab stops to a size other than 2, call the version with the <parameterReference>cxEachStop</parameterReference> argument. </para>
                    <para>To set tab stops to an array of sizes, use the version with the <parameterReference>rgTabStops</parameterReference> and <parameterReference>nTabStops</parameterReference> arguments. A tab stop will be set for each value in <parameterReference>rgTabStops</parameterReference>, up to the number specified by <parameterReference>nTabStops</parameterReference>. </para>
                    <para>To respond to a call to the <unmanagedCodeEntityReference>SetTabStops</unmanagedCodeEntityReference> member function, the list box must have been created with the <legacyLink xlink:href="3f357b8d-9118-4f41-9e28-02ed92d1e88f">LBS_USETABSTOPS</legacyLink> style.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <codeReference>NVC_MFC_CListBox#39</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="clistbox__settopindex">
        <!--0021668d-7454-4946-b8bc-8b69a7d9f8c7-->
        <title>CListBox::SetTopIndex</title>
        <content>
            <para>Ensures that a particular list-box item is visible.</para>
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
                    <para>Zero if successful, or <legacyBold>LB_ERR</legacyBold> if an error occurs.</para>
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
                    <codeReference>NVC_MFC_CListBox#40</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="clistbox__vkeytoitem">
        <!--49fcd057-8ce0-4342-a99d-e3d2512b7981-->
        <title>CListBox::VKeyToItem</title>
        <content>
            <para>Called by the framework when the list box's parent window receives a <unmanagedCodeEntityReference>WM_VKEYTOITEM</unmanagedCodeEntityReference> message from the list box.</para>
            <legacySyntax>virtual int VKeyToItem(
    UINT nKey,
    UINT nIndex );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>nKey</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The virtual key code of the key the user pressed. For a list of of standard virtual key codes, see Winuser.h</para>
                        </definition>
                        <definedTerm> <parameterReference>nIndex</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The current position of the list-box caret.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Returns – 2 for no further action, – 1 for default action, or a nonnegative number to specify an index of a list box item on which to perform the default action for the keystroke.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The <unmanagedCodeEntityReference>WM_VKEYTOITEM</unmanagedCodeEntityReference> message is sent by the list box when it receives a <unmanagedCodeEntityReference>WM_KEYDOWN</unmanagedCodeEntityReference> message, but only if the list box meets both of the following:  </para>
                    <list class="bullet">
                        <listItem>
                            <para>Has the <legacyLink xlink:href="3f357b8d-9118-4f41-9e28-02ed92d1e88f">LBS_WANTKEYBOARDINPUT</legacyLink> style set.</para>
                        </listItem>
                        <listItem>
                            <para>Has at least one item.</para>
                        </listItem>
                    </list>
                    <para>You should never call this function yourself. Override this function to provide your own custom handling of keyboard messages.</para>
                    <para>You must return a value to tell the framework what action your override performed. A return value of – 2 indicates that the application handled all aspects of selecting the item and requires no further action by the list box. Before returning – 2, you could set the selection or move the caret or both. To set the selection, use <legacyLink xlink:href="#clistbox__setcursel">SetCurSel</legacyLink> or <legacyLink xlink:href="#clistbox__setsel">SetSel</legacyLink>. To move the caret, use <legacyLink xlink:href="#clistbox__setcaretindex">SetCaretIndex</legacyLink>.</para>
                    <para>A return value of – 1 indicates that the list box should perform the default action in response to the keystroke.The default implementation returns – 1.</para>
                    <para>A return value of 0 or greater specifies the index of an item in the list box and indicates that the list box should perform the default action for the keystroke on the given item.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <codeReference>NVC_MFC_CListBox#41</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <relatedTopics> <legacyLink xlink:href="76798022-5886-48e7-a7f2-f99352b15cbf">MFC Sample CTRLTEST</legacyLink> <link xlink:href="49a832ee-bc34-4126-88b3-bc1d9974f6c4">Base Class</link> <link xlink:href="19d70341-e391-4a72-94c6-35755ce975d4">Hierarchy Chart</link> <link xlink:href="49a832ee-bc34-4126-88b3-bc1d9974f6c4">CWnd</link> <link xlink:href="cdc76d5b-31da-43c5-bc43-fde4cb39de5b">CButton</link> <link xlink:href="4e73b5df-0d2e-4658-9706-38133fb10513">CComboBox</link> <link xlink:href="b1533c30-7f10-4663-88d3-8b7f2c9f7024">CEdit</link> <link xlink:href="f3735ca5-73ea-46dc-918b-4d824c9fe47f">CScrollBar</link> <link xlink:href="e7c94cd9-5ebd-428a-aa30-b3e51f8efb95">CStatic</link>
    </relatedTopics>
</developerReferenceWithSyntaxDocument>



