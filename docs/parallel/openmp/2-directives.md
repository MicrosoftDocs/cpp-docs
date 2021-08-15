---
description: "Learn more about: 2. Directives"
title: "2. Directives"
ms.date: "01/18/2019"
ms.assetid: d1a69374-6c03-45fb-8c86-e91cea8adae8
---
# 2. Directives

Directives are based on `#pragma` directives defined in the C and C++ standards.  Compilers that support the OpenMP C and C++ API will include a command-line option that activates and allows interpretation of all OpenMP compiler directives.

## 2.1 Directive format

The syntax of an OpenMP directive is formally specified by the grammar in [appendix C](c-openmp-c-and-cpp-grammar.md), and informally as follows:

```cpp
#pragma omp directive-name  [clause[ [,] clause]...] new-line
```

Each directive starts with  `#pragma omp`, to reduce the potential for conflict with other (non-OpenMP or vendor extensions to OpenMP) pragma directives with the same names. The rest of the directive follows the conventions of the C and C++ standards for compiler directives. In particular, white space can be used before and after the `#`, and sometimes white space must be used to separate the words in a directive. Preprocessing tokens following the `#pragma omp` are subject to macro replacement.

Directives are case-sensitive. The order in which clauses appear in directives isn't significant. Clauses on directives may be repeated as needed, subject to the restrictions listed in the description of each clause. If *variable-list* appears in a clause, it must specify only variables. Only one *directive-name* can be specified per directive.  For example, the following directive isn't allowed:

```cpp
/* ERROR - multiple directive names not allowed */
#pragma omp parallel barrier
```

An OpenMP directive applies to at most one succeeding statement, which must be a structured block.

## 2.2 Conditional compilation

The `_OPENMP` macro name is defined by OpenMP-compliant implementations as the decimal constant *yyyymm*, which will be the year and month of the approved specification. This macro must not be the subject of a `#define` or a `#undef` preprocessing directive.

```cpp
#ifdef _OPENMP
iam = omp_get_thread_num() + index;
#endif
```

If vendors define extensions to OpenMP, they may specify additional predefined macros.

## 2.3 parallel construct

The following directive defines a parallel region, which is a region of the program that's to be executed by many threads in parallel. This directive is the fundamental construct that starts parallel execution.

```cpp
#pragma omp parallel [clause[ [, ]clause] ...] new-line   structured-block
```

The *clause* is one of the following:

- `if(` *scalar-expression* `)`
- `private(` *variable-list* `)`
- `firstprivate(` *variable-list* `)`
- `default(shared | none)`
- `shared(` *variable-list* `)`
- `copyin(` *variable-list* `)`
- `reduction(` *operator* `:`  *variable-list* `)`
- `num_threads(` *integer-expression* `)`

When a thread gets to a parallel construct, a team of threads is created if one of the following cases is true:

- No `if` clause is present.
- The `if` expression evaluates to a nonzero value.

This thread becomes the master thread of the team, with a thread number of 0, and all threads in the team, including the master thread, execute the region in parallel. If the value of the `if` expression is zero, the region is serialized.

To determine the number of threads that are requested, the following rules will be considered in order. The first rule whose condition is met will be applied:

1. If the `num_threads` clause is present, then the value of the integer expression is the number of threads requested.

1. If the `omp_set_num_threads` library function has been called, then the value of the argument in the most recently executed call is the number of threads requested.

1. If the environment variable `OMP_NUM_THREADS` is defined, then the value of this environment variable is the number of threads requested.

1. If none of the methods above is used, then the number of threads requested is implementation-defined.

If the `num_threads` clause is present then it supersedes the number of threads requested by the `omp_set_num_threads` library function or the `OMP_NUM_THREADS` environment variable only for the parallel region it's applied to. Later parallel regions aren't affected by it.

The number of threads that execute the parallel region also depends upon whether dynamic adjustment of the number of threads is enabled. If dynamic adjustment is disabled, then the requested number of threads will execute the parallel region. If dynamic adjustment is enabled then the requested number of threads is the maximum number of threads that may execute the parallel region.

If a parallel region is encountered while dynamic adjustment of the number of threads is disabled, and the number of threads requested for the parallel region is more than the number that the run-time system can supply, the behavior of the program is implementation-defined. An implementation may, for example, interrupt the execution of the program, or it may serialize the parallel region.

The `omp_set_dynamic` library function and the `OMP_DYNAMIC` environment variable can be used to enable and disable dynamic adjustment of the number of threads.

The number of physical processors actually hosting the threads at any given time is implementation-defined. Once created, the number of threads in the team stays constant for the duration of that parallel region. It can be changed either explicitly by the user or automatically by the run-time system from one parallel region to another.

The statements contained within the dynamic extent of the parallel region are executed by each thread, and each thread can execute a path of statements that's different from the other threads. Directives encountered outside the lexical extent of a parallel region are referred to as orphaned directives.

There's an implied barrier at the end of a parallel region. Only the master thread of the team continues execution at the end of a parallel region.

If a thread in a team executing a parallel region encounters another parallel construct, it creates a new team, and it becomes the master of that new team. Nested parallel regions are serialized by default. As a result, by default, a nested parallel region is executed by a team composed of one thread. The default behavior may be changed by using either the runtime library function `omp_set_nested` or the environment variable `OMP_NESTED`. However, the number of threads in a team that execute a nested parallel region is implementation-defined.

Restrictions to the `parallel` directive are as follows:

- At most, one `if` clause can appear on the directive.

- It's unspecified whether any side effects inside the if expression or `num_threads` expression occur.

- A `throw` executed inside a parallel region must cause execution to resume within the dynamic extent of the same structured block, and it must be caught by the same thread that threw the exception.

- Only a single `num_threads` clause can appear on the directive. The `num_threads` expression is evaluated outside the context of the parallel region, and must evaluate to a positive integer value.

- The order of evaluation of the `if` and `num_threads` clauses is unspecified.

### Cross-references

- `private`, `firstprivate`, `default`, `shared`, `copyin`, and `reduction` clauses ([section 2.7.2](#272-data-sharing-attribute-clauses))
- [OMP_NUM_THREADS](4-environment-variables.md#42-omp_num_threads) environment variable
- [omp_set_dynamic](3-run-time-library-functions.md#317-omp_set_dynamic-function) library function
- [OMP_DYNAMIC](4-environment-variables.md#43-omp_dynamic) environment variable
- [omp_set_nested](3-run-time-library-functions.md#319-omp_set_nested-function) function
- [OMP_NESTED](4-environment-variables.md#44-omp_nested) environment variable
- [omp_set_num_threads](3-run-time-library-functions.md#311-omp_set_num_threads-function) library function

## 2.4 Work-sharing constructs

A work-sharing construct distributes the execution of the associated statement among the members of the team that encounter it. The work-sharing directives don't launch new threads, and there's no implied barrier on entry to a work-sharing construct.

The sequence of work-sharing constructs and `barrier` directives encountered must be the same for every thread in a team.

OpenMP defines the following work-sharing constructs, and these constructs are described in the sections that follow:

- [for](#241-for-construct) directive
- [sections](#242-sections-construct) directive
- [single](#243-single-construct) directive

### 2.4.1 for construct

The `for` directive identifies an iterative work-sharing construct that specifies that the iterations of the associated loop will be executed in parallel. The iterations of the `for` loop are distributed across threads that already exist in the team executing the parallel construct to which it binds. The syntax of the `for` construct is as follows:

```cpp
#pragma omp for [clause[[,] clause] ... ] new-line for-loop
```

The clause is one of the following:

- `private(` *variable-list* `)`
- `firstprivate(` *variable-list* `)`
- `lastprivate(` *variable-list* `)`
- `reduction(` *operator* `:` *variable-list* `)`
- `ordered`
- `schedule(` *kind* [`,` *chunk_size*] `)`
- `nowait`

The `for` directive places restrictions on the structure of the corresponding `for` loop. Specifically, the corresponding `for` loop must have canonical shape:

`for (` *init-expr* `;` *var  logical-op  b* `;` *incr-expr* `)`

*init-expr*<br/>
One of the following:

- *var* = *lb*
- *integer-type var* = *lb*

*incr-expr*<br/>
One of the following:

- `++` *var*
- *var* `++`
- `--` *var*
- *var* `--`
- *var* `+=` *incr*
- *var* `-=` *incr*
- *var* `=` *var* `+` *incr*
- *var* `=` *incr* `+` *var*
- *var* `=` *var* `-` *incr*

*var*<br/>
A signed integer variable. If this variable would otherwise be shared, it's implicitly made private for the duration of the `for`. Do not modify this variable within the body of the `for` statement. Unless the variable is specified `lastprivate`, its value after the loop is indeterminate.

*logical-op*<br/>
One of the following:

- `<`
- `<=`
- `>`
- `>=`

*lb*, *b*, and *incr*<br>
Loop invariant integer expressions. There's no synchronization during the evaluation of these expressions, so any evaluated side effects produce indeterminate results.

The canonical form allows the number of loop iterations to be computed on entry to the loop. This computation is made with values in the type of *var*, after integral promotions. In particular, if value of *b* `-` *lb* `+` *incr* can't be represented in that type, the result is indeterminate. Further, if *logical-op* is `<` or `<=`, then *incr-expr* must cause *var* to increase on each iteration of the loop.   If *logical-op* is `>` or `>=`, then *incr-expr* must cause *var* to get smaller on each iteration of the loop.

The `schedule` clause specifies how iterations of the `for` loop are divided among threads of the team. The correctness of a program must not depend on which thread executes a particular iteration. The value of *chunk_size*, if specified, must be a loop invariant integer expression with a positive value. There's no synchronization during the evaluation of this expression, so any evaluated side effects produce indeterminate results. The schedule *kind* can be one of the following values:

Table 2-1: `schedule` clause *kind* values

|Value|Description|
|-|-|
|static|When `schedule(static,` *chunk_size* `)` is specified, iterations are divided into chunks of a size specified by *chunk_size*. The chunks are statically assigned to threads in the team in a round-robin fashion in the order of the thread number. When no *chunk_size* is specified, the iteration space is divided into chunks that are approximately equal in size, with one chunk assigned to each thread.|
|dynamic|When `schedule(dynamic,` *chunk_size* `)` is specified, the iterations are divided into a series of chunks, each containing *chunk_size* iterations. Each chunk is assigned to a thread that's waiting for an assignment. The thread executes the chunk of iterations and then waits for its next assignment, until no chunks remain to be assigned. The last chunk to be assigned may have a smaller number of iterations. When no *chunk_size* is specified, it defaults to 1.|
|guided|When `schedule(guided,` *chunk_size* `)` is specified, the iterations are assigned to threads in chunks with decreasing sizes. When a thread finishes its assigned chunk of iterations, it's dynamically assigned another chunk, until none is left. For a *chunk_size* of 1, the size of each chunk is approximately the number of unassigned iterations divided by the number of threads. These sizes decrease almost exponentially to 1. For a *chunk_size* with value *k* greater than 1, the sizes decrease almost exponentially to *k*, except that the last chunk may have fewer than *k* iterations. When no *chunk_size* is specified, it defaults to 1.|
|runtime|When `schedule(runtime)` is specified, the decision regarding scheduling is deferred until runtime. The schedule *kind* and size of the chunks can be chosen at run time by setting the environment variable `OMP_SCHEDULE`. If this environment variable isn't set, the resulting schedule is implementation-defined. When  `schedule(runtime)` is specified, *chunk_size* must not be specified.|

In the absence of an explicitly defined `schedule` clause, the default `schedule` is implementation-defined.

An OpenMP-compliant program shouldn't rely on a particular schedule for correct execution. A program shouldn't rely on a schedule *kind* conforming precisely to the description given above, because it's possible to have variations in the implementations of the same schedule *kind* across different compilers. The descriptions can be used to select the schedule that's appropriate for a particular situation.

The `ordered` clause must be present when `ordered` directives bind to the `for` construct.

There's an implicit barrier at the end of a `for` construct unless a `nowait` clause is specified.

Restrictions to the `for` directive are as follows:

- The `for` loop must be a structured block, and, in addition, its execution must not be terminated by a **`break`** statement.

- The values of the loop control expressions of the `for` loop associated with a `for` directive must be the same for all the threads in the team.

- The `for` loop iteration variable must have a signed integer type.

- Only a single `schedule` clause can appear on a `for` directive.

- Only a single `ordered` clause can appear on a `for` directive.

- Only a single `nowait` clause can appear on a `for` directive.

- It's unspecified if or how often any side effects within the *chunk_size*, *lb*, *b*, or *incr* expressions occur.

- The value of the *chunk_size* expression must be the same for all threads in the team.

#### Cross-references

- `private`, `firstprivate`, `lastprivate`, and `reduction` clauses ([section 2.7.2](#272-data-sharing-attribute-clauses))
- [OMP_SCHEDULE](4-environment-variables.md#41-omp_schedule) environment variable
- [ordered](#266-ordered-construct) construct
- [schedule](d-using-the-schedule-clause.md) clause

### 2.4.2 sections construct

The `sections` directive identifies a noniterative work-sharing construct that specifies a set of constructs that are to be divided among threads in a team. Each section is executed once by a thread in the team. The syntax of the `sections` directive is as follows:

```cpp
#pragma omp sections [clause[[,] clause] ...] new-line
   {
   [#pragma omp section new-line]
      structured-block
   [#pragma omp section new-linestructured-block ]
...
}
```

The clause is one of the following:

- `private(` *variable-list* `)`
- `firstprivate(` *variable-list* `)`
- `lastprivate(` *variable-list* `)`
- `reduction(` *operator* `:`  *variable-list* `)`
- `nowait`

Each section is preceded by a `section` directive, although the `section` directive is optional for the first section. The `section` directives must appear within the lexical extent of the `sections` directive. There's an implicit barrier at the end of a `sections` construct, unless a `nowait` is specified.

Restrictions to the `sections` directive are as follows:

- A `section` directive must not appear outside the lexical extent of the `sections` directive.

- Only a single `nowait` clause can appear on a `sections` directive.

#### Cross-references

- `private`, `firstprivate`, `lastprivate`, and `reduction` clauses ([section 2.7.2](#272-data-sharing-attribute-clauses))

### 2.4.3 single construct

The `single` directive identifies a construct that specifies that the associated structured block is executed by only one thread in the team (not necessarily the master thread). The syntax of the `single` directive is as follows:

```cpp
#pragma omp single [clause[[,] clause] ...] new-linestructured-block
```

The clause is one of the following:

- `private(` *variable-list* `)`
- `firstprivate(` *variable-list* `)`
- `copyprivate(` *variable-list* `)`
- `nowait`

There's an implicit barrier after the `single` construct unless a `nowait` clause is specified.

Restrictions to the `single` directive are as follows:

- Only a single `nowait` clause can appear on a `single` directive.
- The `copyprivate` clause must not be used with the `nowait` clause.

#### Cross-references

- `private`, `firstprivate`, and `copyprivate` clauses ([section 2.7.2](#272-data-sharing-attribute-clauses))

## 2.5 Combined parallel work-sharing constructs

Combined parallel work-sharing constructs are shortcuts for specifying a parallel region that has only one work-sharing construct. The semantics of these directives are the same as explicitly specifying a `parallel` directive followed by a single work-sharing construct.

The following sections describe the combined parallel work-sharing constructs:

- [parallel for](#251-parallel-for-construct) directive
- [parallel sections](#252-parallel-sections-construct) directive

### 2.5.1 parallel for construct

The `parallel for` directive is a shortcut for a `parallel` region that contains only a single `for` directive. The syntax of the `parallel for` directive is as follows:

```cpp
#pragma omp parallel for [clause[[,] clause] ...] new-linefor-loop
```

This directive allows all the clauses of the `parallel` directive and the `for` directive, except the `nowait` clause, with identical meanings and restrictions. The semantics are the same as explicitly specifying a `parallel` directive immediately followed by a `for` directive.

#### Cross-references

- [parallel](#23-parallel-construct) directive
- [for](#241-for-construct) directive
- [Data attribute clauses](#272-data-sharing-attribute-clauses)

### 2.5.2 parallel sections construct

The `parallel sections` directive provides a shortcut form for specifying a `parallel` region that has only a single `sections` directive. The semantics are the same as explicitly specifying a `parallel` directive immediately followed by a `sections` directive. The syntax of the `parallel sections` directive is as follows:

```cpp
#pragma omp parallel sections  [clause[[,] clause] ...] new-line
   {
   [#pragma omp section new-line]
      structured-block
   [#pragma omp section new-linestructured-block  ]
   ...
}
```

The *clause* can be one of the clauses accepted by the `parallel` and `sections` directives, except the `nowait` clause.

#### Cross-references

- [parallel](#23-parallel-construct) directive
- [sections](#242-sections-construct) directive

## 2.6 Master and synchronization directives

The following sections describe:

- [master](#261-master-construct) construct
- [critical](#262-critical-construct) construct
- [barrier](#263-barrier-directive) directive
- [atomic](#264-atomic-construct) construct
- [flush](#265-flush-directive) directive
- [ordered](#266-ordered-construct) construct

### 2.6.1 master construct

The `master` directive identifies a construct that specifies a structured block that's executed by the master thread of the team. The syntax of the `master` directive is as follows:

```cpp
#pragma omp master new-linestructured-block
```

Other threads in the team don't execute the associated structured block. There's no implied barrier either on entry to or exit from the master construct.

### 2.6.2 critical construct

The `critical` directive identifies a construct that restricts execution of the associated structured block to a single thread at a time. The syntax of the `critical` directive is as follows:

```cpp
#pragma omp critical [(name)]  new-linestructured-block
```

An optional *name* may be used to identify the critical region. Identifiers used to identify a critical region have external linkage and are in a name space that is separate from the name spaces used by labels, tags, members, and ordinary identifiers.

A thread waits at the beginning of a critical region until no other thread is executing a critical region (anywhere in the program) with the same name. All unnamed `critical` directives map to the same unspecified name.

### 2.6.3 barrier directive

The `barrier` directive synchronizes all the threads in a team. When encountered, each thread in the team waits until all of the others have reached this point. The syntax of the `barrier` directive is as follows:

```cpp
#pragma omp barrier new-line
```

After all threads in the team have encountered the barrier, each thread in the team begins executing the statements after the barrier directive in parallel. Because the `barrier` directive doesn't have a C language statement as part of its syntax, there are some restrictions on its placement within a program. For more information about the formal grammar, see [appendix C](c-openmp-c-and-cpp-grammar.md). The example below illustrates these restrictions.

```cpp
/* ERROR - The barrier directive cannot be the immediate
*          substatement of an if statement
*/
if (x!=0)
   #pragma omp barrier
...

/* OK - The barrier directive is enclosed in a
*      compound statement.
*/
if (x!=0) {
   #pragma omp barrier
}
```

### 2.6.4 atomic construct

The `atomic` directive ensures that a specific memory location is updated atomically, rather than exposing it to the possibility of multiple, simultaneous writing threads. The syntax of the `atomic` directive is as follows:

```cpp
#pragma omp atomic new-lineexpression-stmt
```

The expression statement must have one of the following forms:

- *x binop* `=` *expr*
- *x* `++`
- `++` *x*
- *x* `--`
- `--` *x*

In the preceding expressions:

- *x* is an lvalue expression with scalar type.

- *expr* is an expression with scalar type, and it doesn't reference the object designated by *x*.

- *binop* isn't an overloaded operator and is one of `+`, `*`, `-`, `/`, `&`, `^`, `|`, `<<`, or `>>`.

Although it's implementation-defined whether an implementation replaces all `atomic` directives with `critical` directives that have the same unique *name*, the `atomic` directive permits better optimization. Often hardware instructions are available that can perform the atomic update with the least overhead.

Only the load and store of the object designated by *x* are atomic; the evaluation of *expr* isn't atomic. To avoid race conditions, all updates of the location in parallel should be protected with the `atomic` directive, except those that are known to be free of race conditions.

Restrictions to the `atomic` directive are as follows:

- All atomic references to the storage location x throughout the program are required to have a compatible type.

#### Examples

```cpp
extern float a[], *p = a, b;
/* Protect against races among multiple updates. */
#pragma omp atomic
a[index[i]] += b;
/* Protect against races with updates through a. */
#pragma omp atomic
p[i] -= 1.0f;

extern union {int n; float x;} u;
/* ERROR - References through incompatible types. */
#pragma omp atomic
u.n++;
#pragma omp atomic
u.x -= 1.0f;
```

### 2.6.5 flush directive

The `flush` directive, whether explicit or implied, specifies a "cross-thread" sequence point at which the implementation is required to ensure that all threads in a team have a consistent view of certain objects (specified below) in memory. This means that previous evaluations of expressions that reference those objects are complete and subsequent evaluations haven't yet begun. For example, compilers must restore the values of the objects from registers to memory, and hardware may need to flush write buffers to memory and reload the values of the objects from memory.

The syntax of the `flush` directive is as follows:

```cpp
#pragma omp flush [(variable-list)]  new-line
```

If the objects that require synchronization can all be designated by variables, then those variables can be specified in the optional *variable-list*. If a pointer is present in the *variable-list*, the pointer itself is flushed, not the object the pointer refers to.

A `flush` directive without a *variable-list* synchronizes all shared objects except inaccessible objects with automatic storage duration. (This is likely to have more overhead than a `flush` with a *variable-list*.) A `flush` directive without a *variable-list* is implied for the following directives:

- `barrier`
- At entry to and exit from `critical`
- At entry to and exit from `ordered`
- At entry to and exit from `parallel`
- At exit from `for`
- At exit from `sections`
- At exit from `single`
- At entry to and exit from `parallel for`
- At entry to and exit from `parallel sections`

The directive isn't implied if a `nowait` clause is present. It should be noted that the `flush` directive isn't implied for any of the following:

- At entry to `for`
- At entry to or exit from `master`
- At entry to `sections`
- At entry to `single`

A reference that accesses the value of an object with a volatile-qualified type behaves as if there were a `flush` directive specifying that object at the previous sequence point. A reference that modifies the value of an object with a volatile-qualified type behaves as if there were a `flush` directive specifying that object at the subsequent sequence point.

Because the `flush` directive doesn't have a C language statement as part of its syntax, there are some restrictions on its placement within a program. For more information about the formal grammar, see [appendix C](c-openmp-c-and-cpp-grammar.md). The example below illustrates these restrictions.

```cpp
/* ERROR - The flush directive cannot be the immediate
*          substatement of an if statement.
*/
if (x!=0)
   #pragma omp flush (x)
...

/* OK - The flush directive is enclosed in a
*      compound statement
*/
if (x!=0) {
   #pragma omp flush (x)
}
```

Restrictions to the `flush` directive are as follows:

- A variable specified in a `flush` directive must not have a reference type.

### 2.6.6 ordered construct

The structured block following an `ordered` directive is executed in the order in which iterations would be executed in a sequential loop. The syntax of the `ordered` directive is as follows:

```cpp
#pragma omp ordered new-linestructured-block
```

An `ordered` directive must be within the dynamic extent of a `for` or `parallel for` construct. The `for` or `parallel for` directive to which the `ordered` construct binds must have an `ordered` clause specified as described in [section 2.4.1](#241-for-construct). In the execution of a `for` or `parallel for` construct with an `ordered` clause, `ordered` constructs are executed strictly in the order in which they would be executed in a sequential execution of the loop.

Restrictions to the `ordered` directive are as follows:

- An iteration of a loop with a `for` construct must not execute the same ordered directive more than once, and it must not execute more than one `ordered` directive.

## 2.7 Data environment

This section presents a directive and several clauses for controlling the data environment during the execution of parallel regions, as follows:

- A [threadprivate](#271-threadprivate-directive) directive is provided to make file- scope, namespace-scope, or static block-scope variables local to a thread.

- Clauses that may be specified on the directives to control the sharing attributes of variables for the duration of the parallel or work-sharing constructs are described in [section 2.7.2](#272-data-sharing-attribute-clauses).

### 2.7.1 threadprivate directive

The `threadprivate` directive makes the named file-scope, namespace-scope, or static block-scope variables specified in the *variable-list* private to a thread. *variable-list* is a comma-separated list of variables that don't have an incomplete type. The syntax of the `threadprivate` directive is as follows:

```cpp
#pragma omp threadprivate(variable-list) new-line
```

Each copy of a `threadprivate` variable is initialized once, at an unspecified point in the program prior to the first reference to that copy, and in the usual manner (i.e., as the master copy would be initialized in a serial execution of the program). Note that if an object is referenced in an explicit initializer of a `threadprivate` variable, and the value of the object is modified prior to the first reference to a copy of the variable, then the behavior is unspecified.

As with any private variable, a thread must not reference another thread's copy of a `threadprivate` object. During serial regions and master regions of the program, references will be to the master thread's copy of the object.

After the first parallel region executes, the data in the `threadprivate` objects is  guaranteed to persist only if the dynamic threads mechanism has been disabled and if the number of threads remains unchanged for all parallel regions.

The restrictions to the `threadprivate` directive are as follows:

- A `threadprivate` directive for file-scope or namespace-scope variables must appear outside any definition or declaration, and must lexically precede all references to any of the variables in its list.

- Each variable in the *variable-list* of a `threadprivate` directive at file or namespace scope must refer to a variable declaration at file or namespace scope that lexically precedes the directive.

- A `threadprivate` directive for static block-scope variables must appear in the scope of the variable and not in a nested scope. The directive must lexically precede all references to any of the variables in its list.

- Each variable in the *variable-list* of a `threadprivate` directive in block scope must refer to a variable declaration in the same scope that lexically precedes the directive. The variable declaration must use the static storage-class specifier.

- If a variable is specified in a `threadprivate` directive in one translation unit, it must be specified in a `threadprivate` directive in every translation unit in which it's declared.

- A `threadprivate` variable must not appear in any clause except the `copyin`, `copyprivate`, `schedule`, `num_threads`, or the `if` clause.

- The address of a `threadprivate` variable isn't an address constant.

- A `threadprivate` variable must not have an incomplete type or a reference type.

- A `threadprivate` variable with non-POD class type must have an accessible, unambiguous copy constructor if it's declared with an explicit initializer.

The following example illustrates how modifying a variable that appears in an initializer can cause unspecified behavior, and also how to avoid this problem by using an auxiliary object and a copy-constructor.

```cpp
int x = 1;
T a(x);
const T b_aux(x); /* Capture value of x = 1 */
T b(b_aux);
#pragma omp threadprivate(a, b)

void f(int n) {
   x++;
   #pragma omp parallel for
   /* In each thread:
   * Object a is constructed from x (with value 1 or 2?)
   * Object b is copy-constructed from b_aux
   */
   for (int i=0; i<n; i++) {
      g(a, b); /* Value of a is unspecified. */
   }
}
```

#### Cross-references

- [dynamic threads](3-run-time-library-functions.md#317-omp_set_dynamic-function)
- [OMP_DYNAMIC](4-environment-variables.md#43-omp_dynamic) environment variable

### 2.7.2 Data-sharing attribute clauses

Several directives accept clauses that allow a user to control the sharing attributes of variables for the duration of the region. Sharing attribute clauses apply only to variables in the lexical extent of the directive on which the clause appears. Not all of the following clauses are allowed on all directives. The list of clauses that are valid on a particular directive are described with the directive.

If a variable is visible when a parallel or work-sharing construct is encountered, and the variable isn't specified in a sharing attribute clause or `threadprivate` directive, then the variable is shared. Static variables declared within the dynamic extent of a parallel region are shared. Heap allocated memory (for example, using `malloc()` in C or C++ or the **`new`** operator in C++) is shared. (The pointer to this memory, however, can be either private or shared.) Variables with automatic storage duration declared within the dynamic extent of a parallel region are private.

Most of the clauses accept a *variable-list* argument, which is a comma-separated list of variables that are visible. If a variable referenced in a data-sharing attribute clause has a type derived from a template, and there are no other references to that variable in the program, the behavior is undefined.

All variables that appear within directive clauses must be visible. Clauses may be repeated as needed, but no variable may be specified in more than one clause, except that a variable can be specified in both a `firstprivate` and a `lastprivate` clause.

The following sections describe the data-sharing attribute clauses:

- [private](#2721-private)
- [firstprivate](#2722-firstprivate)
- [lastprivate](#2723-lastprivate)
- [shared](#2724-shared)
- [default](#2725-default)
- [reduction](#2726-reduction)
- [copyin](#2727-copyin)
- [copyprivate](#2728-copyprivate)

#### 2.7.2.1 private

The `private` clause declares the variables in variable-list to be private to each thread in a team. The syntax of the `private` clause is as follows:

```cpp
private(variable-list)
```

The behavior of a variable specified in a `private` clause is as follows. A new object with automatic storage duration is allocated for the construct. The size and alignment of the new object are determined by the type of the variable. This allocation occurs once for each thread in the team, and a default constructor is invoked for a class object if necessary; otherwise the initial value is indeterminate.  The original object referenced by the variable has an indeterminate value upon entry to the construct, must not be modified within the dynamic extent of the construct, and has an indeterminate value upon exit from the construct.

In the lexical extent of the directive construct, the variable references the new private object allocated by the thread.

The restrictions to the `private` clause are as follows:

- A variable with a class type that's specified in a `private` clause must have an accessible, unambiguous default constructor.

- A variable specified in a `private` clause must not have a **`const`**-qualified type unless it has a class type with a `mutable` member.

- A variable specified in a `private` clause must not have an incomplete type or a reference type.

- Variables that appear in the `reduction` clause of a `parallel` directive can't be specified in a `private` clause on a work-sharing directive that binds to the parallel construct.

#### 2.7.2.2 firstprivate

The `firstprivate` clause provides a superset of the functionality provided by the `private` clause. The syntax of the `firstprivate` clause is as follows:

```cpp
firstprivate(variable-list)
```

Variables specified in *variable-list* have `private` clause semantics, as described in [section 2.7.2.1](#2721-private). The initialization or construction happens as if it were done once per thread, prior to the thread's execution of the construct. For a `firstprivate` clause on a parallel construct, the initial value of the new private object is the value of the original object that exists immediately prior to the parallel construct for the thread that encounters it. For a `firstprivate` clause on a work-sharing construct, the initial value of the new private object for each thread that executes the work-sharing construct is the value of the original object that exists prior to the point in time that the same thread encounters the work-sharing construct. In addition, for C++ objects, the new private object for each thread is copy constructed from the original object.

The restrictions to the `firstprivate` clause are as follows:

- A variable specified in a `firstprivate` clause must not have an incomplete type or a reference type.

- A variable with a class type that's specified as `firstprivate` must have an accessible, unambiguous copy constructor.

- Variables that are private within a parallel region or that appear in the `reduction` clause of a `parallel` directive can't be specified in a `firstprivate` clause on a work-sharing directive that binds to the parallel construct.

#### 2.7.2.3 lastprivate

The `lastprivate` clause provides a superset of the functionality provided by the `private` clause. The syntax of the `lastprivate` clause is as follows:

```cpp
lastprivate(variable-list)
```

Variables specified in the *variable-list* have `private` clause semantics. When a `lastprivate` clause appears on the directive that identifies a work-sharing construct, the value of each `lastprivate` variable from the sequentially last iteration of the associated loop, or the lexically last section directive, is assigned to the variable's original object. Variables that aren't assigned a value by the last iteration of the `for` or `parallel for`, or by the lexically last section of the `sections` or `parallel sections` directive, have indeterminate values after the construct. Unassigned subobjects also have an indeterminate value after the construct.

The restrictions to the `lastprivate` clause are as follows:

- All restrictions for `private` apply.

- A variable with a class type that's specified as `lastprivate` must have an accessible, unambiguous copy assignment operator.

- Variables that are private within a parallel region or that appear in the `reduction` clause of a `parallel` directive can't be specified in a `lastprivate` clause on a work-sharing directive that binds to the parallel construct.

#### 2.7.2.4 shared

This clause shares variables that appear in the *variable-list* among all the threads in a team. All threads within a team access the same storage area for `shared` variables.

The syntax of the `shared` clause is as follows:

```cpp
shared(variable-list)
```

#### 2.7.2.5 default

The `default` clause allows the user to affect the data-sharing attributes of variables. The syntax of the `default` clause is as follows:

```cpp
default(shared | none)
```

Specifying `default(shared)` is equivalent to explicitly listing each currently visible variable in a `shared` clause, unless it's `threadprivate` or **`const`**-qualified. In the absence of an explicit `default` clause, the default behavior is the same as if `default(shared)` were specified.

Specifying `default(none)` requires that at least one of the following must be true for every reference to a variable in the lexical extent of the parallel construct:

- The variable is explicitly listed in a data-sharing attribute clause of a construct that contains the reference.

- The variable is declared within the parallel construct.

- The variable is `threadprivate`.

- The variable has a **`const`**-qualified type.

- The variable is the loop control variable for a `for` loop that immediately follows a `for` or `parallel for` directive, and the variable reference appears inside the loop.

Specifying a variable on a `firstprivate`, `lastprivate`, or `reduction` clause of an enclosed directive causes an implicit reference to the variable in the enclosing context. Such implicit references are also subject to the requirements listed above.

Only a single `default` clause may be specified on a `parallel` directive.

A variable's default data-sharing attribute can be overridden by using the `private`, `firstprivate`, `lastprivate`, `reduction`, and `shared` clauses, as demonstrated by the following example:

```cpp
#pragma  omp  parallel  for  default(shared)  firstprivate(i)\
   private(x)  private(r)  lastprivate(i)
```

#### 2.7.2.6 reduction

This clause performs a reduction on the scalar variables that appear in *variable-list*, with the operator *op*. The syntax of the `reduction` clause is as follows:

`reduction(` *op* `:` *variable-list* `)`

A reduction is typically specified for a statement with one of the following forms:

- *x* `=` *x* *op* *expr*
- *x* *binop* `=` *expr*
- *x* `=` *expr* *op* *x*  (except for subtraction)
- *x* `++`
- `++` *x*
- *x* `--`
- `--` *x*

where:

*x*<br/>
One of the reduction variables specified in the list.

*variable-list*<br/>
A comma-separated list of scalar reduction variables.

*expr*<br/>
An expression with scalar type that doesn't reference *x*.

*op*<br/>
Not an overloaded operator but one of `+`, `*`, `-`, `&`, `^`, `|`, `&&`, or `||`.

*binop*<br/>
Not an overloaded operator but one of `+`, `*`, `-`, `&`, `^`, or `|`.

The following is an example of the `reduction` clause:

```cpp
#pragma omp parallel for reduction(+: a, y) reduction(||: am)
for (i=0; i<n; i++) {
   a += b[i];
   y = sum(y, c[i]);
   am = am || b[i] == c[i];
}
```

As shown in the example, an operator may be hidden inside a function call. The user should be careful that the operator specified in the `reduction` clause matches the reduction operation.

Although the right operand of the `||` operator has no side effects in this example, they're permitted, but should be used with care. In this context, a side effect that's guaranteed not to occur during sequential execution of the loop may occur during parallel execution. This difference can occur because the order of execution of the iterations is indeterminate.

The operator is used to determine the initial value of any private variables used by the compiler for the reduction and to determine the finalization operator. Specifying the operator explicitly allows the reduction statement to be outside the lexical extent of the construct. Any number of `reduction` clauses may be specified on the directive, but a variable may appear in at most one `reduction` clause for that directive.

A private copy of each variable in *variable-list* is created, one for each thread, as if the `private` clause had been used. The private copy is initialized according to the operator (see the following table).

At the end of the region for which the `reduction` clause was specified, the original object is updated to reflect the result of combining its original value with the final value of each of the private copies using the operator specified. The reduction operators are all associative (except for subtraction), and the compiler may freely reassociate the computation of the final value. (The partial results of a subtraction reduction are added to form the final value.)

The value of the original object becomes indeterminate when the first thread reaches the containing clause and remains so until the reduction computation is complete.  Normally, the computation will be complete at the end of the construct; however, if the `reduction` clause is used on a construct to which `nowait` is also applied, the value of the original object remains indeterminate until a barrier synchronization has been performed to ensure that all threads have completed the `reduction` clause.

The following table lists the operators that are valid and their canonical initialization values. The actual initialization value will be consistent with the data type of the reduction variable.

|Operator|Initialization|
|--------------|--------------------|
|`+`|0|
|`*`|1|
|`-`|0|
|`&`|~0|
|`|`|0|
|`^`|0|
|`&&`|1|
|`||`|0|

The restrictions to the `reduction` clause are as follows:

- The type of the variables in the `reduction` clause must be valid for the reduction operator except that pointer types and reference types are never permitted.

- A variable that's specified in the `reduction` clause must not be **`const`**-qualified.

- Variables that are private within a parallel region or that appear in the `reduction` clause of a `parallel` directive can't be specified in a `reduction` clause on a work-sharing directive that binds to the parallel construct.

   ```cpp
   #pragma omp parallel private(y)
   { /* ERROR - private variable y cannot be specified
                in a reduction clause */
      #pragma omp for reduction(+: y)
      for (i=0; i<n; i++)
         y += b[i];
   }

   /* ERROR - variable x cannot be specified in both
              a shared and a reduction clause */
   #pragma omp parallel for shared(x) reduction(+: x)
   ```

#### 2.7.2.7 copyin

The `copyin` clause provides a mechanism to assign the same value to `threadprivate` variables for each thread in the team executing the parallel region. For each variable specified in a `copyin` clause, the value of the variable in the master thread of the team is copied, as if by assignment, to the thread-private copies at the beginning of the parallel region. The syntax of the `copyin` clause is as follows:

```cpp

copyin(
variable-list
)
```

The restrictions to the `copyin` clause are as follows:

- A variable that's specified in the `copyin` clause must have an accessible, unambiguous copy assignment operator.

- A variable that's specified in the `copyin` clause must be a `threadprivate` variable.

#### 2.7.2.8 copyprivate

The `copyprivate` clause provides a mechanism to use a private variable to broadcast a value from one member of a team to the other members. It's an alternative to using a shared variable for the value when providing such a shared variable would be difficult (for example, in a recursion requiring a different variable at each level). The `copyprivate` clause can only appear on the `single` directive.

The syntax of the `copyprivate` clause is as follows:

```cpp

copyprivate(
variable-list
)
```

The effect of the `copyprivate` clause on the variables in its variable-list occurs after the execution of the structured block associated with the `single` construct, and before any of the threads in the team have left the barrier at the end of the construct. Then, in all other threads in the team, for each variable in the *variable-list*, that variable becomes defined (as if by assignment) with the value of the corresponding variable in the thread that executed the construct's structured block.

Restrictions to the `copyprivate` clause are as follows:

- A variable that's specified in the `copyprivate` clause must not appear in a `private` or `firstprivate` clause for the same `single` directive.

- If a `single` directive with a `copyprivate` clause is encountered in the dynamic extent of a parallel region, all variables specified in the `copyprivate` clause must be private in the enclosing context.

- A variable that's specified in the `copyprivate` clause must have an accessible unambiguous copy assignment operator.

## 2.8 Directive binding

Dynamic binding of directives must adhere to the following rules:

- The `for`, `sections`, `single`, `master`, and `barrier` directives bind to the dynamically enclosing `parallel`, if one exists, regardless of the value of any `if` clause that may be present on that directive. If no parallel region is currently being executed, the directives are executed by a team composed of only the master thread.

- The `ordered` directive binds to the dynamically enclosing `for`.

- The `atomic` directive enforces exclusive access with respect to `atomic` directives in all threads, not just the current team.

- The `critical` directive enforces exclusive access with respect to `critical` directives in all threads, not just the current team.

- A directive can never bind to any directive outside the closest dynamically enclosing `parallel`.

## 2.9 Directive nesting

Dynamic nesting of directives must adhere to the following rules:

- A `parallel` directive dynamically inside another `parallel` logically establishes a new team, which is composed of only the current thread, unless nested parallelism is enabled.

- `for`, `sections`, and `single` directives that bind to the same `parallel` aren't allowed to be nested inside each other.

- `critical` directives with the same name aren't allowed to be nested inside each other. Note that this restriction isn't sufficient to prevent deadlock.

- `for`, `sections`, and `single` directives aren't permitted in the dynamic extent of `critical`, `ordered`, and `master` regions if the directives bind to the same `parallel` as the regions.

- `barrier` directives aren't permitted in the dynamic extent of `for`, `ordered`, `sections`, `single`, `master`, and `critical` regions if the directives bind to the same `parallel` as the regions.

- `master` directives aren't permitted in the dynamic extent of `for`, `sections`, and `single` directives if the `master` directives bind to the same `parallel` as the work-sharing directives.

- `ordered` directives aren't allowed in the dynamic extent of `critical` regions if the directives bind to the same `parallel` as the regions.

- Any directive that's permitted when executed dynamically inside a parallel region is also permitted when executed outside a parallel region. When executed dynamically outside a user-specified parallel region, the directive is executed by a team composed of only the master thread.
