#include <iostream>
#include "SST.h"

class pie {

	public:

	int stuff;
	char *foo;
	char *moo;

	pie(char *fooIn) : foo(fooIn) {};
	~pie() {};

};

int main(char *argv, int *argc[]) {

	SST<pie *> SSTObjects(500,false);	

	SSTObjects.add_to_hash(new pie("woogoo"),"woogoo");
	SSTObjects.add_to_hash(new pie("woogo2"),"woogo2");
	SSTObjects.add_to_hash(new pie("woogoo3"),"woogoo3");
	SSTObjects.add_to_hash(new pie("woogoo4"),"woogoo4");
	SSTObjects.add_to_hash(new pie("woogoo5"),"woogoo5");

	SSTObjects.add_to_hash(new pie("84y83rthfun"),"84y83rthfun");

	SSTObjects.add_to_hash(new pie("reegergeg"),"reegerge");	

	SSTObjects.show_tables();

	pie *foopie = SSTObjects.get_object("woogoo");
	std::cout << "PIE SAYS: " << foopie->foo << std::endl;

	bool foo=0; char *moo = "woogoo3";

	foo = SSTObjects.do_exist(moo);

	if(foo) { std::cout << moo << " exists" << std::endl; }
	else { std::cout << moo << " does not exist" << std::endl; }

	SSTObjects.delete_object(moo);
	SSTObjects.delete_object("woogo2");

	SSTObjects.show_tables();

	return 0;
}
