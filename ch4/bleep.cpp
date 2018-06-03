#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool is_in_list(string word, vector<string> word_list) {
	for(int i=0; i<word_list.size(); i++){
		if(word_list[i]==word) {
			return true;
		}
	}
	return false;
}

int main(){
	vector <string> disliked;
	vector<string> words;
	string current_word;

	disliked.push_back("tomato");
	disliked.push_back("thing");
	disliked.push_back("bla");
	while(cin>> current_word)
	  if(! is_in_list(current_word, disliked)){
	  		  words.push_back(current_word);
	  }
	  else {
	  	words.push_back("bleep");
	  } 
	for (int i=0; i<words.size(); i++)
	cout<< words[i] << endl;
}