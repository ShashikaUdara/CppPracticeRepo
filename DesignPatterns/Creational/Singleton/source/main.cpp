#include <iostream>
#include "Leader.h"

using namespace std;

int main()
{
	cout<<"it's main"<<endl;

	// this doesen't work since the Leader constructor is private
	// Leader * lead = new Leader();
	// lead->giveSpeach();

	Leader :: getLeader()->giveSpeach();
	Leader * elected = elected->getLeader();
	elected->giveSpeach();

	return 0;
}