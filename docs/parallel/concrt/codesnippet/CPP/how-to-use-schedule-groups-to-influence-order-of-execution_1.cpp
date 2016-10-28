// scheduling-protocol.cpp
// compile with: /EHsc
#include <agents.h>
#include <vector>
#include <algorithm>
#include <iostream>
#include <sstream>

using namespace concurrency;
using namespace std;

#pragma optimize( "", off )
// Simulates work by performing a long spin loop.
void spin_loop()
{
   for (int i = 0; i < 500000000; ++i)
   {
   }
}
#pragma optimize( "", on )

// Agent that performs some work and then yields the current context.
class work_yield_agent : public agent
{
public:
   explicit work_yield_agent(
      unsigned int group_number, unsigned int task_number)
      : _group_number(group_number)
      , _task_number(task_number)
   {
   }

   explicit work_yield_agent(Scheduler& scheduler,
      unsigned int group_number, unsigned int task_number)
      : agent(scheduler)
      , _group_number(group_number)
      , _task_number(task_number)
   {
   }

   explicit work_yield_agent(ScheduleGroup& group,
      unsigned int group_number, unsigned int task_number)
      : agent(group)       
      , _group_number(group_number)
      , _task_number(task_number)
   {
   }
   
protected:
   // Performs the work of the agent.   
   void run()
   {
      wstringstream header, ss;

      // Create a string that is prepended to each message.
      header << L"group " << _group_number 
             << L",task " << _task_number << L": ";

      // Perform work.
      ss << header.str() << L"first loop..." << endl;
      wcout << ss.str();
      spin_loop();

      // Cooperatively yield the current context. 
      // The task scheduler will then run all blocked contexts.
      ss = wstringstream();
      ss << header.str() << L"waiting..." << endl;
      wcout << ss.str();
      concurrency::wait(0);

      // Perform more work.
      ss = wstringstream();
      ss << header.str() << L"second loop..." << endl;
      wcout << ss.str();
      spin_loop();

      // Print a final message and then set the agent to the 
      // finished state.
      ss = wstringstream();
      ss << header.str() << L"finished..." << endl;
      wcout << ss.str();

      done();
   }  

private:
   // The group number that the agent belongs to.
   unsigned int _group_number;
   // A task number that is associated with the agent.
   unsigned int _task_number;
};

// Creates and runs several groups of agents. Each group of agents is associated 
// with a different schedule group.
void run_agents()
{
   // The number of schedule groups to create.
   const unsigned int group_count = 2;
   // The number of agent to create per schedule group.
   const unsigned int tasks_per_group = 2;

   // A collection of schedule groups.
   vector<ScheduleGroup*> groups;
   // A collection of agents.
   vector<agent*> agents;

   // Create a series of schedule groups. 
   for (unsigned int group = 0; group < group_count; ++group)
   {
      groups.push_back(CurrentScheduler::CreateScheduleGroup());

      // For each schedule group, create a series of agents.
      for (unsigned int task = 0; task < tasks_per_group; ++task)
      {
         // Add an agent to the collection. Pass the current schedule 
         // group to the work_yield_agent constructor to schedule the agent
         // in this group.
         agents.push_back(new work_yield_agent(*groups.back(), group, task));
      }
   }

   // Start each agent.
   for_each(begin(agents), end(agents), [](agent* a) {
      a->start();
   });

   // Wait for all agents to finsih.
   agent::wait_for_all(agents.size(), &agents[0]);

   // Free the memory that was allocated for each agent.
   for_each(begin(agents), end(agents), [](agent* a) {
      delete a;
   });

   // Release each schedule group.
   for_each(begin(groups), end(groups), [](ScheduleGroup* group) {
      group->Release();
   });
}

int wmain()
{
   // Run the agents two times. Each run uses a scheduler
   // policy that limits the maximum number of processing resources to two.

   // The first run uses the EnhanceScheduleGroupLocality 
   // scheduling protocol. 
   wcout << L"Using EnhanceScheduleGroupLocality..." << endl;
   CurrentScheduler::Create(SchedulerPolicy(3, 
      MinConcurrency, 1,
      MaxConcurrency, 2,
      SchedulingProtocol, EnhanceScheduleGroupLocality));

   run_agents();
   CurrentScheduler::Detach();

   wcout << endl << endl;

   // The second run uses the EnhanceForwardProgress 
   // scheduling protocol. 
   wcout << L"Using EnhanceForwardProgress..." << endl;
   CurrentScheduler::Create(SchedulerPolicy(3, 
      MinConcurrency, 1,
      MaxConcurrency, 2,
      SchedulingProtocol, EnhanceForwardProgress));

   run_agents();
   CurrentScheduler::Detach();
}