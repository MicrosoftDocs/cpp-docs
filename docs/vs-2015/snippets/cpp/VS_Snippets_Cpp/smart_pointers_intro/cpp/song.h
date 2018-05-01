#ifndef SMART_POINTERS_H
#define SMART_POINTERS_H
#include <string>
#include <ostream>
#include <iostream>


class SongBase
{
    protected:
     std::wstring id;
     public:
    // SongBase(){}
     SongBase() : id(L"Default"){}
      SongBase(std::wstring init) : id(init) {}
      virtual ~SongBase(){}
};
class Song : public SongBase
{
    public:
    std::wstring title_;
    std::wstring artist_;
    std::wstring duration_;
    std::wstring format_;
    //Song(std::wstring title, std::wstring artist) : title_(title), artist_(artist){}
    Song(std::wstring title, std::wstring artist) : title_(title), artist_(artist){}
    //Song(Song&& other)
    //{
    //    title_ = other.title_;
    //    artist_ = other.artist_;
    //    duration_ = other.duration_;
    //    format_ = other.format_;

    //    /*other.title_ = nullptr;
    //    other.artist_ = nullptr;
    //    other.duration_ = nullptr;
    //    other.format_ = nullptr;*/
    //}
    virtual ~Song() 
    {
        std::wcout << L"Deleting " << title_ << L":" << artist_ << std::endl; 
    }

    Song& operator=(Song&& other)
    {
        if(this != &other)
        {
            this->artist_ = other.artist_;
            this->title_ = other.title_;
            this->duration_ = other.duration_;
            this->format_ = other.format_;

            other.artist_ = nullptr;
            other.title_ = nullptr;
            other.duration_ = nullptr;
            other.format_ = nullptr;            
        }
        return *this;
    }

    bool operator ==(const Song& other)
    {
        return this->artist_.compare(other.artist_) == 0  && 
                this->title_.compare(other.title_) == 0;
    }

   
};
#endif