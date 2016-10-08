---
title: "choice Class"
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
ms.topic: article
ms.assetid: 4157a539-d5c2-4161-b1ab-536ce2888397
caps.latest.revision: 18
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
# choice Class
<?xml version="1.0" encoding="utf-8"?>
<developerReferenceWithSyntaxDocument xmlns="http://ddue.schemas.microsoft.com/authoring/2003/5" xmlns:xlink="http://www.w3.org/1999/xlink" xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:schemaLocation="http://ddue.schemas.microsoft.com/authoring/2003/5 http://clixdevr3.blob.core.windows.net/ddueschema/developer.xsd">
    <introduction>
        <para>A <unmanagedCodeEntityReference>choice</unmanagedCodeEntityReference> messaging block is a multi-source, single-target block that represents a control-flow interaction with a set of sources. The choice block will wait for any one of multiple sources to produce a message and will propagate the index of the source that produced the message. </para>
    </introduction>
    <syntaxSection>
        <legacySyntax xml:space= "preserve">template&lt;
    class _Type
&gt;
class choice: public ISource&lt;size_t&gt;;</legacySyntax>
    </syntaxSection>
    <parameters>
        <content>
            <definitionTable>
                <definedTerm> <parameterReference>_Type</parameterReference>
                </definedTerm>
                <definition>
                    <para>A <unmanagedCodeEntityReference>tuple</unmanagedCodeEntityReference>-based type representing the payloads of the input sources. </para>
                </definition>
            </definitionTable>
        </content>
    </parameters>
    <section>
        <title>Members</title>
        <content/>
        <sections>
            <section>
                <title>Public Typedefs</title>
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
                                    <para> <unmanagedCodeEntityReference>type</unmanagedCodeEntityReference>
                                    </para>
                                </TD>
                                <TD>
                                    <para>A type alias for <parameterReference>_Type</parameterReference>. </para>
                                </TD>
                            </tr>
                        </tbody>
                    </table>
                </content>
            </section>
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
                                    <para> <link xlink:href="#choice__choice_constructor">choice::choice Constructor</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Overloaded. Constructs a <unmanagedCodeEntityReference>choice</unmanagedCodeEntityReference> messaging block. </para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#choice___dtorchoice_destructor">choice::~choice Destructor</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Destroys the <unmanagedCodeEntityReference>choice</unmanagedCodeEntityReference> messaging block. </para>
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
                                    <para> <link xlink:href="#choice__accept_method">choice::accept Method</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Accepts a message that was offered by this <unmanagedCodeEntityReference>choice</unmanagedCodeEntityReference> block, transferring ownership to the caller. </para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#choice__acquire_ref_method">choice::acquire_ref Method</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Acquires a reference count on this <unmanagedCodeEntityReference>choice</unmanagedCodeEntityReference> messaging block, to prevent deletion. </para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#choice__consume_method">choice::consume Method</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Consumes a message previously offered by this <unmanagedCodeEntityReference>choice</unmanagedCodeEntityReference> messaging block and successfully reserved by the target, transferring ownership to the caller. </para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#choice__has_value_method">choice::has_value Method</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Checks whether this <unmanagedCodeEntityReference>choice</unmanagedCodeEntityReference> messaging block has been initialized with a value yet. </para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#choice__index_method">choice::index Method</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Returns an index into the <unmanagedCodeEntityReference>tuple</unmanagedCodeEntityReference> representing the element selected by the <unmanagedCodeEntityReference>choice</unmanagedCodeEntityReference> messaging block. </para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#choice__link_target_method">choice::link_target Method</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Links a target block to this <unmanagedCodeEntityReference>choice</unmanagedCodeEntityReference> messaging block. </para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#choice__release_method">choice::release Method</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Releases a previous successful message reservation. </para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#choice__release_ref_method">choice::release_ref Method</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Releases a reference count on this <unmanagedCodeEntityReference>choice</unmanagedCodeEntityReference> messaging block. </para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#choice__reserve_method">choice::reserve Method</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Reserves a message previously offered by this <unmanagedCodeEntityReference>choice</unmanagedCodeEntityReference> messaging block. </para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#choice__unlink_target_method">choice::unlink_target Method</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Unlinks a target block from this <unmanagedCodeEntityReference>choice</unmanagedCodeEntityReference> messaging block. </para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#choice__unlink_targets_method">choice::unlink_targets Method</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Unlinks all targets from this <unmanagedCodeEntityReference>choice</unmanagedCodeEntityReference> messaging block. (Overrides <legacyLink xlink:href="c7b73463-42f6-4dcc-801a-81379b12d35a#isource__unlink_targets_method">ISource::unlink_targets</legacyLink>.)</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#choice__value_method">choice::value Method</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Gets the message whose index was selected by the <unmanagedCodeEntityReference>choice</unmanagedCodeEntityReference> messaging block. </para>
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
            <para>The choice block ensures that only one of the incoming messages is consumed. </para>
            <para>For more information, see <link xlink:href="79c456c0-1692-480c-bb67-98f2434c1252">Asynchronous Message Blocks</link>.</para>
        </content>
    </languageReferenceRemarks>
    <section>
        <title>Inheritance Hierarchy</title>
        <content>
            <para> <legacyLink xlink:href="c7b73463-42f6-4dcc-801a-81379b12d35a">ISource</legacyLink>
            </para>
            <para> <unmanagedCodeEntityReference>choice</unmanagedCodeEntityReference>
            </para>
        </content>
    </section>
    <requirements>
        <content>
            <para>
                <embeddedLabel>Header: </embeddedLabel>agents.h</para>
            <para>
                <embeddedLabel>Namespace: </embeddedLabel>concurrency</para>
        </content>
    </requirements>
    <section address="choice__accept_method">
        <!--2a2499b9-3511-450c-b281-731f4ceb8af8-->
        <title>choice::accept Method</title>
        <content>
            <para>Accepts a message that was offered by this <unmanagedCodeEntityReference>choice</unmanagedCodeEntityReference> block, transferring ownership to the caller. </para>
            <legacySyntax xml:space= "preserve">virtual message&lt;size_t&gt; * accept(
    runtime_object_identity _MsgId,
    _Inout_ ITarget&lt;size_t&gt; * _PTarget );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>_MsgId</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The <unmanagedCodeEntityReference>runtime_object_identity</unmanagedCodeEntityReference> of the offered <unmanagedCodeEntityReference>message</unmanagedCodeEntityReference> object. </para>
                        </definition>
                        <definedTerm> <parameterReference>_PTarget</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A pointer to the target block that is calling the <unmanagedCodeEntityReference>accept</unmanagedCodeEntityReference> method. </para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>A pointer to the message that the caller now has ownership of. </para>
                </content>
            </section>
        </sections>
    </section>
    <section address="choice__acquire_ref_method">
        <!--283bdfb0-2e22-4bdb-a1f8-436a7617535e-->
        <title>choice::acquire_ref Method</title>
        <content>
            <para>Acquires a reference count on this <unmanagedCodeEntityReference>choice</unmanagedCodeEntityReference> messaging block, to prevent deletion. </para>
            <legacySyntax xml:space= "preserve">virtual void acquire_ref(    _Inout_ ITarget&lt;size_t&gt; * _PTarget );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>_PTarget</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A pointer to the target block that is calling this method. </para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>This method is called by an <unmanagedCodeEntityReference>ITarget</unmanagedCodeEntityReference> object that is being linked to this source during the <unmanagedCodeEntityReference>link_target</unmanagedCodeEntityReference> method. </para>
                </content>
            </section>
        </sections>
    </section>
    <section address="choice__choice_constructor">
        <!--eb16dc20-0681-4b78-8c11-a19fa1106a28-->
        <title>choice::choice Constructor</title>
        <content>
            <para>Constructs a <unmanagedCodeEntityReference>choice</unmanagedCodeEntityReference> messaging block. </para>
            <legacySyntax xml:space= "preserve">explicit choice(
    _Type _Tuple );


choice(
    Scheduler&amp; _PScheduler,
    _Type _Tuple );


choice(
    ScheduleGroup&amp; _PScheduleGroup,
    _Type _Tuple );


choice(
    choice &amp;&amp; _Choice );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>_Tuple</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A <unmanagedCodeEntityReference>tuple</unmanagedCodeEntityReference> of sources for the choice. </para>
                        </definition>
                        <definedTerm> <parameterReference>_PScheduler</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The <unmanagedCodeEntityReference>Scheduler</unmanagedCodeEntityReference> object within which the propagation task for the <unmanagedCodeEntityReference>choice</unmanagedCodeEntityReference> messaging block is scheduled. </para>
                        </definition>
                        <definedTerm> <parameterReference>_PScheduleGroup</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The <unmanagedCodeEntityReference>ScheduleGroup</unmanagedCodeEntityReference> object within which the propagation task for the <unmanagedCodeEntityReference>choice</unmanagedCodeEntityReference> messaging block is scheduled. The <unmanagedCodeEntityReference>Scheduler</unmanagedCodeEntityReference> object used is implied by the schedule group. </para>
                        </definition>
                        <definedTerm> <parameterReference>_Choice</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A <unmanagedCodeEntityReference>choice</unmanagedCodeEntityReference> messaging block to copy from. Note that the original object is orphaned, making this a move constructor. </para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The runtime uses the default scheduler if you do not specify the <parameterReference>_PScheduler</parameterReference> or <parameterReference>_PScheduleGroup</parameterReference> parameters. </para>
                    <para>Move construction is not performed under a lock, which means that it is up to the user to make sure that there are no light-weight tasks in flight at the time of moving. Otherwise, numerous races can occur, leading to exceptions or inconsistent state. </para>
                </content>
            </section>
        </sections>
    </section>
    <section address="choice___dtorchoice_destructor">
        <!--6f951ac1-298c-45de-8fd1-376a3764dbba-->
        <title>choice::~choice Destructor</title>
        <content>
            <para>Destroys the <unmanagedCodeEntityReference>choice</unmanagedCodeEntityReference> messaging block. </para>
            <legacySyntax xml:space= "preserve">~choice();</legacySyntax>
        </content>
        <sections/>
    </section>
    <section address="choice__consume_method">
        <!--7b5f82b0-bfe8-4b0b-a1d0-28571d3c771c-->
        <title>choice::consume Method</title>
        <content>
            <para>Consumes a message previously offered by this <unmanagedCodeEntityReference>choice</unmanagedCodeEntityReference> messaging block and successfully reserved by the target, transferring ownership to the caller. </para>
            <legacySyntax xml:space= "preserve">virtual message&lt;size_t&gt; * consume(
    runtime_object_identity _MsgId,
    _Inout_ ITarget&lt;size_t&gt; * _PTarget );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>_MsgId</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The <unmanagedCodeEntityReference>runtime_object_identity</unmanagedCodeEntityReference> of the reserved <unmanagedCodeEntityReference>message</unmanagedCodeEntityReference> object. </para>
                        </definition>
                        <definedTerm> <parameterReference>_PTarget</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A pointer to the target block that is calling the <unmanagedCodeEntityReference>consume</unmanagedCodeEntityReference> method. </para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>A pointer to the <unmanagedCodeEntityReference>message</unmanagedCodeEntityReference> object that the caller now has ownership of. </para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The <unmanagedCodeEntityReference>consume</unmanagedCodeEntityReference> method is similar to <unmanagedCodeEntityReference>accept</unmanagedCodeEntityReference>, but must always be preceded by a call to <unmanagedCodeEntityReference>reserve</unmanagedCodeEntityReference> that returned <unmanagedCodeEntityReference>true</unmanagedCodeEntityReference>. </para>
                </content>
            </section>
        </sections>
    </section>
    <section address="choice__has_value_method">
        <!--50695001-826a-4a8b-b5b8-86d80370cadc-->
        <title>choice::has_value Method</title>
        <content>
            <para>Checks whether this <unmanagedCodeEntityReference>choice</unmanagedCodeEntityReference> messaging block has been initialized with a value yet. </para>
            <legacySyntax xml:space= "preserve">bool has_value() const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para> <unmanagedCodeEntityReference>true</unmanagedCodeEntityReference> if the block has received a value, <unmanagedCodeEntityReference>false</unmanagedCodeEntityReference> otherwise. </para>
                </content>
            </section>
        </sections>
    </section>
    <section address="choice__index_method">
        <!--2341a217-df19-42c6-83ac-846075ae0f1d-->
        <title>choice::index Method</title>
        <content>
            <para>Returns an index into the <unmanagedCodeEntityReference>tuple</unmanagedCodeEntityReference> representing the element selected by the <unmanagedCodeEntityReference>choice</unmanagedCodeEntityReference> messaging block. </para>
            <legacySyntax xml:space= "preserve">size_t index();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>The message index. </para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The message payload can be extracted using the <unmanagedCodeEntityReference>get</unmanagedCodeEntityReference> method. </para>
                </content>
            </section>
        </sections>
    </section>
    <section address="choice__link_target_method">
        <!--66db0468-1468-4a40-b951-45aedde0dbcf-->
        <title>choice::link_target Method</title>
        <content>
            <para>Links a target block to this <unmanagedCodeEntityReference>choice</unmanagedCodeEntityReference> messaging block. </para>
            <legacySyntax xml:space= "preserve">virtual void link_target(    _Inout_ ITarget&lt;size_t&gt; * _PTarget );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>_PTarget</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A pointer to an <unmanagedCodeEntityReference>ITarget</unmanagedCodeEntityReference> block to link to this <unmanagedCodeEntityReference>choice</unmanagedCodeEntityReference> messaging block. </para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
        </sections>
    </section>
    <section address="choice__release_method">
        <!--88edceed-4a0f-48a7-9f5a-e3932d90685a-->
        <title>choice::release Method</title>
        <content>
            <para>Releases a previous successful message reservation. </para>
            <legacySyntax xml:space= "preserve">virtual void release(
    runtime_object_identity _MsgId,
    _Inout_ ITarget&lt;size_t&gt; * _PTarget );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>_MsgId</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The <unmanagedCodeEntityReference>runtime_object_identity</unmanagedCodeEntityReference> of the <unmanagedCodeEntityReference>message</unmanagedCodeEntityReference> object being released. </para>
                        </definition>
                        <definedTerm> <parameterReference>_PTarget</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A pointer to the target block that is calling the <unmanagedCodeEntityReference>release</unmanagedCodeEntityReference> method. </para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
        </sections>
    </section>
    <section address="choice__release_ref_method">
        <!--aad975a5-408f-4448-a886-37354e049d38-->
        <title>choice::release_ref Method</title>
        <content>
            <para>Releases a reference count on this <unmanagedCodeEntityReference>choice</unmanagedCodeEntityReference> messaging block. </para>
            <legacySyntax xml:space= "preserve">virtual void release_ref(    _Inout_ ITarget&lt;size_t&gt; * _PTarget );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>_PTarget</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A pointer to the target block that is calling this method. </para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>This method is called by an <unmanagedCodeEntityReference>ITarget</unmanagedCodeEntityReference> object that is being unlinked from this source. The source block is allowed to release any resources reserved for the target block. </para>
                </content>
            </section>
        </sections>
    </section>
    <section address="choice__reserve_method">
        <!--e43d4d64-076c-4bbe-94a6-cab83d6d7ec0-->
        <title>choice::reserve Method</title>
        <content>
            <para>Reserves a message previously offered by this <unmanagedCodeEntityReference>choice</unmanagedCodeEntityReference> messaging block. </para>
            <legacySyntax xml:space= "preserve">virtual bool reserve(
    runtime_object_identity _MsgId,
    _Inout_ ITarget&lt;size_t&gt; * _PTarget );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>_MsgId</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The <unmanagedCodeEntityReference>runtime_object_identity</unmanagedCodeEntityReference> of the <unmanagedCodeEntityReference>message</unmanagedCodeEntityReference> object being reserved. </para>
                        </definition>
                        <definedTerm> <parameterReference>_PTarget</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A pointer to the target block that is calling the <unmanagedCodeEntityReference>reserve</unmanagedCodeEntityReference> method. </para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para> <unmanagedCodeEntityReference>true</unmanagedCodeEntityReference> if the message was successfully reserved, <unmanagedCodeEntityReference>false</unmanagedCodeEntityReference> otherwise. Reservations can fail for many reasons, including: the message was already reserved or accepted by another target, the source could deny reservations, and so forth. </para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>After you call <unmanagedCodeEntityReference>reserve</unmanagedCodeEntityReference>, if it succeeds, you must call either <unmanagedCodeEntityReference>consume</unmanagedCodeEntityReference> or <unmanagedCodeEntityReference>release</unmanagedCodeEntityReference> in order to take or give up possession of the message, respectively. </para>
                </content>
            </section>
        </sections>
    </section>
    <section address="choice__unlink_target_method">
        <!--0fd72322-9434-4033-9580-c287da042b1a-->
        <title>choice::unlink_target Method</title>
        <content>
            <para>Unlinks a target block from this <unmanagedCodeEntityReference>choice</unmanagedCodeEntityReference> messaging block. </para>
            <legacySyntax xml:space= "preserve">virtual void unlink_target(    _Inout_ ITarget&lt;size_t&gt; * _PTarget );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>_PTarget</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A pointer to an <unmanagedCodeEntityReference>ITarget</unmanagedCodeEntityReference> block to unlink from this <unmanagedCodeEntityReference>choice</unmanagedCodeEntityReference> messaging block. </para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
        </sections>
    </section>
    <section address="choice__unlink_targets_method">
        <!--a06d4a0e-f932-43d2-b595-e694a17b1b43-->
        <title>choice::unlink_targets Method</title>
        <content>
            <para>Unlinks all targets from this <unmanagedCodeEntityReference>choice</unmanagedCodeEntityReference> messaging block. </para>
            <legacySyntax xml:space= "preserve">virtual void unlink_targets();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Remarks</title>
                <content>
                    <para>This method does not need to be called from the destructor because destructor for the internal <unmanagedCodeEntityReference>single_assignment</unmanagedCodeEntityReference> block will unlink properly. </para>
                </content>
            </section>
        </sections>
    </section>
    <section address="choice__value_method">
        <!--989d89cc-e3c8-4e57-8318-d5cfda0a9756-->
        <title>choice::value Method</title>
        <content>
            <para>Gets the message whose index was selected by the <unmanagedCodeEntityReference>choice</unmanagedCodeEntityReference> messaging block. </para>
            <legacySyntax xml:space= "preserve">template &lt;
    typename _Payload_type
&gt;
_Payload_type const &amp; value();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>_Payload_type</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The type of the message payload. </para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>The payload of the message. </para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>Because a <unmanagedCodeEntityReference>choice</unmanagedCodeEntityReference> messaging block can take inputs with different payload types, you must specify the type of the payload at the point of retrieval. You can determine the type based on the result of the <unmanagedCodeEntityReference>index</unmanagedCodeEntityReference> method. </para>
                </content>
            </section>
        </sections>
    </section>
    <relatedTopics> <link xlink:href="f1d33ca2-679b-4442-b140-22a9d9df61d1">concurrency Namespace</link> <link xlink:href="d2217119-70a1-40b6-809f-c1c13a571c3f">join Class</link> <link xlink:href="ccc34728-8de9-4e07-b83d-a36a58d9d2b9">single_assignment Class</link> <link xlink:href="concurrency_namespace_Functions#make_choice_function">make_choice Function</link> 
    </relatedTopics>
</developerReferenceWithSyntaxDocument>



