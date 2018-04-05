// 2011 Q1 (v2)
#include <iostream>
#include <string>
#include <algorithm>

#define max 5 //can increase to whatever number

using namespace std; 

int frame(string word){
    transform(word.begin(), word.end(), word.begin(), ::toupper); //Change all letters to upper case
    cout << endl << "*" << word << "*" << endl; //first line
    for(int x = 0; x < word.size(); x++){ //middles
        cout << word[word.size() - 1 - x]; //Left side letter
        for(int i = 0; i < word.size(); i++){ //Stars in between
            cout << "*";
        }
        cout << word[x] << endl; //Right side letter
    }
    cout << "*"; //last line
    for (int i = word.size() - 1; i >= 0; i--){
        cout << word[i]; //User's word backwards
    }
    cout << "*" << endl;
}

int main()
{
    //string input, input2; //var to store word into
    string input[max];
    int n, buffer;
    cout << "How many words? (Max of 5): " << endl; //How many words? 
    cin >> n;
    if(n == 1){
        cout << endl << "Enter your word: " << endl;
    }
    if(n > max){
        while(n > max){
        cout << endl << "Cannot go over the maximum of " << max << " words! Try again: " << endl;
        cin >> n;
        }
        cout << endl << "Enter your " << n << " words: " << endl;
    }
    if(n > 1 && n < max){
        cout << endl << "Enter your " << n << " words: " << endl;
    }
    
    while(buffer < n){ 
        cin >> input[buffer]; //put into the array
        buffer++;
    }
    for(int i = 0; i < n; i++){
        frame(input[i]); //call the frame function for each index while i is less than how many words they put in
    }
    return 0;
}


