#include<iostream>
#include<csignal>
#include<sys/types.h>
#include<unistd.h>

using namespace std;

bool quittingTime = false;

void sigint(int signal) {
		quittingTime = true;
}

int main(int argc, char *argv[]){
	signal(SIGINT, sigint);
	bool handled = false;
	while(!quittingTime){
		if(argc == 2 && !handled){
		}
		else{
			cout<<"\nTime Waster 3000. PID: " << getpid() <<
			"\n(0) Check Reality with Division"
			"\n(1) Check Reality with Square Roots"
			"\n(2) Allocate and Clean Memory"
			"\n(3) Just Allocate Memory"
			"\n(4) Can I Message Myself?"
			"\n(5) Send Myself a Message"
			"\n(6) Get the Time"
			"\n(7) Nanosleep"
			"\n(8) Microsleep"
			"\n(9) Millisleep"
			"\n(10) Regular 'ol Sleep"
			"\n(11) Birth a Child"
			"\n(12) Where Am I?"
			"\n(13) Change Where I Am"
			"\n(14) Can I Access that?"
			"\n(15) Commit To The Disk"
			"\n(16) Change Permissions"
			"\n(17) Whatever Dup2 Does";
			int response;
			cin >> response;
		}
	}


}
