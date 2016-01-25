/*Create a class called bird that can fly( ) and a class rock

that canÂt. Create a rock object, take its address, and

assign that to a void*. Now take the void*, assign it to a

bird* (youÂll have to use a cast), and call fly( ) through

that pointer. Is it clear why CÂs permission to openly

assign via a void* (without a cast) is a ÂholeÂ in the

language, which couldnÂt be propagated into C++?*/

 

#include <iostream>

 

class bird{

int i;

public:

void fly()

{

printf("\n %s called \n",__func__);

}

};

 

class rock{

public:

};

 

int main()

{

 

rock r1;

void *vptr=&r1;

 

//bird *bptr= dynamic_cast <bird *> vptr; --gives error

//bird *bptr= static_cast <bird *> vptr; --gives error

 

bird *bptr;

//bptr= reinterpret_cast <bird *> (vptr);

bptr= (bird *) vptr;

 

//bptr=  vptr; // error: invalid conversion from #void*# to #bird*#

 

//bird *bptr=(bird *)vptr;

bptr->fly();

}


