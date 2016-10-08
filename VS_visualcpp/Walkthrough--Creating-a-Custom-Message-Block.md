---
title: "Walkthrough: Creating a Custom Message Block"
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
ms.assetid: 4c6477ad-613c-4cac-8e94-2c9e63cd43a1
caps.latest.revision: 11
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
# Walkthrough: Creating a Custom Message Block
<?xml version="1.0" encoding="utf-8"?>
<developerWalkthroughDocument xmlns="http://ddue.schemas.microsoft.com/authoring/2003/5" xmlns:xlink="http://www.w3.org/1999/xlink" xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:schemaLocation="http://ddue.schemas.microsoft.com/authoring/2003/5 http://clixdevr3.blob.core.windows.net/ddueschema/developer.xsd">
  <introduction>
    <para>This document describes how to create a custom message block type that orders incoming messages by priority.</para>
    <para>Although the built-in message block types provide a wide-range of functionality, you can create your own message block type and customize it to meet the requirements of your application. For a description of the built-in message block types that are provided by the Asynchronous Agents Library, see <link xlink:href="79c456c0-1692-480c-bb67-98f2434c1252">Asynchronous Message Blocks</link>.</para>
  </introduction>
  <prerequisites>
    <content>
      <para>Read the following documents before you start this walkthrough:</para>
      <list class="bullet">
        <listItem>
          <para>
            <link xlink:href="79c456c0-1692-480c-bb67-98f2434c1252">Asynchronous Message Blocks</link>
          </para>
        </listItem>
        <listItem>
          <para>
            <link xlink:href="42477c9e-a8a6-4dc4-a98e-93c6dc8c4dd0">Message Passing Functions</link>
          </para>
        </listItem>
      </list>
    </content>
  </prerequisites>
  <section address="top">
    <title>Sections</title>
    <content>
      <para>This walkthrough contains the following sections:</para>
      <list class="bullet">
        <listItem>
          <para>
            <legacyLink xlink:href="#design">Designing a Custom Message Block</legacyLink>
          </para>
        </listItem>
        <listItem>
          <para>
            <legacyLink xlink:href="#class">Defining the priority_buffer Class</legacyLink>
          </para>
        </listItem>
        <listItem>
          <para>
            <legacyLink xlink:href="#complete">The Complete Example</legacyLink>
          </para>
        </listItem>
      </list>
    </content>
  </section>
  <section address="design">
    <title>Designing a Custom Message Block</title>
    <content>
      <para>Message blocks participate in the act of sending and receiving messages. A message block that sends messages is known as a <newTerm>source block</newTerm>. A message block that receives messages is known as a <newTerm>target block</newTerm>. A message block that both sends and receives messages is known as a <newTerm>propagator block</newTerm>. The Agents Library uses the abstract class <legacyLink xlink:href="c7b73463-42f6-4dcc-801a-81379b12d35a">concurrency::ISource</legacyLink> to represent source blocks and the abstract class <legacyLink xlink:href="5678db25-112a-4f72-be13-42e16b67c48b">concurrency::ITarget</legacyLink> to represent target blocks. Message block types that act as sources derive from <unmanagedCodeEntityReference>ISource</unmanagedCodeEntityReference>; message block types that act as targets derive from <unmanagedCodeEntityReference>ITarget</unmanagedCodeEntityReference>. </para>
      <para>Although you can derive your message block type directly from <unmanagedCodeEntityReference>ISource</unmanagedCodeEntityReference> and <unmanagedCodeEntityReference>ITarget</unmanagedCodeEntityReference>, the Agents Library defines three base classes that perform much of the functionality that is common to all message block types, for example, handling errors and connecting message blocks together in a concurrency-safe manner. The <legacyLink xlink:href="fbdd4146-e8d0-42e8-b714-fe633f69ffbf">concurrency::source_block</legacyLink> class derives from <unmanagedCodeEntityReference>ISource</unmanagedCodeEntityReference> and sends messages to other blocks. The <legacyLink xlink:href="3ce181b4-b94a-4894-bf7b-64fc09821f9f">concurrency::target_block</legacyLink> class derives from <unmanagedCodeEntityReference>ITarget</unmanagedCodeEntityReference> and receives messages from other blocks. The <legacyLink xlink:href="86aa75fd-eda5-42aa-aadf-25c0c1c9742d">concurrency::propagator_block</legacyLink> class derives from <unmanagedCodeEntityReference>ISource</unmanagedCodeEntityReference> and <unmanagedCodeEntityReference>ITarget</unmanagedCodeEntityReference> and sends messages to other blocks and it receives messages from other blocks. We recommend that you use these three base classes to handle infrastructure details so that you can focus on the behavior of your message block.</para>
      <para>The <unmanagedCodeEntityReference>source_block</unmanagedCodeEntityReference>, <unmanagedCodeEntityReference>target_block</unmanagedCodeEntityReference>, and <unmanagedCodeEntityReference>propagator_block</unmanagedCodeEntityReference> classes are templates that are parameterized on a type that manages the connections, or links, between source and target blocks and on a type that manages how messages are processed. The Agents Library defines two types that perform link management, <legacyLink xlink:href="09540a4e-c34e-4ff9-af49-21b8612b6ab3">concurrency::single_link_registry</legacyLink> and <legacyLink xlink:href="b2aa73a8-e8a6-4255-b117-d07530c328b2">concurrency::multi_link_registry</legacyLink>. The <unmanagedCodeEntityReference>single_link_registry</unmanagedCodeEntityReference> class enables a message block to be linked to one source or to one target. The <unmanagedCodeEntityReference>multi_link_registry</unmanagedCodeEntityReference> class enables a message block to be linked to multiple sources or multiple targets. The Agents Library defines one class that performs message management, <legacyLink xlink:href="787adfb7-7f79-4a70-864a-80e3b64088cd">concurrency::ordered_message_processor</legacyLink>. The <unmanagedCodeEntityReference>ordered_message_processor</unmanagedCodeEntityReference> class enables message blocks to process messages in the order in which it receives them. </para>
      <para>To better understand how message blocks relate to their sources and targets, consider the following example. This example shows the declaration of the <legacyLink xlink:href="eea71925-7043-4a92-bfd4-dbc0ece5d081">concurrency::transformer</legacyLink> class.</para>
      <codeReference>concrt-priority-buffer#20</codeReference>
      <para>The <unmanagedCodeEntityReference>transformer</unmanagedCodeEntityReference> class derives from <unmanagedCodeEntityReference>propagator_block</unmanagedCodeEntityReference>, and therefore acts as both a source block and as a target block. It accepts messages of type <parameterReference>_Input</parameterReference> and sends messages of type <parameterReference>_Output</parameterReference>. The <unmanagedCodeEntityReference>transformer</unmanagedCodeEntityReference> class specifies <unmanagedCodeEntityReference>single_link_registry</unmanagedCodeEntityReference> as the link manager for any target blocks and <unmanagedCodeEntityReference>multi_link_registry</unmanagedCodeEntityReference> as the link manager for any source blocks. Therefore, a <unmanagedCodeEntityReference>transformer</unmanagedCodeEntityReference> object can have up to one target and an unlimited number of sources. </para>
      <para>A class that derives from <unmanagedCodeEntityReference>source_block</unmanagedCodeEntityReference> must implement six methods: <legacyLink xlink:href="d7e2b8e8-3788-4a44-af96-58a1a16eb1f0">propagate_to_any_targets</legacyLink>, <legacyLink xlink:href="7c1f52be-d7be-42ff-bf33-d59bb2466f13">accept_message</legacyLink>, <legacyLink xlink:href="94c8348f-3bc0-4a30-8608-b1d48a90e789">reserve_message</legacyLink>, <legacyLink xlink:href="1d20e951-ef02-40c3-aa61-048723623ca9">consume_message</legacyLink>, <legacyLink xlink:href="c48db15b-5bc8-4f73-86d4-ade1bc076392">release_message</legacyLink>, and <legacyLink xlink:href="81625251-040d-42f6-b6fb-acb8185a630f">resume_propagation</legacyLink>. A class that derives from <unmanagedCodeEntityReference>target_block</unmanagedCodeEntityReference> must implement the <legacyLink xlink:href="9e868729-9235-481f-84c9-589b5befd2ce">propagate_message</legacyLink> method and can optionally implement the <legacyLink xlink:href="ac572d55-13ee-46a3-95ed-8880995d749d">send_message</legacyLink> method. Deriving from <unmanagedCodeEntityReference>propagator_block</unmanagedCodeEntityReference> is functionally equivalent to deriving from both <unmanagedCodeEntityReference>source_block</unmanagedCodeEntityReference> and <unmanagedCodeEntityReference>target_block</unmanagedCodeEntityReference>.</para>
      <para>The <unmanagedCodeEntityReference>propagate_to_any_targets</unmanagedCodeEntityReference> method is called by the runtime to asynchronously or synchronously process any incoming messages and propagate out any outgoing messages. The <unmanagedCodeEntityReference>accept_message</unmanagedCodeEntityReference> method is called by target blocks to accept messages. Many message block types, such as <unmanagedCodeEntityReference>unbounded_buffer</unmanagedCodeEntityReference>, send messages only to the first target that would receive it. Therefore, it transfers ownership of the message to the target. Other message block types, such as <legacyLink xlink:href="5cc428fe-3697-419c-9fb2-78f6181c9293">concurrency::overwrite_buffer</legacyLink>, offer messages to each of its target blocks. Therefore, <unmanagedCodeEntityReference>overwrite_buffer</unmanagedCodeEntityReference> creates a copy of the message for each of its targets.</para>
      <para>The <unmanagedCodeEntityReference>reserve_message</unmanagedCodeEntityReference>, <unmanagedCodeEntityReference>consume_message</unmanagedCodeEntityReference>, <unmanagedCodeEntityReference>release_message</unmanagedCodeEntityReference>, and <unmanagedCodeEntityReference>resume_propagation</unmanagedCodeEntityReference> methods enable message blocks to participate in message reservation. Target blocks call the <unmanagedCodeEntityReference>reserve_message</unmanagedCodeEntityReference> method when they are offered a message and have to reserve the message for later use. After a target block reserves a message, it can call the <unmanagedCodeEntityReference>consume_message</unmanagedCodeEntityReference> method to consume that message or the <unmanagedCodeEntityReference>release_message</unmanagedCodeEntityReference> method to cancel the reservation. As with the <unmanagedCodeEntityReference>accept_message</unmanagedCodeEntityReference> method, the implementation of <unmanagedCodeEntityReference>consume_message</unmanagedCodeEntityReference> can either transfer ownership of the message or return a copy of the message. After a target block either consumes or releases a reserved message, the runtime calls the <unmanagedCodeEntityReference>resume_propagation</unmanagedCodeEntityReference> method. Typically, this method continues message propagation, starting with the next message in the queue.</para>
      <para>The runtime calls the <unmanagedCodeEntityReference>propagate_message</unmanagedCodeEntityReference> method to asynchronously transfer a message from another block to the current one. The <unmanagedCodeEntityReference>send_message</unmanagedCodeEntityReference> method resembles <unmanagedCodeEntityReference>propagate_message</unmanagedCodeEntityReference>, except that it synchronously, instead of asynchronously, sends the message to the target blocks. The default implementation of <unmanagedCodeEntityReference>send_message</unmanagedCodeEntityReference> rejects all incoming messages. The runtime does not call either of these methods if the message does not pass the optional filter function that is associated with the target block. For more information about message filters, see <link xlink:href="79c456c0-1692-480c-bb67-98f2434c1252">Asynchronous Message Blocks</link>.</para>
      <para>[<legacyLink xlink:href="#top">Top</legacyLink>]</para>
    </content>
  </section>
  <section address="class">
    <title>Defining the priority_buffer Class</title>
    <content>
      <para>The <unmanagedCodeEntityReference>priority_buffer</unmanagedCodeEntityReference> class is a custom message block type that orders incoming messages first by priority, and then by the order in which messages are received. The <unmanagedCodeEntityReference>priority_buffer</unmanagedCodeEntityReference> class resembles the <legacyLink xlink:href="6b1a939a-1819-4385-b1d8-708f83d4ec47">concurrency::unbounded_buffer</legacyLink> class because it holds a queue of messages, and also because it acts as both a source and a target message block and can have both multiple sources and multiple targets. However, <unmanagedCodeEntityReference>unbounded_buffer</unmanagedCodeEntityReference> bases message propagation only on the order in which it receives messages from its sources.</para>
      <para>The <unmanagedCodeEntityReference>priority_buffer</unmanagedCodeEntityReference> class receives messages of type <legacyLink xlink:href="c38749be-ae4d-41f3-98ea-6aa3250de9a3">std::tuple</legacyLink> that contain <parameterReference>PriorityType</parameterReference> and <parameterReference>Type</parameterReference> elements. <parameterReference>PriorityType</parameterReference> refers to the type that holds the priority of each message; <parameterReference>Type</parameterReference> refers to the data portion of the message. The <unmanagedCodeEntityReference>priority_buffer</unmanagedCodeEntityReference> class sends messages of type <parameterReference>Type</parameterReference>. The <unmanagedCodeEntityReference>priority_buffer</unmanagedCodeEntityReference> class also manages two message queues: a <legacyLink xlink:href="69fca9cc-a449-4be4-97b7-02ca5db9cbb2">std::priority_queue</legacyLink> object for incoming messages and a <legacyLink xlink:href="28c20ab0-3a72-4185-9e0f-5a44eea0e204">std::queue</legacyLink> object for outgoing messages. Ordering messages by priority is useful when a <unmanagedCodeEntityReference>priority_buffer</unmanagedCodeEntityReference> object receives multiple messages simultaneously or when it receives multiple messages before any messages are read by consumers.</para>
      <para>In addition to the seven methods that a class that derives from <unmanagedCodeEntityReference>propagator_block</unmanagedCodeEntityReference> must implement, the <unmanagedCodeEntityReference>priority_buffer</unmanagedCodeEntityReference> class also overrides the <unmanagedCodeEntityReference>link_target_notification</unmanagedCodeEntityReference> and <unmanagedCodeEntityReference>send_message</unmanagedCodeEntityReference> methods. The <unmanagedCodeEntityReference>priority_buffer</unmanagedCodeEntityReference> class also defines two public helper methods, <unmanagedCodeEntityReference>enqueue</unmanagedCodeEntityReference> and <unmanagedCodeEntityReference>dequeue</unmanagedCodeEntityReference>, and a private helper method, <unmanagedCodeEntityReference>propagate_priority_order</unmanagedCodeEntityReference>.</para>
      <para>The following procedure describes how to implement the <unmanagedCodeEntityReference>priority_buffer</unmanagedCodeEntityReference> class.</para>
      <procedure>
        <title>To define the priority_buffer class</title>
        <steps class="ordered">
          <step>
            <content>
              <para>Create a C++ header file and name it <userInput>priority_buffer.h</userInput>. Alternatively, you can use an existing header file that is part of your project.</para>
            </content>
          </step>
          <step>
            <content>
              <para>In <userInput>priority_buffer.h</userInput>, add the following code.</para>
              <codeReference>concrt-priority-buffer#1</codeReference>
            </content>
          </step>
          <step>
            <content>
              <para>In the <unmanagedCodeEntityReference>std</unmanagedCodeEntityReference> namespace, define specializations of <legacyLink xlink:href="39349da3-11cd-4774-b2cc-b46af5aae5d7">std::less</legacyLink> and <legacyLink xlink:href="ebc348e1-edcd-466b-b21a-db95bd8f9079">std::greater</legacyLink> that act on <legacyLink xlink:href="3e1f3505-6c0c-486c-8191-666d0880ec62">concurrency::message</legacyLink> objects.</para>
              <codeReference>concrt-priority-buffer#2</codeReference>
              <para>The <unmanagedCodeEntityReference>priority_buffer</unmanagedCodeEntityReference> class stores <unmanagedCodeEntityReference>message</unmanagedCodeEntityReference> objects in a <unmanagedCodeEntityReference>priority_queue</unmanagedCodeEntityReference> object. These type specializations enable the priority queue to sort messages according to their priority. The priority is the first element of the <unmanagedCodeEntityReference>tuple</unmanagedCodeEntityReference> object.</para>
            </content>
          </step>
          <step>
            <content>
              <para>In the <unmanagedCodeEntityReference>concurrencyex</unmanagedCodeEntityReference> namespace, declare the <unmanagedCodeEntityReference>priority_buffer</unmanagedCodeEntityReference> class.</para>
              <codeReference>concrt-priority-buffer#3</codeReference>
              <para>The <unmanagedCodeEntityReference>priority_buffer</unmanagedCodeEntityReference> class derives from <unmanagedCodeEntityReference>propagator_block</unmanagedCodeEntityReference>. Therefore, it can both send and receive messages. The <unmanagedCodeEntityReference>priority_buffer</unmanagedCodeEntityReference> class can have multiple targets that receive messages of type <parameterReference>Type</parameterReference>. It can also have multiple sources that send messages of type <parameterReference>tuple&lt;PriorityType, Type&gt;</parameterReference>.</para>
            </content>
          </step>
          <step>
            <content>
              <para>In the <languageKeyword>private</languageKeyword> section of the <unmanagedCodeEntityReference>priority_buffer</unmanagedCodeEntityReference> class, add the following member variables.</para>
              <codeReference>concrt-priority-buffer#6</codeReference>
              <para>The <unmanagedCodeEntityReference>priority_queue</unmanagedCodeEntityReference> object holds incoming messages; the <unmanagedCodeEntityReference>queue</unmanagedCodeEntityReference> object holds outgoing messages. A <unmanagedCodeEntityReference>priority_buffer</unmanagedCodeEntityReference> object can receive multiple messages simultaneously; the <unmanagedCodeEntityReference>critical_section</unmanagedCodeEntityReference> object synchronizes access to the queue of input messages.</para>
            </content>
          </step>
          <step>
            <content>
              <para>In the <languageKeyword>private</languageKeyword> section, define the copy constructor and the assignment operator. This prevents <unmanagedCodeEntityReference>priority_queue</unmanagedCodeEntityReference> objects from being assignable.</para>
              <codeReference>concrt-priority-buffer#7</codeReference>
            </content>
          </step>
          <step>
            <content>
              <para>In the <languageKeyword>public</languageKeyword> section, define the constructors that are common to many message block types. Also define the destructor.</para>
              <codeReference>concrt-priority-buffer#4</codeReference>
            </content>
          </step>
          <step>
            <content>
              <para>In the <languageKeyword>public</languageKeyword> section, define the methods <unmanagedCodeEntityReference>enqueue</unmanagedCodeEntityReference> and <unmanagedCodeEntityReference>dequeue</unmanagedCodeEntityReference>. These helper methods provide an alternative way to send messages to and receive messages from a <unmanagedCodeEntityReference>priority_buffer</unmanagedCodeEntityReference> object.</para>
              <codeReference>concrt-priority-buffer#5</codeReference>
            </content>
          </step>
          <step>
            <content>
              <para>In the <languageKeyword>protected</languageKeyword> section, define the <unmanagedCodeEntityReference>propagate_to_any_targets</unmanagedCodeEntityReference> method.</para>
              <codeReference>concrt-priority-buffer#9</codeReference>
              <para>The <unmanagedCodeEntityReference>propagate_to_any_targets</unmanagedCodeEntityReference> method transfers the message that is at the front of the input queue to the output queue and propagates out all messages in the output queue.</para>
            </content>
          </step>
          <step>
            <content>
              <para>In the <languageKeyword>protected</languageKeyword> section, define the <unmanagedCodeEntityReference>accept_message</unmanagedCodeEntityReference> method.</para>
              <codeReference>concrt-priority-buffer#8</codeReference>
              <para>When a target block calls the <unmanagedCodeEntityReference>accept_message</unmanagedCodeEntityReference> method, the <unmanagedCodeEntityReference>priority_buffer</unmanagedCodeEntityReference> class transfers ownership of the message to the first target block that accepts it. (This resembles the behavior of <unmanagedCodeEntityReference>unbounded_buffer</unmanagedCodeEntityReference>.)</para>
            </content>
          </step>
          <step>
            <content>
              <para>In the <languageKeyword>protected</languageKeyword> section, define the <unmanagedCodeEntityReference>reserve_message</unmanagedCodeEntityReference> method.</para>
              <codeReference>concrt-priority-buffer#10</codeReference>
              <para>The <unmanagedCodeEntityReference>priority_buffer</unmanagedCodeEntityReference> class permits a target block to reserve a message when the provided message identifier matches the identifier of the message that is at the front of the queue. In other words, a target can reserve the message if the <unmanagedCodeEntityReference>priority_buffer</unmanagedCodeEntityReference> object has not yet received an additional message and has not yet  propagated out the current one.</para>
            </content>
          </step>
          <step>
            <content>
              <para>In the <languageKeyword>protected</languageKeyword> section, define the <unmanagedCodeEntityReference>consume_message</unmanagedCodeEntityReference> method.</para>
              <codeReference>concrt-priority-buffer#11</codeReference>
              <para>A target block calls <unmanagedCodeEntityReference>consume_message</unmanagedCodeEntityReference> to transfer ownership of the message that it reserved.</para>
            </content>
          </step>
          <step>
            <content>
              <para>In the <languageKeyword>protected</languageKeyword> section, define the <unmanagedCodeEntityReference>release_message</unmanagedCodeEntityReference> method.</para>
              <codeReference>concrt-priority-buffer#12</codeReference>
              <para>A target block calls <unmanagedCodeEntityReference>release_message</unmanagedCodeEntityReference> to cancel its reservation to a message.</para>
            </content>
          </step>
          <step>
            <content>
              <para>In the <languageKeyword>protected</languageKeyword> section, define the <unmanagedCodeEntityReference>resume_propagation</unmanagedCodeEntityReference> method.</para>
              <codeReference>concrt-priority-buffer#13</codeReference>
              <para>The runtime calls <unmanagedCodeEntityReference>resume_propagation</unmanagedCodeEntityReference> after a target block either consumes or releases a reserved message. This method propagates out any messages that are in the output queue.</para>
            </content>
          </step>
          <step>
            <content>
              <para>In the <languageKeyword>protected</languageKeyword> section, define the <unmanagedCodeEntityReference>link_target_notification</unmanagedCodeEntityReference> method.</para>
              <codeReference>concrt-priority-buffer#14</codeReference>
              <para>The <unmanagedCodeEntityReference>_M_pReservedFor</unmanagedCodeEntityReference> member variable is defined by the base class, <unmanagedCodeEntityReference>source_block</unmanagedCodeEntityReference>. This member variable points to the target block, if any, that is holding a reservation to the message that is at the front of the output queue. The runtime calls <unmanagedCodeEntityReference>link_target_notification</unmanagedCodeEntityReference> when a new target is linked to the <unmanagedCodeEntityReference>priority_buffer</unmanagedCodeEntityReference> object. This method propagates out any messages that are in the output queue if no target is holding a reservation. </para>
            </content>
          </step>
          <step>
            <content>
              <para>In the <languageKeyword>private</languageKeyword> section, define the <unmanagedCodeEntityReference>propagate_priority_order</unmanagedCodeEntityReference> method.</para>
              <codeReference>concrt-priority-buffer#15</codeReference>
              <para>This method propagates out all messages from the output queue. Every message in the queue is offered to every target block until one of the target blocks accepts the message. The <unmanagedCodeEntityReference>priority_buffer</unmanagedCodeEntityReference> class preserves the order of the outgoing messages. Therefore, the first message in the output queue must be accepted by a target block before this method offers any other message to the target blocks.</para>
            </content>
          </step>
          <step>
            <content>
              <para>In the <languageKeyword>protected</languageKeyword> section, define the <unmanagedCodeEntityReference>propagate_message</unmanagedCodeEntityReference> method.</para>
              <codeReference>concrt-priority-buffer#16</codeReference>
              <para>The <unmanagedCodeEntityReference>propagate_message</unmanagedCodeEntityReference> method enables the <unmanagedCodeEntityReference>priority_buffer</unmanagedCodeEntityReference> class to act as a message receiver, or target. This method receives the message that is offered by the provided source block and inserts that message into the priority queue. The <unmanagedCodeEntityReference>propagate_message</unmanagedCodeEntityReference> method then asynchronously sends all output messages to the target blocks.</para>
              <para>The runtime calls this method when you call the <legacyLink xlink:href="920dc665-7e23-4bd7-8c74-3e74067aa52a">concurrency::asend</legacyLink> function or when the message block is connected to other message blocks.</para>
            </content>
          </step>
          <step>
            <content>
              <para>In the <languageKeyword>protected</languageKeyword> section, define the <unmanagedCodeEntityReference>send_message</unmanagedCodeEntityReference> method.</para>
              <codeReference>concrt-priority-buffer#17</codeReference>
              <para>The <unmanagedCodeEntityReference>send_message</unmanagedCodeEntityReference> method resembles <unmanagedCodeEntityReference>propagate_message</unmanagedCodeEntityReference>. However it sends the output messages synchronously instead of asynchronously. </para>
              <para>The runtime calls this method during a synchronous send operation, such as when you call the <legacyLink xlink:href="8713fb36-066b-47de-af12-589fa74805d6">concurrency::send</legacyLink> function.</para>
            </content>
          </step>
        </steps>
      </procedure>
      <para>The <unmanagedCodeEntityReference>priority_buffer</unmanagedCodeEntityReference> class contains constructor overloads that are typical in many message block types. Some constructor overloads take <legacyLink xlink:href="34cf7961-048d-4852-8a5c-a32f823e3506">concurrency::Scheduler</legacyLink> or <legacyLink xlink:href="86d380ff-f2e8-411c-b1a8-22bd3079824a">concurrency::ScheduleGroup</legacyLink> objects, which enable the message block to be managed by a specific task scheduler. Other constructor overloads take a filter function. Filter functions enable message blocks to accept or reject a message on the basis of its payload. For more information about message filters, see <link xlink:href="79c456c0-1692-480c-bb67-98f2434c1252">Asynchronous Message Blocks</link>. For more information about task schedulers, see <link xlink:href="9aba278c-e0c9-4ede-b7c6-fedf7a365d90">Task Scheduler (Concurrency Runtime)</link>.</para>
      <para>Because the <unmanagedCodeEntityReference>priority_buffer</unmanagedCodeEntityReference> class orders messages by priority and then by the order in which messages are received, this class is most useful when it receives messages asynchronously, for example, when you call the <legacyLink xlink:href="920dc665-7e23-4bd7-8c74-3e74067aa52a">concurrency::asend</legacyLink> function or when the message block is connected to other message blocks.</para>
      <para>[<legacyLink xlink:href="#top">Top</legacyLink>]</para>
    </content>
  </section>
  <section address="complete">
    <title>The Complete Example</title>
    <content>
      <para>The following example shows the complete definition of the <unmanagedCodeEntityReference>priority_buffer</unmanagedCodeEntityReference> class.</para>
      <codeReference>concrt-priority-buffer#18</codeReference>
      <para>The following example concurrently performs a number of <unmanagedCodeEntityReference>asend</unmanagedCodeEntityReference> and <legacyLink xlink:href="f36bbca1-97ac-4343-bfac-ea71ca2139e9">concurrency::receive</legacyLink> operations on a <unmanagedCodeEntityReference>priority_buffer</unmanagedCodeEntityReference> object.</para>
      <codeReference>concrt-priority-buffer#19</codeReference>
      <para>This example produces the following sample output.</para>
      <computerOutput>36 36 36 36 36 36 36 36 36 36 36 36 36 36 36 36 36 36 36 36 36 36 36 36 36
24 24 24 24 24 24 24 24 24 24 24 24 24 24 24 24 24 24 24 24 24 24 24 24 24
12 12 12 12 12 12 12 12 12 12 12 12 12 12 12 12 12 12 12 12 12 12 12 12 12</computerOutput>
      <para>The <unmanagedCodeEntityReference>priority_buffer</unmanagedCodeEntityReference> class orders messages first by priority and then by the order in which it receives messages. In this example, messages with greater numerical priority are inserted towards the front of the queue. </para>
      <para>[<legacyLink xlink:href="#top">Top</legacyLink>]</para>
    </content>
  </section>
  <section>
    <title>Compiling the Code</title>
    <content>
      <para>Copy the example code and paste it in a Visual Studio project, or paste the definition of the <unmanagedCodeEntityReference>priority_buffer</unmanagedCodeEntityReference> class in a file that is named <userInput>priority_buffer.h</userInput> and the test program in a file that is named <userInput>priority_buffer.cpp</userInput> and then run the following command in a Visual Studio Command Prompt window.</para>
      <para>
        <system>cl.exe /EHsc priority_buffer.cpp</system>
      </para>
    </content>
  </section>
  <relatedTopics>
<link xlink:href="7374c5e9-54eb-44bf-9ed9-5e190cfd290b">Concurrency Runtime Walkthroughs</link>
<link xlink:href="79c456c0-1692-480c-bb67-98f2434c1252">Asynchronous Message Blocks</link>
<link xlink:href="42477c9e-a8a6-4dc4-a98e-93c6dc8c4dd0">Message Passing Functions</link>
</relatedTopics>
</developerWalkthroughDocument>