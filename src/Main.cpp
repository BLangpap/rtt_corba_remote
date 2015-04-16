#include <iostream>
#include <rtt_corba_remote/Dummy.hpp>

int main(int argc, char** argv)
{
	rtt_corba_remote::DummyClass dummyClass;
	dummyClass.welcome();

	return 0;
}
