#include <iostream>
#include <string>
using namespace std;

int main() {
    string choice;
    cout<<"Do u want to continue: yes or no" << endl;
    cin >> choice;
    cin.ignore();
    while(choice=="yes"){

        string sentence, word;
        
        // Input the sentence
        cout << "Enter the sentence: ";
        getline(cin, sentence);
        
        // Input the word to search
        cout << "Enter the word to search: ";
        getline(cin, word);
        
        // Check if the word is present in the sentence using find()
        if (sentence.find(word) != string::npos) {
            cout << "The word '" << word << "' is present in the given sentence." << endl;
        } else {
            cout << "The word '" << word << "' is not present in the given sentence." << endl;
        }

        cout<<"Do u want to continue: yes or no" << endl;
        getline(cin, choice);

    }
    cout<<"Exited successfully";
}
