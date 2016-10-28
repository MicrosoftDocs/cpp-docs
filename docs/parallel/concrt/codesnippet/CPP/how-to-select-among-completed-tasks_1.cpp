// find-employee.cpp
// compile with: /EHsc
#include <agents.h>
#include <ppl.h>
#include <array>
#include <iostream>
#include <random>

using namespace concurrency;
using namespace std;

// Contains information about an employee.
struct employee
{
   int id;
   float salary;
};

// Finds the first employee that has the provided id or salary.
template <typename T>
void find_employee(const T& employees, int id, float salary)
{
   // Holds the salary for the employee with the provided id.
   single_assignment<float> find_id_result;

   // Holds the id for the employee with the provided salary.
   single_assignment<int> find_salary_result;


   // Holds a message if no employee with the provided id exists.
   single_assignment<bool> id_not_found;

   // Holds a message if no employee with the provided salary exists.
   single_assignment<bool> salary_not_found;

   // Create a join object for the "not found" buffers.
   // This join object sends a message when both its members holds a message 
   // (in other words, no employee with the provided id or salary exists).
   auto not_found = make_join(&id_not_found, &salary_not_found);


   // Create a choice object to select among the following cases:
   // 1. An employee with the provided id exists.
   // 2. An employee with the provided salary exists.
   // 3. No employee with the provided id or salary exists.
   auto selector = make_choice(&find_id_result, &find_salary_result, &not_found);
   

   // Create a task that searches for the employee with the provided id.
   auto search_id_task = make_task([&]{
      auto result = find_if(begin(employees), end(employees), 
         [&](const employee& e) { return e.id == id; });
      if (result != end(employees))
      {
         // The id was found, send the salary to the result buffer.
         send(find_id_result, result->salary);
      }
      else
      {
         // The id was not found.
         send(id_not_found, true);
      }
   });

   // Create a task that searches for the employee with the provided salary.
   auto search_salary_task = make_task([&]{
      auto result = find_if(begin(employees), end(employees), 
         [&](const employee& e) { return e.salary == salary; });
      if (result != end(employees))
      {
         // The salary was found, send the id to the result buffer.
         send(find_salary_result, result->id);
      }
      else
      {
         // The salary was not found.
         send(salary_not_found, true);
      }
   });

   // Use a structured_task_group object to run both tasks.
   structured_task_group tasks;
   tasks.run(search_id_task);
   tasks.run(search_salary_task);

   wcout.setf(ios::fixed, ios::fixed);
   wcout.precision(2);

   // Receive the first object that holds a message and print a message.
   int index = receive(selector);
   switch (index)
   {
   case 0:
      wcout << L"Employee with id " << id << L" has salary " 
            << receive(find_id_result);
      break;
   case 1:
      wcout << L"Employee with salary " << salary << L" has id " 
            << receive(find_salary_result);
      break;
   case 2:
      wcout << L"No employee has id " << id << L" or salary " << salary;
      break;
   default:
      __assume(0);
   }
   wcout << L'.' << endl;
   
   // Cancel any active tasks and wait for the task group to finish.
   tasks.cancel();
   tasks.wait();
}

int wmain()
{
   // Create an array of employees and assign each one a 
   // random id and salary.

   array<employee, 10000> employees;
   
   mt19937 gen(15);
   const float base_salary = 25000.0f;
   for (int i = 0; i < employees.size(); ++i)
   {
      employees[i].id = gen()%100000;

      float bonus = static_cast<float>(gen()%5000);
      employees[i].salary = base_salary + bonus;
   }

   // Search for several id and salary values.

   find_employee(employees, 14758, 30210.00);
   find_employee(employees, 340, 29150.00);
   find_employee(employees, 61935, 29255.90);
   find_employee(employees, 899, 31223.00);
}