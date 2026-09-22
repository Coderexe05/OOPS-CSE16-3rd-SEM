// ## Smart Pointer : In c++, allocating memory on the heap with new required due to manually free it using delete, forgetting to do 
// so result in memory leaks while deleting it too early causes dangling pointer. Smart Pointer fix this by utilising a concept
// called RAII(Resource Aquasition is Initialisation) they automatically destroy the allocated object and pre is memory as soon as the Smart Pointer variable
// goes out of the scope.
// Memory Header File is used to access the feature of smart pointer.

// # Unique Pointer : Unique Pointer is a smart pointer introduced in c++ 11, that manages the life time of a dynamically allocated object. It automatically releaf the
//  associated memory when the pointer goes out of the scope helping prevent memory leaks. Manages dynamically allocated objects with exclusive ownership. Manually 
//  allocated eleminate the memory for delete. Available in memory header file.
// -> Syntax: make_unique<datatype>(value);

    #include<iostream>
    #include<memory>
    using namespace std;
    
    int main(){
        unique_ptr<int>p=make_unique<int>10;
        cout<<*p;
        return 0;
    }

// # Shared Pointer : Shared Pointer is a smart pointer, that allows multiple pointers to share ownership of the same object. The object is automatically destroyed when the
// shared pointer owning it is destroyed or reset.
// -> Syntax: shared_ptr<datatype>var = make_shared<datatype>(value)
//                             or 
//             autovar2=make_shared<datatype>(value)

// # Null Pointer : Represents a pointer that does not recalls to any valid memory address. It indicated the pointer is intentionally set to point to nothing  and hold
//  a value null.
//  -> Syntax: int*ptrName = NULL
//                         = nullptr;