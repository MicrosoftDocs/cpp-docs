// philosophers-join.cpp
// compile with: /EHsc
#include <agents.h>
#include <string>
#include <array>
#include <iostream>
#include <algorithm>
#include <random>

using namespace concurrency;
using namespace std;

// Defines a single chopstick.
typedef int chopstick;

// The total number of philosophers.
const int philosopher_count = 5;

// The number of times each philosopher should eat.
const int eat_count = 50;

// Implements the logic for a single dining philosopher.
class philosopher : public agent 
{
public:
   explicit philosopher(unbounded_buffer<chopstick>& left, 
      unbounded_buffer<chopstick>& right, const wstring& name)
      : _left(left)
      , _right(right)
      , _name(name)
      , _random_generator(42)
   {
      send(_times_eaten, 0);
   }

   // Retrieves the number of times the philosopher has eaten.
   int times_eaten()
   {
      return receive(_times_eaten);
   }

   // Retrieves the name of the philosopher.
   wstring name() const
   {
      return _name;
   }

protected:
   // Performs the main logic of the dining philosopher algorithm.
   void run()
   {
      // Repeat the thinks/eat cycle a set number of times.
      for (int n = 0; n < eat_count; ++n)
      {
         think();
         
         vector<int> v = pickup_chopsticks(); 
         
         eat();
                  
         send(_times_eaten, n+1);

         putdown_chopsticks(v[0], v[1]);
      }

      done();
   }

   // Gains access to the chopsticks.
   vector<int> pickup_chopsticks()
   {
      // Create a non-greedy join object and link it to the left and right 
      // chopstick.
      join<chopstick, non_greedy> j(2);
      _left.link_target(&j);
      _right.link_target(&j);

      // Receive from the join object. This resolves the deadlock situation
      // because a non-greedy join removes the messages only when a message
      // is available from each of its sources.
      return receive(&j);
   }

   // Releases the chopsticks for others.
   void putdown_chopsticks(int left, int right)
   {
      // Add the values of the messages back to the message queue.
      asend(&_left, left);
      asend(&_right, right);
   }

   // Simulates thinking for a brief period of time.
   void think()
   {
      random_wait(100);
   }

   // Simulates eating for a brief period of time.
   void eat()
   {      
      random_wait(100);      
   }

private:
   // Yields the current context for a random period of time.
   void random_wait(unsigned int max)
   {
      concurrency::wait(_random_generator()%max);
   }

private:
   // Message buffer for the left chopstick.
   unbounded_buffer<chopstick>& _left;
   // Message buffer for the right chopstick.
   unbounded_buffer<chopstick>& _right;

   // The name of the philosopher.
   wstring _name;
   // Stores the number of times the philosopher has eaten.
   overwrite_buffer<int> _times_eaten;

   // A random number generator.
   mt19937 _random_generator;
};

int wmain()
{
   // Create an array of message buffers to hold the chopsticks.
   array<unbounded_buffer<chopstick>, philosopher_count> chopsticks;
   
   // Send a value to each message buffer in the array.
   // The value of the message is not important. A buffer that contains
   // any message indicates that the chopstick is available.
   for_each (begin(chopsticks), end(chopsticks), 
      [](unbounded_buffer<chopstick>& c) {
         send(c, 1);
   });
   
   // Create an array of philosophers. Each pair of neighboring 
   // philosophers shares one of the chopsticks.
   array<philosopher, philosopher_count> philosophers = {
      philosopher(chopsticks[0], chopsticks[1], L"aristotle"),
      philosopher(chopsticks[1], chopsticks[2], L"descartes"),
      philosopher(chopsticks[2], chopsticks[3], L"hobbes"),
      philosopher(chopsticks[3], chopsticks[4], L"socrates"),
      philosopher(chopsticks[4], chopsticks[0], L"plato"),
   };
   
   // Begin the simulation.
   for_each (begin(philosophers), end(philosophers), [](philosopher& p) {
      p.start();
   });

   // Wait for each philosopher to finish and print his name and the number
   // of times he has eaten.
   for_each (begin(philosophers), end(philosophers), [](philosopher& p) {
      agent::wait(&p);
      wcout << p.name() << L" ate " << p.times_eaten() << L" times." << endl;
   });
}