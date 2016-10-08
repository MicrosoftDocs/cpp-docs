---
title: "multitype_join Class"
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
ms.assetid: 236e87a0-4867-49fd-869a-bef4010e49a7
caps.latest.revision: 17
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
# multitype_join Class
<?xml version="1.0" encoding="utf-8"?>
<developerReferenceWithSyntaxDocument xmlns="http://ddue.schemas.microsoft.com/authoring/2003/5" xmlns:xlink="http://www.w3.org/1999/xlink" xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:schemaLocation="http://ddue.schemas.microsoft.com/authoring/2003/5 http://clixdevr3.blob.core.windows.net/ddueschema/developer.xsd">
    <introduction>
        <para>A <unmanagedCodeEntityReference>multitype_join</unmanagedCodeEntityReference> messaging block is a multi-source, single-target messaging block that combines together messages of different types from each of its sources and offers a tuple of the combined messages to its targets. </para>
    </introduction>
    <syntaxSection>
        <legacySyntax xml:space= "preserve">template&lt;
    typename _Type,
    join_type _Jtype = non_greedy
&gt;
class multitype_join: public ISource&lt;typename _Unwrap&lt; _Type&gt;::type&gt;;</legacySyntax>
    </syntaxSection>
    <parameters>
        <content>
            <definitionTable>
                <definedTerm> <parameterReference>_Type</parameterReference>
                </definedTerm>
                <definition>
                    <para>The <unmanagedCodeEntityReference>tuple</unmanagedCodeEntityReference> payload type of the messages joined and propagated by the block. </para>
                </definition>
                <definedTerm> <parameterReference>_Jtype</parameterReference>
                </definedTerm>
                <definition>
                    <para>The kind of <unmanagedCodeEntityReference>join</unmanagedCodeEntityReference> block this is, either <unmanagedCodeEntityReference>greedy</unmanagedCodeEntityReference> or <unmanagedCodeEntityReference>non_greedy</unmanagedCodeEntityReference>
                    </para>
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
                                    <para> <link xlink:href="#multitype_join__multitype_join_constructor">multitype_join::multitype_join Constructor</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Overloaded. Constructs a <unmanagedCodeEntityReference>multitype_join</unmanagedCodeEntityReference> messaging block. </para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#multitype_join___dtormultitype_join_destructor">multitype_join::~multitype_join Destructor</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Destroys the <unmanagedCodeEntityReference>multitype_join</unmanagedCodeEntityReference> messaging block. </para>
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
                                    <para> <link xlink:href="#multitype_join__accept_method">multitype_join::accept Method</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Accepts a message that was offered by this <unmanagedCodeEntityReference>multitype_join</unmanagedCodeEntityReference> block, transferring ownership to the caller. </para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#multitype_join__acquire_ref_method">multitype_join::acquire_ref Method</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Acquires a reference count on this <unmanagedCodeEntityReference>multitype_join</unmanagedCodeEntityReference> messaging block, to prevent deletion. </para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#multitype_join__consume_method">multitype_join::consume Method</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Consumes a message previously offered by the <unmanagedCodeEntityReference>multitype_join</unmanagedCodeEntityReference> messaging block and successfully reserved by the target, transferring ownership to the caller. </para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#multitype_join__link_target_method">multitype_join::link_target Method</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Links a target block to this <unmanagedCodeEntityReference>multitype_join</unmanagedCodeEntityReference> messaging block. </para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#multitype_join__release_method">multitype_join::release Method</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Releases a previous successful message reservation. </para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#multitype_join__release_ref_method">multitype_join::release_ref Method</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Releases a reference count on this <unmanagedCodeEntityReference>multiple_join</unmanagedCodeEntityReference> messaging block. </para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#multitype_join__reserve_method">multitype_join::reserve Method</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Reserves a message previously offered by this <unmanagedCodeEntityReference>multitype_join</unmanagedCodeEntityReference> messaging block. </para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#multitype_join__unlink_target_method">multitype_join::unlink_target Method</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Unlinks a target block from this <unmanagedCodeEntityReference>multitype_join</unmanagedCodeEntityReference> messaging block. </para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#multitype_join__unlink_targets_method">multitype_join::unlink_targets Method</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Unlinks all targets from this <unmanagedCodeEntityReference>multitype_join</unmanagedCodeEntityReference> messaging block. (Overrides <legacyLink xlink:href="c7b73463-42f6-4dcc-801a-81379b12d35a#isource__unlink_targets_method">ISource::unlink_targets</legacyLink>.)</para>
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
            <para>For more information, see <link xlink:href="79c456c0-1692-480c-bb67-98f2434c1252">Asynchronous Message Blocks</link>. </para>
        </content>
    </languageReferenceRemarks>
    <section>
        <title>Inheritance Hierarchy</title>
        <content>
            <para> <legacyLink xlink:href="c7b73463-42f6-4dcc-801a-81379b12d35a">ISource</legacyLink>
            </para>
            <para> <unmanagedCodeEntityReference>multitype_join</unmanagedCodeEntityReference>
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
    <section address="multitype_join__accept_method">
        <!--63e7e8e6-cddb-440a-b94e-afe18cff295a-->
        <title>multitype_join::accept Method</title>
        <content>
            <para>Accepts a message that was offered by this <unmanagedCodeEntityReference>multitype_join</unmanagedCodeEntityReference> block, transferring ownership to the caller. </para>
            <legacySyntax xml:space= "preserve">virtual message&lt;_Destination_type&gt; * accept(
    runtime_object_identity _MsgId,
    _Inout_ ITarget&lt;_Destination_type&gt; * _PTarget );</legacySyntax>
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
    <section address="multitype_join__acquire_ref_method">
        <!--fe0e2c2a-c1d9-411a-ae62-9371f285a9c3-->
        <title>multitype_join::acquire_ref Method</title>
        <content>
            <para>Acquires a reference count on this <unmanagedCodeEntityReference>multitype_join</unmanagedCodeEntityReference> messaging block, to prevent deletion. </para>
            <legacySyntax xml:space= "preserve">virtual void acquire_ref(    _Inout_ ITarget&lt;_Destination_type&gt; * _PTarget );</legacySyntax>
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
    <section address="multitype_join__consume_method">
        <!--22793e21-5b7f-488f-8834-d2808af48ba4-->
        <title>multitype_join::consume Method</title>
        <content>
            <para>Consumes a message previously offered by the <unmanagedCodeEntityReference>multitype_join</unmanagedCodeEntityReference> messaging block and successfully reserved by the target, transferring ownership to the caller. </para>
            <legacySyntax xml:space= "preserve">virtual message&lt;_Destination_type&gt; * consume(
    runtime_object_identity _MsgId,
    _Inout_ ITarget&lt;_Destination_type&gt; * _PTarget );</legacySyntax>
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
    <section address="multitype_join__link_target_method">
        <!--abdfb95d-6c19-4889-90b4-af28e0ad21aa-->
        <title>multitype_join::link_target Method</title>
        <content>
            <para>Links a target block to this <unmanagedCodeEntityReference>multitype_join</unmanagedCodeEntityReference> messaging block. </para>
            <legacySyntax xml:space= "preserve">virtual void link_target(    _Inout_ ITarget&lt;_Destination_type&gt; * _PTarget );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>_PTarget</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A pointer to an <unmanagedCodeEntityReference>ITarget</unmanagedCodeEntityReference> block to link to this <unmanagedCodeEntityReference>multitype_join</unmanagedCodeEntityReference> messaging block. </para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
        </sections>
    </section>
    <section address="multitype_join__multitype_join_constructor">
        <!--d0fbafa3-b73f-4ba2-90e1-6fcc8bc4e387-->
        <title>multitype_join::multitype_join Constructor</title>
        <content>
            <para>Constructs a <unmanagedCodeEntityReference>multitype_join</unmanagedCodeEntityReference> messaging block. </para>
            <legacySyntax xml:space= "preserve">explicit multitype_join(
    _Type _Tuple );


multitype_join(
    Scheduler&amp; _PScheduler,
    _Type _Tuple );


multitype_join(
    ScheduleGroup&amp; _PScheduleGroup,
    _Type _Tuple );


multitype_join(
    multitype_join &amp;&amp; _Join );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>_Tuple</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A <unmanagedCodeEntityReference>tuple</unmanagedCodeEntityReference> of sources for this <unmanagedCodeEntityReference>multitype_join</unmanagedCodeEntityReference> messaging block. </para>
                        </definition>
                        <definedTerm> <parameterReference>_PScheduler</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The <unmanagedCodeEntityReference>Scheduler</unmanagedCodeEntityReference> object within which the propagation task for the <unmanagedCodeEntityReference>multitype_join</unmanagedCodeEntityReference> messaging block is scheduled. </para>
                        </definition>
                        <definedTerm> <parameterReference>_PScheduleGroup</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The <unmanagedCodeEntityReference>ScheduleGroup</unmanagedCodeEntityReference> object within which the propagation task for the <unmanagedCodeEntityReference>multitype_join</unmanagedCodeEntityReference> messaging block is scheduled. The <unmanagedCodeEntityReference>Scheduler</unmanagedCodeEntityReference> object used is implied by the schedule group. </para>
                        </definition>
                        <definedTerm> <parameterReference>_Join</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A <unmanagedCodeEntityReference>multitype_join</unmanagedCodeEntityReference> messaging block to copy from. Note that the original object is orphaned, making this a move constructor. </para>
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
    <section address="multitype_join___dtormultitype_join_destructor">
        <!--b559a316-56d6-42fb-aada-3adcbc8036be-->
        <title>multitype_join::~multitype_join Destructor</title>
        <content>
            <para>Destroys the <unmanagedCodeEntityReference>multitype_join</unmanagedCodeEntityReference> messaging block. </para>
            <legacySyntax xml:space= "preserve">~multitype_join();</legacySyntax>
        </content>
        <sections/>
    </section>
    <section address="multitype_join__release_method">
        <!--009a4fec-f0ef-4de3-976f-eab6b357ca65-->
        <title>multitype_join::release Method</title>
        <content>
            <para>Releases a previous successful message reservation. </para>
            <legacySyntax xml:space= "preserve">virtual void release(
    runtime_object_identity _MsgId,
    _Inout_ ITarget&lt;_Destination_type&gt; * _PTarget );</legacySyntax>
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
    <section address="multitype_join__release_ref_method">
        <!--0fd6e533-c5ac-4bf1-8392-4c953349d401-->
        <title>multitype_join::release_ref Method</title>
        <content>
            <para>Releases a reference count on this <unmanagedCodeEntityReference>multiple_join</unmanagedCodeEntityReference> messaging block. </para>
            <legacySyntax xml:space= "preserve">virtual void release_ref(    _Inout_ ITarget&lt;_Destination_type&gt; * _PTarget );</legacySyntax>
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
    <section address="multitype_join__reserve_method">
        <!--77f310ab-5fdd-41bf-b757-8fa096350491-->
        <title>multitype_join::reserve Method</title>
        <content>
            <para>Reserves a message previously offered by this <unmanagedCodeEntityReference>multitype_join</unmanagedCodeEntityReference> messaging block. </para>
            <legacySyntax xml:space= "preserve">virtual bool reserve(
    runtime_object_identity _MsgId,
    _Inout_ ITarget&lt;_Destination_type&gt; * _PTarget );</legacySyntax>
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
    <section address="multitype_join__unlink_target_method">
        <!--c4823484-4ad0-4984-aeaa-a8de889d1a63-->
        <title>multitype_join::unlink_target Method</title>
        <content>
            <para>Unlinks a target block from this <unmanagedCodeEntityReference>multitype_join</unmanagedCodeEntityReference> messaging block. </para>
            <legacySyntax xml:space= "preserve">virtual void unlink_target(    _Inout_ ITarget&lt;_Destination_type&gt; * _PTarget );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>_PTarget</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A pointer to an <unmanagedCodeEntityReference>ITarget</unmanagedCodeEntityReference> block to unlink from this <unmanagedCodeEntityReference>multitype_join</unmanagedCodeEntityReference> messaging block. </para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
        </sections>
    </section>
    <section address="multitype_join__unlink_targets_method">
        <!--14d49ea7-e16f-42d8-ba6d-ae6972ade113-->
        <title>multitype_join::unlink_targets Method</title>
        <content>
            <para>Unlinks all targets from this <unmanagedCodeEntityReference>multitype_join</unmanagedCodeEntityReference> messaging block. </para>
            <legacySyntax xml:space= "preserve">virtual void unlink_targets();</legacySyntax>
        </content>
        <sections/>
    </section>
    <relatedTopics> <link xlink:href="f1d33ca2-679b-4442-b140-22a9d9df61d1">concurrency Namespace</link> <link xlink:href="4157a539-d5c2-4161-b1ab-536ce2888397">choice Class</link> <link xlink:href="d2217119-70a1-40b6-809f-c1c13a571c3f">join Class</link> <link xlink:href="concurrency_namespace_Enumerations#join_type_enumeration">join_type Enumeration</link> <link xlink:href="concurrency_namespace_Functions#make_join_function">make_join Function</link> <link xlink:href="concurrency_namespace_Functions#make_greedy_join_function">make_greedy_join Function</link> 
    </relatedTopics>
</developerReferenceWithSyntaxDocument>



