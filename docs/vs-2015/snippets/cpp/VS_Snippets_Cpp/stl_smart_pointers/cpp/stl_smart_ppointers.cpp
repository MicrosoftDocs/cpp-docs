#include "stdafx.h"

#include <iostream>
#include <string>
#include <memory>
#include <algorithm>
#include <vector>
#include <iterator>
using namespace std;

class Zebra
{
private:
    int nStripes;
    string name;
public:
    Zebra() : nStripes(-1), name("Default")
    {
        cout << "I'm a default Zebra." << endl;
    }

    Zebra(int i, string s) : nStripes(i), name(s)
    {
        std::cout << "My name is " << name 
            << " and I have " << nStripes 
            << " stripes." << endl;
    }

    virtual ~Zebra()
    {
        cout << "Goodbye from " << name << endl;
    }
};

void MakeZebras()
{
    auto pzeb = make_shared<Zebra>();
    auto pGeorge = make_shared<Zebra>(5, "George");
}



class MediaAsset
{
protected:
    std::wstring id;
public:
    MediaAsset() : id(L"Default"){}
    MediaAsset(std::wstring init) : id(init) {}
    virtual ~MediaAsset(){}
};

class Photo : public MediaAsset
{
public:
    std::wstring dateTaken_;
    std::wstring location_;
    std::wstring subject_;
    Photo() : dateTaken_(L""), location_(L""), subject_(L"") {} 
    Photo(std::wstring dt, std::wstring loc, std::wstring sub) 
        : dateTaken_(dt), location_(loc), subject_(sub) {}
};

class Song : public MediaAsset
{
public:
    std::wstring title;
    std::wstring artist;
    std::wstring duration;
    std::wstring format;
 //   Song(std::wstring artist, std::wstring title ) : artist(artist), title(title){}
	Song(std::wstring artist, std::wstring title) : artist(artist), title(title){}
   /* Song(Song&& other)
    {
        title = other.title;
        artist = other.artist;
        duration = other.duration;
        format = other.format;

        other.title = nullptr;
        other.artist = nullptr;
        other.duration = nullptr;
        other.format = nullptr;
    }*/
    ~Song() 
    {
        std::wcout << L"Deleting " << title << L":" << artist << std::endl; 
    }

   /* Song& operator=(Song&& other)
    {
        if(this != &other)
        {
            this->artist = other.artist;
            this->title = other.title;
            this->duration = other.duration;
            this->format = other.format;

            other.artist = nullptr;
            other.title = nullptr;
            other.duration = nullptr;
            other.format = nullptr;            
        }
        return *this;
    }*/

    bool operator ==(const Song& other)
    {
        return this->artist.compare(other.artist) == 0  && 
            this->title.compare(other.title) == 0;
    }
private:
	/*Song(Song& other)
	{
		this->artist = other.artist;
		this->title = other.title;
		this->duration = other.duration;
		this->format = other.format;
	}
	Song& operator=(Song& other)
	{
		this->artist = other.artist;
		this->title = other.title;
		this->duration = other.duration;
		this->format = other.format;
	}*/
};

shared_ptr<Song> MakeSongPtr(wstring artist, wstring title)
{
    Song* s = new Song(artist, title);
    shared_ptr<Song> p(s);
    //return make_shared<Song>(artist,title);
    return p;
}



void CreateSharedPointersGalore()
{
    int i = 9;
    double d = static_cast<double>(i);
    //<snippet1>

    // Use make_shared function when possible.
    auto sp1 = make_shared<Song>(L"The Beatles", L"Im Happy Just to Dance With You");

    // Ok, but slightly less efficient. 
    // Note: Using new expression as constructor argument
    // creates no named variable for other code to access.
    shared_ptr<Song> sp2(new Song(L"Lady Gaga", L"Just Dance"));

    // When initialization must be separate from declaration, e.g. class members, 
    // initialize with nullptr to make your programming intent explicit.
    shared_ptr<Song> sp5(nullptr);
    //Equivalent to: shared_ptr<Song> sp5;
    //...
    sp5 = make_shared<Song>(L"Elton John", L"I'm Still Standing");
    //</snippet1>

    //<snippet2>
    //Initialize with copy constructor. Increments ref count.
    auto sp3(sp2);

    //Initialize via assignment. Increments ref count.
    auto sp4 = sp2;

    //Initialize with nullptr. sp7 is empty.
    shared_ptr<Song> sp7(nullptr);

    // Initialize with another shared_ptr. sp1 and sp2
    // swap pointers as well as ref counts.
    sp1.swap(sp2);
    //</snippet2>
}

void CompareSharedPointers()
{
    //<snippet3>

    // Initialize two separate raw pointers.
    // Note that they contain the same values.
    auto song1 = new Song(L"Village People", L"YMCA");
    auto song2 = new Song(L"Village People", L"YMCA");

    // Create two unrelated shared_ptrs.
    shared_ptr<Song> p1(song1);    
    shared_ptr<Song> p2(song2);

    // Unrelated shared_ptrs are never equal.
    wcout << "p1 < p2 = " << std::boolalpha << (p1 < p2) << endl;
    wcout << "p1 == p2 = " << std::boolalpha <<(p1 == p2) << endl;

    // Related shared_ptr instances are always equal.
    shared_ptr<Song> p3(p2);
    wcout << "p3 == p2 = " << std::boolalpha << (p3 == p2) << endl; 
    //</snippet3>
}

const void PlayConstSong(shared_ptr<const Song>& s )
{
    wcout << L"playing" << endl;
}

const void PlaySong(shared_ptr<Song>& s )
{
    wcout << L"playing" << endl;
}

void SharedPtrCopy()
{
    //<snippet4>
    vector<shared_ptr<Song>> v;

    v.push_back(make_shared<Song>(L"Bob Dylan", L"The Times They Are A Changing"));
    v.push_back(make_shared<Song>(L"Aretha Franklin", L"Bridge Over Troubled Water"));
    v.push_back(make_shared<Song>(L"Thalía", L"Entre El Mar y Una Estrella"));

    vector<shared_ptr<Song>> v2;
    remove_copy_if(v.begin(), v.end(), back_inserter(v2), [] (shared_ptr<Song> s) 
    {
        return s->artist.compare(L"Bob Dylan") == 0;		
    });

    for (const auto& s : v2)
    {
        wcout << s->artist << L":" << s->title << endl;
    }
    //</snippet4>
}

void SharedPtrCast()
{
    //<snippet5>
    vector<shared_ptr<MediaAsset>> assets;

    assets.push_back(shared_ptr<Song>(new Song(L"Himesh Reshammiya", L"Tera Surroor")));
    assets.push_back(shared_ptr<Song>(new Song(L"Penaz Masani", L"Tu Dil De De")));
    assets.push_back(shared_ptr<Photo>(new Photo(L"2011-04-06", L"Redmond, WA", L"Soccer field at Microsoft.")));

    vector<shared_ptr<MediaAsset>> photos;

    copy_if(assets.begin(), assets.end(), back_inserter(photos), [] (shared_ptr<MediaAsset> p) -> bool
    {
        // Use dynamic_pointer_cast to test whether
        // element is a shared_ptr<Photo>.
        shared_ptr<Photo> temp = dynamic_pointer_cast<Photo>(p);		
        return temp.get() != nullptr;
    });

    for (const auto&  p : photos)
    {
        // We know that the photos vector contains only 
        // shared_ptr<Photo> objects, so use static_cast.
        wcout << "Photo location: " << (static_pointer_cast<Photo>(p))->location_ << endl;
    }
    //</snippet5>

    shared_ptr<void> p7; //this works why?
}

void TestCallByValue(shared_ptr<Song> p)
{
    wcout << "total use_count in =" << p.use_count() << endl;
    wcout << L"in function" << endl;
    throw;
}

void TestPassByRef(shared_ptr<Song>& p)
{
    p.reset(new Song(L"Martha Reeves", L"Dancing in the Streets"));
}

void TestPassing()
{
    auto s = make_shared<Song>(L"The Beatles", L"Yer Birthday");
    wcout << "total use_count before =" << s.use_count() << endl;
    //wstring w = NULL;
    //s = NULL;
    //TestCallByValue(s);
    TestPassByRef(s);
    wcout << "total use_count after =" << s.use_count() << endl;
}

//<snippet111>

class LargeObject
{
public:
    void DoSomething(){}
};

void ProcessLargeObject(const LargeObject& lo){}
void SmartPointerDemo()
{    
    // Create the object and pass it to a smart pointer
    std::unique_ptr<LargeObject> pLarge = std::unique_ptr<LargeObject>(new LargeObject());

    //Call a method on the object
    pLarge->DoSomething();

    // Pass a reference to a method.
    ProcessLargeObject(*pLarge);

} //pLarge is deleted automatically when function block goes out of scope.
//</snippet111>

//<snippet112>
void SmartPointerDemo2()
{
    // Create the object and pass it to a smart pointer
    std::unique_ptr<LargeObject> pLarge = std::unique_ptr<LargeObject>(new LargeObject());

    //Call a method on the object
    pLarge->DoSomething();

    // Free the memory before we exit function block.
    pLarge.reset();

    // Do some other work...

}
//</snippet112>

//<snippet113>

void LegacyLargeObjectFunction(LargeObject* o)
{
    // Do work and return...
}

void SmartPointerDemo3()
{
    // Create the object and pass it to a smart pointer
    std::unique_ptr<LargeObject> pLarge = std::unique_ptr<LargeObject>(new LargeObject());

    //Call a method on the object
    pLarge->DoSomething();

    // Pass raw pointer to a legacy API
    LegacyLargeObjectFunction(pLarge.get());    
}
//</snippet113>

//<snippet114>
void SmartPointerDemo4()
{
    // Create the object and pass it to a smart pointer
    std::unique_ptr<LargeObject> pLarge = std::unique_ptr<LargeObject>(new LargeObject());

    //Call a method on the object
    pLarge->DoSomething();

    // Pass raw pointer to a legacy API
    LegacyLargeObjectFunction(pLarge.get());    
}
//</snippet114>

//<snippet210>
unique_ptr<Song> SongFactory(const std::wstring& artist, const std::wstring& title)
{
    // Implicit move operation into the variable that stores the result.
    return make_unique<Song>(artist, title);
}

void MakeSongs()
{
    // Create a new unique_ptr with a new object.
    auto song = make_unique<Song>(L"Mr. Children", L"Namonaki Uta");

    // Use the unique_ptr.
    vector<wstring> titles = { song->title };

    // Move raw pointer from one unique_ptr to another.
    unique_ptr<Song> song2 = std::move(song);

    // Obtain unique_ptr from function that returns by value.
    auto song3 = SongFactory(L"Michael Jackson", L"Beat It");
}
//</snippet210>

//<snippet211>
void SongVector()
{
    vector<unique_ptr<Song>> songs;

    // Create a few new unique_ptr<Song> instances
    // and add them to vector using implicit move semantics.
    songs.push_back(make_unique<Song>(L"B'z", L"Juice"));
    songs.push_back(make_unique<Song>(L"Namie Amuro", L"Funky Town"));
    songs.push_back(make_unique<Song>(L"Kome Kome Club", L"Kimi ga Iru Dake de"));
    songs.push_back(make_unique<Song>(L"Ayumi Hamasaki", L"Poker Face"));

    // Pass by const reference when possible to avoid copying.
    for (const auto& song : songs)
    {
        wcout << L"Artist: " << song->artist << L"   Title: " << song->title << endl; 
    }    
}
//</snippet211>

class ClassFactory{public: void DoSomething(){};};
//<snippet212>

class MyClass
{
private:
    // MyClass owns the unique_ptr.
    unique_ptr<ClassFactory> factory;
public:

    // Initialize by using make_unique with ClassFactory default constructor.
    MyClass() : factory ( make_unique<ClassFactory>())
    {
    }

    void MakeClass()
    {
        factory->DoSomething();
    }
};
//</snippet212>


// This snippet was used as the source for the graphic at the top of the article
void CreateUnique_Ptrs()
{
	auto ptrA = make_unique<Song>(L"Diana Krall", L"The Look of Love");
	//...
	auto ptrB = std::move(ptrA);
}


void MakeUniquePtrArray()
{
	//<snippet213>
	// Create a unique_ptr to an array of 5 integers.
	auto p = make_unique<int[]>(5);

	// Initialize the array.
	for (int i = 0; i < 5; ++i)
	{
		p[i] = i;
		wcout << p[i] << endl;
	}
	//</snippet213>
}

//<snippet214>
class Animal
{
private:
    std::wstring genus;
    std::wstring species;
    int age;
    double weight;
public:
    Animal(const wstring&, const wstring&, int, double){/*...*/ }
    Animal(){}
};

void MakeAnimals()
{
    // Use the Animal default constructor.
    unique_ptr<Animal> p1 = make_unique<Animal>();

    // Use the constructor that matches these arguments
    auto p2 = make_unique<Animal>(L"Felis", L"Catus", 12, 16.5);

    // Create a unique_ptr to an array of 5 Animals
    unique_ptr<Animal[]> p3 = make_unique<Animal[]>(5);

    // Initialize the elements
    p3[0] = Animal(L"Rattus", L"norvegicus", 3, 2.1);
    p3[1] = Animal(L"Corynorhinus", L"townsendii", 4, 1.08);

    // auto p4 = p2; //C2280

    vector<unique_ptr<Animal>> vec;
    // vec.push_back(p2); //C2280
    // vector<unique_ptr<Animal>> vec2 = vec; // C2280

    // OK. p2 no longer points to anything
    vec.push_back(std::move(p2)); 

    // unique_ptr overloads operator bool
    wcout << boolalpha << (p2 == false) << endl; // Prints "true"

    // OK but now you have two pointers to the same memory location
    Animal* pAnimal = p2.get();

    // OK. p2 no longer points to anything
    Animal* p5 = p2.release();
}
//</snippet214>

int main()
{
    //MakeZebras();
    //CreateSharedPointersGalore();
    //SharedPtrCopy();
    //CompareSharedPointers();
    // SharedPtrCast();
    // Keep the console window open in debug mode.
    try
    {
		MakeUniquePtrArray();
        SongVector();
        //TestPassing();
    }
    catch (std::exception e)
    {
    }
    char buffer[1];
    cin.getline(buffer, 1);
}
