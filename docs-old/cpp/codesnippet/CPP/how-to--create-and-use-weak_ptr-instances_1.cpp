#include <iostream>
#include <memory>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

class Controller 
{
public:
    int Num;
    wstring Status;
    vector<weak_ptr<Controller>> others;
    explicit Controller(int i) : Num(i) , Status(L"On")
    {
        wcout << L"Creating Controller" << Num << endl;
    }

    ~Controller()
    {
        wcout << L"Destroying Controller" << Num << endl;
    }

    // Demonstrates how to test whether the  
    // pointed-to memory still exists or not. 
    void CheckStatuses() const
    {
        for_each(others.begin(), others.end(), [] (weak_ptr<Controller> wp)
        {
            try
            {
                auto p = wp.lock();
                wcout << L"Status of " << p->Num << " = " << p->Status << endl;
            }

            catch (bad_weak_ptr b)
            {
                wcout << L"Null object" << endl;
            }                
        });
    }
};

void RunTest()
{
    vector<shared_ptr<Controller>> v;

    v.push_back(shared_ptr<Controller>(new Controller(0)));
    v.push_back(shared_ptr<Controller>(new Controller(1)));
    v.push_back(shared_ptr<Controller>(new Controller(2)));
    v.push_back(shared_ptr<Controller>(new Controller(3)));
    v.push_back(shared_ptr<Controller>(new Controller(4)));

    // Each controller depends on all others not being deleted. 
    // Give each controller a pointer to all the others. 
    for (int i = 0 ; i < v.size(); ++i)
    {
        for_each(v.begin(), v.end(), [v,i] (shared_ptr<Controller> p)
        {
            if(p->Num != i)
            {
                v[i]->others.push_back(weak_ptr<Controller>(p));
                wcout << L"push_back to v[" << i << "]: " << p->Num << endl;
            }
        });        
    }

    for_each(v.begin(), v.end(), [](shared_ptr<Controller>& p)
    {
        wcout << L"use_count = " << p.use_count() << endl;
        p->CheckStatuses();
    });
}

int main()
{    
    RunTest(); 
    wcout << L"Press any key" << endl;
    char ch;
    cin.getline(&ch, 1);
}