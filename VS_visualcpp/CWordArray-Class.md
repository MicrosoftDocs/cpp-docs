---
title: "CWordArray Class"
ms.custom: na
ms.date: 10/07/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: reference
ms.assetid: 2ba2c194-2c6c-40ff-9db4-e9dbe57e1f57
caps.latest.revision: 21
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
# CWordArray Class
<?xml version="1.0" encoding="utf-8"?>
<developerReferenceWithSyntaxDocument xmlns="http://ddue.schemas.microsoft.com/authoring/2003/5" xmlns:xlink="http://www.w3.org/1999/xlink" xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:schemaLocation="http://ddue.schemas.microsoft.com/authoring/2003/5 http://clixdevr3.blob.core.windows.net/ddueschema/developer.xsd">
    <introduction>
        <para>Supports arrays of 16-bit words. </para>
    </introduction>
    <syntaxSection>
        <legacySyntax>class CWordArray : public CObject</legacySyntax>
    </syntaxSection>
    <section>
        <title>Members</title>
        <content>
            <para>The member functions of <unmanagedCodeEntityReference>CWordArray</unmanagedCodeEntityReference> are similar to the member functions of class <legacyLink xlink:href="27894efd-2370-4776-9ed9-24a98492af17">CObArray</legacyLink>. Because of this similarity, you can use the <unmanagedCodeEntityReference>CObArray</unmanagedCodeEntityReference> reference documentation for member function specifics. Wherever you see a <legacyLink xlink:href="95e9acd3-d9eb-4ac0-b52b-ca4a501a7a3a">CObject</legacyLink> pointer as a function parameter or return value, substitute a <legacyBold>WORD</legacyBold>.</para>
            <para> <codeInline>CObject* CObArray::GetAt( int &lt;nIndex&gt; ) const;</codeInline>
            </para>
            <para>for example, translates to</para>
            <para> <codeInline>WORD CWordArray::GetAt( int &lt;nIndex&gt; ) const;</codeInline>
            </para>
        </content>
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
                                    <para> <link xlink:href="27894efd-2370-4776-9ed9-24a98492af17#cobarray__cobarray">CObArray::CObArray</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Constructs an empty array.</para>
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
                                    <para> <link xlink:href="27894efd-2370-4776-9ed9-24a98492af17#cobarray__add">CObArray::Add</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Adds an element to the end of the array; grows the array if necessary.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="27894efd-2370-4776-9ed9-24a98492af17#cobarray__append">CObArray::Append</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Appends another array to the array; grows the array if necessary.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="27894efd-2370-4776-9ed9-24a98492af17#cobarray__copy">CObArray::Copy</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Copies another array to the array; grows the array if necessary.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="27894efd-2370-4776-9ed9-24a98492af17#cobarray__elementat">CObArray::ElementAt</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Returns a temporary reference to the element pointer within the array.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="27894efd-2370-4776-9ed9-24a98492af17#cobarray__freeextra">CObArray::FreeExtra</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Frees all unused memory above the current upper bound.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="27894efd-2370-4776-9ed9-24a98492af17#cobarray__getat">CObArray::GetAt</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Returns the value at a given index.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="27894efd-2370-4776-9ed9-24a98492af17#cobarray__getcount">CObArray::GetCount</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Gets the number of elements in this array.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="27894efd-2370-4776-9ed9-24a98492af17#cobarray__getdata">CObArray::GetData</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Allows access to elements in the array. Can be <legacyBold>NULL</legacyBold>.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="27894efd-2370-4776-9ed9-24a98492af17#cobarray__getsize">CObArray::GetSize</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Gets the number of elements in this array.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="27894efd-2370-4776-9ed9-24a98492af17#cobarray__getupperbound">CObArray::GetUpperBound</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Returns the largest valid index.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="27894efd-2370-4776-9ed9-24a98492af17#cobarray__insertat">CObArray::InsertAt</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Inserts an element (or all the elements in another array) at a specified index.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="27894efd-2370-4776-9ed9-24a98492af17#cobarray__isempty">CObArray::IsEmpty</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Determines if the array is empty.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="27894efd-2370-4776-9ed9-24a98492af17#cobarray__removeall">CObArray::RemoveAll</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Removes all the elements from this array.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="27894efd-2370-4776-9ed9-24a98492af17#cobarray__removeat">CObArray::RemoveAt</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Removes an element at a specific index.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="27894efd-2370-4776-9ed9-24a98492af17#cobarray__setat">CObArray::SetAt</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Sets the value for a given index; array not allowed to grow.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="27894efd-2370-4776-9ed9-24a98492af17#cobarray__setatgrow">CObArray::SetAtGrow</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Sets the value for a given index; grows the array if necessary.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="27894efd-2370-4776-9ed9-24a98492af17#cobarray__setsize">CObArray::SetSize</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Sets the number of elements to be contained in this array.</para>
                                </TD>
                            </tr>
                        </tbody>
                    </table>
                </content>
            </section>
            <section>
                <title>Public Operators</title>
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
                                    <para> <link xlink:href="27894efd-2370-4776-9ed9-24a98492af17#cobarray__operator_at">CObArray::operator []</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Sets or gets the element at the specified index.</para>
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
            <para> <unmanagedCodeEntityReference>CWordArray</unmanagedCodeEntityReference> incorporates the <legacyLink xlink:href="83dbcfe2-abe4-4fd7-aba1-9a4c1c23f078">IMPLEMENT_SERIAL</legacyLink> macro to support serialization and dumping of its elements. If an array of words is stored to an archive, either with an overloaded insertion operator or with the <legacyLink xlink:href="95e9acd3-d9eb-4ac0-b52b-ca4a501a7a3a#cobject__serialize">CObject::Serialize</legacyLink> member function, each element is, in turn, serialized. </para>
            <alert class="note">
                <para>Before using an array, use <unmanagedCodeEntityReference>SetSize</unmanagedCodeEntityReference> to establish its size and allocate memory for it. If you do not use <unmanagedCodeEntityReference>SetSize</unmanagedCodeEntityReference>, adding elements to your array causes it to be frequently reallocated and copied. Frequent reallocation and copying are inefficient and can fragment memory.</para>
            </alert>
            <para>If you need a dump of individual elements in the array, you must set the depth of the dump context to 1 or greater.</para>
            <para>For more information on using <unmanagedCodeEntityReference>CWordArray</unmanagedCodeEntityReference>, see the article <legacyLink xlink:href="02586e4c-851d-41d0-a722-feb11c17c74c">Collections</legacyLink>.</para>
        </content>
    </languageReferenceRemarks>
    <section>
        <title>Inheritance Hierarchy</title>
        <content>
            <para> <legacyLink xlink:href="95e9acd3-d9eb-4ac0-b52b-ca4a501a7a3a">CObject</legacyLink>
            </para>
            <para> <unmanagedCodeEntityReference>CWordArray</unmanagedCodeEntityReference>
            </para>
        </content>
    </section>
    <requirements>
        <content>
            <para> <legacyBold>Header: </legacyBold>afxcoll.h</para>
        </content>
    </requirements>
    <section address="icommandsource_interface">
        <!--a4b1f698-c09f-4ba8-9b13-0e74a0a4967e-->
        <title>ICommandSource Interface</title>
        <content>
            <para>Manages commands sent from a command source object to a user control.</para>
            <legacySyntax>interface class ICommandSource</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Remarks</title>
                <content>
                    <para>When you host a user control in an MFC View, <link xlink:href="d597e397-6529-469b-88f5-7f65a6b9e895">CWinFormsView</link> routes commands and update command UI messages to the user control to allow it to handle MFC commands (for example, frame menu items and toolbar buttons). By implementing <externalLink>                           <linkText>ICommandTarget</linkText>
<linkUri></linkUri>
</externalLink>
, you give the user control a reference to the <unmanagedCodeEntityReference>ICommandSource</unmanagedCodeEntityReference> object.</para>
                    <para>See <link xlink:href="bf138ece-b463-442a-b0a0-de7063a760c0">How To: Add Command Routing to the Windows Forms Control</link> for an example of how to use <unmanagedCodeEntityReference>ICommandTarget</unmanagedCodeEntityReference>.</para>
                    <para>For more information on using Windows Forms, see <link xlink:href="63fb099b-1dff-469c-9e34-dab52e122fcd">Using Windows Forms in MFC</link>.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="icommandsource__addcommandhandler">
        <!--0829f789-bf15-4c62-ab41-9ae32925d78d-->
        <title>ICommandSource::AddCommandHandler</title>
        <content>
            <para>Adds a command handler to a command source object.</para>
            <legacySyntax>void AddCommandHandler(
    unsigned int cmdID,
    CommandHandler^ cmdHandler );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>cmdID</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The command ID.</para>
                        </definition>
                        <definedTerm> <parameterReference>cmdHandler</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A handle to the command handler method.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>This method adds the command handler <parameterReference>cmdHandler</parameterReference> to the command source object and maps the handler to <parameterReference>cmdID</parameterReference>.</para>
                    <para>See <link xlink:href="bf138ece-b463-442a-b0a0-de7063a760c0">How To: Add Command Routing to the Windows Forms Control</link> for an example of how to use <unmanagedCodeEntityReference>AddCommandHandler</unmanagedCodeEntityReference>.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="icommandsource__addcommandrangehandler">
        <!--f86cc4ea-acac-4523-8225-20a7fb182cec-->
        <title>ICommandSource::AddCommandRangeHandler</title>
        <content>
            <para>Adds a group of command handlers to a command source object.</para>
            <legacySyntax>void AddCommandRangeHandler(
    unsigned int cmdIDMin,
    unsigned int cmdIDMax,
    CommandHandler^ cmdHandler );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>cmdIDMin</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The beginning index of the command ID range.</para>
                        </definition>
                        <definedTerm> <parameterReference>cmdIDMax</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The ending index of the command ID range.</para>
                        </definition>
                        <definedTerm> <parameterReference>cmdHandler</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A handle to the message handler method to which the commands are mapped.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>This method maps a contiguous range of command IDs to a single message handler and adds it to the command source object. This is used for handling a group of related buttons with one method.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="icommandsource__addcommandrangeuihandler">
        <!--b8560b1b-67d4-45a4-b5ba-ae1ea5d98bfd-->
        <title>ICommandSource::AddCommandRangeUIHandler</title>
        <content>
            <para>Adds a group of user interface command message handlers to a command source object.</para>
            <legacySyntax>void AddCommandRangeUIHandler( 
    unsigned int cmdIDMin, 
    unsigned int cmdIDMax, 
    CommandUIHandler^ cmdUIHandler );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>cmdIDMin</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The beginning index of the command ID range.</para>
                        </definition>
                        <definedTerm> <parameterReference>cmdIDMax</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The ending index of the command ID range.</para>
                        </definition>
                        <definedTerm> <parameterReference>cmdHandler</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A handle to the message handler method to which the commands are mapped.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>This method maps a contiguous range of command IDs to a single user interface command message handler and adds it to the command source object. This is used for handling a group of related buttons with one method.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="icommandsource__addcommanduihandler">
        <!--f0c9523b-fc75-4721-bc7b-8c6e7e00539a-->
        <title>ICommandSource::AddCommandUIHandler</title>
        <content>
            <para>Adds a user interface command message handler to a command source object.</para>
            <legacySyntax>void AddCommandUIHandler( 
    unsigned int cmdID, 
    CommandUIHandler^ cmdUIHandler );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>cmdID</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The command ID.</para>
                        </definition>
                        <definedTerm> <parameterReference>cmdUIHandler</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A handle to the user interface command message handler method.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>This method adds the user interface command message handler <parameterReference>cmdHandler</parameterReference> to the command source object and maps the handler to <parameterReference>cmdID</parameterReference>.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="icommandsource__postcommand">
        <!--b5c721bf-223a-4d3b-bd2d-287ea11dfaca-->
        <title>ICommandSource::PostCommand</title>
        <content>
            <para>Posts a message without waiting for it to be processed.</para>
            <legacySyntax>void PostCommand( 
    unsigned int command );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>command</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The command ID of the message to be posted.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>This method asynchronously posts the message mapped to the ID specified by <parameterReference>command</parameterReference>. It calls <link xlink:href="49a832ee-bc34-4126-88b3-bc1d9974f6c4#cwnd__postmessage">CWnd::PostMessage</link> to place the message in the window's message queue and then returns without waiting for the corresponding window to process the message.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="icommandsource__removecommandhandler">
        <!--2d0c6aba-57cf-4b75-b5a7-3902ab0fbcbd-->
        <title>ICommandSource::RemoveCommandHandler</title>
        <content>
            <para>Removes a command handler from a command source object.</para>
            <legacySyntax>void RemoveCommandHandler( unsigned int cmdID );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>cmdID</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The command ID.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>This method removes the command handler mapped to <parameterReference>cmdID</parameterReference> from the command source object.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="icommandsource__removecommandrangehandler">
        <!--7e74a854-6918-465d-98fe-3ea29a2a79b6-->
        <title>ICommandSource::RemoveCommandRangeHandler</title>
        <content>
            <para>Removes a group of command handlers from a command source object.</para>
            <legacySyntax>void RemoveCommandRangeUIHandler(
    unsigned int cmdIDMin,
    unsigned int cmdIDMax );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>cmdIDMin</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The beginning index of the command ID range.</para>
                        </definition>
                        <definedTerm> <parameterReference>cmdIDMax</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The ending index of the command ID range.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>This method removes a group of message handlers, mapped to the command IDs specifed by <parameterReference>cmdIDMin</parameterReference> and <parameterReference>cmdIDMax</parameterReference>, from the command source object.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="icommandsource__removecommandrangeuihandler">
        <!--c6d3e36c-f1fa-4b0a-bedf-1a64fd19f8a5-->
        <title>ICommandSource::RemoveCommandRangeUIHandler</title>
        <content>
            <para>Removes a group of user interface command message handlers from a command source object.</para>
            <legacySyntax>void RemoveCommandRangeUIHandler(
    unsigned int cmdIDMin,
    unsigned int cmdIDMax );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>cmdIDMin</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The beginning index of the command ID range.</para>
                        </definition>
                        <definedTerm> <parameterReference>cmdIDMax</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The ending index of the command ID range.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>This method removes a group of user interface command message handlers, mapped to the command IDs specifed by <parameterReference>cmdIDMin</parameterReference> and <parameterReference>cmdIDMax</parameterReference>, from the command source object.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="icommandsource__removecommanduihandler">
        <!--dcb490bd-0211-45b1-a0dd-444584e15eb7-->
        <title>ICommandSource::RemoveCommandUIHandler</title>
        <content>
            <para>Removes a user interface command message handler from a command source object.</para>
            <legacySyntax>void RemoveCommandUIHandler( 
    unsigned int cmdID );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>cmdID</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The command ID.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>This method removes the user interface command message handler mapped to <parameterReference>cmdID</parameterReference> from the command source object.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="icommandsource__sendcommand">
        <!--be347ba3-a9d7-48a4-9020-86d0be0f8956-->
        <title>ICommandSource::SendCommand</title>
        <content>
            <para>Sends a message and waits for it to be processed before returning.</para>
            <legacySyntax>void SendCommand( 
    unsigned int command );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>command</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The command ID of the message to be sent.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>This method synchronously sends the message mapped to the ID specified by <parameterReference>command</parameterReference>. It calls <link xlink:href="49a832ee-bc34-4126-88b3-bc1d9974f6c4#cwnd__sendmessage">CWnd::SendMessage</link> to place the message in the window's message queue and waits until that window procedure has processed the message before returning.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="icommandtarget_interface">
        <!--dd9927f6-3479-4e7c-8ef9-13206cf901f3-->
        <title>ICommandTarget Interface</title>
        <content>
            <para>Provides a user control with an interface to receive commands from a command source object.</para>
            <legacySyntax>interface class ICommandTarget</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Remarks</title>
                <content>
                    <para>When you host a user control in an MFC View, <legacyLink xlink:href="d597e397-6529-469b-88f5-7f65a6b9e895">CWinFormsView</legacyLink> routes commands and update command UI messages to the user control to allow it to handle MFC commands (for example, frame menu items and toolbar buttons). By implementing <unmanagedCodeEntityReference>ICommandTarget</unmanagedCodeEntityReference>, you give the user control a reference to the <externalLink>                           <linkText>ICommandSource</linkText>
<linkUri></linkUri>
</externalLink>
 object.</para>
                    <para>See <link xlink:href="bf138ece-b463-442a-b0a0-de7063a760c0">How To: Add Command Routing to the Windows Forms Control</link> for an example of how to use <unmanagedCodeEntityReference>ICommandTarget</unmanagedCodeEntityReference>.</para>
                    <para>For more information on using Windows Forms, see <link xlink:href="63fb099b-1dff-469c-9e34-dab52e122fcd">Using Windows Forms in MFC</link>.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="icommandtarget__initialize">
        <!--f580a1f4-d711-4b22-8651-6c1314536a11-->
        <title>ICommandTarget::Initialize</title>
        <content>
            <para>Initializes the command target object.</para>
            <legacySyntax>void Initialize( ICommandSource^ cmdSource );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>cmdSource</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A handle to the command source object.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>When you host a user control in an MFC View, <legacyLink xlink:href="d597e397-6529-469b-88f5-7f65a6b9e895">CWinFormsView</legacyLink> routes commands and update command UI messages to the user control to allow it to handle MFC commands.</para>
                    <para>This method initializes the command target object and associates it with the specified command source object <parameterReference>cmdSource</parameterReference>. It should be called in the user control class implementation. At initialization, you should register command handlers with the command source object by calling ICommandSource::AddCommandHandler in the <unmanagedCodeEntityReference>Initialize</unmanagedCodeEntityReference> implementation. See <link xlink:href="bf138ece-b463-442a-b0a0-de7063a760c0">How To: Add Command Routing to the Windows Forms Control</link> for an example of how to use <unmanagedCodeEntityReference>Initialize</unmanagedCodeEntityReference> to do this.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="icommandui_interface">
        <!--134afe8d-dcdf-47ca-857a-a166a6b665dd-->
        <title>ICommandUI Interface</title>
        <content>
            <para>Manages user interface commands.</para>
            <legacySyntax>interface class ICommandUI</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Remarks</title>
                <content>
                    <para>This interface provides methods and properties that manage user interface commands. <unmanagedCodeEntityReference>ICommandUI</unmanagedCodeEntityReference> is similar to <link xlink:href="04eaaaf5-f510-48ab-b425-94665ba24766">CCmdUI</link>, except that <unmanagedCodeEntityReference>ICommandUI</unmanagedCodeEntityReference> is used for MFC applications that interoperate with .NET components.</para>
                    <para> <unmanagedCodeEntityReference>ICommandUI</unmanagedCodeEntityReference> is used within an <unmanagedCodeEntityReference>ON_UPDATE_COMMAND_UI</unmanagedCodeEntityReference> handler in an <externalLink>                           <linkText>ICommandTarget</linkText>
<linkUri></linkUri>
</externalLink>
-derived class. When a user of an application activates (selects or clicks) a menu, each menu item is displayed as enabled or disabled. The target of each menu command provides this information by implementing an <unmanagedCodeEntityReference>ON_UPDATE_COMMAND_UI</unmanagedCodeEntityReference> handler. For each of the command user interface objects in your application, use the Properties window to create a message-map entry and function prototype for each handler.</para>
                    <para>For more information on how the <unmanagedCodeEntityReference>ICommandUI</unmanagedCodeEntityReference> interface is used in command routing, see <link xlink:href="bf138ece-b463-442a-b0a0-de7063a760c0">How To: Add Command Routing to the Windows Forms Control</link>.</para>
                    <para>For more information on using Windows Forms, see <link xlink:href="63fb099b-1dff-469c-9e34-dab52e122fcd">Using Windows Forms in MFC</link>.</para>
                    <para>For more information on how user interface commands are managed in MFC, see <link xlink:href="04eaaaf5-f510-48ab-b425-94665ba24766">CCmdUI</link>.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="icommandui__check">
        <!--469185b7-f6cc-4100-bb2d-91e79cc3c661-->
        <title>ICommandUI::Check</title>
        <content>
            <para>Sets the user interface item for this command to the appropriate check state.</para>
            <legacySyntax>property UICheckState Check;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Remarks</title>
                <content>
                    <para>This property sets the user interface item for this command to the appropriate check state. Set <unmanagedCodeEntityReference>Check</unmanagedCodeEntityReference> to the following values:</para>
                    <table xmlns:caps="http://schemas.microsoft.com/build/caps/2013/11">
                        <thead>
                            <tr>
                                <TD>
                                    <para>Term</para>
                                </TD>
                                <TD>
                                    <para>Definition</para>
                                </TD>
                            </tr>
                        </thead>
                        <tbody>
                            <tr>
                                <TD>
                                    <para>0</para>
                                </TD>
                                <TD>
                                    <para>Uncheck</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para>1</para>
                                </TD>
                                <TD>
                                    <para>Check</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para>2</para>
                                </TD>
                                <TD>
                                    <para>Set indeterminate</para>
                                </TD>
                            </tr>
                        </tbody>
                    </table>
                </content>
            </section>
        </sections>
    </section>
    <section address="icommandui__continuerouting">
        <!--71b59aa5-6c96-4eef-ba85-7f31da1bff1f-->
        <title>ICommandUI::ContinueRouting</title>
        <content>
            <para>Tells the command routing mechanism to continue routing the current message down the chain of handlers.</para>
            <legacySyntax>void ContinueRouting();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Remarks</title>
                <content>
                    <para>This is an advanced member function that should be used in conjunction with an <link xlink:href="0bb49090-aee8-4203-87c8-dd001d3dd26e">ON_COMMAND_EX</link> handler that returns <languageKeyword>FALSE</languageKeyword>. For more information, see Technical Note <link xlink:href="af4b6794-4b40-4f1e-ad41-603c3b7409bb">TN006: Message Maps</link>.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="icommandui__enabled">
        <!--a1442b4f-a5db-42c4-b70e-d572982bf69e-->
        <title>ICommandUI::Enabled</title>
        <content>
            <para>Enables or disables the user interface item for this command.</para>
            <legacySyntax>property bool Enabled;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Remarks</title>
                <content>
                    <para>This property enables or disables the user interface item for this command. Set <unmanagedCodeEntityReference>Enabled</unmanagedCodeEntityReference> to <languageKeyword>TRUE</languageKeyword> to enable the item, <languageKeyword>FALSE</languageKeyword> to disable it.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="icommandui__id">
        <!--418c3f90-3065-4f95-bddd-8ddd6568d927-->
        <title>ICommandUI::ID</title>
        <content>
            <para>Gets the ID of the user interface object represented by the <unmanagedCodeEntityReference>ICommandUI</unmanagedCodeEntityReference> object.</para>
            <legacySyntax>property unsigned int ID;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Remarks</title>
                <content>
                    <para>This property gets the ID (a handle) of the menu item, toolbar button, or other user interface object represented by the <unmanagedCodeEntityReference>ICommandUI</unmanagedCodeEntityReference> object.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="icommandui__index">
        <!--5a753342-b2c8-4ce1-82c2-d4378b655ade-->
        <title>ICommandUI::Index</title>
        <content>
            <para>Gets the index of the user interface object represented by the <unmanagedCodeEntityReference>ICommandUI</unmanagedCodeEntityReference> object.</para>
            <legacySyntax>property unsigned int Index;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Remarks</title>
                <content>
                    <para>This property gets the index (a handle) of the menu item, toolbar button, or other user interface object represented by the <unmanagedCodeEntityReference>ICommandUI</unmanagedCodeEntityReference> object.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="icommandui__radio">
        <!--d9b6a723-4b14-4b11-9c57-e4273af21a83-->
        <title>ICommandUI::Radio</title>
        <content>
            <para>Sets the user interface item for this command to the appropriate check state.</para>
            <legacySyntax>property bool Radio;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Remarks</title>
                <content>
                    <para>This property sets the user interface item for this command to the appropriate check state. Set <unmanagedCodeEntityReference>Radio</unmanagedCodeEntityReference> to <languageKeyword>TRUE</languageKeyword> to enable the item; otherwise <languageKeyword>FALSE</languageKeyword>.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="icommandui__text">
        <!--e0dea5ea-c78a-4a2a-b0ef-bbb4e9ebcdf5-->
        <title>ICommandUI::Text</title>
        <content>
            <para>Sets the text of the user interface item for this command.</para>
            <legacySyntax>property String^ Text;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Remarks</title>
                <content>
                    <para>This property sets the text of the user interface item for this command. Set <unmanagedCodeEntityReference>Text</unmanagedCodeEntityReference> to a text string handle.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="iview_interface">
        <!--9321f299-486e-4551-bee9-d2c4a7b91548-->
        <title>IView Interface</title>
        <content>
            <para>Implements several methods that <legacyLink xlink:href="d597e397-6529-469b-88f5-7f65a6b9e895">CWinFormsView</legacyLink> uses to send view notifications to a managed control.</para>
            <legacySyntax>interface class IView</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Remarks</title>
                <content>
                    <para> <unmanagedCodeEntityReference>IView</unmanagedCodeEntityReference> implements several methods that <unmanagedCodeEntityReference>CWinFormsView</unmanagedCodeEntityReference> uses to forward common view notifications to a hosted managed control. These are <legacyLink xlink:href="9321f299-486e-4551-bee9-d2c4a7b91548">OnInitialUpdate</legacyLink>, <legacyLink xlink:href="9321f299-486e-4551-bee9-d2c4a7b91548">OnUpdate</legacyLink> and <legacyLink xlink:href="9321f299-486e-4551-bee9-d2c4a7b91548">OnActivateView</legacyLink>.</para>
                    <para> <unmanagedCodeEntityReference>IView</unmanagedCodeEntityReference> is similar to <legacyLink xlink:href="9cff3c56-7564-416b-b9a4-71a9254ed755">CView</legacyLink>, but is used only with managed views and controls.</para>
                    <para>For more information on using Windows Forms, see <link xlink:href="63fb099b-1dff-469c-9e34-dab52e122fcd">Using Windows Forms in MFC</link>.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="iview__onactivateview">
        <!--7855222d-cbba-489a-ab11-56b4dc99a859-->
        <title>IView::OnActivateView</title>
        <content>
            <para>Called by MFC when a view is activated or deactivated.</para>
            <legacySyntax>void OnActivateView( bool activate );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>activate</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Indicates whether the view is being activated or deactivated.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
        </sections>
    </section>
    <section address="iview__oninitialupdate">
        <!--21dac456-961d-4ec3-85ef-7f5d00374119-->
        <title>IView::OnInitialUpdate</title>
        <content>
            <para>Called by the framework after the view is first attached to the document, but before the view is initially displayed.</para>
            <legacySyntax>void OnInitialUpdate();</legacySyntax>
        </content>
        <sections/>
    </section>
    <section address="iview__onupdate">
        <!--a5827cbe-a654-4147-8d3c-9b9588b64df1-->
        <title>IView::OnUpdate</title>
        <content>
            <para>Called by MFC after the view's document has been modified. </para>
            <legacySyntax>void OnUpdate();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Remarks</title>
                <content>
                    <para>This function allows the view to update its display to reflect modifications.</para>
                </content>
            </section>
        </sections>
    </section>
    <relatedTopics> <legacyLink xlink:href="76798022-5886-48e7-a7f2-f99352b15cbf">MFC Sample COLLECT</legacyLink> <link xlink:href="95e9acd3-d9eb-4ac0-b52b-ca4a501a7a3a">Base Class</link> <link xlink:href="19d70341-e391-4a72-94c6-35755ce975d4">Hierarchy Chart</link>
    </relatedTopics>
</developerReferenceWithSyntaxDocument>



