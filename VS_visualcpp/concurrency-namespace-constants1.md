---
title: "concurrency namespace constants1"
ms.custom: na
ms.date: 10/03/2016
ms.reviewer: na
ms.suite: na
ms.tgt_pltfrm: na
ms.topic: article
H1: concurrency namespace constants
ms.assetid: 6f81fc4c-b10c-479e-8717-9c292360d5a0
caps.latest.revision: 3
---
# concurrency namespace constants1
||||  
|-|-|-|  
|[AgentEventGuid Constant](#agenteventguid_constant)|[CONCRT_RM_VERSION_1 Constant](#concrt_rm_version_1_constant)|[COOPERATIVE_TIMEOUT_INFINITE Constant](#cooperative_timeout_infinite_constant)|  
|[COOPERATIVE_WAIT_TIMEOUT Constant](#cooperative_wait_timeout_constant)|[ChoreEventGuid Constant](#choreeventguid_constant)|[ConcRTEventGuid Constant](#concrteventguid_constant)|  
|[ConcRT_ProviderGuid Constant](#concrt_providerguid_constant)|[ContextEventGuid Constant](#contexteventguid_constant)|[INHERIT_THREAD_PRIORITY Constant](#inherit_thread_priority_constant)|  
|[LockEventGuid Constant](#lockeventguid_constant)|[MaxExecutionResources Constant](#maxexecutionresources_constant)|[PPLParallelForEventGuid Constant](#pplparallelforeventguid_constant)|  
|[PPLParallelForeachEventGuid Constant](#pplparallelforeacheventguid_constant)|[PPLParallelInvokeEventGuid Constant](#pplparallelinvokeeventguid_constant)|[ResourceManagerEventGuid Constant](#resourcemanagereventguid_constant)|  
|[ScheduleGroupEventGuid Constant](#schedulegroupeventguid_constant)|[SchedulerEventGuid Constant](#schedulereventguid_constant)|[VirtualProcessorEventGuid Constant](#virtualprocessoreventguid_constant)|  
  
##  <a name="agenteventguid_constant"></a>  AgentEventGuid Constant  
 A category GUID ({B9B5B78C-0713-4898-A21A-C67949DCED07}) describing ETW events fired by the Agents library in the Concurrency Runtime.  
  
```  
const __declspec(selectany) GUID AgentEventGuid = {0xb9b5b78c, 0x713, 0x4898, { 0xa2, 0x1a, 0xc6, 0x79, 0x49, 0xdc, 0xed, 0x7 } };  
```  
  
##  <a name="choreeventguid_constant"></a>  ChoreEventGuid Constant  
 A category GUID describing ETW events fired by the Concurrency Runtime that are directly related to chores or tasks.  
  
```  
const __declspec(selectany) GUID ChoreEventGuid = { 0x7E854EC7, 0xCDC4, 0x405a, { 0xB5, 0xB2, 0xAA, 0xF7, 0xC9, 0xE7, 0xD4, 0x0C } };  
```  
  
### Remarks  
 This category of events is not currently fired by the Concurrency Runtime.  
  
##  <a name="concrt_providerguid_constant"></a>  ConcRT_ProviderGuid Constant  
 The ETW provider GUID for the Concurrency Runtime.  
  
```  
const __declspec(selectany) GUID ConcRT_ProviderGuid = { 0xF7B697A3, 0x4DB5, 0x4d3b, { 0xBE, 0x71, 0xC4, 0xD2, 0x84, 0xE6, 0x59, 0x2F } };  
```  
  
##  <a name="concrt_rm_version_1_constant"></a>  CONCRT_RM_VERSION_1 Constant  
 Indicates support of the Resource Manager interface defined in Visual Studio 2010.  
  
```  
const unsigned int CONCRT_RM_VERSION_1 = 0x00010000;  
```  
  
##  <a name="concrteventguid_constant"></a>  ConcRTEventGuid Constant  
 A category GUID describing ETW events fired by the Concurrency Runtime that are not more specifically described by another category.  
  
```  
const __declspec(selectany) GUID ConcRTEventGuid = { 0x72B14A7D, 0x704C, 0x423e, { 0x92, 0xF8, 0x7E, 0x6D, 0x64, 0xBC, 0xB9, 0x2A } };  
```  
  
### Remarks  
 This category of events is not currently fired by the Concurrency Runtime.  
  
##  <a name="cooperative_timeout_infinite_constant"></a>  COOPERATIVE_TIMEOUT_INFINITE Constant  
 Value indicating that a wait should never time out.  
  
```  
const unsigned int COOPERATIVE_TIMEOUT_INFINITE = (unsigned int)-1;  
```  
  
##  <a name="cooperative_wait_timeout_constant"></a>  COOPERATIVE_WAIT_TIMEOUT Constant  
 Value indicating that a wait timed out.  
  
```  
const size_t COOPERATIVE_WAIT_TIMEOUT = SIZE_MAX;  
```  
  
##  <a name="contexteventguid_constant"></a>  ContextEventGuid Constant  
 A category GUID describing ETW events fired by the Concurrency Runtime that are directly related to contexts.  
  
```  
const __declspec(selectany) GUID ContextEventGuid = { 0x5727A00F, 0x50BE, 0x4519, { 0x82, 0x56, 0xF7, 0x69, 0x98, 0x71, 0xFE, 0xCB } };  
```  
  
##  <a name="inherit_thread_priority_constant"></a>  INHERIT_THREAD_PRIORITY Constant  
 Special value for the policy key                 `ContextPriority` indicating that the thread priority of all contexts in the scheduler should be the same as that of the thread which created the scheduler.  
  
```  
const unsigned int INHERIT_THREAD_PRIORITY = 0x0000F000;  
```  
  
##  <a name="lockeventguid_constant"></a>  LockEventGuid Constant  
 A category GUID describing ETW events fired by the Concurrency Runtime that are directly related to locks.  
  
```  
const __declspec(selectany) GUID LockEventGuid = { 0x79A60DC6, 0x5FC8, 0x4952, { 0xA4, 0x1C, 0x11, 0x63, 0xAE, 0xEC, 0x5E, 0xB8 } };  
```  
  
### Remarks  
 This category of events is not currently fired by the Concurrency Runtime.  
  
##  <a name="maxexecutionresources_constant"></a>  MaxExecutionResources Constant  
 Special value for the policy keys                 `MinConcurrency` and                 `MaxConcurrency`. Defaults to the number of hardware threads on the machine in the absence of other constraints.  
  
```  
const unsigned int MaxExecutionResources = 0xFFFFFFFF;  
```  
  
##  <a name="pplparallelforeventguid_constant"></a>  PPLParallelForEventGuid Constant  
 A category GUID describing ETW events fired by the Concurrency Runtime that are directly related to usage of the                 `parallel_for` function.  
  
```  
const __declspec(selectany) GUID PPLParallelForEventGuid = { 0x31c8da6b, 0x6165, 0x4042, { 0x8b, 0x92, 0x94, 0x9e, 0x31, 0x5f, 0x4d, 0x84 } };  
```  
  
##  <a name="pplparallelforeacheventguid_constant"></a>  PPLParallelForeachEventGuid Constant  
 A category GUID describing ETW events fired by the Concurrency Runtime that are directly related to usage of the                 `parallel_for_each` function.  
  
```  
const __declspec(selectany) GUID PPLParallelForeachEventGuid = { 0x5cb7d785, 0x9d66, 0x465d, { 0xba, 0xe1, 0x46, 0x11, 0x6, 0x1b, 0x54, 0x34 } };  
```  
  
##  <a name="pplparallelinvokeeventguid_constant"></a>  PPLParallelInvokeEventGuid Constant  
 A category GUID describing ETW events fired by the Concurrency Runtime that are directly related to usage of the                 `parallel_invoke` function.  
  
```  
const __declspec(selectany) GUID PPLParallelInvokeEventGuid = { 0xd1b5b133, 0xec3d, 0x49f4, { 0x98, 0xa3, 0x46, 0x4d, 0x1a, 0x9e, 0x46, 0x82 } };  
```  
  
##  <a name="resourcemanagereventguid_constant"></a>  ResourceManagerEventGuid Constant  
 A category GUID describing ETW events fired by the Concurrency Runtime that are directly related to the resource manager.  
  
```  
const __declspec(selectany) GUID ResourceManagerEventGuid = { 0x2718D25B, 0x5BF5, 0x4479, { 0x8E, 0x88, 0xBA, 0xBC, 0x64, 0xBD, 0xBF, 0xCA } };  
```  
  
### Remarks  
 This category of events is not currently fired by the Concurrency Runtime.  
  
##  <a name="schedulegroupeventguid_constant"></a>  ScheduleGroupEventGuid Constant  
 A category GUID describing ETW events fired by the Concurrency Runtime that are directly related to schedule groups.  
  
```  
const __declspec(selectany) GUID ScheduleGroupEventGuid = { 0xE8A3BF1F, 0xA86B, 0x4390, { 0x9C, 0x60, 0x53, 0x90, 0xB9, 0x69, 0xD2, 0x2C } };  
```  
  
### Remarks  
 This category of events is not currently fired by the Concurrency Runtime.  
  
##  <a name="schedulereventguid_constant"></a>  SchedulerEventGuid Constant  
 A category GUID describing ETW events fired by the Concurrency Runtime that are directly related to scheduler activity.  
  
```  
const __declspec(selectany) GUID SchedulerEventGuid = { 0xE2091F8A, 0x1E0A, 0x4731, { 0x84, 0xA2, 0x0D, 0xD5, 0x7C, 0x8A, 0x52, 0x61 } };  
```  
  
##  <a name="virtualprocessoreventguid_constant"></a>  VirtualProcessorEventGuid Constant  
 A category GUID describing ETW events fired by the Concurrency Runtime that are directly related to virtual processors.  
  
```  
const __declspec(selectany) GUID VirtualProcessorEventGuid = { 0x2f27805f, 0x1676, 0x4ecc, { 0x96, 0xfa, 0x7e, 0xb0, 0x9d, 0x44, 0x30, 0x2f } };  
```  
  
## See Also  
 [concurrency Namespace](../VS_visualcpp/concurrency-Namespace.md)