#pragma once
#include <algorithm>
#include <collection.h>
#include <map>

namespace CppComponent
{

    public ref class MyData sealed
    {};

    //<snippet01>
    // ref class definition in C++
    public ref class SampleRefClass sealed
    {
        // Class members...
        
        // #include <valarray>
    public:
        double LogCalc(double input)
        {
            // Use C++ standard library as usual.
            return std::log(input); 
        }
        
    };
    //</snippet01>

    // ref class definition in C++
    public ref class SampleRefClass2 sealed
    {
        // Class members...
        //<snippet02>
        // #include <valarray>
    public:
        double LogCalc(double input)
        {
            // Use C++ standard library as usual.
            return std::log(input); 
        }
        //</snippet02>
    };


    //<snippet04>
    public ref class NumberClass sealed 
    {
    public:
        int GetNumber(int i);
        int GetNumber(int i, Platform::String^ str);
        double GetNumber(int i, MyData^ d);
    };
    //</snippet04>

    public ref class CollectionExample sealed
    {
    public:

        //<snippet09>
        // Windows::Foundation::Collections::IVector across the ABI.
        //#include <algorithm>
        //#include <collection.h>
        Windows::Foundation::Collections::IVector<int>^ SortVector(Windows::Foundation::Collections::IVector<int>^ vec)
        {
            std::sort(begin(vec), end(vec));
            return vec;
        }
        //</snippet09>


        //<snippet10>
        // #include <map>
        //#include <collection.h>
        Windows::Foundation::Collections::IMap<int, Platform::String^> ^GetMap(void)
        {    
            Windows::Foundation::Collections::IMap<int, Platform::String^> ^ret = 
                ref new Platform::Collections::Map<int, Platform::String^>;
            ret->Insert(1, "One ");
            ret->Insert(2, "Two ");
            ret->Insert(3, "Three ");
            ret->Insert(4, "Four ");
            ret->Insert(5, "Five ");
            return ret;
        }
        //</snippet10>
    };

    public ref class Test2 sealed
    {
        //<snippet05>
        int GetNumber(int i);
        double GetNumber(double d);
        //</snippet05>
    };



    //<snippet08>
    public  ref class MyDateClass sealed
    {
    public:
        property Windows::Foundation::DateTime TimeStamp;
        void SetTime(Windows::Foundation::DateTime dt)
        {
            auto cal = ref new Windows::Globalization::Calendar();
            cal->SetDateTime(dt);
            TimeStamp = cal->GetDateTime(); // or TimeStamp = dt;
        }
    };
    //</snippet08>


    //<snippet11>

    //Properties
    public delegate void PropertyChangedHandler(Platform::Object^ sender, int arg);
    public ref class PropertyExample  sealed
    {
    public:
        PropertyExample(){}

        // Event that is fired when PropertyA changes
        event PropertyChangedHandler^ PropertyChangedEvent;

        // Property that has custom setter/getter
        property int PropertyA
        {
            int get() { return m_propertyAValue; }
            void set(int propertyAValue) 
            {
                if (propertyAValue != m_propertyAValue)
                {
                    m_propertyAValue = propertyAValue;
                    // Fire event. (See event example below.)
                    PropertyChangedEvent(this, propertyAValue);
                }
            }
        }

        // Trivial get/set property that has a compiler-generated backing store.
        property Platform::String^ PropertyB;

    private:
        // Backing store for propertyA.
        int m_propertyAValue;
    };


    //</snippet11>

    //<snippet13>
    public delegate void SomeHandler(Platform::String^ str);

    public ref class LangSample sealed
    {
        //<snippet12>
    public:
        event SomeHandler^ someEvent;
        //</snippet12>
        property Platform::String^ PropertyA;

        // Method that fires an event
        void FireEvent(Platform::String^ str)
        {
            someEvent(Platform::String::Concat(str, PropertyA->ToString()));
        }
        //...
    };
    //</snippet13>

    //<snippet14>
    public enum class Direction {North, South, East, West};

    public ref class EnumExampleClass sealed
    {
    public:
        property Direction CurrentDirection
        {
            Direction  get(){return m_direction; }
        }

    private:
        Direction m_direction;
    };
    //</snippet14>


}

// I separate this out to show the namespace scope in the snippet uncluttered by the other examples.
//<snippet03>
namespace CppComponent
{
    // Custom struct
    public value struct PlayerData
    {
        Platform::String^ Name;
        int Number;
        double ScoringAverage;
    };

    public ref class Player sealed
    {
    private:
        PlayerData m_player;
    public:
        property PlayerData PlayerStats 
        {
            PlayerData get(){ return m_player; }
            void set(PlayerData data) {m_player = data;}
        }
    };
}
//</snippet03>