#include "Leader.h"

static Leader * Leader :: getLeader()
{
	if(_leader == NULL)
	{
		_leader = new Leader;
	}
	return _leader;
}

void Leader :: giveSpeach()
{
	cout<<"Leader about to give a speach"<<endl;
}

Leader * Leader :: _leader = NULL;