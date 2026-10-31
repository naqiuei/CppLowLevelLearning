#include <iostream>
#include <cstddef>


struct firstChar {
    char first;
    int intt;
    char second;
};

struct firstInt {
    int intt;
    char first, second;
};


//Remembering ---
//I used virtual class to remember classes because i took a break.
class virtualfunc{
    public:
    int a,b;
    virtual void tryone () =0;
    virtual ~virtualfunc() {}
    virtualfunc(int a,int b) {std::cout << "Home constructer." << std::endl;}
    virtualfunc(){std::cout << "Def home const."<<std::endl;}
};

class overridenf : virtualfunc {
    public:
    overridenf() : virtualfunc() {std::cout << "overrided const.";}
    void tryone () override {}
};
//Remembering ---- 


//Bonus **
class withVirtual {
    public:
    int a;
    char b;
    virtual void aaaa() {}
};
class withoutVirtual {
    public:
    int a;
    char b;
    void aaaa() {}
};
/*
 Class w virtual function is 16 bytes of size while other one (the one without the virtual function) is size of 8,
 thats because of the vtables (virtual tables). when we make a virtual function all of the inherited elements are going to use
 that function as their own version unlike to the normal class functions,
 because of that each object hides a pointer named vptr, which points to the vtable that keeps the addresses of the functions.
 That pointer takes 8 bytes.
*/
//Bonus **


int main()
{
    firstChar a;
    firstInt b;
    std::cout << "Offset of int for starting int struct : " << offsetof(firstInt,intt) << std::endl;
    std::cout << "Offset of for int starting char struct : " << offsetof(firstChar,intt) << std::endl;
    //understanding padding : So the compiler wants to fill the bytes as they were the biggest elements size's multiples (for example int is 4). The reason is processor, it can read faster w this way. Because of that when its not it just adds some bytes to it to be 4's multiple.
    std::cout << "size of firstInt : " << sizeof(firstInt) << std::endl;
    std::cout << "size of firstChar : " << sizeof(firstChar) << std::endl;
    //yeah int is 4 bytes and char is 1 this part was cake ofc.
    overridenf ab; std::cout << std::endl;
    std::cout << "W virtual function : " << sizeof(withVirtual) << std::endl;
    std::cout << "Wout virtual function : " << sizeof(withoutVirtual) << std::endl;
}





