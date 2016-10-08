---
title: "Task Parallelism (Concurrency Runtime)"
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
ms.assetid: 42f05ac3-2098-494a-ba84-737fcdcad077
caps.latest.revision: 49
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
# Task Parallelism (Concurrency Runtime)
<?xml version="1.0" encoding="utf-8"?>
<developerConceptualDocument xmlns="http://ddue.schemas.microsoft.com/authoring/2003/5" xmlns:xlink="http://www.w3.org/1999/xlink" xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:schemaLocation="http://ddue.schemas.microsoft.com/authoring/2003/5 http://clixdevr3.blob.core.windows.net/ddueschema/developer.xsd">
  <introduction>
    <para>In the Concurrency Runtime, a <newTerm>task</newTerm> is a unit of work that performs a specific job and typically runs in parallel with other tasks. A task can be decomposed into additional, more fine-grained tasks that are organized into a <newTerm>task group</newTerm>.</para>
    <para>You use tasks when you write asynchronous code and want some operation to occur after the asynchronous operation completes. For example, you could use a task to asynchronously read from a file and then use another task—a <newTerm>continuation task</newTerm>, which is explained later in this document—to process the data after it becomes available. Conversely, you can use tasks groups to decompose parallel work into smaller pieces. For example, suppose you have a recursive algorithm that divides the remaining work into two partitions. You can use task groups to run these partitions concurrently, and then wait for the divided work to complete.</para>
    <alert class="tip">
      <para>When you want to apply the same routine to every element of a collection in parallel, use a parallel algorithm, such as <legacyLink xlink:href="97521998-db27-4a52-819a-17c9cfe09b2d">concurrency::parallel_for</legacyLink>, instead of a task or task group. For more information about parallel algorithms, see <link xlink:href="045dca7b-4d73-4558-a44c-383b88a28473">Parallel Algorithms</link>.</para>
    </alert>
  </introduction>
  <section>
    <title>Key Points</title>
    <content>
      <list class="bullet">
        <listItem>
          <para>When you pass variables to a lambda expression by reference, you must guarantee that the lifetime of that variable persists until the task finishes.</para>
        </listItem>
        <listItem>
          <para>Use tasks (the <legacyLink xlink:href="cdc3a8c0-5cbe-45a0-b5d5-e9f81d94df1a">concurrency::task</legacyLink> class) when you write asynchronous code. The task class uses the Windows ThreadPool as its scheduler, not the Concurrency Runtime.</para>
        </listItem>
        <listItem>
          <para>Use task groups (the <legacyLink xlink:href="b4af5b28-227d-4488-8194-0a0d039173b7">concurrency::task_group</legacyLink> class or the <legacyLink xlink:href="8c8fe553-f372-4138-b9c6-e31b0e83eb9b">concurrency::parallel_invoke</legacyLink> algorithm) when you want to decompose parallel work into smaller pieces and then wait for those smaller pieces to complete.</para>
        </listItem>
        <listItem>
          <para>Use the <legacyLink xlink:href="78ef0c69-1f5d-468f-b5ef-b554d8791cb7">concurrency::task::then</legacyLink> method to create continuations. A <newTerm>continuation</newTerm> is a task that runs asynchronously after another task completes. You can connect any number of continuations to form a chain of asynchronous work.</para>
        </listItem>
        <listItem>
          <para>A task-based continuation is always scheduled for execution when the antecedent task finishes, even when the antecedent task is canceled or throws an exception.</para>
        </listItem>
        <listItem>
          <para>Use <legacyLink xlink:href="1c80cc05-8211-43d4-a8d7-1b3415899823">concurrency:: HYPERLINK "http://msdn.microsoft.com/en-us/library/system.threading.tasks.task.whenall(v=VS.110).aspx" when_all</legacyLink> to create a task that completes after every member of a set of tasks completes. Use <legacyLink xlink:href="1c80cc05-8211-43d4-a8d7-1b3415899823">concurrency::when_any</legacyLink> to create a task that completes after one member of a set of tasks completes.</para>
        </listItem>
        <listItem>
          <para>Tasks and task groups can participate in the Parallel Patterns Library (PPL) cancellation mechanism. For more information, see <link xlink:href="baaef417-b2f9-470e-b8bd-9ed890725b35">Cancellation in the PPL</link>.</para>
        </listItem>
        <listItem>
          <para>To learn how the runtime handles exceptions that are thrown by tasks and task groups, see <link xlink:href="4d1494fb-3089-4f4b-8cfb-712aa67d7a7a">Exception Handling in the Concurrency Runtime</link>.</para>
        </listItem>
      </list>
      <para />
    </content>
  </section>
  <section DoNotNumber="false">
    <title>In this Document</title>
    <content>
      <list class="nobullet">
        <listItem>
          <para>
            <legacyLink xlink:href="#lambdas">Using Lambda Expressions</legacyLink>
          </para>
        </listItem>
        <listItem>
          <para>
            <legacyLink xlink:href="#task-class">The task Class</legacyLink>
          </para>
        </listItem>
        <listItem>
          <para>
            <legacyLink xlink:href="#continuations">Continuation Tasks</legacyLink>
          </para>
        </listItem>
        <listItem>
          <para>
            <legacyLink xlink:href="#value-versus-task">Value-Based Versus Task-Based Continuations</legacyLink>
          </para>
        </listItem>
        <listItem>
          <para>
            <legacyLink xlink:href="#composing-tasks">Composing Tasks</legacyLink>
          </para>
          <list class="nobullet">
            <listItem>
              <para>
                <legacyLink xlink:href="#when-all">The when_all Function</legacyLink>
              </para>
            </listItem>
            <listItem>
              <para>
                <legacyLink xlink:href="#when-any">The when_any Function</legacyLink>
              </para>
            </listItem>
          </list>
        </listItem>
        <listItem>
          <para>
            <legacyLink xlink:href="#delayed-tasks">Delayed Task Execution</legacyLink>
          </para>
        </listItem>
        <listItem>
          <para>
            <legacyLink xlink:href="#task-groups">Task Groups</legacyLink>
          </para>
        </listItem>
        <listItem>
          <para>
            <legacyLink xlink:href="#comparing-groups">Comparing task_group to structured_task_group</legacyLink>
          </para>
        </listItem>
        <listItem>
          <para>
            <legacyLink xlink:href="#example">Example</legacyLink>
          </para>
        </listItem>
        <listItem>
          <para>
            <legacyLink xlink:href="#robust">Robust Programming</legacyLink>
          </para>
        </listItem>
      </list>
    </content>
  </section>
  <section address="lambdas">
    <title>Using Lambda Expressions</title>
    <content>
      <para>Because of their succinct syntax, lambda expressions are a common way to define the work that is performed by tasks and task groups. Here are some usage tips:</para>
      <list class="bullet">
        <listItem>
          <para>Because tasks typically run on background threads, be aware of the object lifetime when you capture variables in lambda expressions. When you capture a variable by value, a copy of that variable is made in the lambda body. When you capture by reference, a copy is not made. Therefore, ensure that the lifetime of any variable that you capture by reference outlives the task that uses it.</para>
        </listItem>
        <listItem>
          <para>When you pass a lambda expression to a task, don’t capture variables that are allocated on the stack by reference.</para>
        </listItem>
        <listItem>
          <para>Be explicit about the variables you capture in lambda expressions so   that you can identify what you’re capturing by value versus by reference. For this reason we recommend that you do not use the <languageKeyword>[=]</languageKeyword> or <languageKeyword>[&amp;]</languageKeyword> options for lambda expressions.</para>
        </listItem>
      </list>
      <para>A common pattern is when one task in a continuation chain assigns to a variable, and another task reads that variable. You can’t capture by value because each continuation task would hold a different copy of the variable. For stack-allocated variables, you also can’t capture by reference because the variable may no longer be valid.</para>
      <para>To solve this problem, use a smart pointer, such as <legacyLink xlink:href="1469fc51-c658-43f1-886c-f4530dd84860">std::shared_ptr</legacyLink>, to wrap the variable and pass the smart pointer by value. In this way, the underlying object can be assigned to and read from, and will outlive the tasks that use it. Use this technique even when the variable is a pointer or a reference-counted handle (<languageKeyword>^</languageKeyword>) to a Windows Runtime object. Here’s a basic example:</para>
      <codeReference>concrt-lambda-task-lifetime#1</codeReference>
      <para>For more information about lambda expressions, see <link xlink:href="713c7638-92be-4ade-ab22-fa33417073bf">Lambda Expressions in C++</link>.</para>
    </content>
  </section>
  <section address="task-class">
    <title>The task Class</title>
    <content>
      <para>You can use the <legacyLink xlink:href="cdc3a8c0-5cbe-45a0-b5d5-e9f81d94df1a">concurrency::task</legacyLink> class to compose tasks into a set of dependent operations. This composition model is supported by the notion of <newTerm>continuations</newTerm>. A continuation enables code to be executed when the previous, or <newTerm>antecedent</newTerm>, task completes. The result of the antecedent task is passed as the input to the one or more continuation tasks. When an antecedent task completes, any continuation tasks that are waiting on it are scheduled for execution. Each continuation task receives a copy of the result of the antecedent task. In turn, those continuation tasks may also be antecedent tasks for other continuations, thereby creating a chain of tasks. Continuations help you create arbitrary-length chains of tasks that have specific dependencies among them. In addition, a task can participate in cancellation either before a tasks starts or in a cooperative manner while it is running. For more information about this cancellation model, <?Comment TP: For a later release, consider creating a topic about future vs. task. 2013-07-17T10:20:00Z  Id='5?>see <?CommentEnd Id='5'
    ?><link xlink:href="baaef417-b2f9-470e-b8bd-9ed890725b35">Cancellation in the PPL</link>.</para>
      <para>
        <unmanagedCodeEntityReference>task</unmanagedCodeEntityReference> is a template class. The type parameter <parameterReference>T</parameterReference> is the type of the result that is produced by the task. This type can be <languageKeyword>void</languageKeyword> if the task does not return a value. <parameterReference>T</parameterReference> cannot use the <languageKeyword>const</languageKeyword> modifier.</para>
      <para>When you create a task, you provide a <newTerm>work function</newTerm> that performs the task body. This work function comes in the form of a lambda function, function pointer, or function object. To wait for a task to finish without obtaining the result, call the <legacyLink xlink:href="0b58d152-2098-477b-970e-cbbb12245284">concurrency::task::wait</legacyLink> method. The <unmanagedCodeEntityReference>task::wait</unmanagedCodeEntityReference> method returns a <legacyLink xlink:href="fce7cc14-6cb6-43b8-82ba-f98e2225db6a">concurrency::task_status</legacyLink> value that describes whether the task was completed or canceled. To get the result of the task, call the <legacyLink xlink:href="487483a1-a9a1-4fe1-83ae-c3c19ce54bd0">concurrency::task::get</legacyLink> method. This method calls <unmanagedCodeEntityReference>task::wait</unmanagedCodeEntityReference> to wait for the task to finish, and therefore blocks execution of the current thread until the result is available.</para>
      <para>The following example shows how to create a task, wait for its result, and display its value. The examples in this documentation use lambda functions because they provide a more succinct syntax. However, you can also use function pointers and function objects when you use tasks.</para>
      <codeReference>concrt-basic-task#1</codeReference>
      <para>When you use the <legacyLink xlink:href="6e364052-c923-4006-9e03-8516bf041482">concurrency::create_task</legacyLink> function, you can use the <languageKeyword>auto</languageKeyword> keyword instead of declaring the type. For example, consider this code that creates and prints the identity matrix:</para>
      <codeReference>concrt-create-task#1</codeReference>
      <para>You can use the <unmanagedCodeEntityReference>create_task</unmanagedCodeEntityReference> function to create the equivalent operation.</para>
      <codeReference>concrt-create-task#2</codeReference>
      <para>If an exception is thrown during the execution of a task, the runtime marshals that exception in the subsequent call to <unmanagedCodeEntityReference>task::get</unmanagedCodeEntityReference> or <unmanagedCodeEntityReference>task::wait</unmanagedCodeEntityReference>, or to a task-based continuation. For more information about the task exception-handling mechanism, see <link xlink:href="4d1494fb-3089-4f4b-8cfb-712aa67d7a7a">Exception Handling in the Concurrency Runtime</link>.</para>
      <para>For an example that uses <unmanagedCodeEntityReference>task</unmanagedCodeEntityReference>, <legacyLink xlink:href="fb19ed98-f245-48dc-9ba5-487ba879b28a">concurrency::task_completion_event</legacyLink>, cancellation, see <link xlink:href="e8e12d46-604c-42a7-abfd-b1d1bb2ed6b3">Walkthrough: Connecting Using Tasks and XML HTTP Request (IXHR2)</link>. (The <unmanagedCodeEntityReference>task_completion_event</unmanagedCodeEntityReference> class is described later in this document.)</para>
      <alert class="tip">
        <para>To learn details that are specific to tasks in <token>win8_appname_long</token> apps, see <link xlink:href="512700B7-7863-44CC-93A2-366938052F31">Asynchronous programming in C++</link> and <link xlink:href="a57cecf4-394a-4391-a957-1d52ed2e5494">Creating Asynchronous Operations in C++ for Windows Store Apps</link>.</para>
      </alert>
    </content>
  </section>
  <section address="continuations">
    <title>Continuation Tasks</title>
    <content>
      <para>In asynchronous programming, it is very common for one asynchronous operation, on completion, to invoke a second operation and pass data to it. Traditionally, this is done by using callback methods. In the Concurrency Runtime, the same functionality is provided by <newTerm>continuation tasks</newTerm>. A continuation task (also known just as a continuation) is an asynchronous task that is invoked by another task, which is known as the <newTerm>antecedent</newTerm>, when the antecedent completes. By using continuations, you <?Comment TP: TODO: For a future release, perhaps show an example for each. 2013-07-17T10:20:00Z  Id='6?>can<?CommentEnd Id='6'
    ?>:</para>
      <list class="bullet">
        <listItem>
          <para>Pass data from the antecedent to the continuation.</para>
        </listItem>
        <listItem>
          <para>Specify the precise conditions under which the continuation is invoked or not invoked.</para>
        </listItem>
        <listItem>
          <para>Cancel a continuation either before it starts or cooperatively while it is running.</para>
        </listItem>
        <listItem>
          <para>Provide hints about how the continuation should be scheduled. (This applies to <token>win8_appname_long</token> apps only. For more information, see <link xlink:href="a57cecf4-394a-4391-a957-1d52ed2e5494">Creating Asynchronous Operations in C++ for Windows Store Apps</link>.)</para>
        </listItem>
        <listItem>
          <para>Invoke multiple continuations from the same antecedent.</para>
        </listItem>
        <listItem>
          <para>Invoke one continuation when all or any of multiple antecedents complete.</para>
        </listItem>
        <listItem>
          <para>Chain continuations one after another to any length.</para>
        </listItem>
        <listItem>
          <para>Use a continuation to handle exceptions that are thrown by the antecedent.</para>
        </listItem>
      </list>
      <para>These features enable you to execute one or more tasks when the first task completes. For example, you can create a continuation that compresses a file after the first task reads it from disk.</para>
      <para>The following example modifies the previous one to use the <legacyLink xlink:href="78ef0c69-1f5d-468f-b5ef-b554d8791cb7">concurrency::task::then</legacyLink> method to schedule a continuation that prints the value of the antecedent task when it is available.</para>
      <codeReference>concrt-basic-continuation#1</codeReference>
      <para>You can chain and nest tasks to any length. A task can also have multiple continuations. The following example illustrates a basic continuation chain that increments the value of the previous task three times.</para>
      <codeReference>concrt-continuation-chain#1</codeReference>
      <para>
        <?Comment TP: Geni, when is this useful? 2013-07-17T10:20:00Z  Id='7?>A continuation can also return another task<?CommentEnd Id='7'
    ?>. If there is no cancellation, then this task is executed before the subsequent continuation. This technique is known as <newTerm>asynchronous unwrapping</newTerm>. Asynchronous unwrapping is useful when you want to perform additional work in the background, but do not want the current task to block the current thread. (This is common in <token>win8_appname_long</token> apps, where continuations can run on the UI thread). The following example shows three tasks. The first task returns another task that is run before a continuation task.</para>
      <codeReference>concrt-async-unwrapping#1</codeReference>
      <alert class="important">
        <para>When a continuation of a task returns a nested task of type <parameterReference>N</parameterReference>, the resulting task has the type <parameterReference>N</parameterReference>, not <unmanagedCodeEntityReference>task&lt;N&gt;</unmanagedCodeEntityReference>, and completes when the nested task completes. In other words, the continuation performs the unwrapping of the nested task.</para>
      </alert>
    </content>
  </section>
  <section address="value-versus-task">
    <title>Value-Based Versus Task-Based Continuations</title>
    <content>
      <para>Given a <unmanagedCodeEntityReference>task</unmanagedCodeEntityReference> object whose return type is <parameterReference>T</parameterReference>, you can provide a value of type <unmanagedCodeEntityReference>T</unmanagedCodeEntityReference> or <unmanagedCodeEntityReference>task&lt;T&gt;</unmanagedCodeEntityReference> to its continuation tasks. A continuation that takes type <unmanagedCodeEntityReference>T</unmanagedCodeEntityReference> is known as a <newTerm>value-based continuation</newTerm>. A value-based continuation is scheduled for execution when the antecedent task completes without error and is not canceled. A continuation that takes type <unmanagedCodeEntityReference>task&lt;T&gt;</unmanagedCodeEntityReference> as its parameter is known as a <newTerm>task-based continuation</newTerm>. A task-based continuation is always scheduled for execution when the antecedent task finishes, even when the antecedent task is canceled or throws an exception. You can then call <unmanagedCodeEntityReference>task::get</unmanagedCodeEntityReference> to get the result of the antecedent task. If the antecedent task was canceled, <unmanagedCodeEntityReference>task::get</unmanagedCodeEntityReference> throws <legacyLink xlink:href="c3f0b234-2cc1-435f-a48e-995f45b190be">concurrency::task_canceled</legacyLink>. If the antecedent task threw an exception, <unmanagedCodeEntityReference>task::get</unmanagedCodeEntityReference> rethrows that exception. A task-based continuation is not marked as canceled when its antecedent task is canceled.</para>
    </content>
  </section>
  <section address="composing-tasks">
    <title>Composing Tasks</title>
    <content>
      <para>This section describes the <legacyLink xlink:href="1c80cc05-8211-43d4-a8d7-1b3415899823">concurrency::when_all</legacyLink> and <legacyLink xlink:href="1c80cc05-8211-43d4-a8d7-1b3415899823">concurrency::when_any</legacyLink> functions, which can help you compose multiple tasks to implement common patterns.</para>
    </content>
    <sections>
      <section address="when-all">
        <title>The when_all Function</title>
        <content>
          <para>The <unmanagedCodeEntityReference>when_all</unmanagedCodeEntityReference> function produces a task that completes after a set of tasks complete. This function returns a <legacyLink xlink:href="a3e0a8f8-7565-4fe0-93e4-e4d74ae1b70d">std::vector</legacyLink> object that contains the result of each task in the set. The following basic example uses <unmanagedCodeEntityReference>when_all</unmanagedCodeEntityReference> to create a task that represents the completion of three other tasks.</para>
          <codeReference>concrt-join-tasks#1</codeReference>
          <alert class="note">
            <para>The tasks that you pass to <unmanagedCodeEntityReference>when_all</unmanagedCodeEntityReference> must be uniform. In other words, they must all return the same type.</para>
          </alert>
          <para>You can also use the <languageKeyword>&amp;&amp;</languageKeyword> syntax to produce a task that completes after a set of tasks complete, as shown in the following example.</para>
          <para>
            <codeInline>auto t = t1 &amp;&amp; t2; // same as when_all</codeInline>
          </para>
          <para>It is common to use a continuation together with <unmanagedCodeEntityReference>when_all</unmanagedCodeEntityReference> to perform an action after a set of tasks finishes. The following example modifies the previous one to print the sum of three tasks that each produce an <languageKeyword>int</languageKeyword> result.</para>
          <codeReference>concrt-join-tasks#2</codeReference>
          <para>
            <?Comment MO: Is this an alternative? If so, then &quot;As an alternative in this example, you could specify...&quot; If not, then clarify that this is something you can add to the example. This comment applies elsewhere in the document. 2013-07-17T10:20:00Z  Id='8?>In this example, you can also specify<?CommentEnd Id='8'
    ?> <unmanagedCodeEntityReference>task&lt;vector&lt;int&gt;&gt;</unmanagedCodeEntityReference> to produce a task-based continuation.</para>
          <para>If any task in a set of tasks is canceled or throws an exception, <unmanagedCodeEntityReference>when_all</unmanagedCodeEntityReference> immediately completes and does not wait for the remaining tasks to finish. If an exception is thrown, the runtime rethrows the exception when you call <unmanagedCodeEntityReference>task::get</unmanagedCodeEntityReference> or <unmanagedCodeEntityReference>task::wait</unmanagedCodeEntityReference> on the task object that <unmanagedCodeEntityReference>when_all</unmanagedCodeEntityReference> returns. If more than one task throws, the runtime chooses one of them. Therefore, ensure that you observe all exceptions after all tasks complete; an unhandled task exception causes the app to terminate.</para>
          <para>Here’s a utility function that you can use to ensure that your program observes all exceptions. For each task in the provided range, <unmanagedCodeEntityReference>observe_all_exceptions</unmanagedCodeEntityReference> triggers any exception that occurred to be rethrown and then swallows that exception.</para>
          <codeReference>concrt-eh-when_all#1</codeReference>
          <para>Consider a <token>win8_appname_long</token> app that uses C++ and XAML and writes a set of files to disk. The following example shows how to use <unmanagedCodeEntityReference>when_all</unmanagedCodeEntityReference> and <unmanagedCodeEntityReference>observe_all_exceptions</unmanagedCodeEntityReference> to ensure that the program observes all exceptions.</para>
          <codeReference>concrt-eh-when_all#2</codeReference>
          <procedure>
            <title>To run this example</title>
            <steps class="ordered">
              <step>
                <content>
                  <para>In MainPage.xaml, add a <unmanagedCodeEntityReference>Button</unmanagedCodeEntityReference> control.</para>
                  <codeReference>concrt-eh-when_all#3</codeReference>
                </content>
              </step>
              <step>
                <content>
                  <para>In MainPage.xaml.h, add these forward declarations to the <languageKeyword>private</languageKeyword> section of the <unmanagedCodeEntityReference>MainPage</unmanagedCodeEntityReference> class declaration.</para>
                  <codeReference>concrt-eh-when_all#4</codeReference>
                </content>
              </step>
              <step>
                <content>
                  <para>In MainPage.xaml.cpp, implement the <unmanagedCodeEntityReference>Button_Click</unmanagedCodeEntityReference> event handler.</para>
                  <codeReference>concrt-eh-when_all#5</codeReference>
                </content>
              </step>
              <step>
                <content>
                  <para>In MainPage.xaml.cpp, implement <unmanagedCodeEntityReference>WriteFilesAsync</unmanagedCodeEntityReference> as shown in the example.</para>
                </content>
              </step>
            </steps>
          </procedure>
          <alert class="tip">
            <para>
              <unmanagedCodeEntityReference>when_all</unmanagedCodeEntityReference> is a non-blocking function that produces a <unmanagedCodeEntityReference>task</unmanagedCodeEntityReference> as its result. Unlike <legacyLink xlink:href="0b58d152-2098-477b-970e-cbbb12245284">task::wait</legacyLink>, it is safe to call this function in a <token>win8_appname_long</token> app on the ASTA (Application STA) thread.</para>
          </alert>
        </content>
      </section>
      <section address="when-any">
        <title>The when_any Function</title>
        <content>
          <para>The <unmanagedCodeEntityReference>when_any</unmanagedCodeEntityReference> function produces a task that completes when the first task in a set of tasks completes. This function returns a <legacyLink xlink:href="539d3d67-80a2-4170-b347-783495d42109">std::pair</legacyLink> object that contains the result of the completed task and the index of that task in the set.</para>
          <para>The <unmanagedCodeEntityReference>when_any</unmanagedCodeEntityReference> function is especially useful in the following scenarios:</para>
          <list class="bullet">
            <listItem>
              <para>Redundant operations. Consider an algorithm or operation that can be performed in many ways. You can use the <unmanagedCodeEntityReference>when_any</unmanagedCodeEntityReference> function to select the operation that finishes first and then cancel the remaining operations.</para>
            </listItem>
            <listItem>
              <para>Interleaved operations. You can start multiple operations that all must finish and use the <unmanagedCodeEntityReference>when_any</unmanagedCodeEntityReference> function to process results as each operation finishes. After one operation finishes, you can start one or more additional tasks.</para>
            </listItem>
            <listItem>
              <para>Throttled operations. You can use the <unmanagedCodeEntityReference>when_any</unmanagedCodeEntityReference> function to extend the previous scenario by limiting the number of concurrent operations.</para>
            </listItem>
            <listItem>
              <para>Expired operations. You can use the <unmanagedCodeEntityReference>when_any</unmanagedCodeEntityReference> function to select between one or more tasks and a task that finishes after a specific time.</para>
            </listItem>
          </list>
          <para>As with <unmanagedCodeEntityReference>when_all</unmanagedCodeEntityReference>, it is common to use a continuation that has <unmanagedCodeEntityReference>when_any</unmanagedCodeEntityReference> to perform action when the first in a set of tasks finish. The following basic example uses <unmanagedCodeEntityReference>when_any</unmanagedCodeEntityReference> to create a task that completes when the first of three other tasks completes.</para>
          <codeReference>concrt-select-task#1</codeReference>
          <para>
            <?Comment MO: See earlier comment. 2013-07-17T10:20:00Z  Id='9?>In this example, you can also specify <unmanagedCodeEntityReference>task&lt;pair&lt;int, size_t&gt;&gt;</unmanagedCodeEntityReference> to produce a task-based continuation.<?CommentEnd Id='9'
    ?></para>
          <alert class="note">
            <para>As with <unmanagedCodeEntityReference>when_all</unmanagedCodeEntityReference>, the tasks that you pass to <unmanagedCodeEntityReference>when_any</unmanagedCodeEntityReference> must all return the same type.</para>
          </alert>
          <para>You can also use the <languageKeyword>||</languageKeyword> syntax to produce a task that completes after the first task in a set of tasks completes, as shown in the following example.</para>
          <para>
            <codeInline>auto t = t1 || t2; // same as when_any</codeInline>
          </para>
          <alert class="tip">
            <para>As with <unmanagedCodeEntityReference>when_all</unmanagedCodeEntityReference>, <unmanagedCodeEntityReference>when_any</unmanagedCodeEntityReference> is non-blocking and is safe to call in a <token>win8_appname_long</token> app on the ASTA thread.</para>
          </alert>
        </content>
      </section>
    </sections>
  </section>
  <section address="delayed-tasks">
    <title>Delayed Task Execution</title>
    <content>
      <para>It is sometimes necessary to delay the execution of a task until a condition is satisfied, or to start a task in response to an external event. For example, in asynchronous programming, you might have to start a task in response to an I/O completion event.</para>
      <para>Two ways to accomplish this are to use a continuation or to start a task and wait on an event inside the task’s work function. However, there are cases where is it not possible to use one of these techniques. For example, to create a continuation, you must have the antecedent task. However, if you do not have the antecedent task, you can create a <newTerm>task completion event</newTerm> and later chain that completion event to the antecedent task when it becomes available. In addition, because a waiting task also blocks a thread, you can use task completion events to perform work when an asynchronous operation completes, and thereby free a thread.</para>
      <para>The <legacyLink xlink:href="fb19ed98-f245-48dc-9ba5-487ba879b28a">concurrency::task_completion_event</legacyLink> class helps simplify such composition of tasks. Like the <unmanagedCodeEntityReference>task</unmanagedCodeEntityReference> class, the type parameter <parameterReference>T</parameterReference> is the type of the result that is produced by the task. This type can be <languageKeyword>void</languageKeyword> if the task does not return a value. <parameterReference>T</parameterReference> cannot use the <languageKeyword>const</languageKeyword> modifier. Typically, a <unmanagedCodeEntityReference>task_completion_event</unmanagedCodeEntityReference> object is provided to a thread or task that will signal it when the value for it becomes available. At the same time, one or more tasks are set as listeners of that event. When the event is set, the listener tasks complete and their continuations are scheduled to run.</para>
      <para>For an example that uses <unmanagedCodeEntityReference>task_completion_event</unmanagedCodeEntityReference> to implement a task that completes after a delay, see <link xlink:href="3fc0a194-3fdb-4eba-8b8a-b890981a985d">How to: Create a Task that Completes after a Delay</link>.</para>
    </content>
  </section>
  <section address="task-groups">
    <title>Task Groups</title>
    <content>
      <para>A <newTerm>task group</newTerm> organizes a collection of tasks. Task groups push tasks on to a work-stealing queue. The scheduler removes tasks from this queue and executes them on available computing resources. After you add tasks to a task group, you can wait for all tasks to finish or cancel tasks that have not yet started. </para>
      <para>The PPL uses the <legacyLink xlink:href="b4af5b28-227d-4488-8194-0a0d039173b7">concurrency::task_group</legacyLink> and <legacyLink xlink:href="742afa8c-c7b6-482c-b0ba-04c809927b22">concurrency::structured_task_group</legacyLink> classes to represent task groups, and the <legacyLink xlink:href="74a34b15-708b-4231-a509-947874292b13">concurrency::task_handle</legacyLink> class to represent the tasks that run in these groups. The <unmanagedCodeEntityReference>task_handle</unmanagedCodeEntityReference> class encapsulates the code that performs work. Like the <unmanagedCodeEntityReference>task</unmanagedCodeEntityReference> class, the work function comes in the form of a lambda function, function pointer, or function object. You typically do not need to work with <unmanagedCodeEntityReference>task_handle</unmanagedCodeEntityReference> objects directly. Instead, you pass work functions to a task group, and the task group creates and manages the <unmanagedCodeEntityReference>task_handle</unmanagedCodeEntityReference> objects.</para>
      <para>The PPL divides task groups into these two categories: <newTerm>unstructured task groups</newTerm> and <newTerm>structured task groups</newTerm>. The PPL uses the <unmanagedCodeEntityReference>task_group</unmanagedCodeEntityReference> class to represent unstructured task groups and the <unmanagedCodeEntityReference>structured_task_group</unmanagedCodeEntityReference> class to represent structured task groups.</para>
      <alert class="important">
        <para>The PPL also defines the <legacyLink xlink:href="8c8fe553-f372-4138-b9c6-e31b0e83eb9b">concurrency::parallel_invoke</legacyLink> algorithm, which uses the <unmanagedCodeEntityReference>structured_task_group</unmanagedCodeEntityReference> class to execute a set of tasks in parallel. Because the <unmanagedCodeEntityReference>parallel_invoke</unmanagedCodeEntityReference> algorithm has a more succinct syntax, we recommend that you use it instead of the <unmanagedCodeEntityReference>structured_task_group</unmanagedCodeEntityReference> class when you can. The topic <link xlink:href="045dca7b-4d73-4558-a44c-383b88a28473">Parallel Algorithms</link> describes <unmanagedCodeEntityReference>parallel_invoke</unmanagedCodeEntityReference> in greater detail.</para>
      </alert>
      <para>Use <unmanagedCodeEntityReference>parallel_invoke</unmanagedCodeEntityReference> when you have several independent tasks that you want to execute at the same time, and you must wait for all tasks to finish before you continue. This technique is often referred to as <newTerm>fork and join</newTerm> parallelism. Use <unmanagedCodeEntityReference>task_group</unmanagedCodeEntityReference> when you have several independent tasks that you want to execute at the same time, but you want to wait for the tasks to finish at a later time. For example, you can add tasks to a <unmanagedCodeEntityReference>task_group</unmanagedCodeEntityReference> object and wait for the tasks to finish in another function or from another thread. </para>
      <para>Task groups support the concept of cancellation. Cancellation enables you to signal to all active tasks that you want to cancel the overall operation. Cancellation also prevents tasks that have not yet started from starting. For more information about cancellation, see <link xlink:href="baaef417-b2f9-470e-b8bd-9ed890725b35">Cancellation in the PPL</link>.</para>
      <para>The runtime also provides an exception-handling model that enables you to throw an exception from a task and handle that exception when you wait for the associated task group to finish. For more information about this exception-handling model, see <link xlink:href="4d1494fb-3089-4f4b-8cfb-712aa67d7a7a">Exception Handling in the Concurrency Runtime</link>.</para>
    </content>
  </section>
  <section address="comparing-groups">
    <title>Comparing task_group to structured_task_group</title>
    <content>
      <para>Although we recommend that you use <unmanagedCodeEntityReference>task_group</unmanagedCodeEntityReference> or <unmanagedCodeEntityReference>parallel_invoke</unmanagedCodeEntityReference> instead of the <unmanagedCodeEntityReference>structured_task_group</unmanagedCodeEntityReference> class, there are cases where you want to use <unmanagedCodeEntityReference>structured_task_group</unmanagedCodeEntityReference>, for example, when you write a parallel algorithm that performs a variable number of tasks or requires support for cancellation. This section explains the differences between the <unmanagedCodeEntityReference>task_group</unmanagedCodeEntityReference> and <unmanagedCodeEntityReference>structured_task_group</unmanagedCodeEntityReference> classes. </para>
      <para>The <unmanagedCodeEntityReference>task_group</unmanagedCodeEntityReference> class is thread-safe. Therefore you can add tasks to a <unmanagedCodeEntityReference>task_group</unmanagedCodeEntityReference> object from multiple threads and wait on or cancel a <unmanagedCodeEntityReference>task_group</unmanagedCodeEntityReference> object from multiple threads. The construction and destruction of a <unmanagedCodeEntityReference>structured_task_group</unmanagedCodeEntityReference> object must occur in the same lexical scope. In addition, all operations on a <unmanagedCodeEntityReference>structured_task_group</unmanagedCodeEntityReference> object must occur on the same thread. The exception to this rule is the <legacyLink xlink:href="8b6015cd-cc68-4fe8-9467-a34386adbd69">concurrency::structured_task_group::cancel</legacyLink> and <legacyLink xlink:href="07e4e74d-fe7f-4899-8fbc-3d51cfd878ea">concurrency::structured_task_group::is_canceling</legacyLink> methods. A child task can call these methods to cancel the parent task group or check for cancelation at any time.</para>
      <para>You can run additional tasks on a <unmanagedCodeEntityReference>task_group</unmanagedCodeEntityReference> object after you call the <legacyLink xlink:href="19ee5bbc-8654-40a7-9f22-d5329cec6e96">concurrency::task_group::wait</legacyLink> or <legacyLink xlink:href="3da4fdde-ab6f-4938-8483-bffcc5f2e99c">concurrency::task_group::run_and_wait</legacyLink> method. Conversely, if you run additional tasks on a <unmanagedCodeEntityReference>structured_task_group</unmanagedCodeEntityReference> object after you call the <legacyLink xlink:href="91da1999-6ba4-4ebd-9811-6e1ecf5cf29b">concurrency::structured_task_group::wait</legacyLink> or <legacyLink xlink:href="37677993-f3b2-4d89-99e8-1869b1ca74e1">concurrency::structured_task_group::run_and_wait</legacyLink> methods, then the behavior is undefined.</para>
      <para>Because the <unmanagedCodeEntityReference>structured_task_group</unmanagedCodeEntityReference> class does not synchronize across threads, it has less execution overhead than the <unmanagedCodeEntityReference>task_group</unmanagedCodeEntityReference> class. Therefore, if your problem does not require that you schedule work from multiple threads and you cannot use the <unmanagedCodeEntityReference>parallel_invoke</unmanagedCodeEntityReference> algorithm, the <unmanagedCodeEntityReference>structured_task_group</unmanagedCodeEntityReference> class can help you write better performing code.</para>
      <para>If you use one <unmanagedCodeEntityReference>structured_task_group</unmanagedCodeEntityReference> object inside another <unmanagedCodeEntityReference>structured_task_group</unmanagedCodeEntityReference> object, the inner object must finish and be destroyed before the outer object finishes. The <unmanagedCodeEntityReference>task_group</unmanagedCodeEntityReference> class does not require for nested task groups to finish before the outer group finishes.</para>
      <para>Unstructured task groups and structured task groups work with task handles in different ways. You can pass work functions directly to a <unmanagedCodeEntityReference>task_group</unmanagedCodeEntityReference> object; the <unmanagedCodeEntityReference>task_group</unmanagedCodeEntityReference> object will create and manage the task handle for you. The <unmanagedCodeEntityReference>structured_task_group</unmanagedCodeEntityReference> class requires you to manage a <unmanagedCodeEntityReference>task_handle</unmanagedCodeEntityReference> object for each task. Every <unmanagedCodeEntityReference>task_handle</unmanagedCodeEntityReference> object must remain valid throughout the lifetime of its associated <unmanagedCodeEntityReference>structured_task_group</unmanagedCodeEntityReference> object. Use the <legacyLink xlink:href="f8f7cb10-90ca-42ce-9c70-cbf090aa3cf6">concurrency::make_task</legacyLink> function to create a <unmanagedCodeEntityReference>task_handle</unmanagedCodeEntityReference> object, as shown in the following basic example:</para>
      <codeReference>concrt-make-task-structure#1</codeReference>
      <para>To manage task handles for cases where you have a variable number of tasks, use a stack-allocation routine such as <link xlink:href="293992df-cfca-4bc9-b313-0a733a6bb936">_malloca</link> or a container class, such as <legacyLink xlink:href="a3e0a8f8-7565-4fe0-93e4-e4d74ae1b70d">std::vector</legacyLink>.</para>
      <para>Both <unmanagedCodeEntityReference>task_group</unmanagedCodeEntityReference> and <unmanagedCodeEntityReference>structured_task_group</unmanagedCodeEntityReference> support cancellation. For more information about cancellation, see <link xlink:href="baaef417-b2f9-470e-b8bd-9ed890725b35">Cancellation in the PPL</link>.</para>
    </content>
  </section>
  <section address="example">
    <title>Example</title>
    <content>
      <para>The following basic example shows how to work with task groups. This example uses the <unmanagedCodeEntityReference>parallel_invoke</unmanagedCodeEntityReference> algorithm to perform two tasks concurrently. Each task adds sub-tasks to a <unmanagedCodeEntityReference>task_group</unmanagedCodeEntityReference> object. Note that the <unmanagedCodeEntityReference>task_group</unmanagedCodeEntityReference> class allows for multiple tasks to add tasks to it concurrently.</para>
      <codeReference>concrt-using-task-groups#1</codeReference>
      <para>The following is sample output for this example:</para>
      <computerOutput>Message from task: Hello
Message from task: 3.14
Message from task: 42</computerOutput>
      <para>Because the <unmanagedCodeEntityReference>parallel_invoke</unmanagedCodeEntityReference> algorithm runs tasks concurrently, the order of the output messages could vary.</para>
      <para>For complete examples that show how to use the <unmanagedCodeEntityReference>parallel_invoke</unmanagedCodeEntityReference> algorithm, see <link xlink:href="53979a2a-525d-4437-8952-f1ff85b37673">How to: Use parallel_invoke to Write a Parallel Sort Routine</link> and <link xlink:href="a6aea69b-d647-4b7e-bf3b-e6a6a9880072">How to: Use parallel_invoke to Execute Parallel Operations</link>. For a complete example that uses the <unmanagedCodeEntityReference>task_group</unmanagedCodeEntityReference> class to implement asynchronous futures, see <link xlink:href="82ea75cc-aaec-4452-b10d-8abce0a87e5b">Walkthrough: Implementing Futures</link>.</para>
    </content>
  </section>
  <section address="robust">
    <title>Robust Programming</title>
    <content>
      <para>Make sure that you understand the role of cancellation and exception handling when you use tasks, task groups, and parallel algorithms. For example, in a tree of parallel work, a task that is canceled prevents child tasks from running. This can cause problems if one of the child tasks performs an operation that is important to your application, such as freeing a resource. In addition, if a child task throws an exception, that exception could propagate through an object destructor and cause undefined behavior in your application. For an example that illustrates these points, see the <link xlink:href="e43e0304-4d54-4bd8-a3b3-b8673559a9d7#object-destruction">Understand how Cancellation and Exception Handling Affect Object Destruction</link> section in the Best Practices in the Parallel Patterns Library document. For more information about the cancellation and exception-handling models in the PPL, see <link xlink:href="baaef417-b2f9-470e-b8bd-9ed890725b35">Cancellation in the PPL</link> and <link xlink:href="4d1494fb-3089-4f4b-8cfb-712aa67d7a7a">Exception Handling in the Concurrency Runtime</link>.</para>
    </content>
  </section>
  <section>
    <title>Related Topics</title>
    <content>
      <table xmlns:caps="http://schemas.microsoft.com/build/caps/2013/11">
        <thead>
          <tr>
            <TD>
              <para>Title</para>
            </TD>
            <TD>
              <para>Description</para>
            </TD>
          </tr>
        </thead>
        <tbody>
          <tr>
            <TD>
              <para>
                <link xlink:href="53979a2a-525d-4437-8952-f1ff85b37673">How to: Use parallel_invoke to Write a Parallel Sort Routine</link>
              </para>
            </TD>
            <TD>
              <para>Shows how to use the <unmanagedCodeEntityReference>parallel_invoke</unmanagedCodeEntityReference> algorithm to improve the performance of the bitonic sort algorithm.</para>
            </TD>
          </tr>
          <tr>
            <TD>
              <para>
                <link xlink:href="a6aea69b-d647-4b7e-bf3b-e6a6a9880072">How to: Use parallel_invoke to Execute Parallel Operations</link>
              </para>
            </TD>
            <TD>
              <para>Shows how to use the <unmanagedCodeEntityReference>parallel_invoke</unmanagedCodeEntityReference> algorithm to improve the performance of a program that performs multiple operations on a shared data source.</para>
            </TD>
          </tr>
          <tr>
            <TD>
              <para>
                <link xlink:href="3fc0a194-3fdb-4eba-8b8a-b890981a985d">How to: Create a Task that Completes after a Delay</link>
              </para>
            </TD>
            <TD>
              <para>Shows how to use the <unmanagedCodeEntityReference>task</unmanagedCodeEntityReference>, <unmanagedCodeEntityReference>cancellation_token_source</unmanagedCodeEntityReference>, <unmanagedCodeEntityReference>cancellation_token</unmanagedCodeEntityReference>, and  <unmanagedCodeEntityReference>task_completion_event</unmanagedCodeEntityReference> classes to create a task that completes after a delay.</para>
            </TD>
          </tr>
          <tr>
            <TD>
              <para>
                <link xlink:href="82ea75cc-aaec-4452-b10d-8abce0a87e5b">Walkthrough: Implementing Futures</link>
              </para>
            </TD>
            <TD>
              <para>Shows how to combine existing functionality in the Concurrency Runtime into something that does more.</para>
            </TD>
          </tr>
          <tr>
            <TD>
              <para>
                <link xlink:href="40fd86b2-69fa-45e5-93d8-98a75636c242">Parallel Patterns Library</link>
              </para>
            </TD>
            <TD>
              <para>Describes the PPL, which provides an imperative programming model for developing concurrent applications.</para>
            </TD>
          </tr>
        </tbody>
      </table>
    </content>
  </section>
  <section>
    <title>
      <?Comment TP: TODO: Add links to the new types after the ref docs are generated. 2013-07-17T10:20:00Z  Id='10?>Reference<?CommentEnd Id='10'
    ?></title>
    <content>
      <para>
        <link xlink:href="cdc3a8c0-5cbe-45a0-b5d5-e9f81d94df1a">task Class (Concurrency Runtime)</link>
      </para>
      <para>
        <link xlink:href="fb19ed98-f245-48dc-9ba5-487ba879b28a">task_completion_event Class</link>
      </para>
      <para>
        <link xlink:href="1c80cc05-8211-43d4-a8d7-1b3415899823">when_all Function</link>
      </para>
      <para>
        <link xlink:href="26b09c07-4c23-41a5-a1de-d71c91dc9ca2">when_any Function</link>
      </para>
      <para>
        <link xlink:href="b4af5b28-227d-4488-8194-0a0d039173b7">task_group Class</link>
      </para>
      <para>
        <link xlink:href="8c8fe553-f372-4138-b9c6-e31b0e83eb9b">parallel_invoke Function</link>
      </para>
      <para>
        <link xlink:href="742afa8c-c7b6-482c-b0ba-04c809927b22">structured_task_group Class</link>
      </para>
    </content>
  </section>
  <relatedTopics />
</developerConceptualDocument>