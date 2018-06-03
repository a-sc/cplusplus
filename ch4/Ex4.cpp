#include <iostream>
using namespace std;
int main(){
	int rice = 1;
	int squares = 1;
	int total_rice = 1;
	bool are_we_done_yet = false;
	bool are_we_at_1000 = false;
	bool are_we_at_1000000 = false;
	bool are_we_at_1000000000 = false;
	while(are_we_done_yet == false){
		rice = rice + rice;
		squares = squares + 1;
		total_rice = total_rice + rice;
		if(total_rice >= 1000 && are_we_at_1000 == false){
			cout<<"You'd need " << squares << " squares to get 1000 grains of rice \n";
			are_we_at_1000 = true;
		}
		if(total_rice >= 1000000 && are_we_at_1000000 == false){
			cout<<"You'd need " << squares << " squares to get 1000000 grains of rice \n";
			are_we_at_1000000 = true;
		}
		if(total_rice >= 1000000000 && are_we_at_1000000000 == false){
			cout<<"You'd need " << squares << " squares to get 1000000000 grains of rice \n";
			are_we_at_1000000000 = true;
			are_we_done_yet = true;
		}

	}
	return 0;
}