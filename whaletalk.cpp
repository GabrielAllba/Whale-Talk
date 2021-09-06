#include <iostream>
#include <vector>
#include <string>

int main(){
  std::string words = "turpentine and turtles";
  std::vector<char> vowels = {'a','i','u','e',
  'o'};
  std::string result;
  for(int i=0; i < words.size(); i++){
    for(int j=0; j<vowels.size(); j++){
      if(words[i] == vowels[j]){
        result.push_back(words[i]);
        if(words[i] == vowels[j] && (words[i] == 'u' || words[i] == 'e')){
        result.push_back(words[i]);
        }
      }
    }
  }
  std::cout << result << "\n";
}