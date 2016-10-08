---
title: "Asynchronous Message Blocks"
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
ms.assetid: 79c456c0-1692-480c-bb67-98f2434c1252
caps.latest.revision: 29
manager: ghogen
translation.priority.ht: 
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - ru-ru
  - zh-cn
  - zh-tw
translation.priority.mt: 
  - cs-cz
  - pl-pl
  - pt-br
  - tr-tr
---
# Asynchronous Message Blocks
<?xml version="1.0" encoding="utf-8"?>
<developerConceptualDocument xmlns="http://ddue.schemas.microsoft.com/authoring/2003/5" xmlns:xlink="http://www.w3.org/1999/xlink" xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:schemaLocation="http://ddue.schemas.microsoft.com/authoring/2003/5 http://clixdevr3.blob.core.windows.net/ddueschema/developer.xsd">
  <introduction>
    <para>The Agents Library provides several message-block types that enable you to propagate messages among application components in a thread-safe manner. These message-block types are often used with the various message-passing routines, such as <legacyLink xlink:href="8713fb36-066b-47de-af12-589fa74805d6">concurrency::send</legacyLink>, <legacyLink xlink:href="920dc665-7e23-4bd7-8c74-3e74067aa52a">concurrency::asend</legacyLink>, <legacyLink xlink:href="f36bbca1-97ac-4343-bfac-ea71ca2139e9">concurrency::receive</legacyLink>, and <legacyLink xlink:href="c9d76668-e5cf-48de-ab79-bd7b2bc38db9">concurrency::try_receive</legacyLink>. For more information about the message passing routines that are defined by the Agents Library, see <link xlink:href="42477c9e-a8a6-4dc4-a98e-93c6dc8c4dd0">Message Passing Functions</link>.</para>
  </introduction>
  <section address="top">
    <title>Sections</title>
    <content>
      <para>This topic contains the following sections:</para>
      <list class="bullet">
        <listItem>
          <para>
            <legacyLink xlink:href="#sources_and_targets">Sources and Targets</legacyLink>
          </para>
        </listItem>
        <listItem>
          <para>
            <legacyLink xlink:href="#propagation">Message Propagation</legacyLink>
          </para>
        </listItem>
        <listItem>
          <para>
            <legacyLink xlink:href="#overview">Overview of Message Block Types</legacyLink>
          </para>
        </listItem>
        <listItem>
          <para>
            <legacyLink xlink:href="#unbounded_buffer">unbounded_buffer Class</legacyLink>
          </para>
        </listItem>
        <listItem>
          <para>
            <legacyLink xlink:href="#overwrite_buffer">overwrite_buffer Class</legacyLink>
          </para>
        </listItem>
        <listItem>
          <para>
            <legacyLink xlink:href="#single_assignment">single_assignment Class</legacyLink>
          </para>
        </listItem>
        <listItem>
          <para>
            <legacyLink xlink:href="#call">call Class</legacyLink>
          </para>
        </listItem>
        <listItem>
          <para>
            <legacyLink xlink:href="#transformer">transformer Class</legacyLink>
          </para>
        </listItem>
        <listItem>
          <para>
            <legacyLink xlink:href="#choice">choice Class</legacyLink>
          </para>
        </listItem>
        <listItem>
          <para>
            <legacyLink xlink:href="#join">join and multitype_join Classes</legacyLink>
          </para>
        </listItem>
        <listItem>
          <para>
            <legacyLink xlink:href="#timer">timer Class</legacyLink>
          </para>
        </listItem>
        <listItem>
          <para>
            <legacyLink xlink:href="#filtering">Message Filtering</legacyLink>
          </para>
        </listItem>
        <listItem>
          <para>
            <legacyLink xlink:href="#reservation">Message Reservation</legacyLink>
          </para>
        </listItem>
      </list>
    </content>
  </section>
  <section address="sources_and_targets">
    <title>Sources and Targets</title>
    <content>
      <para>Sources and targets are two important participants in message passing. A <newTerm>source</newTerm> refers to an endpoint of communication that sends messages. A <newTerm>target</newTerm> refers to an endpoint of communication that receives messages. You can think of a source as an endpoint that you read from and a target as an endpoint that you write to. Applications connect sources and targets together to form <newTerm>messaging networks</newTerm>.</para>
      <para>The Agents Library uses two abstract classes to represent sources and targets: <legacyLink xlink:href="c7b73463-42f6-4dcc-801a-81379b12d35a">concurrency::ISource</legacyLink> and <legacyLink xlink:href="5678db25-112a-4f72-be13-42e16b67c48b">concurrency::ITarget</legacyLink>. Message block types that act as sources derive from <unmanagedCodeEntityReference>ISource</unmanagedCodeEntityReference>; message block types that act as targets derive from <unmanagedCodeEntityReference>ITarget</unmanagedCodeEntityReference>. Message block types that act as sources and targets derive from both <unmanagedCodeEntityReference>ISource</unmanagedCodeEntityReference> and <unmanagedCodeEntityReference>ITarget</unmanagedCodeEntityReference>.</para>
      <para>[<legacyLink xlink:href="#top">Top</legacyLink>]</para>
    </content>
  </section>
  <section address="propagation">
    <title>Message Propagation</title>
    <content>
      <para>
        <newTerm>Message propagation</newTerm> is the act of sending a message from one component to another. When a message block is offered a message, it can accept, decline, or postpone that message. Every message block type stores and transmits messages in different ways. For example, the <unmanagedCodeEntityReference>unbounded_buffer</unmanagedCodeEntityReference> class stores an unlimited number of messages, the <unmanagedCodeEntityReference>overwrite_buffer</unmanagedCodeEntityReference> class stores a single message at a time, and the transformer class stores an altered version of each message. These message block types are described in more detail later in this document.</para>
      <para>When a message block accepts a message, it can optionally perform work and, if the message block is a source, pass the resulting message to another member of the network. A message block can use a filter function to decline messages that it does not want to receive. Filters are described in more detail later in this topic, in the section <legacyLink xlink:href="#filtering">Message Filtering</legacyLink>. A message block that postpones a message can reserve that message and consume it later. Message reservation is described in more detail later in this topic, in the section <legacyLink xlink:href="#reservation">Message Reservation</legacyLink>.</para>
      <para>The Agents Library enables message blocks to asynchronously or synchronously pass messages. When you pass a message to a message block synchronously, for example, by using the <unmanagedCodeEntityReference>send</unmanagedCodeEntityReference> function, the runtime blocks the current context until the target block either accepts or rejects the message. When you pass a message to a message block asynchronously, for example, by using the <unmanagedCodeEntityReference>asend</unmanagedCodeEntityReference> function, the runtime offers the message to the target, and if the target accepts the message, the runtime schedules an asynchronous task that propagates the message to the receiver. The runtime uses lightweight tasks to propagate messages in a cooperative manner. For more information about lightweight tasks, see <link xlink:href="9aba278c-e0c9-4ede-b7c6-fedf7a365d90">Task Scheduler (Concurrency Runtime)</link>.</para>
      <para>Applications connect sources and targets together to form messaging networks. Typically, you link the network and call <unmanagedCodeEntityReference>send</unmanagedCodeEntityReference> or <unmanagedCodeEntityReference>asend</unmanagedCodeEntityReference> to pass data to the network. To connect a source message block to a target, call the <legacyLink xlink:href="fb860692-47a3-45aa-9fe4-cbffc131f839">concurrency::ISource::link_target</legacyLink> method. To disconnect a source block from a target, call the <legacyLink xlink:href="90022aa3-56f7-4ada-9078-4d05721bbbd1">concurrency::ISource::unlink_target</legacyLink> method. To disconnect a source block from all of its targets, call the <legacyLink xlink:href="53e034bd-4cc6-4584-aa38-d18f3aae0a04">concurrency::ISource::unlink_targets</legacyLink> method. When one of the predefined message block types leaves scope or is destroyed, it automatically disconnects itself from any target blocks. Some message block types restrict the maximum number of targets that they can write to. The following section describes the restrictions that apply to the predefined message block types.</para>
      <para>[<legacyLink xlink:href="#top">Top</legacyLink>]</para>
    </content>
  </section>
  <section address="overview">
    <title>Overview of Message Block Types</title>
    <content>
      <para>The following table briefly describes the role of the important message-block types.</para>
      <definitionTable>
        <definedTerm>
          <legacyLink xlink:href="#unbounded_buffer">unbounded_buffer</legacyLink>
        </definedTerm>
        <definition>
          <para>Stores a queue of messages.</para>
        </definition>
        <definedTerm>
          <legacyLink xlink:href="#overwrite_buffer">overwrite_buffer</legacyLink>
        </definedTerm>
        <definition>
          <para>Stores one message that can be written to and read from multiple times.</para>
        </definition>
        <definedTerm>
          <legacyLink xlink:href="#single_assignment">single_assignment</legacyLink>
        </definedTerm>
        <definition>
          <para>Stores one message that can be written to one time and read from multiple times.</para>
        </definition>
        <definedTerm>
          <legacyLink xlink:href="#call">call</legacyLink>
        </definedTerm>
        <definition>
          <para>Performs work when it receives a message.</para>
        </definition>
        <definedTerm>
          <legacyLink xlink:href="#transformer">transformer</legacyLink>
        </definedTerm>
        <definition>
          <para>Performs work when it receives data and sends the result of that work to another target block. The <unmanagedCodeEntityReference>transformer</unmanagedCodeEntityReference> class can act on different input and output types.</para>
        </definition>
        <definedTerm>
          <legacyLink xlink:href="#choice">choice</legacyLink>
        </definedTerm>
        <definition>
          <para>Selects the first available message from a set of sources.</para>
        </definition>
        <definedTerm>
          <legacyLink xlink:href="#join">join and multitype join</legacyLink>
        </definedTerm>
        <definition>
          <para>Wait for all messages to be received from a set of sources and then combine the messages into one message for another message block.</para>
        </definition>
        <definedTerm>
          <legacyLink xlink:href="#timer">timer</legacyLink>
        </definedTerm>
        <definition>
          <para>Sends a message to a target block on a regular interval.</para>
        </definition>
      </definitionTable>
      <para>These message-block types have different characteristics that make them useful for different situations. These are some of the characteristics:</para>
      <list class="bullet">
        <listItem>
          <para>
            <newTerm>Propagation type</newTerm>: Whether the message block acts as a source of data, a receiver of data, or both.</para>
        </listItem>
        <listItem>
          <para>
            <newTerm>Message ordering</newTerm>: Whether the message block maintains the original order in which messages are sent or received. Each predefined message block type maintains the original order in which it sends or receives messages.</para>
        </listItem>
        <listItem>
          <para>
            <newTerm>Source count</newTerm>: The maximum number of sources that the message block can read from.</para>
        </listItem>
        <listItem>
          <para>
            <newTerm>Target count</newTerm>: The maximum number of targets that the message block can write to.</para>
        </listItem>
      </list>
      <para>The following table shows how these characteristics relate to the various message-block types.</para>
      <table xmlns:caps="http://schemas.microsoft.com/build/caps/2013/11">
        <thead>
          <tr>
            <TD>
              <para>Message block type</para>
            </TD>
            <TD>
              <para>Propagation type (Source, Target, or Both)</para>
            </TD>
            <TD>
              <para>Message ordering (Ordered or Unordered)</para>
            </TD>
            <TD>
              <para>Source count</para>
            </TD>
            <TD>
              <para>Target count</para>
            </TD>
          </tr>
        </thead>
        <tbody>
          <tr>
            <TD>
              <para>
                <unmanagedCodeEntityReference>unbounded_buffer</unmanagedCodeEntityReference>
              </para>
            </TD>
            <TD>
              <para>Both</para>
            </TD>
            <TD>
              <para>Ordered</para>
            </TD>
            <TD>
              <para>Unbounded</para>
            </TD>
            <TD>
              <para>Unbounded</para>
            </TD>
          </tr>
          <tr>
            <TD>
              <para>
                <unmanagedCodeEntityReference>overwrite_buffer</unmanagedCodeEntityReference>
              </para>
            </TD>
            <TD>
              <para>Both</para>
            </TD>
            <TD>
              <para>Ordered</para>
            </TD>
            <TD>
              <para>Unbounded</para>
            </TD>
            <TD>
              <para>Unbounded</para>
            </TD>
          </tr>
          <tr>
            <TD>
              <para>
                <unmanagedCodeEntityReference>single_assignment</unmanagedCodeEntityReference>
              </para>
            </TD>
            <TD>
              <para>Both</para>
            </TD>
            <TD>
              <para>Ordered</para>
            </TD>
            <TD>
              <para>Unbounded</para>
            </TD>
            <TD>
              <para>Unbounded</para>
            </TD>
          </tr>
          <tr>
            <TD>
              <para>
                <unmanagedCodeEntityReference>call</unmanagedCodeEntityReference>
              </para>
            </TD>
            <TD>
              <para>Target</para>
            </TD>
            <TD>
              <para>Ordered</para>
            </TD>
            <TD>
              <para>Unbounded</para>
            </TD>
            <TD>
              <para>Not Applicable</para>
            </TD>
          </tr>
          <tr>
            <TD>
              <para>
                <unmanagedCodeEntityReference>transformer</unmanagedCodeEntityReference>
              </para>
            </TD>
            <TD>
              <para>Both</para>
            </TD>
            <TD>
              <para>Ordered</para>
            </TD>
            <TD>
              <para>Unbounded</para>
            </TD>
            <TD>
              <para>1</para>
            </TD>
          </tr>
          <tr>
            <TD>
              <para>
                <unmanagedCodeEntityReference>choice</unmanagedCodeEntityReference>
              </para>
            </TD>
            <TD>
              <para>Both</para>
            </TD>
            <TD>
              <para>Ordered</para>
            </TD>
            <TD>
              <para>10</para>
            </TD>
            <TD>
              <para>1</para>
            </TD>
          </tr>
          <tr>
            <TD>
              <para>
                <unmanagedCodeEntityReference>join</unmanagedCodeEntityReference>
              </para>
            </TD>
            <TD>
              <para>Both</para>
            </TD>
            <TD>
              <para>Ordered</para>
            </TD>
            <TD>
              <para>Unbounded</para>
            </TD>
            <TD>
              <para>1</para>
            </TD>
          </tr>
          <tr>
            <TD>
              <para>
                <unmanagedCodeEntityReference>multitype_join</unmanagedCodeEntityReference>
              </para>
            </TD>
            <TD>
              <para>Both</para>
            </TD>
            <TD>
              <para>Ordered</para>
            </TD>
            <TD>
              <para>10</para>
            </TD>
            <TD>
              <para>1</para>
            </TD>
          </tr>
          <tr>
            <TD>
              <para>
                <unmanagedCodeEntityReference>timer</unmanagedCodeEntityReference>
              </para>
            </TD>
            <TD>
              <para>Source</para>
            </TD>
            <TD>
              <para>Not Applicable</para>
            </TD>
            <TD>
              <para>Not Applicable</para>
            </TD>
            <TD>
              <para>1</para>
            </TD>
          </tr>
        </tbody>
      </table>
      <para>The following sections describe the message-block types in more detail.</para>
      <para>[<legacyLink xlink:href="#top">Top</legacyLink>]</para>
    </content>
  </section>
  <section address="unbounded_buffer">
    <title>unbounded_buffer Class</title>
    <content>
      <para>The <legacyLink xlink:href="6b1a939a-1819-4385-b1d8-708f83d4ec47">concurrency::unbounded_buffer</legacyLink> class represents a general-purpose asynchronous messaging structure. This class stores a first in, first out (FIFO) queue of messages that can be written to by multiple sources or read from by multiple targets. When a target receives a message from an <unmanagedCodeEntityReference>unbounded_buffer</unmanagedCodeEntityReference> object, that message is removed from the message queue. Therefore, although an <unmanagedCodeEntityReference>unbounded_buffer</unmanagedCodeEntityReference> object can have multiple targets, only one target will receive each message. The <unmanagedCodeEntityReference>unbounded_buffer</unmanagedCodeEntityReference> class is useful when you want to pass multiple messages to another component, and that component must receive each message. </para>
    </content>
    <sections>
      <section>
        <title>Example</title>
        <content>
          <para>The following example shows the basic structure of how to work with the <unmanagedCodeEntityReference>unbounded_buffer</unmanagedCodeEntityReference> class. This example sends three values to an <unmanagedCodeEntityReference>unbounded_buffer</unmanagedCodeEntityReference> object and then reads those values back from the same object.</para>
          <codeReference>concrt-unbounded_buffer-structure#1</codeReference>
          <para>This example produces the following output:</para>
          <computerOutput>334455</computerOutput>
          <para>For a complete example that shows how to use the <unmanagedCodeEntityReference>unbounded_buffer</unmanagedCodeEntityReference> class, see <link xlink:href="75f2c7cc-5399-49ea-98eb-847fe6747169">How to: Implement Various Producer-Consumer Patterns</link>.</para>
          <para>[<legacyLink xlink:href="#top">Top</legacyLink>]</para>
        </content>
      </section>
    </sections>
  </section>
  <section address="overwrite_buffer">
    <title>overwrite_buffer Class</title>
    <content>
      <para>The <legacyLink xlink:href="5cc428fe-3697-419c-9fb2-78f6181c9293">concurrency::overwrite_buffer</legacyLink> class resembles the <unmanagedCodeEntityReference>unbounded_buffer</unmanagedCodeEntityReference> class, except that an <unmanagedCodeEntityReference>overwrite_buffer</unmanagedCodeEntityReference> object stores just one message. In addition, when a target receives a message from an <unmanagedCodeEntityReference>overwrite_buffer</unmanagedCodeEntityReference> object, that message is not removed from the buffer. Therefore, multiple targets receive a copy of the message.</para>
      <para>The <unmanagedCodeEntityReference>overwrite_buffer</unmanagedCodeEntityReference> class is useful when you want to pass multiple messages to another component, but that component needs only the most recent value. This class is also useful when you want to broadcast a message to multiple components.</para>
    </content>
    <sections>
      <section>
        <title>Example</title>
        <content>
          <para>The following example shows the basic structure of how to work with the <unmanagedCodeEntityReference>overwrite_buffer</unmanagedCodeEntityReference> class. This example sends three values to an <unmanagedCodeEntityReference>overwrite _buffer</unmanagedCodeEntityReference> object and then reads the current value from the same object three times. This example is similar to the example for the <unmanagedCodeEntityReference>unbounded_buffer</unmanagedCodeEntityReference> class. However, the <unmanagedCodeEntityReference>overwrite_buffer</unmanagedCodeEntityReference> class stores just one message. In addition, the runtime does not remove the message from an <unmanagedCodeEntityReference>overwrite_buffer</unmanagedCodeEntityReference> object after it is read.</para>
          <codeReference>concrt-overwrite_buffer-structure#1</codeReference>
          <para>This example produces the following output:</para>
          <computerOutput>555555</computerOutput>
          <para>For a complete example that shows how to use the <unmanagedCodeEntityReference>overwrite_buffer</unmanagedCodeEntityReference> class, see <link xlink:href="75f2c7cc-5399-49ea-98eb-847fe6747169">How to: Implement Various Producer-Consumer Patterns</link>.</para>
          <para>[<legacyLink xlink:href="#top">Top</legacyLink>]</para>
        </content>
      </section>
    </sections>
  </section>
  <section address="single_assignment">
    <title>single_assignment Class</title>
    <content>
      <para>The <legacyLink xlink:href="ccc34728-8de9-4e07-b83d-a36a58d9d2b9">concurrency::single_assignment</legacyLink> class resembles the <unmanagedCodeEntityReference>overwrite_buffer</unmanagedCodeEntityReference> class, except that a <unmanagedCodeEntityReference>single_assignment</unmanagedCodeEntityReference> object can be written to one time only. Like the <unmanagedCodeEntityReference>overwrite_buffer</unmanagedCodeEntityReference> class, when a target receives a message from a <unmanagedCodeEntityReference>single_assignment</unmanagedCodeEntityReference> object, that message is not removed from that object. Therefore, multiple targets receive a copy of the message. The <unmanagedCodeEntityReference>single_assignment</unmanagedCodeEntityReference> class is useful when you want to broadcast one message to multiple components.</para>
    </content>
    <sections>
      <section>
        <title>Example</title>
        <content>
          <para>The following example shows the basic structure of how to work with the <unmanagedCodeEntityReference>single_assignment</unmanagedCodeEntityReference> class. This example sends three values to a <unmanagedCodeEntityReference>single_assignment</unmanagedCodeEntityReference> object and then reads the current value from the same object three times. This example is similar to the example for the <unmanagedCodeEntityReference>overwrite_buffer</unmanagedCodeEntityReference> class. Although both the <unmanagedCodeEntityReference>overwrite_buffer</unmanagedCodeEntityReference> and <unmanagedCodeEntityReference>single_assignment</unmanagedCodeEntityReference> classes store a single message, the <unmanagedCodeEntityReference>single_assignment</unmanagedCodeEntityReference> class can be written to one time only.</para>
          <codeReference>concrt-single_assignment-structure#1</codeReference>
          <para>This example produces the following output:</para>
          <computerOutput>333333</computerOutput>
          <para>For a complete example that shows how to use the <unmanagedCodeEntityReference>single_assignment</unmanagedCodeEntityReference> class, see <link xlink:href="82ea75cc-aaec-4452-b10d-8abce0a87e5b">Walkthrough: Implementing Futures</link>.</para>
          <para>[<legacyLink xlink:href="#top">Top</legacyLink>]</para>
        </content>
      </section>
    </sections>
  </section>
  <section address="call">
    <title>call Class</title>
    <content>
      <para>The <legacyLink xlink:href="1521970a-1e9c-4b0c-a681-d18e40976f49">concurrency::call</legacyLink> class acts as a message receiver that performs a work function when it receives data. This work function can be a lambda expression, a function object, or a function pointer. A <unmanagedCodeEntityReference>call</unmanagedCodeEntityReference> object behaves differently than an ordinary function call because it acts in parallel to other components that send messages to it. If a <unmanagedCodeEntityReference>call</unmanagedCodeEntityReference> object is performing work when it receives a message, it adds that message to a queue. Every <unmanagedCodeEntityReference>call</unmanagedCodeEntityReference> object processes queued messages in the order in which they are received.</para>
    </content>
    <sections>
      <section>
        <title>Example</title>
        <content>
          <para>The following example shows the basic structure of how to work with the <unmanagedCodeEntityReference>call</unmanagedCodeEntityReference> class. This example creates a <unmanagedCodeEntityReference>call</unmanagedCodeEntityReference> object that prints each value that it receives to the console. The example then sends three values to the <unmanagedCodeEntityReference>call</unmanagedCodeEntityReference> object. Because the <unmanagedCodeEntityReference>call</unmanagedCodeEntityReference> object processes messages on a separate thread, this example also uses a counter variable and an <legacyLink xlink:href="fba35a53-6568-4bfa-9aaf-07c0928cf73d">event</legacyLink> object to ensure that the <unmanagedCodeEntityReference>call</unmanagedCodeEntityReference> object processes all messages before the <unmanagedCodeEntityReference>wmain</unmanagedCodeEntityReference> function returns.</para>
          <codeReference>concrt-call-structure#1</codeReference>
          <para>This example produces the following output:</para>
          <computerOutput>334455</computerOutput>
          <para>For a complete example that shows how to use the <unmanagedCodeEntityReference>call</unmanagedCodeEntityReference> class, see <link xlink:href="df715ce4-8507-41ca-b204-636d11707a73">How to: Use the call Class</link>.</para>
          <para>[<legacyLink xlink:href="#top">Top</legacyLink>]</para>
        </content>
      </section>
    </sections>
  </section>
  <section address="transformer">
    <title>transformer Class</title>
    <content>
      <para>The <legacyLink xlink:href="eea71925-7043-4a92-bfd4-dbc0ece5d081">concurrency::transformer</legacyLink> class acts as both a message receiver and as a message sender. The <unmanagedCodeEntityReference>transformer</unmanagedCodeEntityReference> class resembles the <unmanagedCodeEntityReference>call</unmanagedCodeEntityReference> class because it performs a user-defined work function when it receives data. However, the <unmanagedCodeEntityReference>transformer</unmanagedCodeEntityReference> class also sends the result of the work function to receiver objects. Like a <unmanagedCodeEntityReference>call</unmanagedCodeEntityReference> object, a <unmanagedCodeEntityReference>transformer</unmanagedCodeEntityReference> object acts in parallel to other components that send messages to it. If a <unmanagedCodeEntityReference>transformer</unmanagedCodeEntityReference> object is performing work when it receives a message, it adds that message to a queue. Every <unmanagedCodeEntityReference>transformer</unmanagedCodeEntityReference> object processes its queued messages in the order in which they are received.</para>
      <para>The <unmanagedCodeEntityReference>transformer</unmanagedCodeEntityReference> class sends its message to one target. If you set the <parameterReference>_PTarget</parameterReference> parameter in the constructor to <languageKeyword>NULL</languageKeyword>, you can later specify the target by calling the <legacyLink xlink:href="e6d20504-6b38-4af1-8f97-c6e71b520829">concurrency::link_target</legacyLink> method.</para>
      <para>Unlike all other asynchronous message block types that are provided by the Agents Library, the <unmanagedCodeEntityReference>transformer</unmanagedCodeEntityReference> class can act on different input and output types. This ability to transform data from one type to another makes the <unmanagedCodeEntityReference>transformer</unmanagedCodeEntityReference> class a key component in many concurrent networks. In addition, you can add more fine-grained parallel functionality in the work function of a <unmanagedCodeEntityReference>transformer</unmanagedCodeEntityReference> object.</para>
    </content>
    <sections>
      <section>
        <title>Example</title>
        <content>
          <para>The following example shows the basic structure of how to work with the <unmanagedCodeEntityReference>transformer</unmanagedCodeEntityReference> class. This example creates a <unmanagedCodeEntityReference>transformer</unmanagedCodeEntityReference> object that multiples each input <languageKeyword>int</languageKeyword> value by 0.33 in order to produce a <languageKeyword>double</languageKeyword> value as output. The example then receives the transformed values from the same <unmanagedCodeEntityReference>transformer</unmanagedCodeEntityReference> object and prints them to the console.</para>
          <codeReference>concrt-transformer-structure#1</codeReference>
          <para>This example produces the following output:</para>
          <computerOutput>10.8914.5218.15</computerOutput>
          <para>For a complete example that shows how to use the <unmanagedCodeEntityReference>transformer</unmanagedCodeEntityReference> class, see <link xlink:href="ca49cb3f-4dab-4b09-a9c9-d3a109ae4c29">How to: Use transformer in a Data Pipeline</link>.</para>
          <para>[<legacyLink xlink:href="#top">Top</legacyLink>]</para>
        </content>
      </section>
    </sections>
  </section>
  <section address="choice">
    <title>choice Class</title>
    <content>
      <para>The <legacyLink xlink:href="4157a539-d5c2-4161-b1ab-536ce2888397">concurrency::choice</legacyLink> class selects the first available message from a set of sources. The <unmanagedCodeEntityReference>choice</unmanagedCodeEntityReference> class represents a control-flow mechanism instead of a dataflow mechanism (the topic <link xlink:href="d2a72a31-8ba6-4220-ad7a-e403a6acaa42">Asynchronous Agents Library</link> describes the differences between dataflow and control-flow).</para>
      <para>Reading from a choice object resembles calling the Windows API function <unmanagedCodeEntityReference>WaitForMultipleObjects</unmanagedCodeEntityReference> when it has the <parameterReference>bWaitAll</parameterReference> parameter set to <languageKeyword>FALSE</languageKeyword>. However, the <unmanagedCodeEntityReference>choice</unmanagedCodeEntityReference> class binds data to the event itself instead of to an external synchronization object.</para>
      <para>Typically, you use the <unmanagedCodeEntityReference>choice</unmanagedCodeEntityReference> class together with the <legacyLink xlink:href="f36bbca1-97ac-4343-bfac-ea71ca2139e9">concurrency::receive</legacyLink> function to drive control-flow in your application. Use the <unmanagedCodeEntityReference>choice</unmanagedCodeEntityReference> class when you have to select among message buffers that have different types. Use the <unmanagedCodeEntityReference>single_assignment</unmanagedCodeEntityReference> class when you have to select among message buffers that have the same type.</para>
      <para>The order in which you link sources to a <unmanagedCodeEntityReference>choice</unmanagedCodeEntityReference> object is important because it can determine which message is selected. For example, consider the case where you link multiple message buffers that already contain a message to a <unmanagedCodeEntityReference>choice</unmanagedCodeEntityReference> object. The <unmanagedCodeEntityReference>choice</unmanagedCodeEntityReference> object selects the message from the first source that it is linked to. After you link all sources, the <unmanagedCodeEntityReference>choice</unmanagedCodeEntityReference> object preserves the order in which each source receives a message.</para>
    </content>
    <sections>
      <section>
        <title>Example</title>
        <content>
          <para>The following example shows the basic structure of how to work with the <unmanagedCodeEntityReference>choice</unmanagedCodeEntityReference> class. This example uses the <legacyLink xlink:href="98c33b3f-e8e5-4302-ba91-b56515c00066">concurrency::make_choice</legacyLink> function to create a <unmanagedCodeEntityReference>choice</unmanagedCodeEntityReference> object that selects among three message blocks. The example then computes various Fibonacci numbers and stores each result in a different message block. The example then prints to the console a message that is based on the operation that finished first.</para>
          <codeReference>concrt-choice-structure#1</codeReference>
          <para>This example produces the following sample output:</para>
          <computerOutput>fib35 received its value first. Result = 9227465</computerOutput>
          <para>Because the task that computes the 35<superscript>th</superscript> Fibonacci number is not guaranteed to finish first, the output of this example can vary.</para>
          <para>This example uses the <legacyLink xlink:href="8c8fe553-f372-4138-b9c6-e31b0e83eb9b">concurrency::parallel_invoke</legacyLink> algorithm to compute the Fibonacci numbers in parallel. For more information about <unmanagedCodeEntityReference>parallel_invoke</unmanagedCodeEntityReference>, see <link xlink:href="045dca7b-4d73-4558-a44c-383b88a28473">Parallel Algorithms</link>.</para>
          <para>For a complete example that shows how to use the <unmanagedCodeEntityReference>choice</unmanagedCodeEntityReference> class, see <link xlink:href="c8ccc160-043f-4599-847b-32ed270bb257">How to: Select Among Completed Tasks</link>.</para>
          <para>[<legacyLink xlink:href="#top">Top</legacyLink>]</para>
        </content>
      </section>
    </sections>
  </section>
  <section address="join">
    <title>join and multitype_join Classes</title>
    <content>
      <para>The <legacyLink xlink:href="d2217119-70a1-40b6-809f-c1c13a571c3f">concurrency::join</legacyLink> and <legacyLink xlink:href="236e87a0-4867-49fd-869a-bef4010e49a7">concurrency::multitype_join</legacyLink> classes let you wait for each member of a set of sources to receive a message. The <unmanagedCodeEntityReference>join</unmanagedCodeEntityReference> class acts on source objects that have a common message type. The <unmanagedCodeEntityReference>multitype_join</unmanagedCodeEntityReference> class acts on source objects that can have different message types.</para>
      <para>Reading from a <unmanagedCodeEntityReference>join</unmanagedCodeEntityReference> or <unmanagedCodeEntityReference>multitype_join</unmanagedCodeEntityReference> object resembles calling the Windows API function <unmanagedCodeEntityReference>WaitForMultipleObjects</unmanagedCodeEntityReference> when it has the <parameterReference>bWaitAll</parameterReference> parameter set to <languageKeyword>TRUE</languageKeyword>. However, just like a <unmanagedCodeEntityReference>choice</unmanagedCodeEntityReference> object, <unmanagedCodeEntityReference>join</unmanagedCodeEntityReference> and <unmanagedCodeEntityReference>multitype_join</unmanagedCodeEntityReference> objects use an event mechanism that binds data to the event itself instead of to an external synchronization object.</para>
      <para>Reading from a <unmanagedCodeEntityReference>join</unmanagedCodeEntityReference> object produces a <legacyLink xlink:href="a3e0a8f8-7565-4fe0-93e4-e4d74ae1b70d">std::vector</legacyLink> object. Reading from a <unmanagedCodeEntityReference>multitype_join</unmanagedCodeEntityReference> object produces a <legacyLink xlink:href="c38749be-ae4d-41f3-98ea-6aa3250de9a3">std::tuple</legacyLink> object. Elements appear in these objects in the same order as their corresponding source buffers are linked to the <unmanagedCodeEntityReference>join</unmanagedCodeEntityReference> or <unmanagedCodeEntityReference>multitype_join</unmanagedCodeEntityReference> object. Because the order in which you link source buffers to a <unmanagedCodeEntityReference>join</unmanagedCodeEntityReference> or <unmanagedCodeEntityReference>multitype_join</unmanagedCodeEntityReference> object is associated with the order of elements in the resulting <unmanagedCodeEntityReference>vector</unmanagedCodeEntityReference> or <unmanagedCodeEntityReference>tuple</unmanagedCodeEntityReference> object, we recommend that you do not unlink an existing source buffer from a join. Doing so can result in unspecified behavior.</para>
    </content>
    <sections>
      <section>
        <title>Greedy Versus Non-Greedy Joins</title>
        <content>
          <para>The <unmanagedCodeEntityReference>join</unmanagedCodeEntityReference> and <unmanagedCodeEntityReference>multitype_join</unmanagedCodeEntityReference> classes support the concept of greedy and non-greedy joins. A <newTerm>greedy join</newTerm> accepts a message from each of its sources as messages become available until all message are available. A <newTerm>non-greedy join</newTerm> receives messages in two phases. First, a non-greedy join waits until it is offered a message from each of its sources. Second, after all source messages are available, a non-greedy join attempts to reserve each of those messages. If it can reserve each message, it consumes all messages and propagates them to its target. Otherwise, it releases, or cancels, the message reservations and again waits for each source to receive a message.</para>
          <para>Greedy joins perform better than non-greedy joins because they accept messages immediately. However, in rare cases, greedy joins can lead to deadlocks. Use a non-greedy join when you have multiple joins that contain one or more shared source objects.</para>
        </content>
      </section>
      <section>
        <title>Example</title>
        <content>
          <para>The following example shows the basic structure of how to work with the <unmanagedCodeEntityReference>join</unmanagedCodeEntityReference> class. This example uses the <legacyLink xlink:href="8634413d-05fd-42c7-8a35-c7f8a0fff980">concurrency::make_join</legacyLink> function to create a <unmanagedCodeEntityReference>join</unmanagedCodeEntityReference> object that receives from three <unmanagedCodeEntityReference>single_assignment</unmanagedCodeEntityReference> objects. This example computes various Fibonacci numbers, stores each result in a different <unmanagedCodeEntityReference>single_assignment</unmanagedCodeEntityReference> object, and then prints to the console each result that the <unmanagedCodeEntityReference>join</unmanagedCodeEntityReference> object holds. This example is similar to the example for the <unmanagedCodeEntityReference>choice</unmanagedCodeEntityReference> class, except that the <unmanagedCodeEntityReference>join</unmanagedCodeEntityReference> class waits for all source message blocks to receive a message.</para>
          <codeReference>concrt-join-structure#1</codeReference>
          <para>This example produces the following output:</para>
          <computerOutput>fib35 = 9227465fib37 = 24157817half_of_fib42 = 1.33957e+008</computerOutput>
          <para>This example uses the <legacyLink xlink:href="8c8fe553-f372-4138-b9c6-e31b0e83eb9b">concurrency::parallel_invoke</legacyLink> algorithm to compute the Fibonacci numbers in parallel. For more information about <unmanagedCodeEntityReference>parallel_invoke</unmanagedCodeEntityReference>, see <link xlink:href="045dca7b-4d73-4558-a44c-383b88a28473">Parallel Algorithms</link>.</para>
          <para>For complete examples that show how to use the <unmanagedCodeEntityReference>join</unmanagedCodeEntityReference> class, see <link xlink:href="c8ccc160-043f-4599-847b-32ed270bb257">How to: Select Among Completed Tasks</link> and <link xlink:href="d791f697-bb93-463e-84bd-5df1651b7446">Walkthrough: Using join to Prevent Deadlock</link>.</para>
          <para>[<legacyLink xlink:href="#top">Top</legacyLink>]</para>
        </content>
      </section>
    </sections>
  </section>
  <section address="timer">
    <title>timer Class</title>
    <content>
      <para>The <legacyLink xlink:href="4f4dea51-de9f-40f9-93f5-dd724c567b49">concurrency::timer</legacyLink> class acts as a message source. A <unmanagedCodeEntityReference>timer</unmanagedCodeEntityReference> object sends a message to a target after a specified period of time has elapsed. The <unmanagedCodeEntityReference>timer</unmanagedCodeEntityReference> class is useful when you must delay sending a message or you want to send a message at a regular interval.</para>
      <para>The <unmanagedCodeEntityReference>timer</unmanagedCodeEntityReference> class sends its message to just one target. If you set the <parameterReference>_PTarget</parameterReference> parameter in the constructor to <languageKeyword>NULL</languageKeyword>, you can later specify the target by calling the <legacyLink xlink:href="e6d20504-6b38-4af1-8f97-c6e71b520829">concurrency::ISource::link_target</legacyLink> method.</para>
      <para>A <unmanagedCodeEntityReference>timer</unmanagedCodeEntityReference> object can be repeating or non-repeating. To create a repeating timer, pass <languageKeyword>true</languageKeyword> for the <parameterReference>_Repeating</parameterReference> parameter when you call the constructor. Otherwise, pass <languageKeyword>false</languageKeyword> for the <parameterReference>_Repeating</parameterReference> parameter to create a non-repeating timer. If the timer is repeating, it sends the same message to its target after each interval.</para>
      <para>The Agents Library creates <unmanagedCodeEntityReference>timer</unmanagedCodeEntityReference> objects in the non-started state. To start a timer object, call the <legacyLink xlink:href="127e5cb4-6d78-472f-8518-b364ab496499">concurrency::timer::start</legacyLink> method. To stop a <unmanagedCodeEntityReference>timer</unmanagedCodeEntityReference> object, destroy the object or call the <legacyLink xlink:href="c23f4916-a4d9-4109-aa39-8d7aa77cda1a">concurrency::timer::stop</legacyLink> method. To pause a repeating timer, call the <legacyLink xlink:href="ad9c3611-173c-441f-ac8f-0a29f65475be">concurrency::timer::pause</legacyLink> method.</para>
    </content>
    <sections>
      <section>
        <title>Example</title>
        <content>
          <para>The following example shows the basic structure of how to work with the <unmanagedCodeEntityReference>timer</unmanagedCodeEntityReference> class. The example uses <unmanagedCodeEntityReference>timer</unmanagedCodeEntityReference> and <unmanagedCodeEntityReference>call</unmanagedCodeEntityReference> objects to report the progress of a lengthy operation.</para>
          <codeReference>concrt-timer-structure#1</codeReference>
          <para>This example produces the following sample output:</para>
          <computerOutput>Computing fib(42)..................................................result is 267914296</computerOutput>
          <para>For a complete example that shows how to use the <unmanagedCodeEntityReference>timer</unmanagedCodeEntityReference> class, see <link xlink:href="4b60ea6c-97c8-4d69-9f7b-ad79f3548026">How to: Send a Message at a Regular Interval</link>.</para>
          <para>[<legacyLink xlink:href="#top">Top</legacyLink>]</para>
        </content>
      </section>
    </sections>
  </section>
  <section address="filtering">
    <title>Message Filtering</title>
    <content>
      <para>When you create a message block object, you can supply a <newTerm>filter function</newTerm> that determines whether the message block accepts or rejects a message. A filter function is a useful way to guarantee that a message block receives only certain values.</para>
      <para>The following example shows how to create an <unmanagedCodeEntityReference>unbounded_buffer</unmanagedCodeEntityReference> object that uses a filter function to accept only even numbers. The <unmanagedCodeEntityReference>unbounded_buffer</unmanagedCodeEntityReference> object rejects odd numbers, and therefore does not propagate odd numbers to its target blocks.</para>
      <codeReference>concrt-filter-function#1</codeReference>
      <para>This example produces the following output:</para>
      <computerOutput>0 2 4 6 8</computerOutput>
      <para>A filter function can be a lambda function, a function pointer, or a function object. Every filter function takes one of the following forms.</para>
      <computerOutput>bool (_Type)
bool (_Type const &amp;)</computerOutput>
      <para>To eliminate the unnecessary copying of data, use the second form when you have an aggregate type that is propagated by value.</para>
      <para>Message filtering supports the <newTerm>dataflow</newTerm> programming model, in which components perform computations when they receive data. For examples that use filter functions to control the flow of data in a message passing network, see <link xlink:href="db6b99fb-288d-4477-96dc-b9751772ebb2">How to: Use a Message Block Filter to Improve Performance</link>, <link xlink:href="9db5ce3f-c51b-4de1-b79b-9ac2a0cbd130">Walkthrough: Creating a Dataflow Agent</link>, and <link xlink:href="78ccadc9-5ce2-46cc-bd62-ce0f99d356b8">Walkthrough: Creating an Image-Processing Network</link>.</para>
      <para>[<legacyLink xlink:href="#top">Top</legacyLink>]</para>
    </content>
  </section>
  <section address="reservation">
    <title>Message Reservation</title>
    <content>
      <para>
        <newTerm>Message reservation</newTerm> enables a message block to reserve a message for later use. Typically, message reservation is not used directly. However, understanding message reservation can help you better understand the behavior of some of the predefined message block types. </para>
      <para>Consider non-greedy and greedy joins. Both of these use message reservation to reserve messages for later use. A described earlier, a non-greedy join receives messages in two phases. During the first phase, a non-greedy <unmanagedCodeEntityReference>join</unmanagedCodeEntityReference> object waits for each of its sources to receive a message. A non-greedy join then attempts to reserve each of those messages. If it can reserve each message, it consumes all messages and propagates them to its target. Otherwise, it releases, or cancels, the message reservations and again waits for each source to receive a message.</para>
      <para>A greedy join, which also reads input messages from a number of sources, uses message reservation to read additional messages while it waits to receive a message from each source. For example, consider a greedy join that receives messages from message blocks <unmanagedCodeEntityReference>A</unmanagedCodeEntityReference> and <unmanagedCodeEntityReference>B</unmanagedCodeEntityReference>. If the greedy join receives two messages from B but has not yet received a message from <unmanagedCodeEntityReference>A</unmanagedCodeEntityReference>, the greedy join saves the unique message identifier for the second message from <unmanagedCodeEntityReference>B</unmanagedCodeEntityReference>. After the greedy join receives a message from <unmanagedCodeEntityReference>A</unmanagedCodeEntityReference> and propagates out these messages, it uses the saved message identifier to see if the second message from <unmanagedCodeEntityReference>B</unmanagedCodeEntityReference> is still available.</para>
      <para>You can use message reservation when you implement your own custom message block types. For an example about how to create a custom message block type, see <link xlink:href="4c6477ad-613c-4cac-8e94-2c9e63cd43a1">Walkthrough: Creating a Custom Message Block</link>.</para>
      <para>[<legacyLink xlink:href="#top">Top</legacyLink>]</para>
    </content>
  </section>
  <relatedTopics>
<link xlink:href="d2a72a31-8ba6-4220-ad7a-e403a6acaa42">Asynchronous Agents Library</link>
</relatedTopics>
</developerConceptualDocument>