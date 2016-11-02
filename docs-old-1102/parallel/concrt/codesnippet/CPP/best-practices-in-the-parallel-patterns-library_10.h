// parallel-resource-destruction.h
#pragma once
#include <ppl.h>
#include <sstream>
#include <iostream>

// Represents a resource.
class Resource
{
public:
   Resource(const std::wstring& name)
      : _name(name)
   {
   }

   // Frees the resource.
   void cleanup()
   {
      // Print a message as a placeholder.
      std::wstringstream ss;
      ss << _name << L": Freeing..." << std::endl;
      std::wcout << ss.str();
   }
private:
   // The name of the resource.
   std::wstring _name;
};

// Represents a container that holds resources.
class Container
{
public:
   Container(const std::wstring& name)
      : _name(name)
      , _resource1(L"Resource 1")
      , _resource2(L"Resource 2")
      , _resource3(L"Resource 3")
   {
   }

   ~Container()
   {
      std::wstringstream ss;
      ss << _name << L": Freeing resources..." << std::endl;
      std::wcout << ss.str();

      // For illustration, assume that cleanup for _resource1
      // and _resource2 can happen concurrently, and that 
      // _resource3 must be freed after _resource1 and _resource2.

      concurrency::parallel_invoke(
         [this]() { _resource1.cleanup(); },
         [this]() { _resource2.cleanup(); }
      );

      _resource3.cleanup();
   }

private:
   // The name of the container.
   std::wstring _name;

   // Resources.
   Resource _resource1;
   Resource _resource2;
   Resource _resource3;
};